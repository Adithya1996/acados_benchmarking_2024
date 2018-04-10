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
  #define CASADI_PREFIX(ID) impl_ode_jac_xdot_chain_nm4_ ## ID
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
static const casadi_int casadi_s2[345] = {18, 18, 0, 18, 36, 54, 72, 90, 108, 126, 144, 162, 180, 198, 216, 234, 252, 270, 288, 306, 324, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

/* casadi_impl_ode_jac_xdot_chain_nm4:(i0[18],i1[18],i2[3])->(o0[18x18]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1;
  a0=1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a1;
  if (res[0]!=0) res[0][4]=a1;
  if (res[0]!=0) res[0][5]=a1;
  if (res[0]!=0) res[0][6]=a1;
  if (res[0]!=0) res[0][7]=a1;
  if (res[0]!=0) res[0][8]=a1;
  if (res[0]!=0) res[0][9]=a1;
  if (res[0]!=0) res[0][10]=a1;
  if (res[0]!=0) res[0][11]=a1;
  if (res[0]!=0) res[0][12]=a1;
  if (res[0]!=0) res[0][13]=a1;
  if (res[0]!=0) res[0][14]=a1;
  if (res[0]!=0) res[0][15]=a1;
  if (res[0]!=0) res[0][16]=a1;
  if (res[0]!=0) res[0][17]=a1;
  if (res[0]!=0) res[0][18]=a1;
  if (res[0]!=0) res[0][19]=a0;
  if (res[0]!=0) res[0][20]=a1;
  if (res[0]!=0) res[0][21]=a1;
  if (res[0]!=0) res[0][22]=a1;
  if (res[0]!=0) res[0][23]=a1;
  if (res[0]!=0) res[0][24]=a1;
  if (res[0]!=0) res[0][25]=a1;
  if (res[0]!=0) res[0][26]=a1;
  if (res[0]!=0) res[0][27]=a1;
  if (res[0]!=0) res[0][28]=a1;
  if (res[0]!=0) res[0][29]=a1;
  if (res[0]!=0) res[0][30]=a1;
  if (res[0]!=0) res[0][31]=a1;
  if (res[0]!=0) res[0][32]=a1;
  if (res[0]!=0) res[0][33]=a1;
  if (res[0]!=0) res[0][34]=a1;
  if (res[0]!=0) res[0][35]=a1;
  if (res[0]!=0) res[0][36]=a1;
  if (res[0]!=0) res[0][37]=a1;
  if (res[0]!=0) res[0][38]=a0;
  if (res[0]!=0) res[0][39]=a1;
  if (res[0]!=0) res[0][40]=a1;
  if (res[0]!=0) res[0][41]=a1;
  if (res[0]!=0) res[0][42]=a1;
  if (res[0]!=0) res[0][43]=a1;
  if (res[0]!=0) res[0][44]=a1;
  if (res[0]!=0) res[0][45]=a1;
  if (res[0]!=0) res[0][46]=a1;
  if (res[0]!=0) res[0][47]=a1;
  if (res[0]!=0) res[0][48]=a1;
  if (res[0]!=0) res[0][49]=a1;
  if (res[0]!=0) res[0][50]=a1;
  if (res[0]!=0) res[0][51]=a1;
  if (res[0]!=0) res[0][52]=a1;
  if (res[0]!=0) res[0][53]=a1;
  if (res[0]!=0) res[0][54]=a1;
  if (res[0]!=0) res[0][55]=a1;
  if (res[0]!=0) res[0][56]=a1;
  if (res[0]!=0) res[0][57]=a0;
  if (res[0]!=0) res[0][58]=a1;
  if (res[0]!=0) res[0][59]=a1;
  if (res[0]!=0) res[0][60]=a1;
  if (res[0]!=0) res[0][61]=a1;
  if (res[0]!=0) res[0][62]=a1;
  if (res[0]!=0) res[0][63]=a1;
  if (res[0]!=0) res[0][64]=a1;
  if (res[0]!=0) res[0][65]=a1;
  if (res[0]!=0) res[0][66]=a1;
  if (res[0]!=0) res[0][67]=a1;
  if (res[0]!=0) res[0][68]=a1;
  if (res[0]!=0) res[0][69]=a1;
  if (res[0]!=0) res[0][70]=a1;
  if (res[0]!=0) res[0][71]=a1;
  if (res[0]!=0) res[0][72]=a1;
  if (res[0]!=0) res[0][73]=a1;
  if (res[0]!=0) res[0][74]=a1;
  if (res[0]!=0) res[0][75]=a1;
  if (res[0]!=0) res[0][76]=a0;
  if (res[0]!=0) res[0][77]=a1;
  if (res[0]!=0) res[0][78]=a1;
  if (res[0]!=0) res[0][79]=a1;
  if (res[0]!=0) res[0][80]=a1;
  if (res[0]!=0) res[0][81]=a1;
  if (res[0]!=0) res[0][82]=a1;
  if (res[0]!=0) res[0][83]=a1;
  if (res[0]!=0) res[0][84]=a1;
  if (res[0]!=0) res[0][85]=a1;
  if (res[0]!=0) res[0][86]=a1;
  if (res[0]!=0) res[0][87]=a1;
  if (res[0]!=0) res[0][88]=a1;
  if (res[0]!=0) res[0][89]=a1;
  if (res[0]!=0) res[0][90]=a1;
  if (res[0]!=0) res[0][91]=a1;
  if (res[0]!=0) res[0][92]=a1;
  if (res[0]!=0) res[0][93]=a1;
  if (res[0]!=0) res[0][94]=a1;
  if (res[0]!=0) res[0][95]=a0;
  if (res[0]!=0) res[0][96]=a1;
  if (res[0]!=0) res[0][97]=a1;
  if (res[0]!=0) res[0][98]=a1;
  if (res[0]!=0) res[0][99]=a1;
  if (res[0]!=0) res[0][100]=a1;
  if (res[0]!=0) res[0][101]=a1;
  if (res[0]!=0) res[0][102]=a1;
  if (res[0]!=0) res[0][103]=a1;
  if (res[0]!=0) res[0][104]=a1;
  if (res[0]!=0) res[0][105]=a1;
  if (res[0]!=0) res[0][106]=a1;
  if (res[0]!=0) res[0][107]=a1;
  if (res[0]!=0) res[0][108]=a1;
  if (res[0]!=0) res[0][109]=a1;
  if (res[0]!=0) res[0][110]=a1;
  if (res[0]!=0) res[0][111]=a1;
  if (res[0]!=0) res[0][112]=a1;
  if (res[0]!=0) res[0][113]=a1;
  if (res[0]!=0) res[0][114]=a0;
  if (res[0]!=0) res[0][115]=a1;
  if (res[0]!=0) res[0][116]=a1;
  if (res[0]!=0) res[0][117]=a1;
  if (res[0]!=0) res[0][118]=a1;
  if (res[0]!=0) res[0][119]=a1;
  if (res[0]!=0) res[0][120]=a1;
  if (res[0]!=0) res[0][121]=a1;
  if (res[0]!=0) res[0][122]=a1;
  if (res[0]!=0) res[0][123]=a1;
  if (res[0]!=0) res[0][124]=a1;
  if (res[0]!=0) res[0][125]=a1;
  if (res[0]!=0) res[0][126]=a1;
  if (res[0]!=0) res[0][127]=a1;
  if (res[0]!=0) res[0][128]=a1;
  if (res[0]!=0) res[0][129]=a1;
  if (res[0]!=0) res[0][130]=a1;
  if (res[0]!=0) res[0][131]=a1;
  if (res[0]!=0) res[0][132]=a1;
  if (res[0]!=0) res[0][133]=a0;
  if (res[0]!=0) res[0][134]=a1;
  if (res[0]!=0) res[0][135]=a1;
  if (res[0]!=0) res[0][136]=a1;
  if (res[0]!=0) res[0][137]=a1;
  if (res[0]!=0) res[0][138]=a1;
  if (res[0]!=0) res[0][139]=a1;
  if (res[0]!=0) res[0][140]=a1;
  if (res[0]!=0) res[0][141]=a1;
  if (res[0]!=0) res[0][142]=a1;
  if (res[0]!=0) res[0][143]=a1;
  if (res[0]!=0) res[0][144]=a1;
  if (res[0]!=0) res[0][145]=a1;
  if (res[0]!=0) res[0][146]=a1;
  if (res[0]!=0) res[0][147]=a1;
  if (res[0]!=0) res[0][148]=a1;
  if (res[0]!=0) res[0][149]=a1;
  if (res[0]!=0) res[0][150]=a1;
  if (res[0]!=0) res[0][151]=a1;
  if (res[0]!=0) res[0][152]=a0;
  if (res[0]!=0) res[0][153]=a1;
  if (res[0]!=0) res[0][154]=a1;
  if (res[0]!=0) res[0][155]=a1;
  if (res[0]!=0) res[0][156]=a1;
  if (res[0]!=0) res[0][157]=a1;
  if (res[0]!=0) res[0][158]=a1;
  if (res[0]!=0) res[0][159]=a1;
  if (res[0]!=0) res[0][160]=a1;
  if (res[0]!=0) res[0][161]=a1;
  if (res[0]!=0) res[0][162]=a1;
  if (res[0]!=0) res[0][163]=a1;
  if (res[0]!=0) res[0][164]=a1;
  if (res[0]!=0) res[0][165]=a1;
  if (res[0]!=0) res[0][166]=a1;
  if (res[0]!=0) res[0][167]=a1;
  if (res[0]!=0) res[0][168]=a1;
  if (res[0]!=0) res[0][169]=a1;
  if (res[0]!=0) res[0][170]=a1;
  if (res[0]!=0) res[0][171]=a0;
  if (res[0]!=0) res[0][172]=a1;
  if (res[0]!=0) res[0][173]=a1;
  if (res[0]!=0) res[0][174]=a1;
  if (res[0]!=0) res[0][175]=a1;
  if (res[0]!=0) res[0][176]=a1;
  if (res[0]!=0) res[0][177]=a1;
  if (res[0]!=0) res[0][178]=a1;
  if (res[0]!=0) res[0][179]=a1;
  if (res[0]!=0) res[0][180]=a1;
  if (res[0]!=0) res[0][181]=a1;
  if (res[0]!=0) res[0][182]=a1;
  if (res[0]!=0) res[0][183]=a1;
  if (res[0]!=0) res[0][184]=a1;
  if (res[0]!=0) res[0][185]=a1;
  if (res[0]!=0) res[0][186]=a1;
  if (res[0]!=0) res[0][187]=a1;
  if (res[0]!=0) res[0][188]=a1;
  if (res[0]!=0) res[0][189]=a1;
  if (res[0]!=0) res[0][190]=a0;
  if (res[0]!=0) res[0][191]=a1;
  if (res[0]!=0) res[0][192]=a1;
  if (res[0]!=0) res[0][193]=a1;
  if (res[0]!=0) res[0][194]=a1;
  if (res[0]!=0) res[0][195]=a1;
  if (res[0]!=0) res[0][196]=a1;
  if (res[0]!=0) res[0][197]=a1;
  if (res[0]!=0) res[0][198]=a1;
  if (res[0]!=0) res[0][199]=a1;
  if (res[0]!=0) res[0][200]=a1;
  if (res[0]!=0) res[0][201]=a1;
  if (res[0]!=0) res[0][202]=a1;
  if (res[0]!=0) res[0][203]=a1;
  if (res[0]!=0) res[0][204]=a1;
  if (res[0]!=0) res[0][205]=a1;
  if (res[0]!=0) res[0][206]=a1;
  if (res[0]!=0) res[0][207]=a1;
  if (res[0]!=0) res[0][208]=a1;
  if (res[0]!=0) res[0][209]=a0;
  if (res[0]!=0) res[0][210]=a1;
  if (res[0]!=0) res[0][211]=a1;
  if (res[0]!=0) res[0][212]=a1;
  if (res[0]!=0) res[0][213]=a1;
  if (res[0]!=0) res[0][214]=a1;
  if (res[0]!=0) res[0][215]=a1;
  if (res[0]!=0) res[0][216]=a1;
  if (res[0]!=0) res[0][217]=a1;
  if (res[0]!=0) res[0][218]=a1;
  if (res[0]!=0) res[0][219]=a1;
  if (res[0]!=0) res[0][220]=a1;
  if (res[0]!=0) res[0][221]=a1;
  if (res[0]!=0) res[0][222]=a1;
  if (res[0]!=0) res[0][223]=a1;
  if (res[0]!=0) res[0][224]=a1;
  if (res[0]!=0) res[0][225]=a1;
  if (res[0]!=0) res[0][226]=a1;
  if (res[0]!=0) res[0][227]=a1;
  if (res[0]!=0) res[0][228]=a0;
  if (res[0]!=0) res[0][229]=a1;
  if (res[0]!=0) res[0][230]=a1;
  if (res[0]!=0) res[0][231]=a1;
  if (res[0]!=0) res[0][232]=a1;
  if (res[0]!=0) res[0][233]=a1;
  if (res[0]!=0) res[0][234]=a1;
  if (res[0]!=0) res[0][235]=a1;
  if (res[0]!=0) res[0][236]=a1;
  if (res[0]!=0) res[0][237]=a1;
  if (res[0]!=0) res[0][238]=a1;
  if (res[0]!=0) res[0][239]=a1;
  if (res[0]!=0) res[0][240]=a1;
  if (res[0]!=0) res[0][241]=a1;
  if (res[0]!=0) res[0][242]=a1;
  if (res[0]!=0) res[0][243]=a1;
  if (res[0]!=0) res[0][244]=a1;
  if (res[0]!=0) res[0][245]=a1;
  if (res[0]!=0) res[0][246]=a1;
  if (res[0]!=0) res[0][247]=a0;
  if (res[0]!=0) res[0][248]=a1;
  if (res[0]!=0) res[0][249]=a1;
  if (res[0]!=0) res[0][250]=a1;
  if (res[0]!=0) res[0][251]=a1;
  if (res[0]!=0) res[0][252]=a1;
  if (res[0]!=0) res[0][253]=a1;
  if (res[0]!=0) res[0][254]=a1;
  if (res[0]!=0) res[0][255]=a1;
  if (res[0]!=0) res[0][256]=a1;
  if (res[0]!=0) res[0][257]=a1;
  if (res[0]!=0) res[0][258]=a1;
  if (res[0]!=0) res[0][259]=a1;
  if (res[0]!=0) res[0][260]=a1;
  if (res[0]!=0) res[0][261]=a1;
  if (res[0]!=0) res[0][262]=a1;
  if (res[0]!=0) res[0][263]=a1;
  if (res[0]!=0) res[0][264]=a1;
  if (res[0]!=0) res[0][265]=a1;
  if (res[0]!=0) res[0][266]=a0;
  if (res[0]!=0) res[0][267]=a1;
  if (res[0]!=0) res[0][268]=a1;
  if (res[0]!=0) res[0][269]=a1;
  if (res[0]!=0) res[0][270]=a1;
  if (res[0]!=0) res[0][271]=a1;
  if (res[0]!=0) res[0][272]=a1;
  if (res[0]!=0) res[0][273]=a1;
  if (res[0]!=0) res[0][274]=a1;
  if (res[0]!=0) res[0][275]=a1;
  if (res[0]!=0) res[0][276]=a1;
  if (res[0]!=0) res[0][277]=a1;
  if (res[0]!=0) res[0][278]=a1;
  if (res[0]!=0) res[0][279]=a1;
  if (res[0]!=0) res[0][280]=a1;
  if (res[0]!=0) res[0][281]=a1;
  if (res[0]!=0) res[0][282]=a1;
  if (res[0]!=0) res[0][283]=a1;
  if (res[0]!=0) res[0][284]=a1;
  if (res[0]!=0) res[0][285]=a0;
  if (res[0]!=0) res[0][286]=a1;
  if (res[0]!=0) res[0][287]=a1;
  if (res[0]!=0) res[0][288]=a1;
  if (res[0]!=0) res[0][289]=a1;
  if (res[0]!=0) res[0][290]=a1;
  if (res[0]!=0) res[0][291]=a1;
  if (res[0]!=0) res[0][292]=a1;
  if (res[0]!=0) res[0][293]=a1;
  if (res[0]!=0) res[0][294]=a1;
  if (res[0]!=0) res[0][295]=a1;
  if (res[0]!=0) res[0][296]=a1;
  if (res[0]!=0) res[0][297]=a1;
  if (res[0]!=0) res[0][298]=a1;
  if (res[0]!=0) res[0][299]=a1;
  if (res[0]!=0) res[0][300]=a1;
  if (res[0]!=0) res[0][301]=a1;
  if (res[0]!=0) res[0][302]=a1;
  if (res[0]!=0) res[0][303]=a1;
  if (res[0]!=0) res[0][304]=a0;
  if (res[0]!=0) res[0][305]=a1;
  if (res[0]!=0) res[0][306]=a1;
  if (res[0]!=0) res[0][307]=a1;
  if (res[0]!=0) res[0][308]=a1;
  if (res[0]!=0) res[0][309]=a1;
  if (res[0]!=0) res[0][310]=a1;
  if (res[0]!=0) res[0][311]=a1;
  if (res[0]!=0) res[0][312]=a1;
  if (res[0]!=0) res[0][313]=a1;
  if (res[0]!=0) res[0][314]=a1;
  if (res[0]!=0) res[0][315]=a1;
  if (res[0]!=0) res[0][316]=a1;
  if (res[0]!=0) res[0][317]=a1;
  if (res[0]!=0) res[0][318]=a1;
  if (res[0]!=0) res[0][319]=a1;
  if (res[0]!=0) res[0][320]=a1;
  if (res[0]!=0) res[0][321]=a1;
  if (res[0]!=0) res[0][322]=a1;
  if (res[0]!=0) res[0][323]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int casadi_impl_ode_jac_xdot_chain_nm4(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void casadi_impl_ode_jac_xdot_chain_nm4_incref(void) {
}

CASADI_SYMBOL_EXPORT void casadi_impl_ode_jac_xdot_chain_nm4_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int casadi_impl_ode_jac_xdot_chain_nm4_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int casadi_impl_ode_jac_xdot_chain_nm4_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* casadi_impl_ode_jac_xdot_chain_nm4_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* casadi_impl_ode_jac_xdot_chain_nm4_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* casadi_impl_ode_jac_xdot_chain_nm4_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* casadi_impl_ode_jac_xdot_chain_nm4_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int casadi_impl_ode_jac_xdot_chain_nm4_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
