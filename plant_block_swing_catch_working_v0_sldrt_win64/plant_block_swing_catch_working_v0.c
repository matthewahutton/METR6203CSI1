/*
 * plant_block_swing_catch_working_v0.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "plant_block_swing_catch_working_v0".
 *
 * Model version              : 1.236
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Wed Sep 10 23:06:14 2025
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "plant_block_swing_catch_working_v0.h"
#include "rtwtypes.h"
#include <math.h>
#include "plant_block_swing_catch_working_v0_private.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#include <string.h>
#include <float.h>
#include "plant_block_swing_catch_working_v0_dt.h"

/* Named constants for Chart: '<Root>/Stable pendulum' */
#define plant_block_swing_catch_working_v0_CALL_EVENT (-1)
#define plant_block_swing_catch_working_v0_IN_Gimble (1U)
#define plant_block_swing_catch_working_v0_IN_Gimble_go (2U)
#define plant_block_swing_catch_working_v0_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S6>/State Switch v1' */
#define plant_block_swing_catch_working_v0_IN_Catch (1U)
#define plant_block_swing_catch_working_v0_IN_ReSwing (2U)
#define plant_block_swing_catch_working_v0_IN_Rest (3U)
#define plant_block_swing_catch_working_v0_IN_Swing (4U)

/* Named constants for Chart: '<Root>/Steady Catch' */
#define plant_block_swing_catch_working_v0_IN_En_Off (1U)
#define plant_block_swing_catch_working_v0_IN_En_On (2U)

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.008, 0.0,
};

/* Block signals (default storage) */
B_plant_block_swing_catch_working_v0_T plant_block_swing_catch_working_v0_B;

/* Continuous states */
X_plant_block_swing_catch_working_v0_T plant_block_swing_catch_working_v0_X;

/* Disabled State Vector */
XDis_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_XDis;

/* Block states (default storage) */
DW_plant_block_swing_catch_working_v0_T plant_block_swing_catch_working_v0_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_PrevZCX;

/* Real-time model */
static RT_MODEL_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_M_;
RT_MODEL_plant_block_swing_catch_working_v0_T *const
  plant_block_swing_catch_working_v0_M = &plant_block_swing_catch_working_v0_M_;

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
  int_T nXc = 24;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  plant_block_swing_catch_working_v0_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model output function */
void plant_block_swing_catch_working_v0_output(void)
{
  real_T rtb_Derivative;
  real_T rtb_Sum_c;
  real_T tmp;
  real_T u0;
  real_T *lastU;
  boolean_T tmp_0;
  boolean_T tmp_1;
  ZCEventType zcEvent;
  if (rtmIsMajorTimeStep(plant_block_swing_catch_working_v0_M)) {
    /* set solver stop time */
    if (!(plant_block_swing_catch_working_v0_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&plant_block_swing_catch_working_v0_M->solverInfo,
                            ((plant_block_swing_catch_working_v0_M->Timing.clockTickH0
        + 1) * plant_block_swing_catch_working_v0_M->Timing.stepSize0 *
        4294967296.0));
    } else {
      rtsiSetSolverStopTime(&plant_block_swing_catch_working_v0_M->solverInfo,
                            ((plant_block_swing_catch_working_v0_M->Timing.clockTick0
        + 1) * plant_block_swing_catch_working_v0_M->Timing.stepSize0 +
        plant_block_swing_catch_working_v0_M->Timing.clockTickH0 *
        plant_block_swing_catch_working_v0_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(plant_block_swing_catch_working_v0_M)) {
    plant_block_swing_catch_working_v0_M->Timing.t[0] = rtsiGetT
      (&plant_block_swing_catch_working_v0_M->solverInfo);
  }

  tmp_0 = rtmIsMajorTimeStep(plant_block_swing_catch_working_v0_M);
  if (tmp_0) {
    /* S-Function (ECPDSPDriver): '<S1>/S-Function' */

    /* Level2 S-Function Block: '<S1>/S-Function' (ECPDSPDriver) */
    {
      SimStruct *rts = plant_block_swing_catch_working_v0_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<Root>/Gain1' */
    plant_block_swing_catch_working_v0_B.theta =
      plant_block_swing_catch_working_v0_P.Gain1_Gain *
      plant_block_swing_catch_working_v0_B.SFunction[2];

    /* Math: '<S6>/theta correction1' incorporates:
     *  Abs: '<S6>/Abs'
     *  Constant: '<S6>/Constant4'
     */
    plant_block_swing_catch_working_v0_B.thetacorrection1 = rt_modd_snf(fabs
      (plant_block_swing_catch_working_v0_B.theta),
      plant_block_swing_catch_working_v0_P.Constant4_Value);
  }

  /* Derivative: '<Root>/Derivative1' incorporates:
   *  Derivative: '<Root>/Derivative2'
   *  Derivative: '<Root>/Derivative4'
   *  Derivative: '<Root>/Derivative5'
   *  Derivative: '<Root>/Derivative6'
   *  Derivative: '<S10>/Derivative'
   *  Derivative: '<S2>/Derivative'
   *  Derivative: '<S3>/Derivative'
   */
  tmp = plant_block_swing_catch_working_v0_M->Timing.t[0];
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB >= tmp)) {
    /* Derivative: '<Root>/Derivative1' */
    plant_block_swing_catch_working_v0_B.theta_dot = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA <
        plant_block_swing_catch_working_v0_DW.TimeStampB) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB;
    }

    /* Derivative: '<Root>/Derivative1' */
    plant_block_swing_catch_working_v0_B.theta_dot =
      (plant_block_swing_catch_working_v0_B.theta - *lastU) / (tmp -
      rtb_Derivative);
  }

  /* End of Derivative: '<Root>/Derivative1' */

  /* Abs: '<S6>/Abs1' */
  plant_block_swing_catch_working_v0_B.Abs1 = fabs
    (plant_block_swing_catch_working_v0_B.theta_dot);
  if (tmp_0) {
    /* Chart: '<S6>/State Switch v1' */
    /* Gateway: State Selection/State Switch v1 */
    plant_block_swing_catch_working_v0_DW.sfEvent_a =
      plant_block_swing_catch_working_v0_CALL_EVENT;

    /* During: State Selection/State Switch v1 */
    if (plant_block_swing_catch_working_v0_DW.is_active_c3_plant_block_swing_catch_working_v0
        == 0) {
      /* Entry: State Selection/State Switch v1 */
      plant_block_swing_catch_working_v0_DW.is_active_c3_plant_block_swing_catch_working_v0
        = 1U;

      /* Entry Internal: State Selection/State Switch v1 */
      /* Transition: '<S124>:2' */
      plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
        = plant_block_swing_catch_working_v0_IN_Rest;

      /* Entry 'Rest': '<S124>:1' */
      plant_block_swing_catch_working_v0_B.x = 1.0;
      plant_block_swing_catch_working_v0_B.y = 0.0;
      plant_block_swing_catch_working_v0_B.z = 0.0;
      plant_block_swing_catch_working_v0_B.r = 0.0;
    } else {
      switch
        (plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0)
      {
       case plant_block_swing_catch_working_v0_IN_Catch:
        plant_block_swing_catch_working_v0_B.x = 0.0;
        plant_block_swing_catch_working_v0_B.y = 0.0;
        plant_block_swing_catch_working_v0_B.z = 1.0;
        plant_block_swing_catch_working_v0_B.r = 0.0;

        /* During 'Catch': '<S124>:6' */
        if (((plant_block_swing_catch_working_v0_B.Abs1 > 6.0) &&
             (plant_block_swing_catch_working_v0_B.thetacorrection1 >
              2.748893571891069) &&
             (plant_block_swing_catch_working_v0_B.thetacorrection1 <
              3.5342917352885173)) ||
            ((plant_block_swing_catch_working_v0_B.thetacorrection1 < 2.826) ||
             (plant_block_swing_catch_working_v0_B.thetacorrection1 > 3.454))) {
          /* Transition: '<S124>:34' */
          /* Transition: '<S124>:7' */
          plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
            = plant_block_swing_catch_working_v0_IN_ReSwing;

          /* Entry 'ReSwing': '<S124>:33' */
          plant_block_swing_catch_working_v0_B.x = 0.0;
          plant_block_swing_catch_working_v0_B.y = 0.0;
          plant_block_swing_catch_working_v0_B.z = 0.0;
          plant_block_swing_catch_working_v0_B.r = 1.0;
        }
        break;

       case plant_block_swing_catch_working_v0_IN_ReSwing:
        plant_block_swing_catch_working_v0_B.x = 0.0;
        plant_block_swing_catch_working_v0_B.y = 0.0;
        plant_block_swing_catch_working_v0_B.z = 0.0;
        plant_block_swing_catch_working_v0_B.r = 1.0;

        /* During 'ReSwing': '<S124>:33' */
        if ((plant_block_swing_catch_working_v0_B.Abs1 < 2.0) &&
            ((plant_block_swing_catch_working_v0_B.thetacorrection1 <
              0.78539816339744828) ||
             (plant_block_swing_catch_working_v0_B.thetacorrection1 >
              5.497787143782138))) {
          /* Transition: '<S124>:35' */
          plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
            = plant_block_swing_catch_working_v0_IN_Swing;

          /* Entry 'Swing': '<S124>:5' */
          plant_block_swing_catch_working_v0_B.x = 0.0;
          plant_block_swing_catch_working_v0_B.y = 1.0;
          plant_block_swing_catch_working_v0_B.z = 0.0;
          plant_block_swing_catch_working_v0_B.r = 0.0;
        }
        break;

       case plant_block_swing_catch_working_v0_IN_Rest:
        plant_block_swing_catch_working_v0_B.x = 1.0;
        plant_block_swing_catch_working_v0_B.y = 0.0;
        plant_block_swing_catch_working_v0_B.z = 0.0;
        plant_block_swing_catch_working_v0_B.r = 0.0;

        /* During 'Rest': '<S124>:1' */
        if ((plant_block_swing_catch_working_v0_B.thetacorrection1 > 0.12) &&
            (plant_block_swing_catch_working_v0_B.Abs1 > 0.12)) {
          /* Transition: '<S124>:13' */
          plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
            = plant_block_swing_catch_working_v0_IN_Swing;

          /* Entry 'Swing': '<S124>:5' */
          plant_block_swing_catch_working_v0_B.x = 0.0;
          plant_block_swing_catch_working_v0_B.y = 1.0;
          plant_block_swing_catch_working_v0_B.z = 0.0;
          plant_block_swing_catch_working_v0_B.r = 0.0;
        }
        break;

       default:
        plant_block_swing_catch_working_v0_B.x = 0.0;
        plant_block_swing_catch_working_v0_B.y = 1.0;
        plant_block_swing_catch_working_v0_B.z = 0.0;
        plant_block_swing_catch_working_v0_B.r = 0.0;

        /* During 'Swing': '<S124>:5' */
        if ((plant_block_swing_catch_working_v0_B.thetacorrection1 > 2.826) &&
            (plant_block_swing_catch_working_v0_B.thetacorrection1 < 3.454)) {
          /* Transition: '<S124>:8' */
          plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
            = plant_block_swing_catch_working_v0_IN_Catch;

          /* Entry 'Catch': '<S124>:6' */
          plant_block_swing_catch_working_v0_B.x = 0.0;
          plant_block_swing_catch_working_v0_B.y = 0.0;
          plant_block_swing_catch_working_v0_B.z = 1.0;
          plant_block_swing_catch_working_v0_B.r = 0.0;
        } else if ((plant_block_swing_catch_working_v0_B.thetacorrection1 < 0.12)
                   && (plant_block_swing_catch_working_v0_B.Abs1 < 0.12)) {
          /* Transition: '<S124>:12' */
          plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
            = plant_block_swing_catch_working_v0_IN_Rest;

          /* Entry 'Rest': '<S124>:1' */
          plant_block_swing_catch_working_v0_B.x = 1.0;
          plant_block_swing_catch_working_v0_B.y = 0.0;
          plant_block_swing_catch_working_v0_B.z = 0.0;
          plant_block_swing_catch_working_v0_B.r = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S6>/State Switch v1' */
  }

  /* TransferFcn: '<Root>/Low Pass Filter Fly Wheel4' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel4 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel4 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel4_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel4_CSTATE;

  /* Sum: '<Root>/Add2' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Math: '<Root>/theta correction2'
   */
  plant_block_swing_catch_working_v0_B.Add2 = rt_modd_snf
    (plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel4,
     plant_block_swing_catch_working_v0_P.Constant1_Value) -
    plant_block_swing_catch_working_v0_P.Constant2_Value;
  if (tmp_0) {
  }

  /* TransferFcn: '<Root>/Low Pass Filter Gimble Velocity' */
  plant_block_swing_catch_working_v0_B.ActualGimbleVelocity = 0.0;
  plant_block_swing_catch_working_v0_B.ActualGimbleVelocity +=
    plant_block_swing_catch_working_v0_P.LowPassFilterGimbleVelocity_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity_CSTATE;

  /* TransferFcn: '<Root>/Low Pass Filter Fly Wheel6' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel6 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel6 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel6_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel6_CSTATE;

  /* Gain: '<S125>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain =
    plant_block_swing_catch_working_v0_P.SliderGain_gain *
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel6;

  /* TransferFcn: '<Root>/Low Pass Filter Fly Wheel5' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel5 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel5 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel5_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel5_CSTATE;

  /* Derivative: '<Root>/Derivative4' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_n >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_i >= tmp)) {
    rtb_Sum_c = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_n;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_p;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_n <
        plant_block_swing_catch_working_v0_DW.TimeStampB_i) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_i < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_i;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_l;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_n >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_i;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_l;
    }

    rtb_Sum_c = (plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel5 -
                 *lastU) / (tmp - rtb_Derivative);
  }

  /* Gain: '<S126>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_b =
    plant_block_swing_catch_working_v0_P.SliderGain1_gain * rtb_Sum_c;

  /* Gain: '<S127>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_d =
    plant_block_swing_catch_working_v0_P.SliderGain2_gain *
    plant_block_swing_catch_working_v0_B.Add2;

  /* TransferFcn: '<Root>/Low Pass Filter Fly Wheel3' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel3 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel3 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel3_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel3_CSTATE;

  /* Derivative: '<Root>/Derivative5' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_b >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_f >= tmp)) {
    rtb_Sum_c = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_b;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_b;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_b <
        plant_block_swing_catch_working_v0_DW.TimeStampB_f) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_f < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_f;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_p;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_b >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_f;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_p;
    }

    rtb_Sum_c = (plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel3 -
                 *lastU) / (tmp - rtb_Derivative);
  }

  /* Gain: '<S128>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_h =
    plant_block_swing_catch_working_v0_P.SliderGain3_gain * rtb_Sum_c;

  /* Product: '<Root>/Product2' incorporates:
   *  Gain: '<S8>/Gain4'
   *  Sum: '<S8>/Add'
   */
  plant_block_swing_catch_working_v0_B.Product2 =
    (((plant_block_swing_catch_working_v0_B.SliderGain +
       plant_block_swing_catch_working_v0_B.SliderGain_b) +
      plant_block_swing_catch_working_v0_B.SliderGain_d) +
     plant_block_swing_catch_working_v0_B.SliderGain_h) *
    plant_block_swing_catch_working_v0_P.Gain4_Gain *
    plant_block_swing_catch_working_v0_B.z;
  if (tmp_0) {
  }

  /* TransferFcn: '<S2>/Low Pass Filter Fly Wheel' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel_CSTATE;

  /* Sum: '<S2>/Sum' incorporates:
   *  Constant: '<S2>/Desired rpm'
   */
  rtb_Sum_c = plant_block_swing_catch_working_v0_P.Desiredrpm_Value -
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel;

  /* Gain: '<S49>/Filter Coefficient' incorporates:
   *  Gain: '<S39>/Derivative Gain'
   *  Integrator: '<S41>/Filter'
   *  Sum: '<S41>/SumD'
   */
  plant_block_swing_catch_working_v0_B.FilterCoefficient =
    (plant_block_swing_catch_working_v0_P.PIDController_D * rtb_Sum_c -
     plant_block_swing_catch_working_v0_X.Filter_CSTATE) *
    plant_block_swing_catch_working_v0_P.PIDController_N;

  /* Sum: '<S55>/Sum' incorporates:
   *  Gain: '<S51>/Proportional Gain'
   *  Integrator: '<S46>/Integrator'
   */
  u0 = (plant_block_swing_catch_working_v0_P.PIDController_P * rtb_Sum_c +
        plant_block_swing_catch_working_v0_X.Integrator_CSTATE) +
    plant_block_swing_catch_working_v0_B.FilterCoefficient;

  /* Saturate: '<S2>/Saturation' */
  if (u0 > plant_block_swing_catch_working_v0_P.Saturation_UpperSat) {
    /* Saturate: '<S2>/Saturation' */
    plant_block_swing_catch_working_v0_B.Saturation =
      plant_block_swing_catch_working_v0_P.Saturation_UpperSat;
  } else if (u0 < plant_block_swing_catch_working_v0_P.Saturation_LowerSat) {
    /* Saturate: '<S2>/Saturation' */
    plant_block_swing_catch_working_v0_B.Saturation =
      plant_block_swing_catch_working_v0_P.Saturation_LowerSat;
  } else {
    /* Saturate: '<S2>/Saturation' */
    plant_block_swing_catch_working_v0_B.Saturation = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */
  if (tmp_0) {
    /* Gain: '<Root>/Gain' */
    plant_block_swing_catch_working_v0_B.Gain =
      plant_block_swing_catch_working_v0_P.Gain_Gain *
      plant_block_swing_catch_working_v0_B.SFunction[1];

    /* Math: '<Root>/theta correction1' incorporates:
     *  Constant: '<Root>/Constant4'
     */
    plant_block_swing_catch_working_v0_B.thetacorrection1_a = rt_modd_snf
      (plant_block_swing_catch_working_v0_B.theta,
       plant_block_swing_catch_working_v0_P.Constant4_Value_c);
  }

  /* TransferFcn: '<Root>/Low Pass Filter Gimble Velocity1' */
  plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity1 =
    plant_block_swing_catch_working_v0_P.LowPassFilterGimbleVelocity1_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity1_CSTATE;
  if (tmp_0) {
    /* Chart: '<Root>/Stable pendulum' */
    /* Gateway: Stable pendulum */
    plant_block_swing_catch_working_v0_DW.sfEvent_j =
      plant_block_swing_catch_working_v0_CALL_EVENT;

    /* During: Stable pendulum */
    if (plant_block_swing_catch_working_v0_DW.is_active_c5_plant_block_swing_catch_working_v0
        == 0) {
      /* Entry: Stable pendulum */
      plant_block_swing_catch_working_v0_DW.is_active_c5_plant_block_swing_catch_working_v0
        = 1U;

      /* Entry Internal: Stable pendulum */
      /* Transition: '<S5>:2' */
      plant_block_swing_catch_working_v0_DW.is_c5_plant_block_swing_catch_working_v0
        = plant_block_swing_catch_working_v0_IN_Gimble;

      /* Entry 'Gimble': '<S5>:1' */
      plant_block_swing_catch_working_v0_B.g = 0.0;
    } else if
        (plant_block_swing_catch_working_v0_DW.is_c5_plant_block_swing_catch_working_v0
         == plant_block_swing_catch_working_v0_IN_Gimble) {
      plant_block_swing_catch_working_v0_B.g = 0.0;

      /* During 'Gimble': '<S5>:1' */
      rtb_Derivative = fabs
        (plant_block_swing_catch_working_v0_B.thetacorrection1_a);
      if ((fabs
           (plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity1) <
           0.1) && ((rtb_Derivative > 3.0876666666666663) && (rtb_Derivative <
            3.1923333333333335))) {
        /* Transition: '<S5>:4' */
        plant_block_swing_catch_working_v0_DW.is_c5_plant_block_swing_catch_working_v0
          = plant_block_swing_catch_working_v0_IN_Gimble_go;

        /* Entry 'Gimble_go': '<S5>:3' */
        plant_block_swing_catch_working_v0_B.g = 1.0;
      }
    } else {
      plant_block_swing_catch_working_v0_B.g = 1.0;

      /* During 'Gimble_go': '<S5>:3' */
      rtb_Derivative = fabs
        (plant_block_swing_catch_working_v0_B.thetacorrection1_a);
      if ((fabs
           (plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity1) >
           0.1) && ((rtb_Derivative < 3.0876666666666663) || (rtb_Derivative >
            3.1923333333333335))) {
        /* Transition: '<S5>:5' */
        plant_block_swing_catch_working_v0_DW.is_c5_plant_block_swing_catch_working_v0
          = plant_block_swing_catch_working_v0_IN_Gimble;

        /* Entry 'Gimble': '<S5>:1' */
        plant_block_swing_catch_working_v0_B.g = 0.0;
      }
    }

    /* End of Chart: '<Root>/Stable pendulum' */

    /* Signum: '<S4>/Sign' */
    if (rtIsNaN(plant_block_swing_catch_working_v0_B.Gain)) {
      u0 = (rtNaN);
    } else if (plant_block_swing_catch_working_v0_B.Gain < 0.0) {
      u0 = -1.0;
    } else {
      u0 = (plant_block_swing_catch_working_v0_B.Gain > 0.0);
    }

    /* Product: '<S4>/Enable Swing Velocity1' incorporates:
     *  Signum: '<S4>/Sign'
     */
    plant_block_swing_catch_working_v0_B.EnableSwingVelocity1 =
      plant_block_swing_catch_working_v0_B.g * u0;
  }

  /* TransferFcn: '<S4>/Position Filter1' */
  plant_block_swing_catch_working_v0_B.PositionFilter1 = 0.0;
  plant_block_swing_catch_working_v0_B.PositionFilter1 +=
    plant_block_swing_catch_working_v0_P.PositionFilter1_C *
    plant_block_swing_catch_working_v0_X.PositionFilter1_CSTATE;

  /* Trigonometry: '<S4>/Trigonometric Function1' incorporates:
   *  Trigonometry: '<S4>/Trigonometric Function'
   */
  rtb_Derivative = sin(plant_block_swing_catch_working_v0_B.PositionFilter1);

  /* Trigonometry: '<S4>/Trigonometric Function1' */
  plant_block_swing_catch_working_v0_B.TrigonometricFunction1 = rtb_Derivative;

  /* Integrator: '<S4>/Integrator1' incorporates:
   *  Integrator: '<S102>/Integrator'
   *  Integrator: '<S10>/Integrator'
   *  Integrator: '<S166>/Integrator'
   *  Integrator: '<S3>/Integrator'
   *  Integrator: '<S4>/Integrator3'
   */
  tmp_1 = rtsiIsModeUpdateTimeStep
    (&plant_block_swing_catch_working_v0_M->solverInfo);
  if (tmp_1) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Integrator1_Reset_ZCE,
                       (plant_block_swing_catch_working_v0_B.EnableSwingVelocity1));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Integrator1_CSTATE =
        plant_block_swing_catch_working_v0_P.Integrator1_IC;
    }
  }

  /* Integrator: '<S4>/Integrator1' */
  plant_block_swing_catch_working_v0_B.Integrator1 =
    plant_block_swing_catch_working_v0_X.Integrator1_CSTATE;

  /* Product: '<S4>/Enable Swing Velocity3' incorporates:
   *  Gain: '<S122>/Slider Gain'
   *  Gain: '<S123>/Slider Gain'
   *  Sum: '<S4>/Add1'
   */
  u0 = (plant_block_swing_catch_working_v0_P.SliderGain4_gain *
        plant_block_swing_catch_working_v0_B.TrigonometricFunction1 +
        plant_block_swing_catch_working_v0_P.SliderGain3_gain_e *
        plant_block_swing_catch_working_v0_B.Integrator1) *
    plant_block_swing_catch_working_v0_B.g;

  /* Saturate: '<S4>/Saturation1' */
  if (u0 > plant_block_swing_catch_working_v0_P.Saturation1_UpperSat) {
    /* Saturate: '<S4>/Saturation1' */
    plant_block_swing_catch_working_v0_B.Saturation1 =
      plant_block_swing_catch_working_v0_P.Saturation1_UpperSat;
  } else if (u0 < plant_block_swing_catch_working_v0_P.Saturation1_LowerSat) {
    /* Saturate: '<S4>/Saturation1' */
    plant_block_swing_catch_working_v0_B.Saturation1 =
      plant_block_swing_catch_working_v0_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S4>/Saturation1' */
    plant_block_swing_catch_working_v0_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S4>/Saturation1' */

  /* Integrator: '<S4>/Integrator3' */
  if (tmp_1) {
    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Integrator3_Reset_ZCE,
                       (plant_block_swing_catch_working_v0_B.x));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Integrator3_CSTATE =
        plant_block_swing_catch_working_v0_P.Integrator3_IC;
    }
  }

  /* Integrator: '<S4>/Integrator3' */
  plant_block_swing_catch_working_v0_B.Integrator3 =
    plant_block_swing_catch_working_v0_X.Integrator3_CSTATE;

  /* Trigonometry: '<S4>/Trigonometric Function' */
  plant_block_swing_catch_working_v0_B.TrigonometricFunction = rtb_Derivative;

  /* Product: '<S4>/Enable Rect on Rest State' incorporates:
   *  Gain: '<S120>/Slider Gain'
   *  Gain: '<S121>/Slider Gain'
   *  Sum: '<S4>/Add5'
   */
  u0 = (plant_block_swing_catch_working_v0_P.SliderGain1_gain_o *
        plant_block_swing_catch_working_v0_B.Integrator3 +
        plant_block_swing_catch_working_v0_P.SliderGain2_gain_j *
        plant_block_swing_catch_working_v0_B.TrigonometricFunction) *
    plant_block_swing_catch_working_v0_B.x;

  /* Saturate: '<S4>/Saturation' */
  if (u0 > plant_block_swing_catch_working_v0_P.Saturation_UpperSat_n) {
    /* Saturate: '<S4>/Saturation' */
    plant_block_swing_catch_working_v0_B.Saturation_g =
      plant_block_swing_catch_working_v0_P.Saturation_UpperSat_n;
  } else if (u0 < plant_block_swing_catch_working_v0_P.Saturation_LowerSat_c) {
    /* Saturate: '<S4>/Saturation' */
    plant_block_swing_catch_working_v0_B.Saturation_g =
      plant_block_swing_catch_working_v0_P.Saturation_LowerSat_c;
  } else {
    /* Saturate: '<S4>/Saturation' */
    plant_block_swing_catch_working_v0_B.Saturation_g = u0;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Sum: '<S4>/Add6' */
  plant_block_swing_catch_working_v0_B.Add6 =
    plant_block_swing_catch_working_v0_B.Saturation_g -
    plant_block_swing_catch_working_v0_B.Saturation1;
  if (tmp_0) {
  }

  /* Derivative: '<Root>/Derivative6' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_h >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_j >= tmp)) {
    /* Derivative: '<Root>/Derivative6' */
    plant_block_swing_catch_working_v0_B.Derivative6 = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_h;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_f;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_h <
        plant_block_swing_catch_working_v0_DW.TimeStampB_j) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_j < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_j;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_i;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_h >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_j;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_i;
    }

    /* Derivative: '<Root>/Derivative6' */
    plant_block_swing_catch_working_v0_B.Derivative6 =
      (plant_block_swing_catch_working_v0_B.Gain - *lastU) / (tmp -
      rtb_Derivative);
  }

  if (tmp_0) {
  }

  /* Derivative: '<S3>/Derivative' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_e >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_m >= tmp)) {
    rtb_Derivative = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_e;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_o;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_e <
        plant_block_swing_catch_working_v0_DW.TimeStampB_m) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_m < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_m;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_h;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_e >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_m;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_h;
    }

    rtb_Derivative = (plant_block_swing_catch_working_v0_B.ActualGimbleVelocity
                      - *lastU) / (tmp - rtb_Derivative);
  }

  /* Gain: '<S67>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_p =
    plant_block_swing_catch_working_v0_P.SliderGain2_gain_c * rtb_Derivative;

  /* Integrator: '<S3>/Integrator' */
  if (tmp_1) {
    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE,
                       (plant_block_swing_catch_working_v0_B.z));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Integrator_CSTATE_f =
        plant_block_swing_catch_working_v0_P.Integrator_IC;
    }
  }

  /* Gain: '<S66>/Slider Gain' incorporates:
   *  Integrator: '<S3>/Integrator'
   */
  plant_block_swing_catch_working_v0_B.SliderGain_n =
    plant_block_swing_catch_working_v0_P.SliderGain1_gain_k *
    plant_block_swing_catch_working_v0_X.Integrator_CSTATE_f;

  /* TransferFcn: '<S9>/Transfer Fcn' */
  plant_block_swing_catch_working_v0_B.TransferFcn = 0.0;
  plant_block_swing_catch_working_v0_B.TransferFcn +=
    plant_block_swing_catch_working_v0_P.TransferFcn_C *
    plant_block_swing_catch_working_v0_X.TransferFcn_CSTATE;

  /* Integrator: '<S166>/Integrator' incorporates:
   *  Integrator: '<S161>/Filter'
   */
  if (tmp_1) {
    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE_c,
                       (plant_block_swing_catch_working_v0_B.y));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Integrator_CSTATE_m =
        plant_block_swing_catch_working_v0_P.PIDController_InitialConditionForIntegrator_e;
    }

    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Filter_Reset_ZCE,
                       (plant_block_swing_catch_working_v0_B.y));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Filter_CSTATE_j =
        plant_block_swing_catch_working_v0_P.PIDController_InitialConditionForFilter_l;
    }
  }

  /* Gain: '<S169>/Filter Coefficient' incorporates:
   *  Gain: '<S159>/Derivative Gain'
   *  Integrator: '<S161>/Filter'
   *  Sum: '<S161>/SumD'
   */
  plant_block_swing_catch_working_v0_B.FilterCoefficient_k =
    (plant_block_swing_catch_working_v0_P.PIDController_D_o *
     plant_block_swing_catch_working_v0_B.TransferFcn -
     plant_block_swing_catch_working_v0_X.Filter_CSTATE_j) *
    plant_block_swing_catch_working_v0_P.PIDController_N_e;

  /* Sum: '<S175>/Sum' incorporates:
   *  Gain: '<S171>/Proportional Gain'
   *  Integrator: '<S166>/Integrator'
   */
  plant_block_swing_catch_working_v0_B.Sum =
    (plant_block_swing_catch_working_v0_P.PIDController_P_n *
     plant_block_swing_catch_working_v0_B.TransferFcn +
     plant_block_swing_catch_working_v0_X.Integrator_CSTATE_m) +
    plant_block_swing_catch_working_v0_B.FilterCoefficient_k;

  /* TransferFcn: '<Root>/Low Pass Filter Fly Wheel2' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel2 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel2 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel2_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel2_CSTATE;

  /* Gain: '<S9>/Gain' incorporates:
   *  Math: '<S9>/Math Function'
   *
   * About '<S9>/Math Function':
   *  Operator: magnitude^2
   */
  plant_block_swing_catch_working_v0_B.Gain_k =
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel2 *
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel2 *
    plant_block_swing_catch_working_v0_P.Gain_Gain_h;

  /* TransferFcn: '<Root>/Low Pass Filter Fly Wheel1' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel1 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel1 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel1_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel1_CSTATE;

  /* Trigonometry: '<S9>/Trigonometric Function' incorporates:
   *  Trigonometry: '<S9>/Trigonometric Function1'
   */
  rtb_Derivative = cos
    (plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel1);

  /* Gain: '<S9>/Gain2' incorporates:
   *  Constant: '<S9>/Constant'
   *  Sum: '<S9>/Sum1'
   *  Trigonometry: '<S9>/Trigonometric Function'
   */
  plant_block_swing_catch_working_v0_B.Gain2 = (rtb_Derivative +
    plant_block_swing_catch_working_v0_P.Constant_Value) *
    plant_block_swing_catch_working_v0_P.Gain2_Gain;

  /* Sum: '<S9>/Sum' */
  plant_block_swing_catch_working_v0_B.E =
    plant_block_swing_catch_working_v0_B.Gain_k +
    plant_block_swing_catch_working_v0_B.Gain2;

  /* Product: '<S9>/Product2' incorporates:
   *  Product: '<S9>/Product1'
   */
  plant_block_swing_catch_working_v0_B.Product2_b =
    plant_block_swing_catch_working_v0_B.E * rtb_Derivative *
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel2;

  /* Gain: '<S9>/Table Acceleration to Gimble Velocity' incorporates:
   *  Product: '<S9>/Product3'
   */
  plant_block_swing_catch_working_v0_B.w_2 =
    plant_block_swing_catch_working_v0_B.Sum *
    plant_block_swing_catch_working_v0_B.Product2_b *
    plant_block_swing_catch_working_v0_P.TableAccelerationtoGimbleVelocity_Gain;

  /* Product: '<Root>/Enable Swing Velocity1' */
  plant_block_swing_catch_working_v0_B.EnableSwingVelocity1_k =
    plant_block_swing_catch_working_v0_B.w_2 *
    plant_block_swing_catch_working_v0_B.y;

  /* Sum: '<S3>/Add3' */
  rtb_Derivative = (plant_block_swing_catch_working_v0_B.Product2 -
                    plant_block_swing_catch_working_v0_B.ActualGimbleVelocity) +
    plant_block_swing_catch_working_v0_B.EnableSwingVelocity1_k;

  /* Product: '<S3>/Product' */
  plant_block_swing_catch_working_v0_B.Product =
    plant_block_swing_catch_working_v0_B.z * rtb_Derivative;

  /* Gain: '<S65>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_po =
    plant_block_swing_catch_working_v0_P.SliderGain_gain_g *
    plant_block_swing_catch_working_v0_B.Product;

  /* Sum: '<S3>/Sum1' incorporates:
   *  Sum: '<S3>/Sum'
   */
  u0 = (plant_block_swing_catch_working_v0_B.SliderGain_n +
        plant_block_swing_catch_working_v0_B.SliderGain_po) +
    plant_block_swing_catch_working_v0_B.SliderGain_p;

  /* Saturate: '<S3>/Saturation1' */
  if (u0 > plant_block_swing_catch_working_v0_P.Saturation1_UpperSat_k) {
    u0 = plant_block_swing_catch_working_v0_P.Saturation1_UpperSat_k;
  } else if (u0 < plant_block_swing_catch_working_v0_P.Saturation1_LowerSat_p) {
    u0 = plant_block_swing_catch_working_v0_P.Saturation1_LowerSat_p;
  }

  /* Product: '<S3>/Product2' incorporates:
   *  Saturate: '<S3>/Saturation1'
   */
  plant_block_swing_catch_working_v0_B.Product2_d = u0 *
    plant_block_swing_catch_working_v0_B.z;

  /* Product: '<S3>/Product1' */
  plant_block_swing_catch_working_v0_B.Product1 = rtb_Derivative *
    plant_block_swing_catch_working_v0_B.y;

  /* Integrator: '<S102>/Integrator' incorporates:
   *  Integrator: '<S97>/Filter'
   */
  if (tmp_1) {
    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE_k,
                       (plant_block_swing_catch_working_v0_B.y));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Integrator_CSTATE_n =
        plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_InitialConditionForIntegrator;
    }

    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Filter_Reset_ZCE_g,
                       (plant_block_swing_catch_working_v0_B.y));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Filter_CSTATE_b =
        plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_InitialConditionForFilter;
    }
  }

  /* Gain: '<S105>/Filter Coefficient' incorporates:
   *  Gain: '<S95>/Derivative Gain'
   *  Integrator: '<S97>/Filter'
   *  Sum: '<S97>/SumD'
   */
  plant_block_swing_catch_working_v0_B.FilterCoefficient_m =
    (plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_D *
     plant_block_swing_catch_working_v0_B.Product1 -
     plant_block_swing_catch_working_v0_X.Filter_CSTATE_b) *
    plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_N;

  /* Sum: '<S111>/Sum' incorporates:
   *  Gain: '<S107>/Proportional Gain'
   *  Integrator: '<S102>/Integrator'
   */
  rtb_Derivative =
    (plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_P *
     plant_block_swing_catch_working_v0_B.Product1 +
     plant_block_swing_catch_working_v0_X.Integrator_CSTATE_n) +
    plant_block_swing_catch_working_v0_B.FilterCoefficient_m;

  /* Saturate: '<S3>/Saturation2' */
  if (rtb_Derivative > plant_block_swing_catch_working_v0_P.Saturation2_UpperSat)
  {
    /* Saturate: '<S3>/Saturation2' */
    plant_block_swing_catch_working_v0_B.Saturation2 =
      plant_block_swing_catch_working_v0_P.Saturation2_UpperSat;
  } else if (rtb_Derivative <
             plant_block_swing_catch_working_v0_P.Saturation2_LowerSat) {
    /* Saturate: '<S3>/Saturation2' */
    plant_block_swing_catch_working_v0_B.Saturation2 =
      plant_block_swing_catch_working_v0_P.Saturation2_LowerSat;
  } else {
    /* Saturate: '<S3>/Saturation2' */
    plant_block_swing_catch_working_v0_B.Saturation2 = rtb_Derivative;
  }

  /* End of Saturate: '<S3>/Saturation2' */

  /* Sum: '<S3>/Add' */
  plant_block_swing_catch_working_v0_B.Add =
    plant_block_swing_catch_working_v0_B.Product2_d +
    plant_block_swing_catch_working_v0_B.Saturation2;
  if (tmp_0) {
    /* Chart: '<Root>/Steady Catch' */
    /* Gateway: Steady Catch */
    plant_block_swing_catch_working_v0_DW.sfEvent =
      plant_block_swing_catch_working_v0_CALL_EVENT;

    /* During: Steady Catch */
    if (plant_block_swing_catch_working_v0_DW.is_active_c1_plant_block_swing_catch_working_v0
        == 0) {
      /* Entry: Steady Catch */
      plant_block_swing_catch_working_v0_DW.is_active_c1_plant_block_swing_catch_working_v0
        = 1U;

      /* Entry Internal: Steady Catch */
      /* Transition: '<S7>:3' */
      plant_block_swing_catch_working_v0_DW.is_c1_plant_block_swing_catch_working_v0
        = plant_block_swing_catch_working_v0_IN_En_On;

      /* Entry 'En_On': '<S7>:1' */
      plant_block_swing_catch_working_v0_B.p = 0.0;
    } else if
        (plant_block_swing_catch_working_v0_DW.is_c1_plant_block_swing_catch_working_v0
         == plant_block_swing_catch_working_v0_IN_En_Off) {
      plant_block_swing_catch_working_v0_B.p = 1.0;

      /* During 'En_Off': '<S7>:2' */
      if ((fabs(plant_block_swing_catch_working_v0_B.Gain) > 0.08) && (fabs
           (plant_block_swing_catch_working_v0_B.Add) > 4000.0) &&
          (plant_block_swing_catch_working_v0_B.g < 1.0)) {
        /* Transition: '<S7>:5' */
        plant_block_swing_catch_working_v0_DW.is_c1_plant_block_swing_catch_working_v0
          = plant_block_swing_catch_working_v0_IN_En_On;

        /* Entry 'En_On': '<S7>:1' */
        plant_block_swing_catch_working_v0_B.p = 0.0;
      }
    } else {
      plant_block_swing_catch_working_v0_B.p = 0.0;

      /* During 'En_On': '<S7>:1' */
      if ((fabs(plant_block_swing_catch_working_v0_B.Gain) < 0.08) && (fabs
           (plant_block_swing_catch_working_v0_B.Add) < 4000.0) &&
          (plant_block_swing_catch_working_v0_B.g > 0.0)) {
        /* Transition: '<S7>:4' */
        plant_block_swing_catch_working_v0_DW.is_c1_plant_block_swing_catch_working_v0
          = plant_block_swing_catch_working_v0_IN_En_Off;

        /* Entry 'En_Off': '<S7>:2' */
        plant_block_swing_catch_working_v0_B.p = 1.0;
      }
    }

    /* End of Chart: '<Root>/Steady Catch' */
  }

  /* Product: '<S10>/Enable table control2' incorporates:
   *  TransferFcn: '<S10>/Low Pass Filter Fly Wheel'
   */
  u0 = plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel_C_g *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel_CSTATE_c *
    plant_block_swing_catch_working_v0_B.p;

  /* Saturate: '<Root>/Saturation1' */
  if (u0 > plant_block_swing_catch_working_v0_P.Saturation1_UpperSat_j) {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_swing_catch_working_v0_B.Saturation1_p =
      plant_block_swing_catch_working_v0_P.Saturation1_UpperSat_j;
  } else if (u0 < plant_block_swing_catch_working_v0_P.Saturation1_LowerSat_b) {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_swing_catch_working_v0_B.Saturation1_p =
      plant_block_swing_catch_working_v0_P.Saturation1_LowerSat_b;
  } else {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_swing_catch_working_v0_B.Saturation1_p = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* Sum: '<Root>/Add1' */
  plant_block_swing_catch_working_v0_B.Add1 =
    (plant_block_swing_catch_working_v0_B.Add -
     plant_block_swing_catch_working_v0_B.Add6) +
    plant_block_swing_catch_working_v0_B.Saturation1_p;
  if (tmp_0) {
    /* Gain: '<Root>/Gain4' incorporates:
     *  Constant: '<Root>/Constant5'
     *  Math: '<Root>/theta correction3'
     */
    plant_block_swing_catch_working_v0_B.Gain4 =
      plant_block_swing_catch_working_v0_P.Gain4_Gain_g * rt_modd_snf
      (plant_block_swing_catch_working_v0_B.theta,
       plant_block_swing_catch_working_v0_P.Constant5_Value);
  }

  /* TransferFcn: '<Root>/Low Pass Filter Gimble Velocity2' */
  plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity2 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity2 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterGimbleVelocity2_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity2_CSTATE;
  if (tmp_0) {
    /* Gain: '<Root>/Gain3' */
    plant_block_swing_catch_working_v0_B.theta4 =
      plant_block_swing_catch_working_v0_P.Gain3_Gain *
      plant_block_swing_catch_working_v0_B.SFunction[3];
  }

  /* Derivative: '<Root>/Derivative2' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_j >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_e >= tmp)) {
    /* Derivative: '<Root>/Derivative2' */
    plant_block_swing_catch_working_v0_B.Derivative2 = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_j;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_j;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_j <
        plant_block_swing_catch_working_v0_DW.TimeStampB_e) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_e < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_e;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_c;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_j >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_e;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_c;
    }

    /* Derivative: '<Root>/Derivative2' */
    plant_block_swing_catch_working_v0_B.Derivative2 =
      (plant_block_swing_catch_working_v0_B.theta - *lastU) / (tmp -
      rtb_Derivative);
  }

  if (tmp_0) {
    /* Gain: '<S2>/encoder to radians' */
    plant_block_swing_catch_working_v0_B.encodertoradians =
      plant_block_swing_catch_working_v0_P.encodertoradians_Gain *
      plant_block_swing_catch_working_v0_B.SFunction[0];
  }

  /* Derivative: '<S2>/Derivative' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_bp >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_fd >= tmp)) {
    /* Derivative: '<S2>/Derivative' */
    plant_block_swing_catch_working_v0_B.Derivative = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_bp;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_e;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_bp <
        plant_block_swing_catch_working_v0_DW.TimeStampB_fd) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_fd < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_fd;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_k;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_bp >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_fd;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_k;
    }

    /* Derivative: '<S2>/Derivative' */
    plant_block_swing_catch_working_v0_B.Derivative =
      (plant_block_swing_catch_working_v0_B.encodertoradians - *lastU) / (tmp -
      rtb_Derivative);
  }

  if (tmp_0) {
  }

  /* Gain: '<S43>/Integral Gain' */
  plant_block_swing_catch_working_v0_B.IntegralGain =
    plant_block_swing_catch_working_v0_P.PIDController_I * rtb_Sum_c;

  /* Gain: '<S2>/rad//sec to rpm' */
  plant_block_swing_catch_working_v0_B.radsectorpm =
    plant_block_swing_catch_working_v0_P.radsectorpm_Gain *
    plant_block_swing_catch_working_v0_B.Derivative;
  if (tmp_0) {
  }

  /* Gain: '<S99>/Integral Gain' */
  plant_block_swing_catch_working_v0_B.IntegralGain_k =
    plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_I *
    plant_block_swing_catch_working_v0_B.Product1;
  if (tmp_0) {
    /* Abs: '<S9>/Abs1' incorporates:
     *  Constant: '<S9>/Constant4'
     *  Sum: '<S9>/Sum4'
     */
    plant_block_swing_catch_working_v0_B.Resetafterswingstate = fabs
      (plant_block_swing_catch_working_v0_P.Constant4_Value_l -
       plant_block_swing_catch_working_v0_B.y);

    /* Memory: '<S131>/Memory' */
    plant_block_swing_catch_working_v0_B.Memory =
      plant_block_swing_catch_working_v0_DW.Memory_PreviousInput;
  }

  /* Switch: '<S131>/Reset' incorporates:
   *  MinMax: '<S129>/MinMax'
   */
  if (plant_block_swing_catch_working_v0_B.Resetafterswingstate != 0.0) {
    /* Switch: '<S131>/Reset' incorporates:
     *  Constant: '<S131>/Initial Condition'
     */
    plant_block_swing_catch_working_v0_B.Reset =
      plant_block_swing_catch_working_v0_P.MinMaxRunningResettable1_vinit;
  } else if ((plant_block_swing_catch_working_v0_B.E <=
              plant_block_swing_catch_working_v0_B.Memory) || rtIsNaN
             (plant_block_swing_catch_working_v0_B.Memory)) {
    /* MinMax: '<S129>/MinMax' incorporates:
     *  Switch: '<S131>/Reset'
     */
    plant_block_swing_catch_working_v0_B.Reset =
      plant_block_swing_catch_working_v0_B.E;
  } else {
    /* Switch: '<S131>/Reset' incorporates:
     *  MinMax: '<S129>/MinMax'
     */
    plant_block_swing_catch_working_v0_B.Reset =
      plant_block_swing_catch_working_v0_B.Memory;
  }

  /* End of Switch: '<S131>/Reset' */

  /* Sum: '<S9>/Sum3' incorporates:
   *  Constant: '<S9>/Desired Energy'
   *  Product: '<S9>/Product4'
   */
  plant_block_swing_catch_working_v0_B.Sum3 =
    plant_block_swing_catch_working_v0_P.DesiredEnergy_Value -
    plant_block_swing_catch_working_v0_B.Reset *
    plant_block_swing_catch_working_v0_B.y;
  if (tmp_0) {
  }

  /* Gain: '<S163>/Integral Gain' */
  plant_block_swing_catch_working_v0_B.IntegralGain_b =
    plant_block_swing_catch_working_v0_P.PIDController_I_n *
    plant_block_swing_catch_working_v0_B.TransferFcn;

  /* TransferFcn: '<S10>/Low Pass Filter Fly Wheel7' */
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel7 = 0.0;
  plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel7 +=
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel7_C *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel7_CSTATE;

  /* Sum: '<S10>/Sum' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  plant_block_swing_catch_working_v0_B.Sum_d =
    plant_block_swing_catch_working_v0_P.Constant3_Value -
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel7;

  /* Gain: '<S186>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_o =
    plant_block_swing_catch_working_v0_P.SliderProportional_gain *
    plant_block_swing_catch_working_v0_B.Sum_d;

  /* Integrator: '<S10>/Integrator' */
  if (tmp_1) {
    zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                       &plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE_f,
                       (plant_block_swing_catch_working_v0_B.p));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      plant_block_swing_catch_working_v0_X.Integrator_CSTATE_p =
        plant_block_swing_catch_working_v0_P.Integrator_IC_g;
    }
  }

  /* Gain: '<S185>/Slider Gain' incorporates:
   *  Integrator: '<S10>/Integrator'
   */
  plant_block_swing_catch_working_v0_B.SliderGain_c =
    plant_block_swing_catch_working_v0_P.SliderIntegral_gain *
    plant_block_swing_catch_working_v0_X.Integrator_CSTATE_p;

  /* Derivative: '<S10>/Derivative' */
  if ((plant_block_swing_catch_working_v0_DW.TimeStampA_h5 >= tmp) &&
      (plant_block_swing_catch_working_v0_DW.TimeStampB_o >= tmp)) {
    rtb_Derivative = 0.0;
  } else {
    rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampA_h5;
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_k;
    if (plant_block_swing_catch_working_v0_DW.TimeStampA_h5 <
        plant_block_swing_catch_working_v0_DW.TimeStampB_o) {
      if (plant_block_swing_catch_working_v0_DW.TimeStampB_o < tmp) {
        rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_o;
        lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_d;
      }
    } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_h5 >= tmp) {
      rtb_Derivative = plant_block_swing_catch_working_v0_DW.TimeStampB_o;
      lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_d;
    }

    rtb_Derivative =
      (plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel7 - *lastU) /
      (tmp - rtb_Derivative);
  }

  /* Gain: '<S184>/Slider Gain' */
  plant_block_swing_catch_working_v0_B.SliderGain_i =
    plant_block_swing_catch_working_v0_P.SliderDerivative_gain * rtb_Derivative;

  /* Sum: '<S10>/Add' */
  plant_block_swing_catch_working_v0_B.Add_n =
    (plant_block_swing_catch_working_v0_B.SliderGain_o +
     plant_block_swing_catch_working_v0_B.SliderGain_c) +
    plant_block_swing_catch_working_v0_B.SliderGain_i;
  if (tmp_0) {
  }
}

/* Model update function */
void plant_block_swing_catch_working_v0_update(void)
{
  real_T *lastU;

  /* Update for Derivative: '<Root>/Derivative1' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA <
             plant_block_swing_catch_working_v0_DW.TimeStampB) {
    plant_block_swing_catch_working_v0_DW.TimeStampA =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB;
  }

  *lastU = plant_block_swing_catch_working_v0_B.theta;

  /* End of Update for Derivative: '<Root>/Derivative1' */

  /* Update for Derivative: '<Root>/Derivative4' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_n == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_n =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_p;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_i == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_i =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_l;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_n <
             plant_block_swing_catch_working_v0_DW.TimeStampB_i) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_n =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_p;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_i =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_l;
  }

  *lastU = plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel5;

  /* End of Update for Derivative: '<Root>/Derivative4' */

  /* Update for Derivative: '<Root>/Derivative5' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_b == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_b =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_b;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_f == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_f =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_p;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_b <
             plant_block_swing_catch_working_v0_DW.TimeStampB_f) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_b =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_b;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_f =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_p;
  }

  *lastU = plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel3;

  /* End of Update for Derivative: '<Root>/Derivative5' */

  /* Update for Derivative: '<Root>/Derivative6' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_h == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_h =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_f;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_j == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_j =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_i;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_h <
             plant_block_swing_catch_working_v0_DW.TimeStampB_j) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_h =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_f;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_j =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_i;
  }

  *lastU = plant_block_swing_catch_working_v0_B.Gain;

  /* End of Update for Derivative: '<Root>/Derivative6' */

  /* Update for Derivative: '<S3>/Derivative' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_e == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_e =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_o;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_m == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_m =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_h;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_e <
             plant_block_swing_catch_working_v0_DW.TimeStampB_m) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_e =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_o;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_m =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_h;
  }

  *lastU = plant_block_swing_catch_working_v0_B.ActualGimbleVelocity;

  /* End of Update for Derivative: '<S3>/Derivative' */

  /* Update for Derivative: '<Root>/Derivative2' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_j == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_j =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_j;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_e == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_e =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_c;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_j <
             plant_block_swing_catch_working_v0_DW.TimeStampB_e) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_j =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_j;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_e =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_c;
  }

  *lastU = plant_block_swing_catch_working_v0_B.theta;

  /* End of Update for Derivative: '<Root>/Derivative2' */

  /* Update for Derivative: '<S2>/Derivative' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_bp == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_bp =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_e;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_fd == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_fd =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_k;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_bp <
             plant_block_swing_catch_working_v0_DW.TimeStampB_fd) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_bp =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_e;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_fd =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_k;
  }

  *lastU = plant_block_swing_catch_working_v0_B.encodertoradians;

  /* End of Update for Derivative: '<S2>/Derivative' */
  if (rtmIsMajorTimeStep(plant_block_swing_catch_working_v0_M)) {
    /* Update for Memory: '<S131>/Memory' */
    plant_block_swing_catch_working_v0_DW.Memory_PreviousInput =
      plant_block_swing_catch_working_v0_B.Reset;
  }

  /* Update for Derivative: '<S10>/Derivative' */
  if (plant_block_swing_catch_working_v0_DW.TimeStampA_h5 == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_h5 =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_k;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampB_o == (rtInf)) {
    plant_block_swing_catch_working_v0_DW.TimeStampB_o =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_d;
  } else if (plant_block_swing_catch_working_v0_DW.TimeStampA_h5 <
             plant_block_swing_catch_working_v0_DW.TimeStampB_o) {
    plant_block_swing_catch_working_v0_DW.TimeStampA_h5 =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeA_k;
  } else {
    plant_block_swing_catch_working_v0_DW.TimeStampB_o =
      plant_block_swing_catch_working_v0_M->Timing.t[0];
    lastU = &plant_block_swing_catch_working_v0_DW.LastUAtTimeB_d;
  }

  *lastU = plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel7;

  /* End of Update for Derivative: '<S10>/Derivative' */
  if (rtmIsMajorTimeStep(plant_block_swing_catch_working_v0_M)) {
    rt_ertODEUpdateContinuousStates
      (&plant_block_swing_catch_working_v0_M->solverInfo);
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
  if (!(++plant_block_swing_catch_working_v0_M->Timing.clockTick0)) {
    ++plant_block_swing_catch_working_v0_M->Timing.clockTickH0;
  }

  plant_block_swing_catch_working_v0_M->Timing.t[0] = rtsiGetSolverStopTime
    (&plant_block_swing_catch_working_v0_M->solverInfo);

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
    if (!(++plant_block_swing_catch_working_v0_M->Timing.clockTick1)) {
      ++plant_block_swing_catch_working_v0_M->Timing.clockTickH1;
    }

    plant_block_swing_catch_working_v0_M->Timing.t[1] =
      plant_block_swing_catch_working_v0_M->Timing.clockTick1 *
      plant_block_swing_catch_working_v0_M->Timing.stepSize1 +
      plant_block_swing_catch_working_v0_M->Timing.clockTickH1 *
      plant_block_swing_catch_working_v0_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void plant_block_swing_catch_working_v0_derivatives(void)
{
  XDot_plant_block_swing_catch_working_v0_T *_rtXdot;
  _rtXdot = ((XDot_plant_block_swing_catch_working_v0_T *)
             plant_block_swing_catch_working_v0_M->derivs);

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Fly Wheel4' */
  _rtXdot->LowPassFilterFlyWheel4_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel4_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel4_CSTATE;
  _rtXdot->LowPassFilterFlyWheel4_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Gimble Velocity' */
  _rtXdot->LowPassFilterGimbleVelocity_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterGimbleVelocity_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity_CSTATE;
  _rtXdot->LowPassFilterGimbleVelocity_CSTATE +=
    plant_block_swing_catch_working_v0_B.Derivative6;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Fly Wheel6' */
  _rtXdot->LowPassFilterFlyWheel6_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel6_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel6_CSTATE;
  _rtXdot->LowPassFilterFlyWheel6_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta4;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Fly Wheel5' */
  _rtXdot->LowPassFilterFlyWheel5_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel5_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel5_CSTATE;
  _rtXdot->LowPassFilterFlyWheel5_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta4;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Fly Wheel3' */
  _rtXdot->LowPassFilterFlyWheel3_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel3_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel3_CSTATE;
  _rtXdot->LowPassFilterFlyWheel3_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta;

  /* Derivatives for TransferFcn: '<S2>/Low Pass Filter Fly Wheel' */
  _rtXdot->LowPassFilterFlyWheel_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel_CSTATE;
  _rtXdot->LowPassFilterFlyWheel_CSTATE +=
    plant_block_swing_catch_working_v0_B.radsectorpm;

  /* Derivatives for Integrator: '<S46>/Integrator' */
  _rtXdot->Integrator_CSTATE = plant_block_swing_catch_working_v0_B.IntegralGain;

  /* Derivatives for Integrator: '<S41>/Filter' */
  _rtXdot->Filter_CSTATE =
    plant_block_swing_catch_working_v0_B.FilterCoefficient;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Gimble Velocity1' */
  _rtXdot->LowPassFilterGimbleVelocity1_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterGimbleVelocity1_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity1_CSTATE;
  _rtXdot->LowPassFilterGimbleVelocity1_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta_dot;

  /* Derivatives for TransferFcn: '<S4>/Position Filter1' */
  _rtXdot->PositionFilter1_CSTATE =
    plant_block_swing_catch_working_v0_P.PositionFilter1_A *
    plant_block_swing_catch_working_v0_X.PositionFilter1_CSTATE;
  _rtXdot->PositionFilter1_CSTATE += plant_block_swing_catch_working_v0_B.Gain;

  /* Derivatives for Integrator: '<S4>/Integrator1' */
  _rtXdot->Integrator1_CSTATE =
    plant_block_swing_catch_working_v0_B.TrigonometricFunction1;

  /* Derivatives for Integrator: '<S4>/Integrator3' */
  _rtXdot->Integrator3_CSTATE =
    plant_block_swing_catch_working_v0_B.TrigonometricFunction;

  /* Derivatives for Integrator: '<S3>/Integrator' */
  _rtXdot->Integrator_CSTATE_f = plant_block_swing_catch_working_v0_B.Product;

  /* Derivatives for TransferFcn: '<S9>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE =
    plant_block_swing_catch_working_v0_P.TransferFcn_A *
    plant_block_swing_catch_working_v0_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += plant_block_swing_catch_working_v0_B.Sum3;

  /* Derivatives for Integrator: '<S166>/Integrator' */
  _rtXdot->Integrator_CSTATE_m =
    plant_block_swing_catch_working_v0_B.IntegralGain_b;

  /* Derivatives for Integrator: '<S161>/Filter' */
  _rtXdot->Filter_CSTATE_j =
    plant_block_swing_catch_working_v0_B.FilterCoefficient_k;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Fly Wheel2' */
  _rtXdot->LowPassFilterFlyWheel2_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel2_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel2_CSTATE;
  _rtXdot->LowPassFilterFlyWheel2_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta_dot;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Fly Wheel1' */
  _rtXdot->LowPassFilterFlyWheel1_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel1_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel1_CSTATE;
  _rtXdot->LowPassFilterFlyWheel1_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta;

  /* Derivatives for Integrator: '<S102>/Integrator' */
  _rtXdot->Integrator_CSTATE_n =
    plant_block_swing_catch_working_v0_B.IntegralGain_k;

  /* Derivatives for Integrator: '<S97>/Filter' */
  _rtXdot->Filter_CSTATE_b =
    plant_block_swing_catch_working_v0_B.FilterCoefficient_m;

  /* Derivatives for TransferFcn: '<S10>/Low Pass Filter Fly Wheel' */
  _rtXdot->LowPassFilterFlyWheel_CSTATE_c =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel_A_b *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel_CSTATE_c;
  _rtXdot->LowPassFilterFlyWheel_CSTATE_c +=
    plant_block_swing_catch_working_v0_B.Add_n;

  /* Derivatives for TransferFcn: '<Root>/Low Pass Filter Gimble Velocity2' */
  _rtXdot->LowPassFilterGimbleVelocity2_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterGimbleVelocity2_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity2_CSTATE;
  _rtXdot->LowPassFilterGimbleVelocity2_CSTATE +=
    plant_block_swing_catch_working_v0_B.Derivative2;

  /* Derivatives for TransferFcn: '<S10>/Low Pass Filter Fly Wheel7' */
  _rtXdot->LowPassFilterFlyWheel7_CSTATE =
    plant_block_swing_catch_working_v0_P.LowPassFilterFlyWheel7_A *
    plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel7_CSTATE;
  _rtXdot->LowPassFilterFlyWheel7_CSTATE +=
    plant_block_swing_catch_working_v0_B.theta4;

  /* Derivatives for Integrator: '<S10>/Integrator' */
  _rtXdot->Integrator_CSTATE_p = plant_block_swing_catch_working_v0_B.Sum_d;
}

/* Model initialize function */
void plant_block_swing_catch_working_v0_initialize(void)
{
  /* Start for S-Function (ECPDSPDriver): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (ECPDSPDriver) */
  {
    SimStruct *rts = plant_block_swing_catch_working_v0_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  plant_block_swing_catch_working_v0_PrevZCX.Integrator1_Reset_ZCE =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Integrator3_Reset_ZCE =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE_c =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Filter_Reset_ZCE =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE_k =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Filter_Reset_ZCE_g =
    UNINITIALIZED_ZCSIG;
  plant_block_swing_catch_working_v0_PrevZCX.Integrator_Reset_ZCE_f =
    UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Derivative: '<Root>/Derivative1' */
  plant_block_swing_catch_working_v0_DW.TimeStampA = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Fly Wheel4' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel4_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Gimble Velocity' */
  plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Fly Wheel6' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel6_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Fly Wheel5' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel5_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative4' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_n = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_i = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Fly Wheel3' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel3_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative5' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_b = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_f = (rtInf);

  /* InitializeConditions for TransferFcn: '<S2>/Low Pass Filter Fly Wheel' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S46>/Integrator' */
  plant_block_swing_catch_working_v0_X.Integrator_CSTATE =
    plant_block_swing_catch_working_v0_P.PIDController_InitialConditionForIntegrator;

  /* InitializeConditions for Integrator: '<S41>/Filter' */
  plant_block_swing_catch_working_v0_X.Filter_CSTATE =
    plant_block_swing_catch_working_v0_P.PIDController_InitialConditionForFilter;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Gimble Velocity1' */
  plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S4>/Position Filter1' */
  plant_block_swing_catch_working_v0_X.PositionFilter1_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S4>/Integrator1' */
  plant_block_swing_catch_working_v0_X.Integrator1_CSTATE =
    plant_block_swing_catch_working_v0_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S4>/Integrator3' */
  plant_block_swing_catch_working_v0_X.Integrator3_CSTATE =
    plant_block_swing_catch_working_v0_P.Integrator3_IC;

  /* InitializeConditions for Derivative: '<Root>/Derivative6' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_h = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_j = (rtInf);

  /* InitializeConditions for Derivative: '<S3>/Derivative' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_e = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_m = (rtInf);

  /* InitializeConditions for Integrator: '<S3>/Integrator' */
  plant_block_swing_catch_working_v0_X.Integrator_CSTATE_f =
    plant_block_swing_catch_working_v0_P.Integrator_IC;

  /* InitializeConditions for TransferFcn: '<S9>/Transfer Fcn' */
  plant_block_swing_catch_working_v0_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S166>/Integrator' */
  plant_block_swing_catch_working_v0_X.Integrator_CSTATE_m =
    plant_block_swing_catch_working_v0_P.PIDController_InitialConditionForIntegrator_e;

  /* InitializeConditions for Integrator: '<S161>/Filter' */
  plant_block_swing_catch_working_v0_X.Filter_CSTATE_j =
    plant_block_swing_catch_working_v0_P.PIDController_InitialConditionForFilter_l;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Fly Wheel2' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel2_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Fly Wheel1' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel1_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S102>/Integrator' */
  plant_block_swing_catch_working_v0_X.Integrator_CSTATE_n =
    plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_InitialConditionForIntegrator;

  /* InitializeConditions for Integrator: '<S97>/Filter' */
  plant_block_swing_catch_working_v0_X.Filter_CSTATE_b =
    plant_block_swing_catch_working_v0_P.PIDGimbleVelocitySwing_InitialConditionForFilter;

  /* InitializeConditions for TransferFcn: '<S10>/Low Pass Filter Fly Wheel' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel_CSTATE_c = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Low Pass Filter Gimble Velocity2' */
  plant_block_swing_catch_working_v0_X.LowPassFilterGimbleVelocity2_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative2' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_j = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_e = (rtInf);

  /* InitializeConditions for Derivative: '<S2>/Derivative' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_bp = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_fd = (rtInf);

  /* InitializeConditions for Memory: '<S131>/Memory' */
  plant_block_swing_catch_working_v0_DW.Memory_PreviousInput =
    plant_block_swing_catch_working_v0_P.MinMaxRunningResettable1_vinit;

  /* InitializeConditions for TransferFcn: '<S10>/Low Pass Filter Fly Wheel7' */
  plant_block_swing_catch_working_v0_X.LowPassFilterFlyWheel7_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S10>/Integrator' */
  plant_block_swing_catch_working_v0_X.Integrator_CSTATE_p =
    plant_block_swing_catch_working_v0_P.Integrator_IC_g;

  /* InitializeConditions for Derivative: '<S10>/Derivative' */
  plant_block_swing_catch_working_v0_DW.TimeStampA_h5 = (rtInf);
  plant_block_swing_catch_working_v0_DW.TimeStampB_o = (rtInf);

  /* SystemInitialize for Chart: '<S6>/State Switch v1' */
  plant_block_swing_catch_working_v0_DW.sfEvent_a =
    plant_block_swing_catch_working_v0_CALL_EVENT;
  plant_block_swing_catch_working_v0_B.x = 0.0;
  plant_block_swing_catch_working_v0_B.y = 0.0;
  plant_block_swing_catch_working_v0_B.z = 0.0;
  plant_block_swing_catch_working_v0_B.r = 0.0;
  plant_block_swing_catch_working_v0_DW.is_active_c3_plant_block_swing_catch_working_v0
    = 0U;
  plant_block_swing_catch_working_v0_DW.is_c3_plant_block_swing_catch_working_v0
    = plant_block_swing_catch_working_v0_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Stable pendulum' incorporates:
   *  Chart: '<S6>/State Switch v1'
   */
  plant_block_swing_catch_working_v0_DW.sfEvent_j =
    plant_block_swing_catch_working_v0_CALL_EVENT;
  plant_block_swing_catch_working_v0_B.g = 0.0;
  plant_block_swing_catch_working_v0_DW.is_active_c5_plant_block_swing_catch_working_v0
    = 0U;
  plant_block_swing_catch_working_v0_DW.is_c5_plant_block_swing_catch_working_v0
    = plant_block_swing_catch_working_v0_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Steady Catch' incorporates:
   *  Chart: '<S6>/State Switch v1'
   */
  plant_block_swing_catch_working_v0_DW.sfEvent =
    plant_block_swing_catch_working_v0_CALL_EVENT;
  plant_block_swing_catch_working_v0_B.p = 0.0;
  plant_block_swing_catch_working_v0_DW.is_active_c1_plant_block_swing_catch_working_v0
    = 0U;
  plant_block_swing_catch_working_v0_DW.is_c1_plant_block_swing_catch_working_v0
    = plant_block_swing_catch_working_v0_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void plant_block_swing_catch_working_v0_terminate(void)
{
  /* Terminate for S-Function (ECPDSPDriver): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (ECPDSPDriver) */
  {
    SimStruct *rts = plant_block_swing_catch_working_v0_M->childSfunctions[0];
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
  plant_block_swing_catch_working_v0_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  plant_block_swing_catch_working_v0_update();
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
  plant_block_swing_catch_working_v0_initialize();
}

void MdlTerminate(void)
{
  plant_block_swing_catch_working_v0_terminate();
}

/* Registration function */
RT_MODEL_plant_block_swing_catch_working_v0_T
  *plant_block_swing_catch_working_v0(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)plant_block_swing_catch_working_v0_M, 0,
                sizeof(RT_MODEL_plant_block_swing_catch_working_v0_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&plant_block_swing_catch_working_v0_M->solverInfo,
                          &plant_block_swing_catch_working_v0_M->Timing.simTimeStep);
    rtsiSetTPtr(&plant_block_swing_catch_working_v0_M->solverInfo, &rtmGetTPtr
                (plant_block_swing_catch_working_v0_M));
    rtsiSetStepSizePtr(&plant_block_swing_catch_working_v0_M->solverInfo,
                       &plant_block_swing_catch_working_v0_M->Timing.stepSize0);
    rtsiSetdXPtr(&plant_block_swing_catch_working_v0_M->solverInfo,
                 &plant_block_swing_catch_working_v0_M->derivs);
    rtsiSetContStatesPtr(&plant_block_swing_catch_working_v0_M->solverInfo,
                         (real_T **)
                         &plant_block_swing_catch_working_v0_M->contStates);
    rtsiSetNumContStatesPtr(&plant_block_swing_catch_working_v0_M->solverInfo,
      &plant_block_swing_catch_working_v0_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr
      (&plant_block_swing_catch_working_v0_M->solverInfo,
       &plant_block_swing_catch_working_v0_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr
      (&plant_block_swing_catch_working_v0_M->solverInfo,
       &plant_block_swing_catch_working_v0_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr
      (&plant_block_swing_catch_working_v0_M->solverInfo,
       &plant_block_swing_catch_working_v0_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr
      (&plant_block_swing_catch_working_v0_M->solverInfo, (boolean_T**)
       &plant_block_swing_catch_working_v0_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&plant_block_swing_catch_working_v0_M->solverInfo,
                          (&rtmGetErrorStatus
      (plant_block_swing_catch_working_v0_M)));
    rtsiSetRTModelPtr(&plant_block_swing_catch_working_v0_M->solverInfo,
                      plant_block_swing_catch_working_v0_M);
  }

  rtsiSetSimTimeStep(&plant_block_swing_catch_working_v0_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange
    (&plant_block_swing_catch_working_v0_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&plant_block_swing_catch_working_v0_M->solverInfo,
    false);
  plant_block_swing_catch_working_v0_M->intgData.f[0] =
    plant_block_swing_catch_working_v0_M->odeF[0];
  plant_block_swing_catch_working_v0_M->contStates = ((real_T *)
    &plant_block_swing_catch_working_v0_X);
  plant_block_swing_catch_working_v0_M->contStateDisabled = ((boolean_T *)
    &plant_block_swing_catch_working_v0_XDis);
  plant_block_swing_catch_working_v0_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&plant_block_swing_catch_working_v0_M->solverInfo, (void *)
                    &plant_block_swing_catch_working_v0_M->intgData);
  rtsiSetSolverName(&plant_block_swing_catch_working_v0_M->solverInfo,"ode1");
  plant_block_swing_catch_working_v0_M->solverInfoPtr =
    (&plant_block_swing_catch_working_v0_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      plant_block_swing_catch_working_v0_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    plant_block_swing_catch_working_v0_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    plant_block_swing_catch_working_v0_M->Timing.sampleTimes =
      (&plant_block_swing_catch_working_v0_M->Timing.sampleTimesArray[0]);
    plant_block_swing_catch_working_v0_M->Timing.offsetTimes =
      (&plant_block_swing_catch_working_v0_M->Timing.offsetTimesArray[0]);

    /* task periods */
    plant_block_swing_catch_working_v0_M->Timing.sampleTimes[0] = (0.0);
    plant_block_swing_catch_working_v0_M->Timing.sampleTimes[1] = (0.008);

    /* task offsets */
    plant_block_swing_catch_working_v0_M->Timing.offsetTimes[0] = (0.0);
    plant_block_swing_catch_working_v0_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(plant_block_swing_catch_working_v0_M,
             &plant_block_swing_catch_working_v0_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      plant_block_swing_catch_working_v0_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    plant_block_swing_catch_working_v0_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(plant_block_swing_catch_working_v0_M, 420.0);
  plant_block_swing_catch_working_v0_M->Timing.stepSize0 = 0.008;
  plant_block_swing_catch_working_v0_M->Timing.stepSize1 = 0.008;

  /* External mode info */
  plant_block_swing_catch_working_v0_M->Sizes.checksums[0] = (3666780298U);
  plant_block_swing_catch_working_v0_M->Sizes.checksums[1] = (1877151022U);
  plant_block_swing_catch_working_v0_M->Sizes.checksums[2] = (2053444517U);
  plant_block_swing_catch_working_v0_M->Sizes.checksums[3] = (4005919979U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    plant_block_swing_catch_working_v0_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(plant_block_swing_catch_working_v0_M->extModeInfo,
      &plant_block_swing_catch_working_v0_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(plant_block_swing_catch_working_v0_M->extModeInfo,
                        plant_block_swing_catch_working_v0_M->Sizes.checksums);
    rteiSetTPtr(plant_block_swing_catch_working_v0_M->extModeInfo, rtmGetTPtr
                (plant_block_swing_catch_working_v0_M));
  }

  plant_block_swing_catch_working_v0_M->solverInfoPtr =
    (&plant_block_swing_catch_working_v0_M->solverInfo);
  plant_block_swing_catch_working_v0_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&plant_block_swing_catch_working_v0_M->solverInfo, 0.008);
  rtsiSetSolverMode(&plant_block_swing_catch_working_v0_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  plant_block_swing_catch_working_v0_M->blockIO = ((void *)
    &plant_block_swing_catch_working_v0_B);

  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      plant_block_swing_catch_working_v0_B.SFunction[i] = 0.0;
    }

    plant_block_swing_catch_working_v0_B.theta = 0.0;
    plant_block_swing_catch_working_v0_B.thetacorrection1 = 0.0;
    plant_block_swing_catch_working_v0_B.theta_dot = 0.0;
    plant_block_swing_catch_working_v0_B.Abs1 = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel4 = 0.0;
    plant_block_swing_catch_working_v0_B.Add2 = 0.0;
    plant_block_swing_catch_working_v0_B.ActualGimbleVelocity = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel6 = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel5 = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_b = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_d = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel3 = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_h = 0.0;
    plant_block_swing_catch_working_v0_B.Product2 = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel = 0.0;
    plant_block_swing_catch_working_v0_B.FilterCoefficient = 0.0;
    plant_block_swing_catch_working_v0_B.Saturation = 0.0;
    plant_block_swing_catch_working_v0_B.Gain = 0.0;
    plant_block_swing_catch_working_v0_B.thetacorrection1_a = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity1 = 0.0;
    plant_block_swing_catch_working_v0_B.PositionFilter1 = 0.0;
    plant_block_swing_catch_working_v0_B.TrigonometricFunction1 = 0.0;
    plant_block_swing_catch_working_v0_B.EnableSwingVelocity1 = 0.0;
    plant_block_swing_catch_working_v0_B.Integrator1 = 0.0;
    plant_block_swing_catch_working_v0_B.Saturation1 = 0.0;
    plant_block_swing_catch_working_v0_B.Integrator3 = 0.0;
    plant_block_swing_catch_working_v0_B.TrigonometricFunction = 0.0;
    plant_block_swing_catch_working_v0_B.Saturation_g = 0.0;
    plant_block_swing_catch_working_v0_B.Add6 = 0.0;
    plant_block_swing_catch_working_v0_B.Derivative6 = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_p = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_n = 0.0;
    plant_block_swing_catch_working_v0_B.TransferFcn = 0.0;
    plant_block_swing_catch_working_v0_B.FilterCoefficient_k = 0.0;
    plant_block_swing_catch_working_v0_B.Sum = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel2 = 0.0;
    plant_block_swing_catch_working_v0_B.Gain_k = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel1 = 0.0;
    plant_block_swing_catch_working_v0_B.Gain2 = 0.0;
    plant_block_swing_catch_working_v0_B.E = 0.0;
    plant_block_swing_catch_working_v0_B.Product2_b = 0.0;
    plant_block_swing_catch_working_v0_B.w_2 = 0.0;
    plant_block_swing_catch_working_v0_B.EnableSwingVelocity1_k = 0.0;
    plant_block_swing_catch_working_v0_B.Product = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_po = 0.0;
    plant_block_swing_catch_working_v0_B.Product2_d = 0.0;
    plant_block_swing_catch_working_v0_B.Product1 = 0.0;
    plant_block_swing_catch_working_v0_B.FilterCoefficient_m = 0.0;
    plant_block_swing_catch_working_v0_B.Saturation2 = 0.0;
    plant_block_swing_catch_working_v0_B.Add = 0.0;
    plant_block_swing_catch_working_v0_B.Saturation1_p = 0.0;
    plant_block_swing_catch_working_v0_B.Add1 = 0.0;
    plant_block_swing_catch_working_v0_B.Gain4 = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterGimbleVelocity2 = 0.0;
    plant_block_swing_catch_working_v0_B.theta4 = 0.0;
    plant_block_swing_catch_working_v0_B.Derivative2 = 0.0;
    plant_block_swing_catch_working_v0_B.encodertoradians = 0.0;
    plant_block_swing_catch_working_v0_B.Derivative = 0.0;
    plant_block_swing_catch_working_v0_B.IntegralGain = 0.0;
    plant_block_swing_catch_working_v0_B.radsectorpm = 0.0;
    plant_block_swing_catch_working_v0_B.IntegralGain_k = 0.0;
    plant_block_swing_catch_working_v0_B.Resetafterswingstate = 0.0;
    plant_block_swing_catch_working_v0_B.Memory = 0.0;
    plant_block_swing_catch_working_v0_B.Reset = 0.0;
    plant_block_swing_catch_working_v0_B.Sum3 = 0.0;
    plant_block_swing_catch_working_v0_B.IntegralGain_b = 0.0;
    plant_block_swing_catch_working_v0_B.LowPassFilterFlyWheel7 = 0.0;
    plant_block_swing_catch_working_v0_B.Sum_d = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_o = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_c = 0.0;
    plant_block_swing_catch_working_v0_B.SliderGain_i = 0.0;
    plant_block_swing_catch_working_v0_B.Add_n = 0.0;
    plant_block_swing_catch_working_v0_B.p = 0.0;
    plant_block_swing_catch_working_v0_B.x = 0.0;
    plant_block_swing_catch_working_v0_B.y = 0.0;
    plant_block_swing_catch_working_v0_B.z = 0.0;
    plant_block_swing_catch_working_v0_B.r = 0.0;
    plant_block_swing_catch_working_v0_B.g = 0.0;
  }

  /* parameters */
  plant_block_swing_catch_working_v0_M->defaultParam = ((real_T *)
    &plant_block_swing_catch_working_v0_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &plant_block_swing_catch_working_v0_X;
    plant_block_swing_catch_working_v0_M->contStates = (x);
    (void) memset((void *)&plant_block_swing_catch_working_v0_X, 0,
                  sizeof(X_plant_block_swing_catch_working_v0_T));
  }

  /* disabled states */
  {
    boolean_T *xdis = (boolean_T *) &plant_block_swing_catch_working_v0_XDis;
    plant_block_swing_catch_working_v0_M->contStateDisabled = (xdis);
    (void) memset((void *)&plant_block_swing_catch_working_v0_XDis, 0,
                  sizeof(XDis_plant_block_swing_catch_working_v0_T));
  }

  /* states (dwork) */
  plant_block_swing_catch_working_v0_M->dwork = ((void *)
    &plant_block_swing_catch_working_v0_DW);
  (void) memset((void *)&plant_block_swing_catch_working_v0_DW, 0,
                sizeof(DW_plant_block_swing_catch_working_v0_T));
  plant_block_swing_catch_working_v0_DW.TimeStampA = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_n = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_p = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_i = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_l = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_b = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_b = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_f = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_p = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_h = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_f = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_j = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_i = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_e = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_o = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_m = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_h = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_j = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_j = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_e = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_c = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_bp = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_e = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_fd = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_k = 0.0;
  plant_block_swing_catch_working_v0_DW.Memory_PreviousInput = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampA_h5 = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeA_k = 0.0;
  plant_block_swing_catch_working_v0_DW.TimeStampB_o = 0.0;
  plant_block_swing_catch_working_v0_DW.LastUAtTimeB_d = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    plant_block_swing_catch_working_v0_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    RTWSfcnInfo *sfcnInfo =
      &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.sfcnInfo;
    plant_block_swing_catch_working_v0_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (plant_block_swing_catch_working_v0_M)));
    plant_block_swing_catch_working_v0_M->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &plant_block_swing_catch_working_v0_M->Sizes.numSampTimes);
    plant_block_swing_catch_working_v0_M->NonInlinedSFcns.taskTimePtrs[0] =
      (&rtmGetTPtr(plant_block_swing_catch_working_v0_M)[0]);
    plant_block_swing_catch_working_v0_M->NonInlinedSFcns.taskTimePtrs[1] =
      (&rtmGetTPtr(plant_block_swing_catch_working_v0_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   plant_block_swing_catch_working_v0_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (plant_block_swing_catch_working_v0_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (plant_block_swing_catch_working_v0_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (plant_block_swing_catch_working_v0_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &plant_block_swing_catch_working_v0_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (plant_block_swing_catch_working_v0_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &plant_block_swing_catch_working_v0_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &plant_block_swing_catch_working_v0_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &plant_block_swing_catch_working_v0_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &plant_block_swing_catch_working_v0_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &plant_block_swing_catch_working_v0_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &plant_block_swing_catch_working_v0_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &plant_block_swing_catch_working_v0_M->solverInfoPtr);
  }

  plant_block_swing_catch_working_v0_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)
                  &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  1*sizeof(SimStruct));
    plant_block_swing_catch_working_v0_M->childSfunctions =
      (&plant_block_swing_catch_working_v0_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);
    plant_block_swing_catch_working_v0_M->childSfunctions[0] =
      (&plant_block_swing_catch_working_v0_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: plant_block_swing_catch_working_v0/<S1>/S-Function (ECPDSPDriver) */
    {
      SimStruct *rts = plant_block_swing_catch_working_v0_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_block_swing_catch_working_v0_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        ssSetPortInfoForInputs(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &plant_block_swing_catch_working_v0_B.Saturation;
          sfcnUPtrs[1] = &plant_block_swing_catch_working_v0_B.Add1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 2);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        ssSetPortInfoForOutputs(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 5);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            plant_block_swing_catch_working_v0_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "plant_block_swing_catch_working_v0/ECPDSP Driver/S-Function");
      ssSetRTModel(rts,plant_block_swing_catch_working_v0_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_block_swing_catch_working_v0_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       plant_block_swing_catch_working_v0_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       plant_block_swing_catch_working_v0_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       plant_block_swing_catch_working_v0_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       plant_block_swing_catch_working_v0_P.SFunction_P4_Size);
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
  plant_block_swing_catch_working_v0_M->Sizes.numContStates = (24);/* Number of continuous states */
  plant_block_swing_catch_working_v0_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  plant_block_swing_catch_working_v0_M->Sizes.numY = (0);/* Number of model outputs */
  plant_block_swing_catch_working_v0_M->Sizes.numU = (0);/* Number of model inputs */
  plant_block_swing_catch_working_v0_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  plant_block_swing_catch_working_v0_M->Sizes.numSampTimes = (2);/* Number of sample times */
  plant_block_swing_catch_working_v0_M->Sizes.numBlocks = (194);/* Number of blocks */
  plant_block_swing_catch_working_v0_M->Sizes.numBlockIO = (80);/* Number of block outputs */
  plant_block_swing_catch_working_v0_M->Sizes.numBlockPrms = (114);/* Sum of parameter "widths" */
  return plant_block_swing_catch_working_v0_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
