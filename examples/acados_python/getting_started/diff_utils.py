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

import numpy as np
import matplotlib.pyplot as plt
import os
import pickle
from acados_template import latexify_plot

latexify_plot()

# RESULTS_DIR = 'results'

def get_results_filename(solver_name: str, n_executions: int):
    results_filename = 'timing_'
    results_filename +=solver_name
    results_filename += f'_exec_{n_executions}'
    results_filename += '.pkl'
    return results_filename

def store_results(results_filename, results):
    pickle.dump(results, open(results_filename, "wb"))


def load_results(results_filename):
    with open(results_filename, 'rb') as f:
        results = pickle.load(f)
    return results


def plot_timings(timing_dict, use_custom_update: bool):

    print("timings\t\tmin\tmean\tmax\n--------------------------------")
    for k, v in timing_dict.items():
        print(f"& {k:10} & {np.min(v):.3f} & {np.mean(v):.3f} & {np.max(v):.3f} \\\\")

    medianprops = dict(linestyle='-', linewidth=2.5, color='darkgreen')
    # green_square = dict(markerfacecolor='palegreen', marker='D')

    # remove keys not to plot:
    del timing_dict['integrator']
    del timing_dict['QP']

    # plot
    fig = plt.figure(figsize=(6.0, 2.1))
    ax = fig.add_subplot(111)
    ax.boxplot(timing_dict.values(), vert=False,
            #    flierprops=green_square,
               medianprops=medianprops, showmeans=False,
               whis=[0.0, 100.],
               )
    ax.set_yticklabels(timing_dict.keys())
    plt.grid()
    plt.xlabel("computation time [ms]")
    plt.tight_layout()
    max_time = max([np.max(t) for t in timing_dict.values()])
    ax.set_xlim([0, 1.05*max_time])

    if not os.path.exists("figures"):
        os.makedirs("figures")
    fig_filename = os.path.join("figures", f"timings_diff_drive_{'fast' if use_custom_update else 'slow'}.pdf")
    plt.savefig(fig_filename, bbox_inches='tight', transparent=True, pad_inches=0.05)
    print(f"stored figure in {fig_filename}")

    plt.show()


def plot_timing_comparison(timings_list, label_list):
    fig = plt.figure(figsize=(6.0, 1.8))
    ax = fig.add_subplot(111)
    colors = ['C0', 'C1']
    n_variants = len(timings_list)
    bp = n_variants*[None]

    for i in range(n_variants):
        bp[i] = ax.boxplot(
            [timings_list[i]['total'], timings_list[i]['propagation']],
                vert=False, patch_artist=True, whis=[0.0, 100.],
                boxprops={"facecolor": colors[i]},
                showmeans=False,
                medianprops = dict(linestyle='-', linewidth=2.5, color=colors[i])
                )

    ax.set_yticks([1, 2])
    ax.set_yticklabels(['total', 'propagation'])
    ax.legend([bp[i]["boxes"][0] for i in range(n_variants)], label_list) #, loc='center')
    ax.set_xscale('log')

    plt.xlabel("computation time [ms]")
    plt.tight_layout()
    plt.grid()

    if not os.path.exists("figures"):
        os.makedirs("figures")
    fig_filename = os.path.join("figures", "timings_diff_drive_compare.pdf")
    plt.savefig(fig_filename, bbox_inches='tight', transparent=True, pad_inches=0.05)
    print(f"stored figure in {fig_filename}")

    plt.show()


