#
# Copyright (c) The acados authors.
#
# This file is part of acados.
#
# The 2-Clause BSD License
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
# this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation
# and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.;
#

from acados_template import AcadosOcp, AcadosOcpSolver
from pendulum_model import export_pendulum_ode_model
import numpy as np
from utils import plot_pendulum
from diff_utils import plot_timings,get_results_filename, store_results, load_results
import matplotlib.pyplot as plt
            
def timing_plot_total(n_executions):
    name_array=["PARTIAL_CONDENSING_HPIPM","FULL_CONDENSING_QPOASES","FULL_CONDENSING_HPIPM"]
    results=[]
    for solver in name_array:
        results.append(load_results(get_results_filename(solver, n_executions)))
    
    combined_dict = {}
    print("results",results)
    for d in results:
        for key, value in d.items():
            if key not in combined_dict:
                combined_dict[key] = value
            else:
                combined_dict[key].extend(value)
    print("combined dict",combined_dict)
    width = 0.1
    
    fig, ax = plt.subplots()
    bottom = np.zeros(3)
    a=0

    for i, (boolean, weight_count) in enumerate(combined_dict.items()):
        weight_count=np.array(weight_count)
        print("loop",weight_count,i)
        if i==0:
            p1 = plt.bar(name_array,(weight_count), width,label=boolean,bottom=bottom )
            bottom = weight_count
            print("in loop")
            print(np.abs(weight_count))
            a=weight_count
        else:
            if(i==1):
                p2 = plt.bar(name_array,np.abs(weight_count), width,label=boolean,bottom=np.abs(a))
                bottom_new = weight_count+a
            
            else:
                p3 = plt.bar(name_array,weight_count-bottom_new, width,label=boolean,bottom=bottom_new)
                print("weight_count",weight_count,a)

    ax.set_title(f"Time taken for each solver (runs: {n_executions})")
    plt.xticks(rotation=45, ha="right")
    ax.legend()
    plt.show()


def run_simulations (n_runs,solver,show):
    # create ocp object to formulate the OCP
    ocp = AcadosOcp()

    # set model
    model = export_pendulum_ode_model()
    ocp.model = model

    Tf = 1.0
    nx = model.x.size()[0]
    nu = model.u.size()[0]
    N = 20

    # set dimensions
    ocp.dims.N = N

    # set cost
    Q_mat = 2*np.diag([1e3, 1e3, 1e-2, 1e-2])
    R_mat = 2*np.diag([1e-2])

    # the 'EXTERNAL' cost type can be used to define general cost terms
    # NOTE: This leads to additional (exact) hessian contributions when using GAUSS_NEWTON hessian.
    ocp.cost.cost_type = 'EXTERNAL'
    ocp.cost.cost_type_e = 'EXTERNAL'
    ocp.model.cost_expr_ext_cost = model.x.T @ Q_mat @ model.x + model.u.T @ R_mat @ model.u
    ocp.model.cost_expr_ext_cost_e = model.x.T @ Q_mat @ model.x

    # set constraints
    Fmax = 80
    ocp.constraints.lbu = np.array([-Fmax])
    ocp.constraints.ubu = np.array([+Fmax])
    ocp.constraints.idxbu = np.array([0])



    ocp.constraints.x0 = np.array([0.0, np.pi, 0.0, 0.0])
    time_data = {"time_qp": [], "time_lin": [], "(time_tot-(time_lin+time_qp))": []}

    print("solver value")
    print(solver)
    # set options
    ocp.solver_options.qp_solver = solver
    ocp.solver_options.hessian_approx = 'GAUSS_NEWTON' # 'GAUSS_NEWTON', 'EXACT'
    ocp.solver_options.integrator_type = 'IRK'
    # ocp.solver_options.print_level = 1
    ocp.solver_options.nlp_solver_type = 'SQP' # SQP_RTI, SQP
    # set prediction horizon
    ocp.solver_options.tf = Tf
    ocp_solver = AcadosOcpSolver(ocp, json_file = 'acados_ocp.json')
    simX = np.ndarray((N+1, nx))
    simU = np.ndarray((N, nu))
    time_tot_min=0
    time_lin_min=0
    time_qp_min=0

    for x in range(n_runs):
        ocp_solver.reset()
        status = ocp_solver.solve()
        ocp_solver.print_statistics() # encapsulates: stat = ocp_solver.get_stats("statistics")
        time_tot = ocp_solver.get_stats("time_tot")
        time_lin = ocp_solver.get_stats("time_lin")
        time_sim = ocp_solver.get_stats("time_sim")
        time_qp = ocp_solver.get_stats("time_qp")

        if status != 0:
            raise Exception(f'acados returned status {status}.')

        # get solution
        for i in range(N):
            simX[i,:] = ocp_solver.get(i, "x")
            simU[i,:] = ocp_solver.get(i, "u")
        simX[N,:] = ocp_solver.get(N, "x")

        if show:
            plot_pendulum(np.linspace(0, Tf, N+1), Fmax, simU, simX, latexify=False)
        #time in ms
        if x==1:
            time_tot_min=time_tot*1e3
            time_lin_min=time_lin*1e3
            time_qp_min=time_qp*1e3
        else:
            if (time_tot_min>time_tot):
                time_tot_min=time_tot*1e3
                time_lin_min=time_lin*1e3
                time_qp_min=time_qp*1e3

    time_data["time_qp"].append(time_qp_min)
    time_data["time_lin"].append(time_lin_min)
    time_data["(time_tot-(time_lin+time_qp))"].append(time_tot_min)
    results_filename = get_results_filename(solver,n_runs)
    store_results(results_filename, time_data)
    

if __name__ == '__main__':
    n_runs=2
    name_array=["PARTIAL_CONDENSING_HPIPM","FULL_CONDENSING_QPOASES","FULL_CONDENSING_HPIPM"]
    # create ocp object to formulate the OCP
    for solver in name_array:
        run_simulations (n_runs,solver,False)
    timing_plot_total(n_runs)
