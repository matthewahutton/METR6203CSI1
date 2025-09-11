/*
 * plant_block_2024.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "plant_block_2024".
 *
 * Model version              : 11.2
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Sep 11 18:01:50 2025
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
#include "rt_nonfinite.h"
#include "plant_block_2024_private.h"
#include <string.h>
#include "plant_block_2024_dt.h"

/* Named constants for Chart: '<Root>/Chart' */
#define plant_block_2024_CALL_EVENT    (-1)
#define plant_block_2024_IN_Catch      (1U)
#define plant_block_2024_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define plant_block_2024_IN_SwingUp    (2U)

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
  int_T nXc = 8;
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
  real_T accel_cmd;
  real_T rtb_Sum;
  real_T rtb_TransferFcn8;
  real_T torqueRequest_j_tmp;
  real_T u;
  real_T *lastU;
  int8_T rtAction;
  boolean_T tmp;
  boolean_T tmp_0;
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

  /* Reset subsysRan breadcrumbs */
  srClearBC(plant_block_2024_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(plant_block_2024_DW.IfActionSubsystem1_SubsysRanBC);

  /* TransferFcn: '<Root>/Transfer Fcn1' */
  plant_block_2024_B.phi = 0.0;
  plant_block_2024_B.phi += plant_block_2024_P.TransferFcn1_C *
    plant_block_2024_X.TransferFcn1_CSTATE;

  /* ManualSwitch: '<Root>/Manual Switch1' */
  if (plant_block_2024_P.ManualSwitch1_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch1' */
    plant_block_2024_B.ManualSwitch1 = 0.0;
  } else {
    /* ManualSwitch: '<Root>/Manual Switch1' */
    plant_block_2024_B.ManualSwitch1 = plant_block_2024_B.phi;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch1' */

  /* Derivative: '<Root>/Derivative3' incorporates:
   *  Derivative: '<Root>/Derivative4'
   *  Derivative: '<Root>/Derivative5'
   *  Derivative: '<Root>/Derivative6'
   *  Derivative: '<Root>/Derivative7'
   */
  rtb_Sum = plant_block_2024_M->Timing.t[0];
  if ((plant_block_2024_DW.TimeStampA >= rtb_Sum) &&
      (plant_block_2024_DW.TimeStampB >= rtb_Sum)) {
    /* Derivative: '<Root>/Derivative3' */
    plant_block_2024_B.dphi = 0.0;
  } else {
    accel_cmd = plant_block_2024_DW.TimeStampA;
    lastU = &plant_block_2024_DW.LastUAtTimeA;
    if (plant_block_2024_DW.TimeStampA < plant_block_2024_DW.TimeStampB) {
      if (plant_block_2024_DW.TimeStampB < rtb_Sum) {
        accel_cmd = plant_block_2024_DW.TimeStampB;
        lastU = &plant_block_2024_DW.LastUAtTimeB;
      }
    } else if (plant_block_2024_DW.TimeStampA >= rtb_Sum) {
      accel_cmd = plant_block_2024_DW.TimeStampB;
      lastU = &plant_block_2024_DW.LastUAtTimeB;
    }

    /* Derivative: '<Root>/Derivative3' */
    plant_block_2024_B.dphi = (plant_block_2024_B.ManualSwitch1 - *lastU) /
      (rtb_Sum - accel_cmd);
  }

  /* End of Derivative: '<Root>/Derivative3' */
  tmp = rtmIsMajorTimeStep(plant_block_2024_M);
  if (tmp) {
    /* Chart: '<Root>/Chart' */
    /* Gateway: Chart */
    plant_block_2024_DW.sfEvent_j = plant_block_2024_CALL_EVENT;

    /* During: Chart */
    if (plant_block_2024_DW.is_active_c7_plant_block_2024 == 0) {
      /* Entry: Chart */
      plant_block_2024_DW.is_active_c7_plant_block_2024 = 1U;

      /* Entry Internal: Chart */
      /* Transition: '<S1>:2' */
      plant_block_2024_DW.is_c7_plant_block_2024 = plant_block_2024_IN_SwingUp;

      /* Entry 'SwingUp': '<S1>:1' */
      plant_block_2024_B.state = 1.0;
    } else if (plant_block_2024_DW.is_c7_plant_block_2024 ==
               plant_block_2024_IN_Catch) {
      /* During 'Catch': '<S1>:3' */
      plant_block_2024_B.state = 2.0;
    } else {
      /* During 'SwingUp': '<S1>:1' */
      plant_block_2024_B.state = 1.0;
    }

    /* End of Chart: '<Root>/Chart' */
  }

  /* TransferFcn: '<Root>/Transfer Fcn2' */
  plant_block_2024_B.theta = 0.0;
  plant_block_2024_B.theta += plant_block_2024_P.TransferFcn2_C *
    plant_block_2024_X.TransferFcn2_CSTATE;

  /* ManualSwitch: '<Root>/Manual Switch' */
  if (plant_block_2024_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch' */
    plant_block_2024_B.theta_l = 0.0;
  } else {
    /* ManualSwitch: '<Root>/Manual Switch' */
    plant_block_2024_B.theta_l = plant_block_2024_B.theta;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Derivative: '<Root>/Derivative5' */
  if ((plant_block_2024_DW.TimeStampA_i >= rtb_Sum) &&
      (plant_block_2024_DW.TimeStampB_k >= rtb_Sum)) {
    /* Derivative: '<Root>/Derivative5' */
    plant_block_2024_B.dtheta = 0.0;
  } else {
    accel_cmd = plant_block_2024_DW.TimeStampA_i;
    lastU = &plant_block_2024_DW.LastUAtTimeA_a;
    if (plant_block_2024_DW.TimeStampA_i < plant_block_2024_DW.TimeStampB_k) {
      if (plant_block_2024_DW.TimeStampB_k < rtb_Sum) {
        accel_cmd = plant_block_2024_DW.TimeStampB_k;
        lastU = &plant_block_2024_DW.LastUAtTimeB_f;
      }
    } else if (plant_block_2024_DW.TimeStampA_i >= rtb_Sum) {
      accel_cmd = plant_block_2024_DW.TimeStampB_k;
      lastU = &plant_block_2024_DW.LastUAtTimeB_f;
    }

    /* Derivative: '<Root>/Derivative5' */
    plant_block_2024_B.dtheta = (plant_block_2024_B.theta_l - *lastU) / (rtb_Sum
      - accel_cmd);
  }

  /* MATLAB Function: '<S8>/Swing-up' incorporates:
   *  SignalConversion generated from: '<S114>/ SFunction '
   */
  plant_block_2024_DW.sfEvent = plant_block_2024_CALL_EVENT;

  /* MATLAB Function 'Subsystem6/Swing-up': '<S114>:1' */
  /* '<S114>:1:13' */
  /* '<S114>:1:14' */
  /* '<S114>:1:15' */
  /* '<S114>:1:19' */
  /* '<S114>:1:23' */
  /* '<S114>:1:24' */
  /* '<S114>:1:27' */
  /* '<S114>:1:31' */
  accel_cmd = 0.15 * plant_block_2024_B.dphi;

  /* '<S114>:1:32' */
  /* '<S114>:1:33' */
  /* '<S114>:1:38' */
  rtb_TransferFcn8 = cos(plant_block_2024_B.ManualSwitch1 + 3.1415926535897931);
  u = plant_block_2024_B.dphi * rtb_TransferFcn8;
  if (rtIsNaN(u)) {
    u = (rtNaN);
  } else if (u < 0.0) {
    u = -1.0;
  } else {
    u = (u > 0.0);
  }

  accel_cmd = ((accel_cmd * accel_cmd * 0.0635 - 0.1868805 * rtb_TransferFcn8) -
               0.1868805) * 1000.0 * u;

  /* '<S114>:1:41' */
  if (fabs(accel_cmd) > 20.0) {
    /* '<S114>:1:42' */
    /* '<S114>:1:43' */
    if (rtIsNaN(accel_cmd)) {
      u = (rtNaN);
    } else if (accel_cmd < 0.0) {
      u = -1.0;
    } else {
      u = (accel_cmd > 0.0);
    }

    accel_cmd = u * 20.0;
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' */
  /* '<S114>:1:47' */
  switch ((int32_T)plant_block_2024_B.state) {
   case 1:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  TransferFcn: '<Root>/Transfer Fcn8'
     */
    plant_block_2024_B.torqueRequest = plant_block_2024_P.TransferFcn8_C *
      plant_block_2024_X.TransferFcn8_CSTATE;
    break;

   case 2:
    /* Switch: '<S8>/Switch' incorporates:
     *  Abs: '<S8>/Abs'
     */
    if (fabs(plant_block_2024_B.ManualSwitch1) >
        plant_block_2024_P.Switch_Threshold) {
      /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
       *  Gain: '<S8>/Gain1'
       *  SignalConversion generated from: '<S8>/Gain1'
       */
      plant_block_2024_B.torqueRequest = ((plant_block_2024_P.Gain1_Gain[0] *
        plant_block_2024_B.theta_l + plant_block_2024_P.Gain1_Gain[1] *
        plant_block_2024_B.dtheta) + plant_block_2024_P.Gain1_Gain[2] *
        plant_block_2024_B.ManualSwitch1) + plant_block_2024_P.Gain1_Gain[3] *
        plant_block_2024_B.dphi;
    } else {
      /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
       *  MATLAB Function: '<S8>/Swing-up'
       */
      plant_block_2024_B.torqueRequest = accel_cmd;
    }

    /* End of Switch: '<S8>/Switch' */
    break;

   default:
    /* MultiPortSwitch: '<Root>/Multiport Switch' */
    plant_block_2024_B.torqueRequest = 0.0;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* MATLAB Function: '<Root>/MATLAB Function3' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  plant_block_2024_DW.sfEvent_f = plant_block_2024_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function3': '<S4>:1' */
  /* '<S4>:1:3' */
  /* '<S4>:1:6' */
  /* '<S4>:1:12' */
  /* '<S4>:1:13' */
  /* '<S4>:1:16' */
  /* '<S4>:1:18' */
  /* '<S4>:1:19' */
  rtb_TransferFcn8 = cos(plant_block_2024_B.ManualSwitch1);
  u = plant_block_2024_B.dphi * plant_block_2024_B.dphi;
  plant_block_2024_B.ddtheta_control = ((rtb_TransferFcn8 - 1.0) * 0.418184604 +
    u * 0.00655) * -15.0 * plant_block_2024_B.dphi * rtb_TransferFcn8 / 0.37;
  if (tmp) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* If: '<Root>/If' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    tmp_0 = rtsiIsModeUpdateTimeStep(&plant_block_2024_M->solverInfo);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
    if (tmp_0) {
      rtAction = (int8_T)!(plant_block_2024_P.Constant2_Value < 15.0);
      plant_block_2024_DW.If_ActiveSubsystem = rtAction;
    } else {
      rtAction = plant_block_2024_DW.If_ActiveSubsystem;
    }

    if (rtAction == 0) {
      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* Merge: '<Root>/Merge' incorporates:
       *  SignalConversion generated from: '<S2>/ddtheta_control'
       */
      plant_block_2024_B.Merge = plant_block_2024_B.ddtheta_control;
      if (tmp_0) {
        srUpdateBC(plant_block_2024_DW.IfActionSubsystem_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* Merge: '<Root>/Merge' incorporates:
       *  Constant: '<Root>/Constant1'
       *  SignalConversion generated from: '<S3>/In1'
       */
      plant_block_2024_B.Merge = plant_block_2024_P.Constant1_Value;
      if (tmp_0) {
        srUpdateBC(plant_block_2024_DW.IfActionSubsystem1_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    }

    /* End of If: '<Root>/If' */
    /* S-Function (ECPDSPDriver): '<S9>/S-Function' */

    /* Level2 S-Function Block: '<S9>/S-Function' (ECPDSPDriver) */
    {
      SimStruct *rts = plant_block_2024_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Demux1' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.SFunction[4];
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1193003913U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Derivative3' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.dphi;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3470388843U, time, pData, size);
      }
    }
  }

  /* Derivative: '<Root>/Derivative4' */
  if ((plant_block_2024_DW.TimeStampA_l >= rtb_Sum) &&
      (plant_block_2024_DW.TimeStampB_n >= rtb_Sum)) {
    /* Derivative: '<Root>/Derivative4' */
    plant_block_2024_B.ddphi = 0.0;
  } else {
    accel_cmd = plant_block_2024_DW.TimeStampA_l;
    lastU = &plant_block_2024_DW.LastUAtTimeA_e;
    if (plant_block_2024_DW.TimeStampA_l < plant_block_2024_DW.TimeStampB_n) {
      if (plant_block_2024_DW.TimeStampB_n < rtb_Sum) {
        accel_cmd = plant_block_2024_DW.TimeStampB_n;
        lastU = &plant_block_2024_DW.LastUAtTimeB_i;
      }
    } else if (plant_block_2024_DW.TimeStampA_l >= rtb_Sum) {
      accel_cmd = plant_block_2024_DW.TimeStampB_n;
      lastU = &plant_block_2024_DW.LastUAtTimeB_i;
    }

    /* Derivative: '<Root>/Derivative4' */
    plant_block_2024_B.ddphi = (plant_block_2024_B.dphi - *lastU) / (rtb_Sum -
      accel_cmd);
  }

  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Derivative4' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.ddphi;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(4171463285U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Derivative5' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.dtheta;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2900208168U, time, pData, size);
      }
    }
  }

  /* TransferFcn: '<Root>/Transfer Fcn3' */
  plant_block_2024_B.gimblePostFilter = plant_block_2024_P.TransferFcn3_C *
    plant_block_2024_X.TransferFcn3_CSTATE;

  /* Derivative: '<Root>/Derivative7' */
  if ((plant_block_2024_DW.TimeStampA_d >= rtb_Sum) &&
      (plant_block_2024_DW.TimeStampB_b >= rtb_Sum)) {
    /* Derivative: '<Root>/Derivative7' */
    plant_block_2024_B.gimbleSpeed = 0.0;
  } else {
    accel_cmd = plant_block_2024_DW.TimeStampA_d;
    lastU = &plant_block_2024_DW.LastUAtTimeA_i;
    if (plant_block_2024_DW.TimeStampA_d < plant_block_2024_DW.TimeStampB_b) {
      if (plant_block_2024_DW.TimeStampB_b < rtb_Sum) {
        accel_cmd = plant_block_2024_DW.TimeStampB_b;
        lastU = &plant_block_2024_DW.LastUAtTimeB_b;
      }
    } else if (plant_block_2024_DW.TimeStampA_d >= rtb_Sum) {
      accel_cmd = plant_block_2024_DW.TimeStampB_b;
      lastU = &plant_block_2024_DW.LastUAtTimeB_b;
    }

    /* Derivative: '<Root>/Derivative7' */
    plant_block_2024_B.gimbleSpeed = (plant_block_2024_B.gimblePostFilter -
      *lastU) / (rtb_Sum - accel_cmd);
  }

  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Derivative7' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.gimbleSpeed;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(93705523U, time, pData, size);
      }
    }

    /* Gain: '<Root>/Gain1' */
    plant_block_2024_B.gimblePreFilter = plant_block_2024_P.Gain1_Gain_o *
      plant_block_2024_B.SFunction[1];

    /* ToAsyncQueueBlock generated from: '<Root>/Gain1' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.gimblePreFilter;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(445659569U, time, pData, size);
      }
    }

    /* Gain: '<Root>/Gain2' */
    plant_block_2024_B.phiPreFilter = plant_block_2024_P.Gain2_Gain *
      plant_block_2024_B.SFunction[2];

    /* ToAsyncQueueBlock generated from: '<Root>/Gain2' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.phiPreFilter;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2334543765U, time, pData, size);
      }
    }

    /* Gain: '<Root>/Gain3' */
    plant_block_2024_B.thetaPreFilter = plant_block_2024_P.Gain3_Gain *
      plant_block_2024_B.SFunction[3];

    /* ToAsyncQueueBlock generated from: '<Root>/Gain3' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.thetaPreFilter;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3412121483U, time, pData, size);
      }
    }
  }

  /* Gain: '<Root>/Gain5' */
  plant_block_2024_B.gimblespeedrequest = plant_block_2024_P.Gain5_Gain *
    plant_block_2024_B.torqueRequest;
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Gain5' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.gimblespeedrequest;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1709102468U, time, pData, size);
      }
    }

    /* Gain: '<Root>/Gain' */
    plant_block_2024_B.gyroPreFilter = plant_block_2024_P.Gain_Gain *
      plant_block_2024_B.SFunction[0];
  }

  /* Derivative: '<Root>/Derivative6' */
  if ((plant_block_2024_DW.TimeStampA_b >= rtb_Sum) &&
      (plant_block_2024_DW.TimeStampB_o >= rtb_Sum)) {
    rtb_Sum = 0.0;
  } else {
    accel_cmd = plant_block_2024_DW.TimeStampA_b;
    lastU = &plant_block_2024_DW.LastUAtTimeA_d;
    if (plant_block_2024_DW.TimeStampA_b < plant_block_2024_DW.TimeStampB_o) {
      if (plant_block_2024_DW.TimeStampB_o < rtb_Sum) {
        accel_cmd = plant_block_2024_DW.TimeStampB_o;
        lastU = &plant_block_2024_DW.LastUAtTimeB_d;
      }
    } else if (plant_block_2024_DW.TimeStampA_b >= rtb_Sum) {
      accel_cmd = plant_block_2024_DW.TimeStampB_o;
      lastU = &plant_block_2024_DW.LastUAtTimeB_d;
    }

    rtb_Sum = (plant_block_2024_B.gyroPreFilter - *lastU) / (rtb_Sum - accel_cmd);
  }

  /* Gain: '<Root>/Gain6' */
  plant_block_2024_B.FlywheelSpeed = plant_block_2024_P.Gain6_Gain * rtb_Sum;
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Gain6' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.FlywheelSpeed;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(961919328U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Gain' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.gyroPreFilter;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1116271553U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/MATLAB Function3' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.ddtheta_control;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2006830082U, time, pData, size);
      }
    }
  }

  /* MATLAB Function: '<Root>/MATLAB Function4' */
  plant_block_2024_DW.sfEvent_n = plant_block_2024_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function4': '<S5>:1' */
  /* '<S5>:1:2' */
  /* '<S5>:1:3' */
  /* '<S5>:1:7' */
  /* '<S5>:1:10' */
  /* '<S5>:1:11' */
  /* '<S5>:1:13' */
  /* '<S5>:1:16' */
  rtb_Sum = sin(2.0 * plant_block_2024_B.ManualSwitch1);
  accel_cmd = plant_block_2024_B.Merge * 0.158 * 0.072792039999999988;
  torqueRequest_j_tmp = rtb_TransferFcn8 * rtb_TransferFcn8;
  plant_block_2024_B.torqueRequest_j = (((((((((5.5625E-5 *
    plant_block_2024_B.Merge + 0.153 * plant_block_2024_B.Merge) +
    plant_block_2024_B.dtheta) + plant_block_2024_B.Merge * 0.158 * 0.1369) +
    accel_cmd) - 5.5625E-5 * plant_block_2024_B.Merge * torqueRequest_j_tmp) +
    5.5625E-5 * plant_block_2024_B.dtheta * rtb_Sum * plant_block_2024_B.dphi) -
    accel_cmd * torqueRequest_j_tmp) + 0.158 * sin
    (plant_block_2024_B.ManualSwitch1) * 0.37 * u * 0.2698) +
    plant_block_2024_B.dtheta * 0.158 * rtb_Sum * plant_block_2024_B.dphi *
    0.072792039999999988) - plant_block_2024_B.ddphi * 0.158 * 0.37 * 0.2698 *
    rtb_TransferFcn8;
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/MATLAB Function4' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.torqueRequest_j;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2517932496U, time, pData, size);
      }
    }

    /* ManualSwitch: '<Root>/Manual Switch2' */
    if (plant_block_2024_P.ManualSwitch2_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
       *  Constant: '<Root>/Constant'
       */
      plant_block_2024_B.ManualSwitch2 = plant_block_2024_P.Constant_Value;
    } else {
      /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
       *  Constant: '<Root>/targetGyro'
       */
      plant_block_2024_B.ManualSwitch2 = plant_block_2024_P.targetGyro_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch2' */
  }

  /* Sum: '<Root>/Sum' */
  rtb_Sum = plant_block_2024_B.ManualSwitch2 - plant_block_2024_B.FlywheelSpeed;

  /* Gain: '<S47>/Filter Coefficient' incorporates:
   *  Gain: '<S37>/Derivative Gain'
   *  Integrator: '<S39>/Filter'
   *  Sum: '<S39>/SumD'
   */
  plant_block_2024_B.FilterCoefficient = (plant_block_2024_P.PIDController_D *
    rtb_Sum - plant_block_2024_X.Filter_CSTATE) *
    plant_block_2024_P.PIDController_N;

  /* Sum: '<S53>/Sum' incorporates:
   *  Gain: '<S49>/Proportional Gain'
   *  Integrator: '<S44>/Integrator'
   */
  plant_block_2024_B.Sum = (plant_block_2024_P.PIDController_P * rtb_Sum +
    plant_block_2024_X.Integrator_CSTATE) + plant_block_2024_B.FilterCoefficient;
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/PID Controller' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.Sum;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3774612428U, time, pData, size);
      }
    }
  }

  /* Sum: '<Root>/Sum1' */
  plant_block_2024_B.gimbleSpeedError = plant_block_2024_B.gimblespeedrequest -
    plant_block_2024_B.gimbleSpeed;

  /* Gain: '<Root>/Gain7' */
  rtb_TransferFcn8 = plant_block_2024_P.Gain7_Gain *
    plant_block_2024_B.gimbleSpeedError;

  /* Gain: '<S99>/Filter Coefficient' incorporates:
   *  Gain: '<S89>/Derivative Gain'
   *  Integrator: '<S91>/Filter'
   *  Sum: '<S91>/SumD'
   */
  plant_block_2024_B.FilterCoefficient_h = (plant_block_2024_P.PIDController1_D *
    rtb_TransferFcn8 - plant_block_2024_X.Filter_CSTATE_g) *
    plant_block_2024_P.PIDController1_N;

  /* Sum: '<S105>/Sum' incorporates:
   *  Gain: '<S101>/Proportional Gain'
   *  Integrator: '<S96>/Integrator'
   */
  accel_cmd = (plant_block_2024_P.PIDController1_P * rtb_TransferFcn8 +
               plant_block_2024_X.Integrator_CSTATE_d) +
    plant_block_2024_B.FilterCoefficient_h;

  /* Saturate: '<Root>/Saturation1' */
  if (accel_cmd > plant_block_2024_P.Saturation1_UpperSat) {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_2024_B.gimbleVoltage = plant_block_2024_P.Saturation1_UpperSat;
  } else if (accel_cmd < plant_block_2024_P.Saturation1_LowerSat) {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_2024_B.gimbleVoltage = plant_block_2024_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<Root>/Saturation1' */
    plant_block_2024_B.gimbleVoltage = accel_cmd;
  }

  /* End of Saturate: '<Root>/Saturation1' */
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Saturation1' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.gimbleVoltage;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1705732488U, time, pData, size);
      }
    }
  }

  /* Saturate: '<Root>/Saturation' */
  if (plant_block_2024_B.Sum > plant_block_2024_P.Saturation_UpperSat) {
    /* Saturate: '<Root>/Saturation' */
    plant_block_2024_B.flywheelVoltage = plant_block_2024_P.Saturation_UpperSat;
  } else if (plant_block_2024_B.Sum < plant_block_2024_P.Saturation_LowerSat) {
    /* Saturate: '<Root>/Saturation' */
    plant_block_2024_B.flywheelVoltage = plant_block_2024_P.Saturation_LowerSat;
  } else {
    /* Saturate: '<Root>/Saturation' */
    plant_block_2024_B.flywheelVoltage = plant_block_2024_B.Sum;
  }

  /* End of Saturate: '<Root>/Saturation' */
  if (tmp) {
    /* ToAsyncQueueBlock generated from: '<Root>/Saturation' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.flywheelVoltage;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(572006559U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Sum1' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.gimbleSpeedError;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(732663393U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Transfer Fcn1' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.phi;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3556379864U, time, pData, size);
      }
    }

    /* ToAsyncQueueBlock generated from: '<Root>/Transfer Fcn2' */
    if (rtmIsMajorTimeStep(plant_block_2024_M)) {
      {
        double time = plant_block_2024_M->Timing.t[1];
        void *pData = (void *)&plant_block_2024_B.theta;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(555173188U, time, pData, size);
      }
    }
  }

  /* Gain: '<S41>/Integral Gain' */
  plant_block_2024_B.IntegralGain = plant_block_2024_P.PIDController_I * rtb_Sum;

  /* Gain: '<S93>/Integral Gain' */
  plant_block_2024_B.IntegralGain_b = plant_block_2024_P.PIDController1_I *
    rtb_TransferFcn8;
}

/* Model update function */
void plant_block_2024_update(void)
{
  real_T *lastU;

  /* Update for Derivative: '<Root>/Derivative3' */
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

  *lastU = plant_block_2024_B.ManualSwitch1;

  /* End of Update for Derivative: '<Root>/Derivative3' */

  /* Update for Derivative: '<Root>/Derivative5' */
  if (plant_block_2024_DW.TimeStampA_i == (rtInf)) {
    plant_block_2024_DW.TimeStampA_i = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_a;
  } else if (plant_block_2024_DW.TimeStampB_k == (rtInf)) {
    plant_block_2024_DW.TimeStampB_k = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_f;
  } else if (plant_block_2024_DW.TimeStampA_i < plant_block_2024_DW.TimeStampB_k)
  {
    plant_block_2024_DW.TimeStampA_i = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_a;
  } else {
    plant_block_2024_DW.TimeStampB_k = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_f;
  }

  *lastU = plant_block_2024_B.theta_l;

  /* End of Update for Derivative: '<Root>/Derivative5' */

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

  *lastU = plant_block_2024_B.dphi;

  /* End of Update for Derivative: '<Root>/Derivative4' */

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

  *lastU = plant_block_2024_B.gimblePostFilter;

  /* End of Update for Derivative: '<Root>/Derivative7' */

  /* Update for Derivative: '<Root>/Derivative6' */
  if (plant_block_2024_DW.TimeStampA_b == (rtInf)) {
    plant_block_2024_DW.TimeStampA_b = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_d;
  } else if (plant_block_2024_DW.TimeStampB_o == (rtInf)) {
    plant_block_2024_DW.TimeStampB_o = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_d;
  } else if (plant_block_2024_DW.TimeStampA_b < plant_block_2024_DW.TimeStampB_o)
  {
    plant_block_2024_DW.TimeStampA_b = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeA_d;
  } else {
    plant_block_2024_DW.TimeStampB_o = plant_block_2024_M->Timing.t[0];
    lastU = &plant_block_2024_DW.LastUAtTimeB_d;
  }

  *lastU = plant_block_2024_B.gyroPreFilter;

  /* End of Update for Derivative: '<Root>/Derivative6' */
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

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = plant_block_2024_P.TransferFcn1_A *
    plant_block_2024_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += plant_block_2024_B.phiPreFilter;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn8' */
  _rtXdot->TransferFcn8_CSTATE = plant_block_2024_P.TransferFcn8_A *
    plant_block_2024_X.TransferFcn8_CSTATE;
  _rtXdot->TransferFcn8_CSTATE += plant_block_2024_B.torqueRequest_j;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = plant_block_2024_P.TransferFcn2_A *
    plant_block_2024_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += plant_block_2024_B.thetaPreFilter;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE = plant_block_2024_P.TransferFcn3_A *
    plant_block_2024_X.TransferFcn3_CSTATE;
  _rtXdot->TransferFcn3_CSTATE += plant_block_2024_B.gimblePreFilter;

  /* Derivatives for Integrator: '<S44>/Integrator' */
  _rtXdot->Integrator_CSTATE = plant_block_2024_B.IntegralGain;

  /* Derivatives for Integrator: '<S39>/Filter' */
  _rtXdot->Filter_CSTATE = plant_block_2024_B.FilterCoefficient;

  /* Derivatives for Integrator: '<S96>/Integrator' */
  _rtXdot->Integrator_CSTATE_d = plant_block_2024_B.IntegralGain_b;

  /* Derivatives for Integrator: '<S91>/Filter' */
  _rtXdot->Filter_CSTATE_g = plant_block_2024_B.FilterCoefficient_h;
}

/* Model initialize function */
void plant_block_2024_initialize(void)
{
  /* Start for If: '<Root>/If' */
  plant_block_2024_DW.If_ActiveSubsystem = -1;

  /* Start for S-Function (ECPDSPDriver): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (ECPDSPDriver) */
  {
    SimStruct *rts = plant_block_2024_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn1' */
  plant_block_2024_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative3' */
  plant_block_2024_DW.TimeStampA = (rtInf);
  plant_block_2024_DW.TimeStampB = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn8' */
  plant_block_2024_X.TransferFcn8_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn2' */
  plant_block_2024_X.TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative5' */
  plant_block_2024_DW.TimeStampA_i = (rtInf);
  plant_block_2024_DW.TimeStampB_k = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative4' */
  plant_block_2024_DW.TimeStampA_l = (rtInf);
  plant_block_2024_DW.TimeStampB_n = (rtInf);

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn3' */
  plant_block_2024_X.TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<Root>/Derivative7' */
  plant_block_2024_DW.TimeStampA_d = (rtInf);
  plant_block_2024_DW.TimeStampB_b = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative6' */
  plant_block_2024_DW.TimeStampA_b = (rtInf);
  plant_block_2024_DW.TimeStampB_o = (rtInf);

  /* InitializeConditions for Integrator: '<S44>/Integrator' */
  plant_block_2024_X.Integrator_CSTATE =
    plant_block_2024_P.PIDController_InitialConditionForIntegrator;

  /* InitializeConditions for Integrator: '<S39>/Filter' */
  plant_block_2024_X.Filter_CSTATE =
    plant_block_2024_P.PIDController_InitialConditionForFilter;

  /* InitializeConditions for Integrator: '<S96>/Integrator' */
  plant_block_2024_X.Integrator_CSTATE_d =
    plant_block_2024_P.PIDController1_InitialConditionForIntegrator;

  /* InitializeConditions for Integrator: '<S91>/Filter' */
  plant_block_2024_X.Filter_CSTATE_g =
    plant_block_2024_P.PIDController1_InitialConditionForFilter;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  plant_block_2024_DW.sfEvent_j = plant_block_2024_CALL_EVENT;
  plant_block_2024_B.state = 0.0;
  plant_block_2024_DW.is_active_c7_plant_block_2024 = 0U;
  plant_block_2024_DW.is_c7_plant_block_2024 =
    plant_block_2024_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for MATLAB Function: '<S8>/Swing-up' */
  plant_block_2024_DW.doneDoubleBufferReInit = false;
  plant_block_2024_DW.sfEvent = plant_block_2024_CALL_EVENT;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function3' */
  plant_block_2024_DW.doneDoubleBufferReInit_a = false;
  plant_block_2024_DW.sfEvent_f = plant_block_2024_CALL_EVENT;

  /* SystemInitialize for Merge: '<Root>/Merge' */
  plant_block_2024_B.Merge = plant_block_2024_P.Merge_InitialOutput;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function4' */
  plant_block_2024_DW.doneDoubleBufferReInit_p = false;
  plant_block_2024_DW.sfEvent_n = plant_block_2024_CALL_EVENT;
}

/* Model terminate function */
void plant_block_2024_terminate(void)
{
  /* Terminate for S-Function (ECPDSPDriver): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (ECPDSPDriver) */
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

  rtmSetTFinal(plant_block_2024_M, 3000.0);
  plant_block_2024_M->Timing.stepSize0 = 0.008;
  plant_block_2024_M->Timing.stepSize1 = 0.008;

  /* External mode info */
  plant_block_2024_M->Sizes.checksums[0] = (1258172375U);
  plant_block_2024_M->Sizes.checksums[1] = (2573173150U);
  plant_block_2024_M->Sizes.checksums[2] = (41111898U);
  plant_block_2024_M->Sizes.checksums[3] = (2524644680U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    plant_block_2024_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &plant_block_2024_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &plant_block_2024_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
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

    plant_block_2024_B.phi = 0.0;
    plant_block_2024_B.ManualSwitch1 = 0.0;
    plant_block_2024_B.dphi = 0.0;
    plant_block_2024_B.theta = 0.0;
    plant_block_2024_B.theta_l = 0.0;
    plant_block_2024_B.dtheta = 0.0;
    plant_block_2024_B.torqueRequest = 0.0;
    plant_block_2024_B.Merge = 0.0;
    plant_block_2024_B.ddphi = 0.0;
    plant_block_2024_B.gimblePostFilter = 0.0;
    plant_block_2024_B.gimbleSpeed = 0.0;
    plant_block_2024_B.gimblePreFilter = 0.0;
    plant_block_2024_B.phiPreFilter = 0.0;
    plant_block_2024_B.thetaPreFilter = 0.0;
    plant_block_2024_B.gimblespeedrequest = 0.0;
    plant_block_2024_B.gyroPreFilter = 0.0;
    plant_block_2024_B.FlywheelSpeed = 0.0;
    plant_block_2024_B.ManualSwitch2 = 0.0;
    plant_block_2024_B.FilterCoefficient = 0.0;
    plant_block_2024_B.Sum = 0.0;
    plant_block_2024_B.gimbleSpeedError = 0.0;
    plant_block_2024_B.FilterCoefficient_h = 0.0;
    plant_block_2024_B.gimbleVoltage = 0.0;
    plant_block_2024_B.flywheelVoltage = 0.0;
    plant_block_2024_B.IntegralGain = 0.0;
    plant_block_2024_B.IntegralGain_b = 0.0;
    plant_block_2024_B.torqueRequest_j = 0.0;
    plant_block_2024_B.ddtheta_control = 0.0;
    plant_block_2024_B.state = 0.0;
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
  plant_block_2024_DW.TimeStampA_i = 0.0;
  plant_block_2024_DW.LastUAtTimeA_a = 0.0;
  plant_block_2024_DW.TimeStampB_k = 0.0;
  plant_block_2024_DW.LastUAtTimeB_f = 0.0;
  plant_block_2024_DW.TimeStampA_l = 0.0;
  plant_block_2024_DW.LastUAtTimeA_e = 0.0;
  plant_block_2024_DW.TimeStampB_n = 0.0;
  plant_block_2024_DW.LastUAtTimeB_i = 0.0;
  plant_block_2024_DW.TimeStampA_d = 0.0;
  plant_block_2024_DW.LastUAtTimeA_i = 0.0;
  plant_block_2024_DW.TimeStampB_b = 0.0;
  plant_block_2024_DW.LastUAtTimeB_b = 0.0;
  plant_block_2024_DW.TimeStampA_b = 0.0;
  plant_block_2024_DW.LastUAtTimeA_d = 0.0;
  plant_block_2024_DW.TimeStampB_o = 0.0;
  plant_block_2024_DW.LastUAtTimeB_d = 0.0;

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

    /* Level2 S-Function Block: plant_block_2024/<S9>/S-Function (ECPDSPDriver) */
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
          sfcnUPtrs[0] = &plant_block_2024_B.flywheelVoltage;
          sfcnUPtrs[1] = &plant_block_2024_B.gimbleVoltage;
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
  plant_block_2024_M->Sizes.numContStates = (8);/* Number of continuous states */
  plant_block_2024_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  plant_block_2024_M->Sizes.numY = (0);/* Number of model outputs */
  plant_block_2024_M->Sizes.numU = (0);/* Number of model inputs */
  plant_block_2024_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  plant_block_2024_M->Sizes.numSampTimes = (2);/* Number of sample times */
  plant_block_2024_M->Sizes.numBlocks = (90);/* Number of blocks */
  plant_block_2024_M->Sizes.numBlockIO = (31);/* Number of block outputs */
  plant_block_2024_M->Sizes.numBlockPrms = (61);/* Sum of parameter "widths" */
  return plant_block_2024_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
