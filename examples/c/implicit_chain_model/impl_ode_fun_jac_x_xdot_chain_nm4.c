/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) impl_ode_fun_jac_x_xdot_chain_nm4_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[22] = {18, 1, 0, 18, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[706] = {18, 37, 0, 18, 36, 54, 72, 90, 108, 126, 144, 162, 180, 198, 216, 234, 252, 270, 288, 306, 324, 342, 360, 378, 396, 414, 432, 450, 468, 486, 504, 522, 540, 558, 576, 594, 612, 630, 648, 666, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* casadi_impl_ode_fun_jac_x_xdot_chain_nm4:(i0[18],i1[18],i2[3])->(o0[18x37]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[1] ? arg[1][0] : 0;
  a1=arg[0] ? arg[0][3] : 0;
  a0=(a0-a1);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[1] ? arg[1][1] : 0;
  a1=arg[0] ? arg[0][4] : 0;
  a0=(a0-a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[1] ? arg[1][2] : 0;
  a1=arg[0] ? arg[0][5] : 0;
  a0=(a0-a1);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[1] ? arg[1][3] : 0;
  a1=3.3333333333333336e+01;
  a2=1.;
  a3=3.3000000000000002e-02;
  a4=arg[0] ? arg[0][6] : 0;
  a5=arg[0] ? arg[0][0] : 0;
  a6=(a4-a5);
  a7=casadi_sq(a6);
  a8=arg[0] ? arg[0][7] : 0;
  a9=arg[0] ? arg[0][1] : 0;
  a10=(a8-a9);
  a11=casadi_sq(a10);
  a7=(a7+a11);
  a11=arg[0] ? arg[0][8] : 0;
  a12=arg[0] ? arg[0][2] : 0;
  a13=(a11-a12);
  a14=casadi_sq(a13);
  a7=(a7+a14);
  a7=sqrt(a7);
  a14=(a3/a7);
  a15=(a2-a14);
  a16=(a15*a6);
  a17=casadi_sq(a5);
  a18=casadi_sq(a9);
  a17=(a17+a18);
  a18=casadi_sq(a12);
  a17=(a17+a18);
  a17=sqrt(a17);
  a18=(a3/a17);
  a19=(a2-a18);
  a20=(a19*a5);
  a20=(a16-a20);
  a20=(a1*a20);
  a0=(a0-a20);
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[1] ? arg[1][4] : 0;
  a20=(a15*a10);
  a21=(a19*a9);
  a21=(a20-a21);
  a21=(a1*a21);
  a0=(a0-a21);
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[1] ? arg[1][5] : 0;
  a21=(a15*a13);
  a22=(a19*a12);
  a22=(a21-a22);
  a22=(a1*a22);
  a23=9.8100000000000005e+00;
  a22=(a22-a23);
  a0=(a0-a22);
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[1] ? arg[1][6] : 0;
  a22=arg[0] ? arg[0][9] : 0;
  a0=(a0-a22);
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[1] ? arg[1][7] : 0;
  a22=arg[0] ? arg[0][10] : 0;
  a0=(a0-a22);
  if (res[0]!=0) res[0][7]=a0;
  a0=arg[1] ? arg[1][8] : 0;
  a22=arg[0] ? arg[0][11] : 0;
  a0=(a0-a22);
  if (res[0]!=0) res[0][8]=a0;
  a0=arg[1] ? arg[1][9] : 0;
  a22=arg[0] ? arg[0][12] : 0;
  a22=(a22-a4);
  a4=casadi_sq(a22);
  a24=arg[0] ? arg[0][13] : 0;
  a24=(a24-a8);
  a8=casadi_sq(a24);
  a4=(a4+a8);
  a8=arg[0] ? arg[0][14] : 0;
  a8=(a8-a11);
  a11=casadi_sq(a8);
  a4=(a4+a11);
  a4=sqrt(a4);
  a3=(a3/a4);
  a11=(a2-a3);
  a25=(a11*a22);
  a25=(a25-a16);
  a25=(a1*a25);
  a0=(a0-a25);
  if (res[0]!=0) res[0][9]=a0;
  a0=arg[1] ? arg[1][10] : 0;
  a25=(a11*a24);
  a25=(a25-a20);
  a25=(a1*a25);
  a0=(a0-a25);
  if (res[0]!=0) res[0][10]=a0;
  a0=arg[1] ? arg[1][11] : 0;
  a25=(a11*a8);
  a25=(a25-a21);
  a25=(a1*a25);
  a25=(a25-a23);
  a0=(a0-a25);
  if (res[0]!=0) res[0][11]=a0;
  a0=arg[1] ? arg[1][12] : 0;
  a25=arg[0] ? arg[0][15] : 0;
  a0=(a0-a25);
  if (res[0]!=0) res[0][12]=a0;
  a0=arg[1] ? arg[1][13] : 0;
  a25=arg[0] ? arg[0][16] : 0;
  a0=(a0-a25);
  if (res[0]!=0) res[0][13]=a0;
  a0=arg[1] ? arg[1][14] : 0;
  a25=arg[0] ? arg[0][17] : 0;
  a0=(a0-a25);
  if (res[0]!=0) res[0][14]=a0;
  a0=arg[1] ? arg[1][15] : 0;
  a25=arg[2] ? arg[2][0] : 0;
  a0=(a0-a25);
  if (res[0]!=0) res[0][15]=a0;
  a0=arg[1] ? arg[1][16] : 0;
  a25=arg[2] ? arg[2][1] : 0;
  a0=(a0-a25);
  if (res[0]!=0) res[0][16]=a0;
  a0=arg[1] ? arg[1][17] : 0;
  a25=arg[2] ? arg[2][2] : 0;
  a0=(a0-a25);
  if (res[0]!=0) res[0][17]=a0;
  a0=0.;
  if (res[0]!=0) res[0][18]=a0;
  if (res[0]!=0) res[0][19]=a0;
  if (res[0]!=0) res[0][20]=a0;
  a14=(a14/a7);
  a25=(a6/a7);
  a25=(a14*a25);
  a23=(a6*a25);
  a23=(a23+a15);
  a18=(a18/a17);
  a21=(a5/a17);
  a21=(a18*a21);
  a20=(a5*a21);
  a20=(a20+a19);
  a20=(a23+a20);
  a20=(a1*a20);
  if (res[0]!=0) res[0][21]=a20;
  a20=(a10*a25);
  a16=(a9*a21);
  a16=(a20+a16);
  a16=(a1*a16);
  if (res[0]!=0) res[0][22]=a16;
  a25=(a13*a25);
  a21=(a12*a21);
  a21=(a25+a21);
  a21=(a1*a21);
  if (res[0]!=0) res[0][23]=a21;
  if (res[0]!=0) res[0][24]=a0;
  if (res[0]!=0) res[0][25]=a0;
  if (res[0]!=0) res[0][26]=a0;
  a23=(a1*a23);
  a23=(-a23);
  if (res[0]!=0) res[0][27]=a23;
  a20=(a1*a20);
  a20=(-a20);
  if (res[0]!=0) res[0][28]=a20;
  a25=(a1*a25);
  a25=(-a25);
  if (res[0]!=0) res[0][29]=a25;
  if (res[0]!=0) res[0][30]=a0;
  if (res[0]!=0) res[0][31]=a0;
  if (res[0]!=0) res[0][32]=a0;
  if (res[0]!=0) res[0][33]=a0;
  if (res[0]!=0) res[0][34]=a0;
  if (res[0]!=0) res[0][35]=a0;
  if (res[0]!=0) res[0][36]=a0;
  if (res[0]!=0) res[0][37]=a0;
  if (res[0]!=0) res[0][38]=a0;
  a25=(a10/a7);
  a25=(a14*a25);
  a20=(a6*a25);
  a23=(a9/a17);
  a23=(a18*a23);
  a21=(a5*a23);
  a21=(a20+a21);
  a21=(a1*a21);
  if (res[0]!=0) res[0][39]=a21;
  a21=(a10*a25);
  a21=(a21+a15);
  a16=(a9*a23);
  a16=(a16+a19);
  a16=(a21+a16);
  a16=(a1*a16);
  if (res[0]!=0) res[0][40]=a16;
  a25=(a13*a25);
  a23=(a12*a23);
  a23=(a25+a23);
  a23=(a1*a23);
  if (res[0]!=0) res[0][41]=a23;
  if (res[0]!=0) res[0][42]=a0;
  if (res[0]!=0) res[0][43]=a0;
  if (res[0]!=0) res[0][44]=a0;
  a20=(a1*a20);
  a20=(-a20);
  if (res[0]!=0) res[0][45]=a20;
  a21=(a1*a21);
  a21=(-a21);
  if (res[0]!=0) res[0][46]=a21;
  a25=(a1*a25);
  a25=(-a25);
  if (res[0]!=0) res[0][47]=a25;
  if (res[0]!=0) res[0][48]=a0;
  if (res[0]!=0) res[0][49]=a0;
  if (res[0]!=0) res[0][50]=a0;
  if (res[0]!=0) res[0][51]=a0;
  if (res[0]!=0) res[0][52]=a0;
  if (res[0]!=0) res[0][53]=a0;
  if (res[0]!=0) res[0][54]=a0;
  if (res[0]!=0) res[0][55]=a0;
  if (res[0]!=0) res[0][56]=a0;
  a25=(a13/a7);
  a25=(a14*a25);
  a21=(a6*a25);
  a17=(a12/a17);
  a18=(a18*a17);
  a5=(a5*a18);
  a5=(a21+a5);
  a5=(a1*a5);
  if (res[0]!=0) res[0][57]=a5;
  a5=(a10*a25);
  a9=(a9*a18);
  a9=(a5+a9);
  a9=(a1*a9);
  if (res[0]!=0) res[0][58]=a9;
  a25=(a13*a25);
  a25=(a25+a15);
  a12=(a12*a18);
  a12=(a12+a19);
  a12=(a25+a12);
  a12=(a1*a12);
  if (res[0]!=0) res[0][59]=a12;
  if (res[0]!=0) res[0][60]=a0;
  if (res[0]!=0) res[0][61]=a0;
  if (res[0]!=0) res[0][62]=a0;
  a21=(a1*a21);
  a21=(-a21);
  if (res[0]!=0) res[0][63]=a21;
  a5=(a1*a5);
  a5=(-a5);
  if (res[0]!=0) res[0][64]=a5;
  a25=(a1*a25);
  a25=(-a25);
  if (res[0]!=0) res[0][65]=a25;
  if (res[0]!=0) res[0][66]=a0;
  if (res[0]!=0) res[0][67]=a0;
  if (res[0]!=0) res[0][68]=a0;
  if (res[0]!=0) res[0][69]=a0;
  if (res[0]!=0) res[0][70]=a0;
  if (res[0]!=0) res[0][71]=a0;
  a25=-1.;
  if (res[0]!=0) res[0][72]=a25;
  if (res[0]!=0) res[0][73]=a0;
  if (res[0]!=0) res[0][74]=a0;
  if (res[0]!=0) res[0][75]=a0;
  if (res[0]!=0) res[0][76]=a0;
  if (res[0]!=0) res[0][77]=a0;
  if (res[0]!=0) res[0][78]=a0;
  if (res[0]!=0) res[0][79]=a0;
  if (res[0]!=0) res[0][80]=a0;
  if (res[0]!=0) res[0][81]=a0;
  if (res[0]!=0) res[0][82]=a0;
  if (res[0]!=0) res[0][83]=a0;
  if (res[0]!=0) res[0][84]=a0;
  if (res[0]!=0) res[0][85]=a0;
  if (res[0]!=0) res[0][86]=a0;
  if (res[0]!=0) res[0][87]=a0;
  if (res[0]!=0) res[0][88]=a0;
  if (res[0]!=0) res[0][89]=a0;
  if (res[0]!=0) res[0][90]=a0;
  if (res[0]!=0) res[0][91]=a25;
  if (res[0]!=0) res[0][92]=a0;
  if (res[0]!=0) res[0][93]=a0;
  if (res[0]!=0) res[0][94]=a0;
  if (res[0]!=0) res[0][95]=a0;
  if (res[0]!=0) res[0][96]=a0;
  if (res[0]!=0) res[0][97]=a0;
  if (res[0]!=0) res[0][98]=a0;
  if (res[0]!=0) res[0][99]=a0;
  if (res[0]!=0) res[0][100]=a0;
  if (res[0]!=0) res[0][101]=a0;
  if (res[0]!=0) res[0][102]=a0;
  if (res[0]!=0) res[0][103]=a0;
  if (res[0]!=0) res[0][104]=a0;
  if (res[0]!=0) res[0][105]=a0;
  if (res[0]!=0) res[0][106]=a0;
  if (res[0]!=0) res[0][107]=a0;
  if (res[0]!=0) res[0][108]=a0;
  if (res[0]!=0) res[0][109]=a0;
  if (res[0]!=0) res[0][110]=a25;
  if (res[0]!=0) res[0][111]=a0;
  if (res[0]!=0) res[0][112]=a0;
  if (res[0]!=0) res[0][113]=a0;
  if (res[0]!=0) res[0][114]=a0;
  if (res[0]!=0) res[0][115]=a0;
  if (res[0]!=0) res[0][116]=a0;
  if (res[0]!=0) res[0][117]=a0;
  if (res[0]!=0) res[0][118]=a0;
  if (res[0]!=0) res[0][119]=a0;
  if (res[0]!=0) res[0][120]=a0;
  if (res[0]!=0) res[0][121]=a0;
  if (res[0]!=0) res[0][122]=a0;
  if (res[0]!=0) res[0][123]=a0;
  if (res[0]!=0) res[0][124]=a0;
  if (res[0]!=0) res[0][125]=a0;
  if (res[0]!=0) res[0][126]=a0;
  if (res[0]!=0) res[0][127]=a0;
  if (res[0]!=0) res[0][128]=a0;
  a5=(a6/a7);
  a5=(a14*a5);
  a21=(a6*a5);
  a21=(a21+a15);
  a12=(a1*a21);
  a12=(-a12);
  if (res[0]!=0) res[0][129]=a12;
  a12=(a10*a5);
  a19=(a1*a12);
  a19=(-a19);
  if (res[0]!=0) res[0][130]=a19;
  a5=(a13*a5);
  a19=(a1*a5);
  a19=(-a19);
  if (res[0]!=0) res[0][131]=a19;
  if (res[0]!=0) res[0][132]=a0;
  if (res[0]!=0) res[0][133]=a0;
  if (res[0]!=0) res[0][134]=a0;
  a3=(a3/a4);
  a19=(a22/a4);
  a19=(a3*a19);
  a18=(a22*a19);
  a18=(a18+a11);
  a18=(a18+a21);
  a18=(a1*a18);
  if (res[0]!=0) res[0][135]=a18;
  a18=(a24*a19);
  a18=(a18+a12);
  a18=(a1*a18);
  if (res[0]!=0) res[0][136]=a18;
  a19=(a8*a19);
  a19=(a19+a5);
  a19=(a1*a19);
  if (res[0]!=0) res[0][137]=a19;
  if (res[0]!=0) res[0][138]=a0;
  if (res[0]!=0) res[0][139]=a0;
  if (res[0]!=0) res[0][140]=a0;
  if (res[0]!=0) res[0][141]=a0;
  if (res[0]!=0) res[0][142]=a0;
  if (res[0]!=0) res[0][143]=a0;
  if (res[0]!=0) res[0][144]=a0;
  if (res[0]!=0) res[0][145]=a0;
  if (res[0]!=0) res[0][146]=a0;
  a19=(a10/a7);
  a19=(a14*a19);
  a5=(a6*a19);
  a18=(a1*a5);
  a18=(-a18);
  if (res[0]!=0) res[0][147]=a18;
  a18=(a10*a19);
  a18=(a18+a15);
  a12=(a1*a18);
  a12=(-a12);
  if (res[0]!=0) res[0][148]=a12;
  a19=(a13*a19);
  a12=(a1*a19);
  a12=(-a12);
  if (res[0]!=0) res[0][149]=a12;
  if (res[0]!=0) res[0][150]=a0;
  if (res[0]!=0) res[0][151]=a0;
  if (res[0]!=0) res[0][152]=a0;
  a12=(a24/a4);
  a12=(a3*a12);
  a21=(a22*a12);
  a21=(a21+a5);
  a21=(a1*a21);
  if (res[0]!=0) res[0][153]=a21;
  a21=(a24*a12);
  a21=(a21+a11);
  a21=(a21+a18);
  a21=(a1*a21);
  if (res[0]!=0) res[0][154]=a21;
  a12=(a8*a12);
  a12=(a12+a19);
  a12=(a1*a12);
  if (res[0]!=0) res[0][155]=a12;
  if (res[0]!=0) res[0][156]=a0;
  if (res[0]!=0) res[0][157]=a0;
  if (res[0]!=0) res[0][158]=a0;
  if (res[0]!=0) res[0][159]=a0;
  if (res[0]!=0) res[0][160]=a0;
  if (res[0]!=0) res[0][161]=a0;
  if (res[0]!=0) res[0][162]=a0;
  if (res[0]!=0) res[0][163]=a0;
  if (res[0]!=0) res[0][164]=a0;
  a7=(a13/a7);
  a14=(a14*a7);
  a6=(a6*a14);
  a7=(a1*a6);
  a7=(-a7);
  if (res[0]!=0) res[0][165]=a7;
  a10=(a10*a14);
  a7=(a1*a10);
  a7=(-a7);
  if (res[0]!=0) res[0][166]=a7;
  a13=(a13*a14);
  a13=(a13+a15);
  a15=(a1*a13);
  a15=(-a15);
  if (res[0]!=0) res[0][167]=a15;
  if (res[0]!=0) res[0][168]=a0;
  if (res[0]!=0) res[0][169]=a0;
  if (res[0]!=0) res[0][170]=a0;
  a15=(a8/a4);
  a15=(a3*a15);
  a14=(a22*a15);
  a14=(a14+a6);
  a14=(a1*a14);
  if (res[0]!=0) res[0][171]=a14;
  a14=(a24*a15);
  a14=(a14+a10);
  a14=(a1*a14);
  if (res[0]!=0) res[0][172]=a14;
  a15=(a8*a15);
  a15=(a15+a11);
  a15=(a15+a13);
  a15=(a1*a15);
  if (res[0]!=0) res[0][173]=a15;
  if (res[0]!=0) res[0][174]=a0;
  if (res[0]!=0) res[0][175]=a0;
  if (res[0]!=0) res[0][176]=a0;
  if (res[0]!=0) res[0][177]=a0;
  if (res[0]!=0) res[0][178]=a0;
  if (res[0]!=0) res[0][179]=a0;
  if (res[0]!=0) res[0][180]=a0;
  if (res[0]!=0) res[0][181]=a0;
  if (res[0]!=0) res[0][182]=a0;
  if (res[0]!=0) res[0][183]=a0;
  if (res[0]!=0) res[0][184]=a0;
  if (res[0]!=0) res[0][185]=a0;
  if (res[0]!=0) res[0][186]=a25;
  if (res[0]!=0) res[0][187]=a0;
  if (res[0]!=0) res[0][188]=a0;
  if (res[0]!=0) res[0][189]=a0;
  if (res[0]!=0) res[0][190]=a0;
  if (res[0]!=0) res[0][191]=a0;
  if (res[0]!=0) res[0][192]=a0;
  if (res[0]!=0) res[0][193]=a0;
  if (res[0]!=0) res[0][194]=a0;
  if (res[0]!=0) res[0][195]=a0;
  if (res[0]!=0) res[0][196]=a0;
  if (res[0]!=0) res[0][197]=a0;
  if (res[0]!=0) res[0][198]=a0;
  if (res[0]!=0) res[0][199]=a0;
  if (res[0]!=0) res[0][200]=a0;
  if (res[0]!=0) res[0][201]=a0;
  if (res[0]!=0) res[0][202]=a0;
  if (res[0]!=0) res[0][203]=a0;
  if (res[0]!=0) res[0][204]=a0;
  if (res[0]!=0) res[0][205]=a25;
  if (res[0]!=0) res[0][206]=a0;
  if (res[0]!=0) res[0][207]=a0;
  if (res[0]!=0) res[0][208]=a0;
  if (res[0]!=0) res[0][209]=a0;
  if (res[0]!=0) res[0][210]=a0;
  if (res[0]!=0) res[0][211]=a0;
  if (res[0]!=0) res[0][212]=a0;
  if (res[0]!=0) res[0][213]=a0;
  if (res[0]!=0) res[0][214]=a0;
  if (res[0]!=0) res[0][215]=a0;
  if (res[0]!=0) res[0][216]=a0;
  if (res[0]!=0) res[0][217]=a0;
  if (res[0]!=0) res[0][218]=a0;
  if (res[0]!=0) res[0][219]=a0;
  if (res[0]!=0) res[0][220]=a0;
  if (res[0]!=0) res[0][221]=a0;
  if (res[0]!=0) res[0][222]=a0;
  if (res[0]!=0) res[0][223]=a0;
  if (res[0]!=0) res[0][224]=a25;
  if (res[0]!=0) res[0][225]=a0;
  if (res[0]!=0) res[0][226]=a0;
  if (res[0]!=0) res[0][227]=a0;
  if (res[0]!=0) res[0][228]=a0;
  if (res[0]!=0) res[0][229]=a0;
  if (res[0]!=0) res[0][230]=a0;
  if (res[0]!=0) res[0][231]=a0;
  if (res[0]!=0) res[0][232]=a0;
  if (res[0]!=0) res[0][233]=a0;
  if (res[0]!=0) res[0][234]=a0;
  if (res[0]!=0) res[0][235]=a0;
  if (res[0]!=0) res[0][236]=a0;
  if (res[0]!=0) res[0][237]=a0;
  if (res[0]!=0) res[0][238]=a0;
  if (res[0]!=0) res[0][239]=a0;
  if (res[0]!=0) res[0][240]=a0;
  if (res[0]!=0) res[0][241]=a0;
  if (res[0]!=0) res[0][242]=a0;
  a15=(a22/a4);
  a15=(a3*a15);
  a13=(a22*a15);
  a13=(a13+a11);
  a13=(a1*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][243]=a13;
  a13=(a24*a15);
  a13=(a1*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][244]=a13;
  a15=(a8*a15);
  a15=(a1*a15);
  a15=(-a15);
  if (res[0]!=0) res[0][245]=a15;
  if (res[0]!=0) res[0][246]=a0;
  if (res[0]!=0) res[0][247]=a0;
  if (res[0]!=0) res[0][248]=a0;
  if (res[0]!=0) res[0][249]=a0;
  if (res[0]!=0) res[0][250]=a0;
  if (res[0]!=0) res[0][251]=a0;
  if (res[0]!=0) res[0][252]=a0;
  if (res[0]!=0) res[0][253]=a0;
  if (res[0]!=0) res[0][254]=a0;
  if (res[0]!=0) res[0][255]=a0;
  if (res[0]!=0) res[0][256]=a0;
  if (res[0]!=0) res[0][257]=a0;
  if (res[0]!=0) res[0][258]=a0;
  if (res[0]!=0) res[0][259]=a0;
  if (res[0]!=0) res[0][260]=a0;
  a15=(a24/a4);
  a15=(a3*a15);
  a13=(a22*a15);
  a13=(a1*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][261]=a13;
  a13=(a24*a15);
  a13=(a13+a11);
  a13=(a1*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][262]=a13;
  a15=(a8*a15);
  a15=(a1*a15);
  a15=(-a15);
  if (res[0]!=0) res[0][263]=a15;
  if (res[0]!=0) res[0][264]=a0;
  if (res[0]!=0) res[0][265]=a0;
  if (res[0]!=0) res[0][266]=a0;
  if (res[0]!=0) res[0][267]=a0;
  if (res[0]!=0) res[0][268]=a0;
  if (res[0]!=0) res[0][269]=a0;
  if (res[0]!=0) res[0][270]=a0;
  if (res[0]!=0) res[0][271]=a0;
  if (res[0]!=0) res[0][272]=a0;
  if (res[0]!=0) res[0][273]=a0;
  if (res[0]!=0) res[0][274]=a0;
  if (res[0]!=0) res[0][275]=a0;
  if (res[0]!=0) res[0][276]=a0;
  if (res[0]!=0) res[0][277]=a0;
  if (res[0]!=0) res[0][278]=a0;
  a4=(a8/a4);
  a3=(a3*a4);
  a22=(a22*a3);
  a22=(a1*a22);
  a22=(-a22);
  if (res[0]!=0) res[0][279]=a22;
  a24=(a24*a3);
  a24=(a1*a24);
  a24=(-a24);
  if (res[0]!=0) res[0][280]=a24;
  a8=(a8*a3);
  a8=(a8+a11);
  a1=(a1*a8);
  a1=(-a1);
  if (res[0]!=0) res[0][281]=a1;
  if (res[0]!=0) res[0][282]=a0;
  if (res[0]!=0) res[0][283]=a0;
  if (res[0]!=0) res[0][284]=a0;
  if (res[0]!=0) res[0][285]=a0;
  if (res[0]!=0) res[0][286]=a0;
  if (res[0]!=0) res[0][287]=a0;
  if (res[0]!=0) res[0][288]=a0;
  if (res[0]!=0) res[0][289]=a0;
  if (res[0]!=0) res[0][290]=a0;
  if (res[0]!=0) res[0][291]=a0;
  if (res[0]!=0) res[0][292]=a0;
  if (res[0]!=0) res[0][293]=a0;
  if (res[0]!=0) res[0][294]=a0;
  if (res[0]!=0) res[0][295]=a0;
  if (res[0]!=0) res[0][296]=a0;
  if (res[0]!=0) res[0][297]=a0;
  if (res[0]!=0) res[0][298]=a0;
  if (res[0]!=0) res[0][299]=a0;
  if (res[0]!=0) res[0][300]=a25;
  if (res[0]!=0) res[0][301]=a0;
  if (res[0]!=0) res[0][302]=a0;
  if (res[0]!=0) res[0][303]=a0;
  if (res[0]!=0) res[0][304]=a0;
  if (res[0]!=0) res[0][305]=a0;
  if (res[0]!=0) res[0][306]=a0;
  if (res[0]!=0) res[0][307]=a0;
  if (res[0]!=0) res[0][308]=a0;
  if (res[0]!=0) res[0][309]=a0;
  if (res[0]!=0) res[0][310]=a0;
  if (res[0]!=0) res[0][311]=a0;
  if (res[0]!=0) res[0][312]=a0;
  if (res[0]!=0) res[0][313]=a0;
  if (res[0]!=0) res[0][314]=a0;
  if (res[0]!=0) res[0][315]=a0;
  if (res[0]!=0) res[0][316]=a0;
  if (res[0]!=0) res[0][317]=a0;
  if (res[0]!=0) res[0][318]=a0;
  if (res[0]!=0) res[0][319]=a25;
  if (res[0]!=0) res[0][320]=a0;
  if (res[0]!=0) res[0][321]=a0;
  if (res[0]!=0) res[0][322]=a0;
  if (res[0]!=0) res[0][323]=a0;
  if (res[0]!=0) res[0][324]=a0;
  if (res[0]!=0) res[0][325]=a0;
  if (res[0]!=0) res[0][326]=a0;
  if (res[0]!=0) res[0][327]=a0;
  if (res[0]!=0) res[0][328]=a0;
  if (res[0]!=0) res[0][329]=a0;
  if (res[0]!=0) res[0][330]=a0;
  if (res[0]!=0) res[0][331]=a0;
  if (res[0]!=0) res[0][332]=a0;
  if (res[0]!=0) res[0][333]=a0;
  if (res[0]!=0) res[0][334]=a0;
  if (res[0]!=0) res[0][335]=a0;
  if (res[0]!=0) res[0][336]=a0;
  if (res[0]!=0) res[0][337]=a0;
  if (res[0]!=0) res[0][338]=a25;
  if (res[0]!=0) res[0][339]=a0;
  if (res[0]!=0) res[0][340]=a0;
  if (res[0]!=0) res[0][341]=a0;
  if (res[0]!=0) res[0][342]=a2;
  if (res[0]!=0) res[0][343]=a0;
  if (res[0]!=0) res[0][344]=a0;
  if (res[0]!=0) res[0][345]=a0;
  if (res[0]!=0) res[0][346]=a0;
  if (res[0]!=0) res[0][347]=a0;
  if (res[0]!=0) res[0][348]=a0;
  if (res[0]!=0) res[0][349]=a0;
  if (res[0]!=0) res[0][350]=a0;
  if (res[0]!=0) res[0][351]=a0;
  if (res[0]!=0) res[0][352]=a0;
  if (res[0]!=0) res[0][353]=a0;
  if (res[0]!=0) res[0][354]=a0;
  if (res[0]!=0) res[0][355]=a0;
  if (res[0]!=0) res[0][356]=a0;
  if (res[0]!=0) res[0][357]=a0;
  if (res[0]!=0) res[0][358]=a0;
  if (res[0]!=0) res[0][359]=a0;
  if (res[0]!=0) res[0][360]=a0;
  if (res[0]!=0) res[0][361]=a2;
  if (res[0]!=0) res[0][362]=a0;
  if (res[0]!=0) res[0][363]=a0;
  if (res[0]!=0) res[0][364]=a0;
  if (res[0]!=0) res[0][365]=a0;
  if (res[0]!=0) res[0][366]=a0;
  if (res[0]!=0) res[0][367]=a0;
  if (res[0]!=0) res[0][368]=a0;
  if (res[0]!=0) res[0][369]=a0;
  if (res[0]!=0) res[0][370]=a0;
  if (res[0]!=0) res[0][371]=a0;
  if (res[0]!=0) res[0][372]=a0;
  if (res[0]!=0) res[0][373]=a0;
  if (res[0]!=0) res[0][374]=a0;
  if (res[0]!=0) res[0][375]=a0;
  if (res[0]!=0) res[0][376]=a0;
  if (res[0]!=0) res[0][377]=a0;
  if (res[0]!=0) res[0][378]=a0;
  if (res[0]!=0) res[0][379]=a0;
  if (res[0]!=0) res[0][380]=a2;
  if (res[0]!=0) res[0][381]=a0;
  if (res[0]!=0) res[0][382]=a0;
  if (res[0]!=0) res[0][383]=a0;
  if (res[0]!=0) res[0][384]=a0;
  if (res[0]!=0) res[0][385]=a0;
  if (res[0]!=0) res[0][386]=a0;
  if (res[0]!=0) res[0][387]=a0;
  if (res[0]!=0) res[0][388]=a0;
  if (res[0]!=0) res[0][389]=a0;
  if (res[0]!=0) res[0][390]=a0;
  if (res[0]!=0) res[0][391]=a0;
  if (res[0]!=0) res[0][392]=a0;
  if (res[0]!=0) res[0][393]=a0;
  if (res[0]!=0) res[0][394]=a0;
  if (res[0]!=0) res[0][395]=a0;
  if (res[0]!=0) res[0][396]=a0;
  if (res[0]!=0) res[0][397]=a0;
  if (res[0]!=0) res[0][398]=a0;
  if (res[0]!=0) res[0][399]=a2;
  if (res[0]!=0) res[0][400]=a0;
  if (res[0]!=0) res[0][401]=a0;
  if (res[0]!=0) res[0][402]=a0;
  if (res[0]!=0) res[0][403]=a0;
  if (res[0]!=0) res[0][404]=a0;
  if (res[0]!=0) res[0][405]=a0;
  if (res[0]!=0) res[0][406]=a0;
  if (res[0]!=0) res[0][407]=a0;
  if (res[0]!=0) res[0][408]=a0;
  if (res[0]!=0) res[0][409]=a0;
  if (res[0]!=0) res[0][410]=a0;
  if (res[0]!=0) res[0][411]=a0;
  if (res[0]!=0) res[0][412]=a0;
  if (res[0]!=0) res[0][413]=a0;
  if (res[0]!=0) res[0][414]=a0;
  if (res[0]!=0) res[0][415]=a0;
  if (res[0]!=0) res[0][416]=a0;
  if (res[0]!=0) res[0][417]=a0;
  if (res[0]!=0) res[0][418]=a2;
  if (res[0]!=0) res[0][419]=a0;
  if (res[0]!=0) res[0][420]=a0;
  if (res[0]!=0) res[0][421]=a0;
  if (res[0]!=0) res[0][422]=a0;
  if (res[0]!=0) res[0][423]=a0;
  if (res[0]!=0) res[0][424]=a0;
  if (res[0]!=0) res[0][425]=a0;
  if (res[0]!=0) res[0][426]=a0;
  if (res[0]!=0) res[0][427]=a0;
  if (res[0]!=0) res[0][428]=a0;
  if (res[0]!=0) res[0][429]=a0;
  if (res[0]!=0) res[0][430]=a0;
  if (res[0]!=0) res[0][431]=a0;
  if (res[0]!=0) res[0][432]=a0;
  if (res[0]!=0) res[0][433]=a0;
  if (res[0]!=0) res[0][434]=a0;
  if (res[0]!=0) res[0][435]=a0;
  if (res[0]!=0) res[0][436]=a0;
  if (res[0]!=0) res[0][437]=a2;
  if (res[0]!=0) res[0][438]=a0;
  if (res[0]!=0) res[0][439]=a0;
  if (res[0]!=0) res[0][440]=a0;
  if (res[0]!=0) res[0][441]=a0;
  if (res[0]!=0) res[0][442]=a0;
  if (res[0]!=0) res[0][443]=a0;
  if (res[0]!=0) res[0][444]=a0;
  if (res[0]!=0) res[0][445]=a0;
  if (res[0]!=0) res[0][446]=a0;
  if (res[0]!=0) res[0][447]=a0;
  if (res[0]!=0) res[0][448]=a0;
  if (res[0]!=0) res[0][449]=a0;
  if (res[0]!=0) res[0][450]=a0;
  if (res[0]!=0) res[0][451]=a0;
  if (res[0]!=0) res[0][452]=a0;
  if (res[0]!=0) res[0][453]=a0;
  if (res[0]!=0) res[0][454]=a0;
  if (res[0]!=0) res[0][455]=a0;
  if (res[0]!=0) res[0][456]=a2;
  if (res[0]!=0) res[0][457]=a0;
  if (res[0]!=0) res[0][458]=a0;
  if (res[0]!=0) res[0][459]=a0;
  if (res[0]!=0) res[0][460]=a0;
  if (res[0]!=0) res[0][461]=a0;
  if (res[0]!=0) res[0][462]=a0;
  if (res[0]!=0) res[0][463]=a0;
  if (res[0]!=0) res[0][464]=a0;
  if (res[0]!=0) res[0][465]=a0;
  if (res[0]!=0) res[0][466]=a0;
  if (res[0]!=0) res[0][467]=a0;
  if (res[0]!=0) res[0][468]=a0;
  if (res[0]!=0) res[0][469]=a0;
  if (res[0]!=0) res[0][470]=a0;
  if (res[0]!=0) res[0][471]=a0;
  if (res[0]!=0) res[0][472]=a0;
  if (res[0]!=0) res[0][473]=a0;
  if (res[0]!=0) res[0][474]=a0;
  if (res[0]!=0) res[0][475]=a2;
  if (res[0]!=0) res[0][476]=a0;
  if (res[0]!=0) res[0][477]=a0;
  if (res[0]!=0) res[0][478]=a0;
  if (res[0]!=0) res[0][479]=a0;
  if (res[0]!=0) res[0][480]=a0;
  if (res[0]!=0) res[0][481]=a0;
  if (res[0]!=0) res[0][482]=a0;
  if (res[0]!=0) res[0][483]=a0;
  if (res[0]!=0) res[0][484]=a0;
  if (res[0]!=0) res[0][485]=a0;
  if (res[0]!=0) res[0][486]=a0;
  if (res[0]!=0) res[0][487]=a0;
  if (res[0]!=0) res[0][488]=a0;
  if (res[0]!=0) res[0][489]=a0;
  if (res[0]!=0) res[0][490]=a0;
  if (res[0]!=0) res[0][491]=a0;
  if (res[0]!=0) res[0][492]=a0;
  if (res[0]!=0) res[0][493]=a0;
  if (res[0]!=0) res[0][494]=a2;
  if (res[0]!=0) res[0][495]=a0;
  if (res[0]!=0) res[0][496]=a0;
  if (res[0]!=0) res[0][497]=a0;
  if (res[0]!=0) res[0][498]=a0;
  if (res[0]!=0) res[0][499]=a0;
  if (res[0]!=0) res[0][500]=a0;
  if (res[0]!=0) res[0][501]=a0;
  if (res[0]!=0) res[0][502]=a0;
  if (res[0]!=0) res[0][503]=a0;
  if (res[0]!=0) res[0][504]=a0;
  if (res[0]!=0) res[0][505]=a0;
  if (res[0]!=0) res[0][506]=a0;
  if (res[0]!=0) res[0][507]=a0;
  if (res[0]!=0) res[0][508]=a0;
  if (res[0]!=0) res[0][509]=a0;
  if (res[0]!=0) res[0][510]=a0;
  if (res[0]!=0) res[0][511]=a0;
  if (res[0]!=0) res[0][512]=a0;
  if (res[0]!=0) res[0][513]=a2;
  if (res[0]!=0) res[0][514]=a0;
  if (res[0]!=0) res[0][515]=a0;
  if (res[0]!=0) res[0][516]=a0;
  if (res[0]!=0) res[0][517]=a0;
  if (res[0]!=0) res[0][518]=a0;
  if (res[0]!=0) res[0][519]=a0;
  if (res[0]!=0) res[0][520]=a0;
  if (res[0]!=0) res[0][521]=a0;
  if (res[0]!=0) res[0][522]=a0;
  if (res[0]!=0) res[0][523]=a0;
  if (res[0]!=0) res[0][524]=a0;
  if (res[0]!=0) res[0][525]=a0;
  if (res[0]!=0) res[0][526]=a0;
  if (res[0]!=0) res[0][527]=a0;
  if (res[0]!=0) res[0][528]=a0;
  if (res[0]!=0) res[0][529]=a0;
  if (res[0]!=0) res[0][530]=a0;
  if (res[0]!=0) res[0][531]=a0;
  if (res[0]!=0) res[0][532]=a2;
  if (res[0]!=0) res[0][533]=a0;
  if (res[0]!=0) res[0][534]=a0;
  if (res[0]!=0) res[0][535]=a0;
  if (res[0]!=0) res[0][536]=a0;
  if (res[0]!=0) res[0][537]=a0;
  if (res[0]!=0) res[0][538]=a0;
  if (res[0]!=0) res[0][539]=a0;
  if (res[0]!=0) res[0][540]=a0;
  if (res[0]!=0) res[0][541]=a0;
  if (res[0]!=0) res[0][542]=a0;
  if (res[0]!=0) res[0][543]=a0;
  if (res[0]!=0) res[0][544]=a0;
  if (res[0]!=0) res[0][545]=a0;
  if (res[0]!=0) res[0][546]=a0;
  if (res[0]!=0) res[0][547]=a0;
  if (res[0]!=0) res[0][548]=a0;
  if (res[0]!=0) res[0][549]=a0;
  if (res[0]!=0) res[0][550]=a0;
  if (res[0]!=0) res[0][551]=a2;
  if (res[0]!=0) res[0][552]=a0;
  if (res[0]!=0) res[0][553]=a0;
  if (res[0]!=0) res[0][554]=a0;
  if (res[0]!=0) res[0][555]=a0;
  if (res[0]!=0) res[0][556]=a0;
  if (res[0]!=0) res[0][557]=a0;
  if (res[0]!=0) res[0][558]=a0;
  if (res[0]!=0) res[0][559]=a0;
  if (res[0]!=0) res[0][560]=a0;
  if (res[0]!=0) res[0][561]=a0;
  if (res[0]!=0) res[0][562]=a0;
  if (res[0]!=0) res[0][563]=a0;
  if (res[0]!=0) res[0][564]=a0;
  if (res[0]!=0) res[0][565]=a0;
  if (res[0]!=0) res[0][566]=a0;
  if (res[0]!=0) res[0][567]=a0;
  if (res[0]!=0) res[0][568]=a0;
  if (res[0]!=0) res[0][569]=a0;
  if (res[0]!=0) res[0][570]=a2;
  if (res[0]!=0) res[0][571]=a0;
  if (res[0]!=0) res[0][572]=a0;
  if (res[0]!=0) res[0][573]=a0;
  if (res[0]!=0) res[0][574]=a0;
  if (res[0]!=0) res[0][575]=a0;
  if (res[0]!=0) res[0][576]=a0;
  if (res[0]!=0) res[0][577]=a0;
  if (res[0]!=0) res[0][578]=a0;
  if (res[0]!=0) res[0][579]=a0;
  if (res[0]!=0) res[0][580]=a0;
  if (res[0]!=0) res[0][581]=a0;
  if (res[0]!=0) res[0][582]=a0;
  if (res[0]!=0) res[0][583]=a0;
  if (res[0]!=0) res[0][584]=a0;
  if (res[0]!=0) res[0][585]=a0;
  if (res[0]!=0) res[0][586]=a0;
  if (res[0]!=0) res[0][587]=a0;
  if (res[0]!=0) res[0][588]=a0;
  if (res[0]!=0) res[0][589]=a2;
  if (res[0]!=0) res[0][590]=a0;
  if (res[0]!=0) res[0][591]=a0;
  if (res[0]!=0) res[0][592]=a0;
  if (res[0]!=0) res[0][593]=a0;
  if (res[0]!=0) res[0][594]=a0;
  if (res[0]!=0) res[0][595]=a0;
  if (res[0]!=0) res[0][596]=a0;
  if (res[0]!=0) res[0][597]=a0;
  if (res[0]!=0) res[0][598]=a0;
  if (res[0]!=0) res[0][599]=a0;
  if (res[0]!=0) res[0][600]=a0;
  if (res[0]!=0) res[0][601]=a0;
  if (res[0]!=0) res[0][602]=a0;
  if (res[0]!=0) res[0][603]=a0;
  if (res[0]!=0) res[0][604]=a0;
  if (res[0]!=0) res[0][605]=a0;
  if (res[0]!=0) res[0][606]=a0;
  if (res[0]!=0) res[0][607]=a0;
  if (res[0]!=0) res[0][608]=a2;
  if (res[0]!=0) res[0][609]=a0;
  if (res[0]!=0) res[0][610]=a0;
  if (res[0]!=0) res[0][611]=a0;
  if (res[0]!=0) res[0][612]=a0;
  if (res[0]!=0) res[0][613]=a0;
  if (res[0]!=0) res[0][614]=a0;
  if (res[0]!=0) res[0][615]=a0;
  if (res[0]!=0) res[0][616]=a0;
  if (res[0]!=0) res[0][617]=a0;
  if (res[0]!=0) res[0][618]=a0;
  if (res[0]!=0) res[0][619]=a0;
  if (res[0]!=0) res[0][620]=a0;
  if (res[0]!=0) res[0][621]=a0;
  if (res[0]!=0) res[0][622]=a0;
  if (res[0]!=0) res[0][623]=a0;
  if (res[0]!=0) res[0][624]=a0;
  if (res[0]!=0) res[0][625]=a0;
  if (res[0]!=0) res[0][626]=a0;
  if (res[0]!=0) res[0][627]=a2;
  if (res[0]!=0) res[0][628]=a0;
  if (res[0]!=0) res[0][629]=a0;
  if (res[0]!=0) res[0][630]=a0;
  if (res[0]!=0) res[0][631]=a0;
  if (res[0]!=0) res[0][632]=a0;
  if (res[0]!=0) res[0][633]=a0;
  if (res[0]!=0) res[0][634]=a0;
  if (res[0]!=0) res[0][635]=a0;
  if (res[0]!=0) res[0][636]=a0;
  if (res[0]!=0) res[0][637]=a0;
  if (res[0]!=0) res[0][638]=a0;
  if (res[0]!=0) res[0][639]=a0;
  if (res[0]!=0) res[0][640]=a0;
  if (res[0]!=0) res[0][641]=a0;
  if (res[0]!=0) res[0][642]=a0;
  if (res[0]!=0) res[0][643]=a0;
  if (res[0]!=0) res[0][644]=a0;
  if (res[0]!=0) res[0][645]=a0;
  if (res[0]!=0) res[0][646]=a2;
  if (res[0]!=0) res[0][647]=a0;
  if (res[0]!=0) res[0][648]=a0;
  if (res[0]!=0) res[0][649]=a0;
  if (res[0]!=0) res[0][650]=a0;
  if (res[0]!=0) res[0][651]=a0;
  if (res[0]!=0) res[0][652]=a0;
  if (res[0]!=0) res[0][653]=a0;
  if (res[0]!=0) res[0][654]=a0;
  if (res[0]!=0) res[0][655]=a0;
  if (res[0]!=0) res[0][656]=a0;
  if (res[0]!=0) res[0][657]=a0;
  if (res[0]!=0) res[0][658]=a0;
  if (res[0]!=0) res[0][659]=a0;
  if (res[0]!=0) res[0][660]=a0;
  if (res[0]!=0) res[0][661]=a0;
  if (res[0]!=0) res[0][662]=a0;
  if (res[0]!=0) res[0][663]=a0;
  if (res[0]!=0) res[0][664]=a0;
  if (res[0]!=0) res[0][665]=a2;
  return 0;
}

CASADI_SYMBOL_EXPORT int casadi_impl_ode_fun_jac_x_xdot_chain_nm4(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void casadi_impl_ode_fun_jac_x_xdot_chain_nm4_incref(void) {
}

CASADI_SYMBOL_EXPORT void casadi_impl_ode_fun_jac_x_xdot_chain_nm4_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int casadi_impl_ode_fun_jac_x_xdot_chain_nm4_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int casadi_impl_ode_fun_jac_x_xdot_chain_nm4_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* casadi_impl_ode_fun_jac_x_xdot_chain_nm4_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* casadi_impl_ode_fun_jac_x_xdot_chain_nm4_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* casadi_impl_ode_fun_jac_x_xdot_chain_nm4_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* casadi_impl_ode_fun_jac_x_xdot_chain_nm4_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int casadi_impl_ode_fun_jac_x_xdot_chain_nm4_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
