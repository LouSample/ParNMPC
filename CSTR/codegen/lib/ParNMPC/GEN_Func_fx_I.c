/*
 * File: GEN_Func_fx_I.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 02:06:04
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "ParNMPC.h"
#include "GEN_Func_fx_I.h"
#include <stdio.h>
#include "omp.h"
#include "stdio.h"

/* Function Definitions */

/*
 * GEN_FUNC_FX_I
 *     FX_I = GEN_FUNC_FX_I(IN1,IN2)
 * Arguments    : const double in1[14]
 *                double fx_I[16]
 * Return Type  : void
 */
void GEN_Func_fx_I(const double in1[14], double fx_I[16])
{
  double t3;
  double t4;
  double t5;
  double t6;
  double t8;
  double t10;
  double x[16];

  /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
  /*     21-Jan-2018 02:00:12 */
  t3 = 1.0 / (in1[12] + 273.15);
  t4 = exp(-(t3 * 9758.3));
  t5 = exp(-(t3 * 8560.0));
  t6 = 1.0 / ((in1[12] + 273.15) * (in1[12] + 273.15));
  t8 = t4 * 2.234375E+10;
  t10 = in1[10] * in1[10];
  x[0] = ((t4 * -2.234375E+10 - in1[6] * 0.017361111111111112) - t5 * in1[10] *
          3.1399305555555558E+8) - 1.0;
  x[1] = t8;
  x[2] = t4 * -3.3373287926991379E+10 + t5 * in1[10] * 4.673143818400238E+9;
  x[3] = 0.0;
  x[4] = 0.0;
  x[5] = (-t8 - in1[6] * 0.017361111111111112) - 1.0;
  x[6] = t4 * 8.7406230284977432E+10;
  x[7] = 0.0;
  x[8] = t5 * t6 * t10 * -1.3438902777777781E+12 - t4 * t6 * in1[10] *
    2.18037015625E+14;
  x[9] = t4 * t6 * in1[10] * 2.18037015625E+14 - t4 * t6 * in1[11] *
    2.18037015625E+14;
  x[10] = (((in1[6] * -0.017361111111111112 + t5 * t6 * t10 *
             2.000105554275302E+13) - t4 * t6 * in1[10] * 3.2566655557796E+14) +
           t4 * t6 * in1[11] * 8.5293621698989525E+14) - 1.535217298223079;
  x[11] = 1.505;
  x[12] = 0.0;
  x[13] = 0.0;
  x[14] = 0.53521729822307862;
  x[15] = -2.505;
  memcpy(&fx_I[0], &x[0], sizeof(double) << 4);
}

/*
 * File trailer for GEN_Func_fx_I.c
 *
 * [EOF]
 */