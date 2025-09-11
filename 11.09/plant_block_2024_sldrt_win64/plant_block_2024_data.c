/*
 * plant_block_2024_data.c
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

/* Block parameters (default storage) */
P_plant_block_2024_T plant_block_2024_P = {
  /* Mask Parameter: PIDController_D
   * Referenced by: '<S37>/Derivative Gain'
   */
  1.0,

  /* Mask Parameter: PIDController1_D
   * Referenced by: '<S89>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S41>/Integral Gain'
   */
  100.0,

  /* Mask Parameter: PIDController1_I
   * Referenced by: '<S93>/Integral Gain'
   */
  50.0,

  /* Mask Parameter: PIDController_InitialConditionForFilter
   * Referenced by: '<S39>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditionForFilter
   * Referenced by: '<S91>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionForIntegrator
   * Referenced by: '<S44>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditionForIntegrator
   * Referenced by: '<S96>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S47>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController1_N
   * Referenced by: '<S99>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S49>/Proportional Gain'
   */
  5500.0,

  /* Mask Parameter: PIDController1_P
   * Referenced by: '<S101>/Proportional Gain'
   */
  2500.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: 400
   * Referenced by: '<Root>/targetGyro'
   */
  400.0,

  /* Expression: -[0.0001, 00.0001, 0.0003, 00.0002]
   * Referenced by: '<S8>/Gain1'
   */
  { -0.0001, -0.0001, -0.0003, -0.0002 },

  /* Expression: 0.2
   * Referenced by: '<S8>/Switch'
   */
  0.2,

  /* Computed Parameter: TransferFcn1_A
   * Referenced by: '<Root>/Transfer Fcn1'
   */
  -50.0,

  /* Computed Parameter: TransferFcn1_C
   * Referenced by: '<Root>/Transfer Fcn1'
   */
  50.0,

  /* Computed Parameter: TransferFcn8_A
   * Referenced by: '<Root>/Transfer Fcn8'
   */
  -15.0,

  /* Computed Parameter: TransferFcn8_C
   * Referenced by: '<Root>/Transfer Fcn8'
   */
  15.0,

  /* Computed Parameter: TransferFcn2_A
   * Referenced by: '<Root>/Transfer Fcn2'
   */
  -40.0,

  /* Computed Parameter: TransferFcn2_C
   * Referenced by: '<Root>/Transfer Fcn2'
   */
  40.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: [1]
   * Referenced by: '<Root>/Merge'
   */
  1.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S9>/S-Function'
   */
  { 48.0, 120.0, 51.0, 70.0, 48.0, 48.0 },

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: STime
   * Referenced by: '<S9>/S-Function'
   */
  0.008,

  /* Computed Parameter: SFunction_P3_Size
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: TimeOutPer
   * Referenced by: '<S9>/S-Function'
   */
  500.0,

  /* Computed Parameter: SFunction_P4_Size
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: HWAccess
   * Referenced by: '<S9>/S-Function'
   */
  1.0,

  /* Computed Parameter: TransferFcn3_A
   * Referenced by: '<Root>/Transfer Fcn3'
   */
  -35.0,

  /* Computed Parameter: TransferFcn3_C
   * Referenced by: '<Root>/Transfer Fcn3'
   */
  35.0,

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

  /* Expression: 1.15
   * Referenced by: '<Root>/Gain5'
   */
  1.15,

  /* Expression: 1/(1061*32)
   * Referenced by: '<Root>/Gain'
   */
  2.945334590009425E-5,

  /* Expression: 30/pi
   * Referenced by: '<Root>/Gain6'
   */
  9.5492965855137211,

  /* Expression: 2
   * Referenced by: '<Root>/Gain7'
   */
  2.0,

  /* Expression: 30000
   * Referenced by: '<Root>/Saturation1'
   */
  30000.0,

  /* Expression: -30000
   * Referenced by: '<Root>/Saturation1'
   */
  -30000.0,

  /* Expression: 30000
   * Referenced by: '<Root>/Saturation'
   */
  30000.0,

  /* Expression: -30000
   * Referenced by: '<Root>/Saturation'
   */
  -30000.0,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<Root>/Manual Switch2'
   */
  0U
};
