/*
 * plant_block_2024.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "plant_block_2024".
 *
 * Model version              : 11.4
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Sep 11 00:13:47 2025
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "plant_block_2024.h"
#include "rtwtypes.h"
#include <math.h>
#include <emmintrin.h>
#include "plant_block_2024_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "plant_block_2024_dt.h"

/* Named constants for MATLAB Function: '<Root>/MATLAB Function3' */
#define plant_block_2024_CALL_EVENT    (-1)

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.008, 0.0,
};

/* Block signals (default storage) */
B_plant_block_2024_T plant_block_2024_B;

/* Continuous states */
X_plant_block_2024_T plant_block_2024_X;

/* Disabled State Vector */
XDis_plant_block_2024_T plant_block_2024_XDis;

/* Block states (default storage) */
DW_plant_block_2024_T plant_block_2024_DW;

/* Real-time model */
static RT_MODEL_plant_block_2024_T plant_block_2024_M_;
RT_MODEL_plant_block_2024_T *const plant_block_2024_M = &plant_block_2024_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 12;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  plant_block_2024_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void plant_block_2024_output(void)
{
  __m128d tmp_0;
  real_T tmp_1[2];
  real_T a_tmp;
  real_T ddtheta_control;
  real_T ddtheta_control_tmp;
  real_T ddtheta_control_tmp_0;
  real_T rtb_Derivative5;
  real_T rtb_Sum_b;
  real_T rtb_Sum_l;
  real_T torqueRequest_tmp;
  real_T torqueRequest_tmp_0;
  real_T torqueRequest_tmp_1;
  real_T *lastU;
  boolean_T tmp;
  if (rtmIsMajorTimeStep(plant_block_2024_M)) {
    /* set solver stop time */
    if (!(plant_block_2024_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&plant_block_2024_M->solverInfo,
                            ((plant_block_2024_M->Timing.clockTickH0 + 1) *
        plant_block_2024_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&plant_block_2024_M->solverInfo,
                            ((plant_block_2024_M->Timing.clockTick0 + 1) *
        plant_block_2024_M->Timing.stepSize0 +
        plant_block_2024_M->Timing.clockTickH0 *
        plant_block_2024_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(plant_block_2024_M)) {
    plant_block_2024_M->Timing.t[0] = rtsiGetT(&plant_block_2024_M->solverInfo);
  }

  tmp = rtmIsMajorTimeStep(plant_block_2024_M);
  if (tmp) {
    /* S-Function (ECPDSPDriver): '<S6>/S-Function' */

    /* Level2 S-Function Block: '<S6>/S-Function' (ECPDSPDriver) */
    {
      SimStruct *rts = plant_block_2024_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<Root>/Gain' */
    plant_block_2024_B.Gain = plant_block_2024_P.Gain_Gain *
      plant_block_2024_B.SFunction[0];
  }

  /* Derivative: '<Root>/Derivative6' incorporates:
   *  Derivative: '<Root>/Derivative3'
   *  Derivative: '<Root>/Derivative4'
   *  Derivative: '<Root>/Derivative5'
   *  Derivative: '<Root>/Derivative7'
   */
  a_tmp = plant_block_2024_M->Timing.t[0];
  if ((plant_block_2024_DW.TimeStampA >= a_tmp) &&
      (plant_block_2024_DW.TimeStampB >= a_tmp)) {
    rtb_Sum_l = 0.0;
  } else {
    rtb_Derivative5 = plant_block_2024_DW.TimeStampA;
    lastU = &plant_block_2024_DW.LastUAtTimeA;
    if (plant_block_2024_DW.TimeStampA < plant_block_2024_DW.TimeStampB) {
      if (plant_block_2024_DW.TimeStampB < a_tmp) {
        rtb_Derivative5 = plant_block_2024_DW.TimeStampB;
        lastU = &plant_block_2024_DW.LastUAtTimeB;
      }
    } else if (plant_block_2024_DW.TimeStampA >= a_tmp) {
      rtb_Derivative5 = plant_block_2024_DW.TimeStampB;
      lastU = &plant_block_2024_DW.LastUAtTimeB;
    }

    rtb_Sum_l = (plant_block_2024_B.Gain - *lastU) / (a_tmp - rtb_Derivative5);
  }

  /* End of Derivative: '<Root>/Derivative6' */

  /* Gain: '<Root>/Gain6' */
  plant_block_2024_B.Gain6 = plant_block_2024_P.Gain6_Gain * rtb_Sum_l;

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/targetGyro'
   *  TransferFcn: '<Root>/Transfer Fcn'
   */
  rtb_Sum_l = plant_block_2024_P.targetGyro_Value -
    plant_block_2024_P.TransferFcn_C * plant_block_2024_X.TransferFcn_CSTATE;

  /* Gain: '<S44>/Filter Coefficient' incorporates:
   *  Gain: '<S34>/Derivative Gain'
   *  Integrator: '<S36>/Filter'
   *  Sum: '<S36>/SumD'
   */
  plant_block_2024_B.FilterCoefficient = (plant_block_2024_P.PIDController_D *
    rtb_Sum_l - plant_block_2024_X.Filter_CSTATE) *
    plant_block_2024_P.PIDController_N;

  /* Sum: '<S50>/Sum' incorporates:
   *  Gain: '<S46>/Proportional Gain'
   *  Integrator: '<S41>/Integrator'
   */
  rtb_Sum_b = (plant_block_2024_P.PIDController_P * rtb_Sum_l +
               plant_block_2024_X.Integrator_CSTATE) +
    plant_block_2024_B.FilterCoefficient;

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Sum_b > plant_block_2024_P.Saturation_UpperSat) {
    /* Saturate: '<Root>/Saturation' */
    plant_block_2024_B.Saturation = plant_block_2024_P.Saturation_UpperSat;
  } else if (rtb_Sum_b < plant_block_2024_P.Saturation_LowerSat) {
    /* Saturate: '<Root>/Saturation' */
    plant_block_2024_B.Saturation = plant_block_2024_P.Saturation_LowerSat;
  } else {
    /* Saturate: '<Root>/Saturation' */
    plant_block_2024_B.Saturation = rtb_Sum_b;
  }

  /* End of Saturate: '<Root>/Saturation' */
  if (tmp) {
  }

  /* Integrator: '<Root>/Integrator6' */
  plant_block_2024_B.Integrator6 = plant_block_2024_X.Integrator6_CSTATE;

  /* ManualSwitch: '<Root>/Manual Switch1' */
  if (plant_block_2024_P.ManualSwitch1_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch1' */
    plant_block_2024_B.ManualSwitch1 = plant_block_2024_B.Integrator6;
  } else {
    /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
     *  TransferFcn: '<Root>/Transfer Fcn1'
     */
    plant_block_2024_B.ManualSwitch1 = plant_block_2024_P.TransferFcn1_C *
      plant_block_2024_X.TransferFcn1_CSTATE;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch1' */

  /* Derivative: '<Root>/Derivative3' */
  if ((plant_block_2024_DW.TimeStampA_m >= a_tmp) &&
      (plant_block_2024_DW.TimeStampB_h >= a_tmp)) {
    /* Derivative: '<Root>/Derivative3' */
    plant_block_2024_B.Derivative3 = 0.0;
  } else {
    rtb_Derivative5 = plant_block_2024_DW.TimeStampA_m;
    lastU = &plant_block_2024_DW.LastUAtTimeA_a;
    if (plant_block_2024_DW.TimeStampA_m < plant_block_2024_DW.TimeStampB_h) {
      if (plant_block_2024_DW.TimeStampB_h < a_tmp) {
        rtb_Derivative5 = plant_block_2024_DW.TimeStampB_h;
        lastU = &plant_block_2024_DW.LastUAtTimeB_o;
      }
    } else if (plant_block_2024_DW.TimeStampA_m >= a_tmp) {
      rtb_Derivative5 = plant_block_2024_DW.TimeStampB_h;
      lastU = &plant_block_2024_DW.LastUAtTimeB_o;
    }

    /* Derivative: '<Root>/Derivative3' */
    plant_block_2024_B.Derivative3 = (plant_block_2024_B.ManualSwitch1 - *lastU)
      / (a_tmp - rtb_Derivative5);
  }

  /* Derivative: '<Root>/Derivative4' */
  if ((plant_block_2024_DW.TimeStampA_l >= a_tmp) &&
      (plant_block_2024_DW.TimeStampB_n >= a_tmp)) {
    rtb_Sum_b = 0.0;
  } else {
    rtb_Derivative5 = plant_block_2024_DW.TimeStampA_l;
    lastU = &plant_block_2024_DW.LastUAtTimeA_e;
    if (plant_block_2024_DW.TimeStampA_l < plant_block_2024_DW.TimeStampB_n) {
      if (plant_block_2024_DW.TimeStampB_n < a_tmp) {
        rtb_Derivative5 = plant_block_2024_DW.TimeStampB_n;
        lastU = &plant_block_2024_DW.LastUAtTimeB_i;
      }
    } else if (plant_block_2024_DW.TimeStampA_l >= a_tmp) {
      rtb_Derivative5 = plant_block_2024_DW.TimeStampB_n;
      lastU = &plant_block_2024_DW.LastUAtTimeB_i;
    }

    rtb_Sum_b = (plant_block_2024_B.Derivative3 - *lastU) / (a_tmp -
      rtb_Derivative5);
  }

  /* TransferFcn: '<Root>/Transfer Fcn2' */
  plant_block_2024_B.TransferFcn2 = plant_block_2024_P.TransferFcn2_C *
    plant_block_2024_X.TransferFcn2_CSTATE;

  /* Derivative: '<Root>/Derivative5' */
  if ((plant_block_2024_DW.TimeStampA_i >= a_tmp) &&
      (plant_block_2024_DW.TimeStampB_k >= a_tmp)) {
    rtb_Derivative5 = 0.0;
  } else {
    rtb_Derivative5 = plant_block_2024_DW.TimeStampA_i;
    lastU = &plant_block_2024_DW.LastUAtTimeA_at;
    if (plant_block_2024_DW.TimeStampA_i < plant_block_2024_DW.TimeStampB_k) {
      if (plant_block_2024_DW.TimeStampB_k < a_tmp) {
        rtb_Derivative5 = plant_block_2024_DW.TimeStampB_k;
        lastU = &plant_block_2024_DW.LastUAtTimeB_f;
      }
    } else if (plant_block_2024_DW.TimeStampA_i >= a_tmp) {
      rtb_Derivative5 = plant_block_2024_DW.TimeStampB_k;
      lastU = &plant_block_2024_DW.LastUAtTimeB_f;
    }

    rtb_Derivative5 = (plant_block_2024_B.TransferFcn2 - *lastU) / (a_tmp -
      rtb_Derivative5);
  }

  /* MATLAB Function: '<Root>/MATLAB Function3' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  plant_block_2024_DW.sfEvent_kx = plant_block_2024_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function3': '<S1>:1' */
  /* '<S1>:1:3' */
  /* '<S1>:1:6' */
  /* '<S1>:1:12' */
  /* '<S1>:1:13' */
  /* '<S1>:1:16' */
  /* '<S1>:1:17' */
  /* '<S1>:1:18' */
  ddtheta_control_tmp = cos(plant_block_2024_B.ManualSwitch1);
  ddtheta_control_tmp_0 = plant_block_2024_B.Derivative3 *
    plant_block_2024_B.Derivative3;
  ddtheta_control = ((ddtheta_control_tmp - 1.0) * 0.418184604 +
                     ddtheta_control_tmp_0 * 0.00655) * -10.0 *
    plant_block_2024_B.Derivative3 * ddtheta_control_tmp / 0.37;

  /* MATLAB Function: '<Root>/MATLAB Function4' */
  plant_block_2024_DW.sfEvent_k = plant_block_2024_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function4': '<S2>:1' */
  /* '<S2>:1:2' */
  /* '<S2>:1:3' */
  /* '<S2>:1:7' */
  /* '<S2>:1:10' */
  /* '<S2>:1:11' */
  /* '<S2>:1:13' */
  /* '<S2>:1:16' */
  torqueRequest_tmp = sin(2.0 * plant_block_2024_B.ManualSwitch1);
  torqueRequest_tmp_0 = ddtheta_control * 0.158 * 0.072792039999999988;
  torqueRequest_tmp_1 = ddtheta_control_tmp * ddtheta_control_tmp;
  plant_block_2024_B.torqueRequest = (((((((((5.5625E-5 * ddtheta_control +
    0.153 * ddtheta_control) + rtb_Derivative5) + ddtheta_control * 0.158 *
    0.1369) + torqueRequest_tmp_0) - 5.5625E-5 * ddtheta_control *
    torqueRequest_tmp_1) + 5.5625E-5 * rtb_Derivative5 * torqueRequest_tmp *
    plant_block_2024_B.Derivative3) - torqueRequest_tmp_0 * torqueRequest_tmp_1)
    + 0.158 * sin(plant_block_2024_B.ManualSwitch1) * 0.37 *
    ddtheta_control_tmp_0 * 0.2698) + rtb_Derivative5 * 0.158 *
    torqueRequest_tmp * plant_block_2024_B.Derivative3 * 0.072792039999999988) -
    rtb_Sum_b * 0.158 * 0.37 * 0.2698 * ddtheta_control_tmp;

  /* Gain: '<Root>/Gain5' */
  plant_block_2024_B.gimblespeedrequest = plant_block_2024_P.Gain5_Gain *
    plant_block_2024_B.torqueRequest;

  /* TransferFcn: '<Root>/Transfer Fcn3' */
  plant_block_2024_B.TransferFcn3 = plant_block_2024_P.TransferFcn3_C *
    plant_block_2024_X.TransferFcn3_CSTATE;

  /* Derivative: '<Root>/Derivative7' */
  if ((plant_block_2024_DW.TimeStampA_d >= a_tmp) &&
      (plant_block_2024_DW.TimeStampB_b >= a_tmp)) {
    rtb_Sum_b = 0.0;
  } else {
    rtb_Derivative5 = plant_block_2024_DW.TimeStampA_d;
    lastU = &plant_block_2024_DW.LastUAtTimeA_i;
    if (plant_block_2024_DW.TimeStampA_d < plant_block_2024_DW.TimeStampB_b) {
      if (plant_block_2024_DW.TimeStampB_b < a_tmp) {
        rtb_Derivative5 = plant_block_2024_DW.TimeStampB_b;
        lastU = &plant_block_2024_DW.LastUAtTimeB_b;
      }
    } else if (plant_block_2024_DW.TimeStampA_d >= a_tmp) {
      rtb_Derivative5 = plant_block_2024_DW.TimeStampB_b;
      lastU = &plant_block_2024_DW.LastUAtTimeB_b;
    }

    rtb_Sum_b = (plant_block_2024_B.TransferFcn3 - *lastU) / (a_tmp -
      rtb_Derivative5);
  }

  /* Sum: '<Root>/Sum1' */
  plant_block_2024_B.gimbalmotorvoltage = plant_block_2024_B.gimblespeedrequest
    - rtb_Sum_b;
  if (tmp) {
    /* Gain: '<Root>/Gain2' incorporates:
     *  Gain: '<Root>/Gain1'
     */
    tmp_0 = _mm_mul_pd(_mm_set_pd(plant_block_2024_P.Gain2_Gain,
      plant_block_2024_P.Gain1_Gain), _mm_loadu_pd
                       (&plant_block_2024_B.SFunction[1]));
    _mm_storeu_pd(&tmp_1[0], tmp_0);

    /* Gain: '<Root>/Gain1' */
    plant_block_2024_B.Gain1 = tmp_1[0];

    /* Gain: '<Root>/Gain2' */
    plant_block_2024_B.phi = tmp_1[1];

    /* Gain: '<Root>/Gain3' */
    plant_block_2024_B.theta = plant_block_2024_P.Gain3_Gain *
      plant_block_2024_B.SFunction[3];

    /* ToAsyncQueueBlock generated from: '<Root>/Integrator6' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.Integrator6;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3744730983U, time, pData, size);
      }
    }
  }

  /* Integrator: '<Root>/Integrator7' */
  plant_block_2024_B.Integrator7 = plant_block_2024_X.Integrator7_CSTATE;
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Integrator7' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.Integrator7;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1701850675U, time, pData, size);
      }
    }
  }

  /* Integrator: '<Root>/Integrator4' */
  plant_block_2024_B.Integrator4 = plant_block_2024_X.Integrator4_CSTATE;

  /* Integrator: '<Root>/Integrator5' */
  plant_block_2024_B.Integrator5 = plant_block_2024_X.Integrator5_CSTATE;

  /* ManualSwitch: '<Root>/Manual Switch' */
  if (plant_block_2024_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch' */
    plant_block_2024_B.ManualSwitch = plant_block_2024_B.Integrator7;
  } else {
    /* ManualSwitch: '<Root>/Manual Switch' */
    plant_block_2024_B.ManualSwitch = plant_block_2024_B.theta;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Gain: '<S38>/Integral Gain' */
  plant_block_2024_B.IntegralGain = plant_block_2024_P.PIDController_I *
    rtb_Sum_l;

  /* Gain: '<S90>/Integral Gain' */
  plant_block_2024_B.IntegralGain_b = plant_block_2024_P.PIDController1_I *
    plant_block_2024_B.gimbalmotorvoltage;

  /* Gain: '<S96>/Filter Coefficient' incorporates:
   *  Gain: '<S86>/Derivative Gain'
   *  Integrator: '<S88>/Filter'
   *  Sum: '<S88>/SumD'
   */
  plant_block_2024_B.FilterCoefficient_h = (plant_block_2024_P.PIDController1_D *
    plant_block_2024_B.gimbalmotorvoltage - plant_block_2024_X.Filter_CSTATE_g) *
    plant_block_2024_P.PIDController1_N;

  /* MATLAB Function: '<Root>/Plant sim1' */
  plant_block_2024_DW.sfEvent = plant_block_2024_CALL_EVENT;

  /* MATLAB Function 'Plant sim1': '<S5>:1' */
  /* '<S5>:1:3' */
  /* '<S5>:1:4' */
  /* '<S5>:1:7' */
  /* '<S5>:1:8' */
  /* '<S5>:1:9' */
  /* '<S5>:1:11' */
  /* '<S5>:1:12' */
  /* '<S5>:1:13' */
  /* '<S5>:1:14' */
  /* '<S5>:1:15' */
  a_tmp = cos(plant_block_2024_B.Integrator6);
  rtb_Sum_l = sin(2.0 * plant_block_2024_B.Integrator6);
  rtb_Sum_b = sin(plant_block_2024_B.Integrator6);
  rtb_Derivative5 = a_tmp * a_tmp;
  ddtheta_control = plant_block_2024_B.Integrator5 *
    plant_block_2024_B.Integrator5;
  ddtheta_control_tmp = ((((0.0216302 - rtb_Derivative5 * 0.011501142319999998)
    + 0.011501142319999998) - rtb_Derivative5 * 5.5625E-5) + 5.5625E-5) + 0.153;
  ddtheta_control_tmp_0 = (plant_block_2024_B.Integrator5 * 0.158 * rtb_Sum_l *
    plant_block_2024_B.Integrator4 * 0.072792039999999988 + 0.05846 * rtb_Sum_b *
    (plant_block_2024_B.Integrator4 * plant_block_2024_B.Integrator4) * 0.2698)
    + 5.5625E-5 * plant_block_2024_B.Integrator5 * rtb_Sum_l *
    plant_block_2024_B.Integrator4;
  rtb_Derivative5 = -((((0.0 * plant_block_2024_B.Integrator4 - ddtheta_control *
    2.78125E-5 * rtb_Sum_l) + 0.418184604 * rtb_Sum_b) - ddtheta_control * 0.5 *
                       0.072792039999999988 * 0.158 * rtb_Sum_l) +
                      ((ddtheta_control_tmp_0 - plant_block_2024_B.torqueRequest)
                       + plant_block_2024_B.Integrator5) * (0.015772508 * a_tmp)
                      / ddtheta_control_tmp) / (0.024601142319999998 -
    rtb_Derivative5 * 0.00024877200861006391 / ddtheta_control_tmp);

  /* '<S5>:1:17' */
  plant_block_2024_B.ddtheta = -(((ddtheta_control_tmp_0 - 0.37 *
    rtb_Derivative5 * 0.158 * a_tmp * 0.2698) - plant_block_2024_B.torqueRequest)
    + plant_block_2024_B.Integrator5) / ddtheta_control_tmp;
  plant_block_2024_B.ddphi = rtb_Derivative5;

  /* Sum: '<S102>/Sum' incorporates:
   *  Gain: '<S98>/Proportional Gain'
   *  Integrator: '<S93>/Integrator'
   */
  rtb_Sum_b = (plant_block_2024_P.PIDController1_P *
               plant_block_2024_B.gimbalmotorvoltage +
               plant_block_2024_X.Integrator_CSTATE_d) +
    plant_block_2024_B.FilterCoefficient_h;

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_Sum_b > plant_block_2024_P.Saturation1_UpperSat) {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_2024_B.Saturation1 = plant_block_2024_P.Saturation1_UpperSat;
  } else if (rtb_Sum_b < plant_block_2024_P.Saturation1_LowerSat) {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_2024_B.Saturation1 = plant_block_2024_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_2024_B.Saturation1 = rtb_Sum_b;
  }

  /* End of Saturate: '<Root>/Saturation1' */
}

/* Model update function */
void plant_block_2024_update(void)
{
  real_T *lastU;

  /* Update for Derivative: '<Root>/Derivative6' */
  if (plant_block_2024_DW.TimeStampA == (rtInf)) {
    plant_block_2024_DW.TimeStampA = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA;
  } else if (plant_block_2024_DW.TimeStampB == (rtInf)) {
    plant_block_2024_DW.TimeStampB = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB;
  } else if (plant_block_2024_DW.TimeStampA < plant_block_2024_DW.TimeStampB) {
    plant_block_2024_DW.TimeStampA = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA;
  } else {
    plant_block_2024_DW.TimeStampB = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB;
  }

  *lastU = plant_block_2024_B.Gain;

  /* End of Update for Derivative: '<Root>/Derivative6' */

  /* Update for Derivative: '<Root>/Derivative3' */
  if (plant_block_2024_DW.TimeStampA_m == (rtInf)) {
    plant_block_2024_DW.TimeStampA_m = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_a;
  } else if (plant_block_2024_DW.TimeStampB_h == (rtInf)) {
    plant_block_2024_DW.TimeStampB_h = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_o;
  } else if (plant_block_2024_DW.TimeStampA_m < plant_block_2024_DW.TimeStampB_h)
  {
    plant_block_2024_DW.TimeStampA_m = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_a;
  } else {
    plant_block_2024_DW.TimeStampB_h = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_o;
  }

  *lastU = plant_block_2024_B.ManualSwitch1;

  /* End of Update for Derivative: '<Root>/Derivative3' */

  /* Update for Derivative: '<Root>/Derivative4' */
  if (plant_block_2024_DW.TimeStampA_l == (rtInf)) {
    plant_block_2024_DW.TimeStampA_l = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_e;
  } else if (plant_block_2024_DW.TimeStampB_n == (rtInf)) {
    plant_block_2024_DW.TimeStampB_n = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_i;
  } else if (plant_block_2024_DW.TimeStampA_l < plant_block_2024_DW.TimeStampB_n)
  {
    plant_block_2024_DW.TimeStampA_l = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_e;
  } else {
    plant_block_2024_DW.TimeStampB_n = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_i;
  }

  *lastU = plant_block_2024_B.Derivative3;

  /* End of Update for Derivative: '<Root>/Derivative4' */

  /* Update for Derivative: '<Root>/Derivative5' */
  if (plant_block_2024_DW.TimeStampA_i == (rtInf)) {
    plant_block_2024_DW.TimeStampA_i = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_at;
  } else if (plant_block_2024_DW.TimeStampB_k == (rtInf)) {
    plant_block_2024_DW.TimeStampB_k = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_f;
  } else if (plant_block_2024_DW.TimeStampA_i < plant_block_2024_DW.TimeStampB_k)
  {
    plant_block_2024_DW.TimeStampA_i = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_at;
  } else {
    plant_block_2024_DW.TimeStampB_k = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_f;
  }

  *lastU = plant_block_2024_B.TransferFcn2;

  /* End of Update for Derivative: '<Root>/Derivative5' */

  /* Update for Derivative: '<Root>/Derivative7' */
  if (plant_block_2024_DW.TimeStampA_d == (rtInf)) {
    plant_block_2024_DW.TimeStampA_d = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_i;
  } else if (plant_block_2024_DW.TimeStampB_b == (rtInf)) {
    plant_block_2024_DW.TimeStampB_b = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_b;
  } else if (plant_block_2024_DW.TimeStampA_d < plant_block_2024_DW.TimeStampB_b)
  {
    plant_block_2024_DW.TimeStampA_d = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_i;
  } else {
    plant_block_2024_DW.TimeStampB_b = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_b;
  }

  *lastU = plant_block_2024_B.TransferFcn3;

  /* End of Update for Derivative: '<Root>/Derivative7' */
  if (rtmIsMajorTimeStep(plant_block_2024_M)) {
    rt_ertODEUpdateContinuousStates(&plant_block_2024_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++plant_block_2024_M->Timing.clockTick0)) {
    ++plant_block_2024_M->Timing.clockTickH0;
  }

  plant_block_2024_M->Timing.t[0] = rtsiGetSolverStopTime
    (&plant_block_2024_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.008s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++plant_block_2024_M->Timing.clockTick1)) {
      ++plant_block_2024_M->Timing.clockTickH1;
    }

    plant_block_2024_M->Timing.t[1] = plant_block_2024_M->Timing.clockTick1 *
      plant_block_2024_M->Timing.stepSize1 +
      plant_block_2024_M->Timing.clockTickH1 *
      plant_block_2024_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void plant_block_2024_derivatives(void)
{
  XDot_plant_block_2024_T *_rtXdot;
  _rtXdot = ((XDot_plant_block_2024_T *) plant_block_2024_M->derivs);

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = plant_block_2024_P.TransferFcn_A *
    plant_block_2024_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += plant_block_2024_B.Gain6;

  /* Derivatives for Integrator: '<S41>/Integrator' */
  _rtXdot->Integrator_CSTATE = plant_block_2024_B.IntegralGain;

  /* Derivatives for Integrator: '<S36>/Filter' */
  _rtXdot->Filter_CSTATE = plant_block_2024_B.FilterCoefficient;

  /* Derivatives for Integrator: '<Root>/Integrator6' */
  _rtXdot->Integrator6_CSTATE = plant_block_2024_B.Integrator4;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = plant_block_2024_P.TransferFcn1_A *
    plant_block_2024_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += plant_block_2024_B.phi;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = plant_block_2024_P.TransferFcn2_A *
    plant_block_2024_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += plant_block_2024_B.ManualSwitch;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE = plant_block_2024_P.TransferFcn3_A *
    plant_block_2024_X.TransferFcn3_CSTATE;
  _rtXdot->TransferFcn3_CSTATE += plant_block_2024_B.Gain1;

  /* Derivatives for Integrator: '<Root>/Integrator7' */
  _rtXdot->Integrator7_CSTATE = plant_block_2024_B.Integrator5;

  /* Derivatives for Integrator: '<Root>/Integrator4' */
  _rtXdot->Integrator4_CSTATE = plant_block_2024_B.ddphi;

  /* Derivatives for Integrator: '<Root>/Integrator5' */
  _rtXdot->Integrator5_CSTATE = plant_block_2024_B.ddtheta;

  /* Derivatives for Integrator: '<S88>/Filter' */
  _rtXdot->Filter_CSTATE_g = plant_block_2024_B.FilterCoefficient_h;

  /* Derivatives for Integrator: '<S93>/Integrator' */
  _rtXdot->Integrator_CSTATE_d = plant_block_2024_B.IntegralGain_b;
}

/* Model initialize function */
void plant_block_2024_initialize(void)
{
  /* Start for S-Function (ECPDSPDriver): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (ECPDSPDriver) */
  {
    SimStruct *rts = plant_block_2024_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Derivative: '<Root>/Derivative6' */
  plant_block_2024_DW.TimeStampA = (rtInf);
  plant_block_2024_DW.TimeStampB = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn' */
  plant_block_2024_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S41>/Integrator' */
  plant_block_2024_X.Integrator_CSTATE =
    plant_block_2024_P.PIDController_InitialConditionForIntegrator;

  /* InitializeConditions for Integrator: '<S36>/Filter' */
  plant_block_2024_X.Filter_CSTATE =
    plant_block_2024_P.PIDController_InitialConditionForFilter;

  /* InitializeConditions for Integrator: '<Root>/Integrator6' */
  plant_block_2024_X.Integrator6_CSTATE = plant_block_2024_P.Integrator6_IC;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn1' */
  plant_block_2024_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative3' */
  plant_block_2024_DW.TimeStampA_m = (rtInf);
  plant_block_2024_DW.TimeStampB_h = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative4' */
  plant_block_2024_DW.TimeStampA_l = (rtInf);
  plant_block_2024_DW.TimeStampB_n = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn2' */
  plant_block_2024_X.TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative5' */
  plant_block_2024_DW.TimeStampA_i = (rtInf);
  plant_block_2024_DW.TimeStampB_k = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn3' */
  plant_block_2024_X.TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative7' */
  plant_block_2024_DW.TimeStampA_d = (rtInf);
  plant_block_2024_DW.TimeStampB_b = (rtInf);

  /* InitializeConditions for Integrator: '<Root>/Integrator7' */
  plant_block_2024_X.Integrator7_CSTATE = plant_block_2024_P.Integrator7_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator4' */
  plant_block_2024_X.Integrator4_CSTATE = plant_block_2024_P.Integrator4_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator5' */
  plant_block_2024_X.Integrator5_CSTATE = plant_block_2024_P.Integrator5_IC;

  /* InitializeConditions for Integrator: '<S88>/Filter' */
  plant_block_2024_X.Filter_CSTATE_g =
    plant_block_2024_P.PIDController1_InitialConditionForFilter;

  /* InitializeConditions for Integrator: '<S93>/Integrator' */
  plant_block_2024_X.Integrator_CSTATE_d =
    plant_block_2024_P.PIDController1_InitialConditionForIntegrator;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function3' */
  plant_block_2024_DW.doneDoubleBufferReInit_m = false;
  plant_block_2024_DW.sfEvent_kx = plant_block_2024_CALL_EVENT;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function4' */
  plant_block_2024_DW.doneDoubleBufferReInit_o = false;
  plant_block_2024_DW.sfEvent_k = plant_block_2024_CALL_EVENT;

  /* SystemInitialize for MATLAB Function: '<Root>/Plant sim1' */
  plant_block_2024_DW.doneDoubleBufferReInit = false;
  plant_block_2024_DW.sfEvent = plant_block_2024_CALL_EVENT;
}

/* Model terminate function */
void plant_block_2024_terminate(void)
{
  /* Terminate for S-Function (ECPDSPDriver): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (ECPDSPDriver) */
  {
    SimStruct *rts = plant_block_2024_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  plant_block_2024_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  plant_block_2024_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  plant_block_2024_initialize();
}

void MdlTerminate(void)
{
  plant_block_2024_terminate();
}

/* Registration function */
RT_MODEL_plant_block_2024_T *plant_block_2024(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)plant_block_2024_M, 0,
                sizeof(RT_MODEL_plant_block_2024_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&plant_block_2024_M->solverInfo,
                          &plant_block_2024_M->Timing.simTimeStep);
    rtsiSetTPtr(&plant_block_2024_M->solverInfo, &rtmGetTPtr(plant_block_2024_M));
    rtsiSetStepSizePtr(&plant_block_2024_M->solverInfo,
                       &plant_block_2024_M->Timing.stepSize0);
    rtsiSetdXPtr(&plant_block_2024_M->solverInfo, &plant_block_2024_M->derivs);
    rtsiSetContStatesPtr(&plant_block_2024_M->solverInfo, (real_T **)
                         &plant_block_2024_M->contStates);
    rtsiSetNumContStatesPtr(&plant_block_2024_M->solverInfo,
      &plant_block_2024_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&plant_block_2024_M->solverInfo,
      &plant_block_2024_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&plant_block_2024_M->solverInfo,
      &plant_block_2024_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&plant_block_2024_M->solverInfo,
      &plant_block_2024_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&plant_block_2024_M->solverInfo, (boolean_T**)
      &plant_block_2024_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&plant_block_2024_M->solverInfo, (&rtmGetErrorStatus
      (plant_block_2024_M)));
    rtsiSetRTModelPtr(&plant_block_2024_M->solverInfo, plant_block_2024_M);
  }

  rtsiSetSimTimeStep(&plant_block_2024_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&plant_block_2024_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&plant_block_2024_M->solverInfo, false);
  plant_block_2024_M->intgData.f[0] = plant_block_2024_M->odeF[0];
  plant_block_2024_M->contStates = ((real_T *) &plant_block_2024_X);
  plant_block_2024_M->contStateDisabled = ((boolean_T *) &plant_block_2024_XDis);
  plant_block_2024_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&plant_block_2024_M->solverInfo, (void *)
                    &plant_block_2024_M->intgData);
  rtsiSetSolverName(&plant_block_2024_M->solverInfo,"ode1");
  plant_block_2024_M->solverInfoPtr = (&plant_block_2024_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = plant_block_2024_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    plant_block_2024_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    plant_block_2024_M->Timing.sampleTimes =
      (&plant_block_2024_M->Timing.sampleTimesArray[0]);
    plant_block_2024_M->Timing.offsetTimes =
      (&plant_block_2024_M->Timing.offsetTimesArray[0]);

    /* task periods */
    plant_block_2024_M->Timing.sampleTimes[0] = (0.0);
    plant_block_2024_M->Timing.sampleTimes[1] = (0.008);

    /* task offsets */
    plant_block_2024_M->Timing.offsetTimes[0] = (0.0);
    plant_block_2024_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(plant_block_2024_M, &plant_block_2024_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = plant_block_2024_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    plant_block_2024_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(plant_block_2024_M, 300.0);
  plant_block_2024_M->Timing.stepSize0 = 0.008;
  plant_block_2024_M->Timing.stepSize1 = 0.008;

  /* External mode info */
  plant_block_2024_M->Sizes.checksums[0] = (1804039882U);
  plant_block_2024_M->Sizes.checksums[1] = (3739924913U);
  plant_block_2024_M->Sizes.checksums[2] = (3406658960U);
  plant_block_2024_M->Sizes.checksums[3] = (223531076U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    plant_block_2024_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(plant_block_2024_M->extModeInfo,
      &plant_block_2024_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(plant_block_2024_M->extModeInfo,
                        plant_block_2024_M->Sizes.checksums);
    rteiSetTPtr(plant_block_2024_M->extModeInfo, rtmGetTPtr(plant_block_2024_M));
  }

  plant_block_2024_M->solverInfoPtr = (&plant_block_2024_M->solverInfo);
  plant_block_2024_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&plant_block_2024_M->solverInfo, 0.008);
  rtsiSetSolverMode(&plant_block_2024_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  plant_block_2024_M->blockIO = ((void *) &plant_block_2024_B);

  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      plant_block_2024_B.SFunction[i] = 0.0;
    }

    plant_block_2024_B.Gain = 0.0;
    plant_block_2024_B.Gain6 = 0.0;
    plant_block_2024_B.FilterCoefficient = 0.0;
    plant_block_2024_B.Saturation = 0.0;
    plant_block_2024_B.Integrator6 = 0.0;
    plant_block_2024_B.ManualSwitch1 = 0.0;
    plant_block_2024_B.Derivative3 = 0.0;
    plant_block_2024_B.TransferFcn2 = 0.0;
    plant_block_2024_B.gimblespeedrequest = 0.0;
    plant_block_2024_B.TransferFcn3 = 0.0;
    plant_block_2024_B.gimbalmotorvoltage = 0.0;
    plant_block_2024_B.Gain1 = 0.0;
    plant_block_2024_B.phi = 0.0;
    plant_block_2024_B.theta = 0.0;
    plant_block_2024_B.Integrator7 = 0.0;
    plant_block_2024_B.Integrator4 = 0.0;
    plant_block_2024_B.Integrator5 = 0.0;
    plant_block_2024_B.ManualSwitch = 0.0;
    plant_block_2024_B.IntegralGain = 0.0;
    plant_block_2024_B.IntegralGain_b = 0.0;
    plant_block_2024_B.FilterCoefficient_h = 0.0;
    plant_block_2024_B.Saturation1 = 0.0;
    plant_block_2024_B.ddtheta = 0.0;
    plant_block_2024_B.ddphi = 0.0;
    plant_block_2024_B.torqueRequest = 0.0;
  }

  /* parameters */
  plant_block_2024_M->defaultParam = ((real_T *)&plant_block_2024_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &plant_block_2024_X;
    plant_block_2024_M->contStates = (x);
    (void) memset((void *)&plant_block_2024_X, 0,
                  sizeof(X_plant_block_2024_T));
  }

  /* disabled states */
  {
    boolean_T *xdis = (boolean_T *) &plant_block_2024_XDis;
    plant_block_2024_M->contStateDisabled = (xdis);
    (void) memset((void *)&plant_block_2024_XDis, 0,
                  sizeof(XDis_plant_block_2024_T));
  }

  /* states (dwork) */
  plant_block_2024_M->dwork = ((void *) &plant_block_2024_DW);
  (void) memset((void *)&plant_block_2024_DW, 0,
                sizeof(DW_plant_block_2024_T));
  plant_block_2024_DW.TimeStampA = 0.0;
  plant_block_2024_DW.LastUAtTimeA = 0.0;
  plant_block_2024_DW.TimeStampB = 0.0;
  plant_block_2024_DW.LastUAtTimeB = 0.0;
  plant_block_2024_DW.TimeStampA_m = 0.0;
  plant_block_2024_DW.LastUAtTimeA_a = 0.0;
  plant_block_2024_DW.TimeStampB_h = 0.0;
  plant_block_2024_DW.LastUAtTimeB_o = 0.0;
  plant_block_2024_DW.TimeStampA_l = 0.0;
  plant_block_2024_DW.LastUAtTimeA_e = 0.0;
  plant_block_2024_DW.TimeStampB_n = 0.0;
  plant_block_2024_DW.LastUAtTimeB_i = 0.0;
  plant_block_2024_DW.TimeStampA_i = 0.0;
  plant_block_2024_DW.LastUAtTimeA_at = 0.0;
  plant_block_2024_DW.TimeStampB_k = 0.0;
  plant_block_2024_DW.LastUAtTimeB_f = 0.0;
  plant_block_2024_DW.TimeStampA_d = 0.0;
  plant_block_2024_DW.LastUAtTimeA_i = 0.0;
  plant_block_2024_DW.TimeStampB_b = 0.0;
  plant_block_2024_DW.LastUAtTimeB_b = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    plant_block_2024_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 23;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &plant_block_2024_M->NonInlinedSFcns.sfcnInfo;
    plant_block_2024_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(plant_block_2024_M)));
    plant_block_2024_M->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &plant_block_2024_M->Sizes.numSampTimes);
    plant_block_2024_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (plant_block_2024_M)[0]);
    plant_block_2024_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr
      (plant_block_2024_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,plant_block_2024_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(plant_block_2024_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(plant_block_2024_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (plant_block_2024_M));
    rtssSetStepSizePtr(sfcnInfo, &plant_block_2024_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(plant_block_2024_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &plant_block_2024_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &plant_block_2024_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &plant_block_2024_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &plant_block_2024_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &plant_block_2024_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &plant_block_2024_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &plant_block_2024_M->solverInfoPtr);
  }

  plant_block_2024_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&plant_block_2024_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  1*sizeof(SimStruct));
    plant_block_2024_M->childSfunctions =
      (&plant_block_2024_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    plant_block_2024_M->childSfunctions[0] =
      (&plant_block_2024_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: plant_block_2024/<S6>/S-Function (ECPDSPDriver) */
    {
      SimStruct *rts = plant_block_2024_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = plant_block_2024_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = plant_block_2024_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = plant_block_2024_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &plant_block_2024_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_block_2024_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_block_2024_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &plant_block_2024_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &plant_block_2024_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &plant_block_2024_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &plant_block_2024_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &plant_block_2024_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &plant_block_2024_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &plant_block_2024_B.Saturation;
          sfcnUPtrs[1] = &plant_block_2024_B.Saturation1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 2);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 5);
          ssSetOutputPortSignal(rts, 0, ((real_T *) plant_block_2024_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "plant_block_2024/Windows 10 ECPDSP Driver/S-Function");
      ssSetRTModel(rts,plant_block_2024_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_block_2024_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)plant_block_2024_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)plant_block_2024_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)plant_block_2024_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)plant_block_2024_P.SFunction_P4_Size);
      }

      /* registration */
      ECPDSPDriver(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.008);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  plant_block_2024_M->Sizes.numContStates = (12);/* Number of continuous states */
  plant_block_2024_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  plant_block_2024_M->Sizes.numY = (0);/* Number of model outputs */
  plant_block_2024_M->Sizes.numU = (0);/* Number of model inputs */
  plant_block_2024_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  plant_block_2024_M->Sizes.numSampTimes = (2);/* Number of sample times */
  plant_block_2024_M->Sizes.numBlocks = (54);/* Number of blocks */
  plant_block_2024_M->Sizes.numBlockIO = (27);/* Number of block outputs */
  plant_block_2024_M->Sizes.numBlockPrms = (54);/* Sum of parameter "widths" */
  return plant_block_2024_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
