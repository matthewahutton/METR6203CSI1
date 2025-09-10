/*
 * plant_block_2024_data.c
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

/* Block parameters (default storage) */
P_plant_block_2024_T plant_block_2024_P = {
  /* Mask Parameter: PIDController_D
   * Referenced by: '<S34>/Derivative Gain'
   */
  1.0,

  /* Mask Parameter: PIDController1_D
   * Referenced by: '<S86>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S38>/Integral Gain'
   */
  2.0,

  /* Mask Parameter: PIDController1_I
   * Referenced by: '<S90>/Integral Gain'
   */
  500.0,

  /* Mask Parameter: PIDController_InitialConditionForFilter
   * Referenced by: '<S36>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditionForFilter
   * Referenced by: '<S88>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionForIntegrator
   * Referenced by: '<S41>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditionForIntegrator
   * Referenced by: '<S93>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S44>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController1_N
   * Referenced by: '<S96>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S46>/Proportional Gain'
   */
  4000.0,

  /* Mask Parameter: PIDController1_P
   * Referenced by: '<S98>/Proportional Gain'
   */
  8000.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S6>/S-Function'
   */
  { 48.0, 120.0, 51.0, 70.0, 48.0, 48.0 },

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: STime
   * Referenced by: '<S6>/S-Function'
   */
  0.008,

  /* Computed Parameter: SFunction_P3_Size
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: TimeOutPer
   * Referenced by: '<S6>/S-Function'
   */
  500.0,

  /* Computed Parameter: SFunction_P4_Size
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: HWAccess
   * Referenced by: '<S6>/S-Function'
   */
  1.0,

  /* Expression: 1/(1061*32)
   * Referenced by: '<Root>/Gain'
   */
  2.945334590009425E-5,

  /* Expression: 30/pi
   * Referenced by: '<Root>/Gain6'
   */
  9.5492965855137211,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<Root>/Transfer Fcn'
   */
  -2.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<Root>/Transfer Fcn'
   */
  2.0,

  /* Expression: 400
   * Referenced by: '<Root>/targetGyro'
   */
  400.0,

  /* Expression: 30000
   * Referenced by: '<Root>/Saturation'
   */
  30000.0,

  /* Expression: -0.5
   * Referenced by: '<Root>/Saturation'
   */
  -0.5,

  /* Expression: pi
   * Referenced by: '<Root>/Integrator6'
   */
  3.1415926535897931,

  /* Computed Parameter: TransferFcn1_A
   * Referenced by: '<Root>/Transfer Fcn1'
   */
  -40.0,

  /* Computed Parameter: TransferFcn1_C
   * Referenced by: '<Root>/Transfer Fcn1'
   */
  40.0,

  /* Computed Parameter: TransferFcn2_A
   * Referenced by: '<Root>/Transfer Fcn2'
   */
  -40.0,

  /* Computed Parameter: TransferFcn2_C
   * Referenced by: '<Root>/Transfer Fcn2'
   */
  40.0,

  /* Expression: 1.15
   * Referenced by: '<Root>/Gain5'
   */
  1.15,

  /* Computed Parameter: TransferFcn3_A
   * Referenced by: '<Root>/Transfer Fcn3'
   */
  -40.0,

  /* Computed Parameter: TransferFcn3_C
   * Referenced by: '<Root>/Transfer Fcn3'
   */
  40.0,

  /* Expression: 1/(3883*32)
   * Referenced by: '<Root>/Gain1'
   */
  8.0479011073911932E-6,

  /* Expression: 1/(2608*32)
   * Referenced by: '<Root>/Gain2'
   */
  1.1982361963190184E-5,

  /* Expression: 1/(2546*32)
   * Referenced by: '<Root>/Gain3'
   */
  1.227415553809898E-5,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator5'
   */
  0.0,

  /* Expression: 23500
   * Referenced by: '<Root>/Saturation1'
   */
  23500.0,

  /* Expression: -23500
   * Referenced by: '<Root>/Saturation1'
   */
  -23500.0,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  0U
};
