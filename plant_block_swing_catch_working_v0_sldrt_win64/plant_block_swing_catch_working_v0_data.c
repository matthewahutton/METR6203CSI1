/*
 * plant_block_swing_catch_working_v0_data.c
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

/* Block parameters (default storage) */
P_plant_block_swing_catch_working_v0_T plant_block_swing_catch_working_v0_P = {
  /* Mask Parameter: PIDController_D
   * Referenced by: '<S39>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_D_o
   * Referenced by: '<S159>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDGimbleVelocitySwing_D
   * Referenced by: '<S95>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S43>/Integral Gain'
   */
  20.0,

  /* Mask Parameter: PIDGimbleVelocitySwing_I
   * Referenced by: '<S99>/Integral Gain'
   */
  2500.0,

  /* Mask Parameter: PIDController_I_n
   * Referenced by: '<S163>/Integral Gain'
   */
  0.06,

  /* Mask Parameter: PIDController_InitialConditionForFilter
   * Referenced by: '<S41>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionForFilter_l
   * Referenced by: '<S161>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDGimbleVelocitySwing_InitialConditionForFilter
   * Referenced by: '<S97>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionForIntegrator
   * Referenced by: '<S46>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionForIntegrator_e
   * Referenced by: '<S166>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDGimbleVelocitySwing_InitialConditionForIntegrator
   * Referenced by: '<S102>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S49>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_N_e
   * Referenced by: '<S169>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDGimbleVelocitySwing_N
   * Referenced by: '<S105>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S51>/Proportional Gain'
   */
  4600.0,

  /* Mask Parameter: PIDController_P_n
   * Referenced by: '<S171>/Proportional Gain'
   */
  0.48,

  /* Mask Parameter: PIDGimbleVelocitySwing_P
   * Referenced by: '<S107>/Proportional Gain'
   */
  10000.0,

  /* Mask Parameter: SliderGain_gain
   * Referenced by: '<S125>/Slider Gain'
   */
  -0.55,

  /* Mask Parameter: SliderGain1_gain
   * Referenced by: '<S126>/Slider Gain'
   */
  -10.4902,

  /* Mask Parameter: SliderGain2_gain
   * Referenced by: '<S127>/Slider Gain'
   */
  -33.397,

  /* Mask Parameter: SliderGain3_gain
   * Referenced by: '<S128>/Slider Gain'
   */
  -6.1266,

  /* Mask Parameter: SliderGain4_gain
   * Referenced by: '<S123>/Slider Gain'
   */
  472.8114,

  /* Mask Parameter: SliderGain3_gain_e
   * Referenced by: '<S122>/Slider Gain'
   */
  0.0,

  /* Mask Parameter: SliderGain1_gain_o
   * Referenced by: '<S120>/Slider Gain'
   */
  40.0,

  /* Mask Parameter: SliderGain2_gain_j
   * Referenced by: '<S121>/Slider Gain'
   */
  990.0,

  /* Mask Parameter: SliderGain2_gain_c
   * Referenced by: '<S67>/Slider Gain'
   */
  -4.0,

  /* Mask Parameter: SliderGain1_gain_k
   * Referenced by: '<S66>/Slider Gain'
   */
  20.0,

  /* Mask Parameter: SliderGain_gain_g
   * Referenced by: '<S65>/Slider Gain'
   */
  1410.0,

  /* Mask Parameter: SliderProportional_gain
   * Referenced by: '<S186>/Slider Gain'
   */
  70.0,

  /* Mask Parameter: SliderIntegral_gain
   * Referenced by: '<S185>/Slider Gain'
   */
  38.249,

  /* Mask Parameter: SliderDerivative_gain
   * Referenced by: '<S184>/Slider Gain'
   */
  -8.0,

  /* Mask Parameter: MinMaxRunningResettable1_vinit
   * Referenced by:
   *   '<S131>/Initial Condition'
   *   '<S131>/Memory'
   */
  0.85,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S1>/S-Function'
   */
  { 48.0, 120.0, 51.0, 70.0, 48.0, 48.0 },

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: STime
   * Referenced by: '<S1>/S-Function'
   */
  0.008,

  /* Computed Parameter: SFunction_P3_Size
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: TimeOutPer
   * Referenced by: '<S1>/S-Function'
   */
  500.0,

  /* Computed Parameter: SFunction_P4_Size
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: HWAccess
   * Referenced by: '<S1>/S-Function'
   */
  1.0,

  /* Expression: 1/(2608*32)
   * Referenced by: '<Root>/Gain1'
   */
  1.1982361963190184E-5,

  /* Expression: 2*pi
   * Referenced by: '<S6>/Constant4'
   */
  6.2831853071795862,

  /* Computed Parameter: LowPassFilterFlyWheel4_A
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel4'
   */
  -40.0,

  /* Computed Parameter: LowPassFilterFlyWheel4_C
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel4'
   */
  40.0,

  /* Expression: 2*pi
   * Referenced by: '<Root>/Constant1'
   */
  6.2831853071795862,

  /* Expression: pi
   * Referenced by: '<Root>/Constant2'
   */
  3.1415926535897931,

  /* Computed Parameter: LowPassFilterGimbleVelocity_A
   * Referenced by: '<Root>/Low Pass Filter Gimble Velocity'
   */
  -30.0,

  /* Computed Parameter: LowPassFilterGimbleVelocity_C
   * Referenced by: '<Root>/Low Pass Filter Gimble Velocity'
   */
  30.0,

  /* Computed Parameter: LowPassFilterFlyWheel6_A
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel6'
   */
  -40.0,

  /* Computed Parameter: LowPassFilterFlyWheel6_C
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel6'
   */
  40.0,

  /* Computed Parameter: LowPassFilterFlyWheel5_A
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel5'
   */
  -40.0,

  /* Computed Parameter: LowPassFilterFlyWheel5_C
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel5'
   */
  40.0,

  /* Computed Parameter: LowPassFilterFlyWheel3_A
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel3'
   */
  -40.0,

  /* Computed Parameter: LowPassFilterFlyWheel3_C
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel3'
   */
  40.0,

  /* Expression: 1
   * Referenced by: '<S8>/Gain4'
   */
  1.0,

  /* Computed Parameter: LowPassFilterFlyWheel_A
   * Referenced by: '<S2>/Low Pass Filter Fly Wheel'
   */
  -5.0,

  /* Computed Parameter: LowPassFilterFlyWheel_C
   * Referenced by: '<S2>/Low Pass Filter Fly Wheel'
   */
  5.0,

  /* Expression: 400
   * Referenced by: '<S2>/Desired rpm'
   */
  400.0,

  /* Expression: 32000
   * Referenced by: '<S2>/Saturation'
   */
  32000.0,

  /* Expression: -32000
   * Referenced by: '<S2>/Saturation'
   */
  -32000.0,

  /* Expression: 1/(3882*32)
   * Referenced by: '<Root>/Gain'
   */
  8.0499742400824321E-6,

  /* Expression: 2*pi
   * Referenced by: '<Root>/Constant4'
   */
  6.2831853071795862,

  /* Computed Parameter: LowPassFilterGimbleVelocity1_A
   * Referenced by: '<Root>/Low Pass Filter Gimble Velocity1'
   */
  -15.0,

  /* Computed Parameter: LowPassFilterGimbleVelocity1_C
   * Referenced by: '<Root>/Low Pass Filter Gimble Velocity1'
   */
  15.0,

  /* Computed Parameter: PositionFilter1_A
   * Referenced by: '<S4>/Position Filter1'
   */
  -30.0,

  /* Computed Parameter: PositionFilter1_C
   * Referenced by: '<S4>/Position Filter1'
   */
  30.0,

  /* Expression: 0
   * Referenced by: '<S4>/Integrator1'
   */
  0.0,

  /* Expression: 2500
   * Referenced by: '<S4>/Saturation1'
   */
  2500.0,

  /* Expression: -2500
   * Referenced by: '<S4>/Saturation1'
   */
  -2500.0,

  /* Expression: 0
   * Referenced by: '<S4>/Integrator3'
   */
  0.0,

  /* Expression: 40000
   * Referenced by: '<S4>/Saturation'
   */
  40000.0,

  /* Expression: -40000
   * Referenced by: '<S4>/Saturation'
   */
  -40000.0,

  /* Expression: 0
   * Referenced by: '<S3>/Integrator'
   */
  0.0,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S9>/Transfer Fcn'
   */
  -9.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S9>/Transfer Fcn'
   */
  9.0,

  /* Computed Parameter: LowPassFilterFlyWheel2_A
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel2'
   */
  -10.0,

  /* Computed Parameter: LowPassFilterFlyWheel2_C
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel2'
   */
  10.0,

  /* Expression: 0.5*0.0131
   * Referenced by: '<S9>/Gain'
   */
  0.00655,

  /* Computed Parameter: LowPassFilterFlyWheel1_A
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel1'
   */
  -8.0,

  /* Computed Parameter: LowPassFilterFlyWheel1_C
   * Referenced by: '<Root>/Low Pass Filter Fly Wheel1'
   */
  8.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant'
   */
  1.0,

  /* Expression: 0.1580*9.81*0.2698
   * Referenced by: '<S9>/Gain2'
   */
  0.418184604,

  /* Expression: 0.1530/(41.8879*0.0273*0.37)
   * Referenced by: '<S9>/Table Acceleration to Gimble Velocity'
   */
  0.36160836773901645,

  /* Expression: 50000
   * Referenced by: '<S3>/Saturation1'
   */
  50000.0,

  /* Expression: -50000
   * Referenced by: '<S3>/Saturation1'
   */
  -50000.0,

  /* Expression: 23500
   * Referenced by: '<S3>/Saturation2'
   */
  23500.0,

  /* Expression: -23500
   * Referenced by: '<S3>/Saturation2'
   */
  -23500.0,

  /* Computed Parameter: LowPassFilterFlyWheel_A_b
   * Referenced by: '<S10>/Low Pass Filter Fly Wheel'
   */
  -9.0,

  /* Computed Parameter: LowPassFilterFlyWheel_C_g
   * Referenced by: '<S10>/Low Pass Filter Fly Wheel'
   */
  9.0,

  /* Expression: 23500
   * Referenced by: '<Root>/Saturation1'
   */
  23500.0,

  /* Expression: -23500
   * Referenced by: '<Root>/Saturation1'
   */
  -23500.0,

  /* Expression: 2*pi
   * Referenced by: '<Root>/Constant5'
   */
  6.2831853071795862,

  /* Expression: 180/3.14159
   * Referenced by: '<Root>/Gain4'
   */
  57.295827908797776,

  /* Computed Parameter: LowPassFilterGimbleVelocity2_A
   * Referenced by: '<Root>/Low Pass Filter Gimble Velocity2'
   */
  -15.0,

  /* Computed Parameter: LowPassFilterGimbleVelocity2_C
   * Referenced by: '<Root>/Low Pass Filter Gimble Velocity2'
   */
  15.0,

  /* Expression: 1/(2546*32)
   * Referenced by: '<Root>/Gain3'
   */
  1.227415553809898E-5,

  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: 1/(1061*32)
   * Referenced by: '<S2>/encoder to radians'
   */
  2.945334590009425E-5,

  /* Expression: 30/pi
   * Referenced by: '<S2>/rad//sec to rpm'
   */
  9.5492965855137211,

  /* Expression: 1
   * Referenced by: '<S9>/Constant4'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S9>/Desired Energy'
   */
  0.0,

  /* Computed Parameter: LowPassFilterFlyWheel7_A
   * Referenced by: '<S10>/Low Pass Filter Fly Wheel7'
   */
  -40.0,

  /* Computed Parameter: LowPassFilterFlyWheel7_C
   * Referenced by: '<S10>/Low Pass Filter Fly Wheel7'
   */
  40.0,

  /* Expression: 0
   * Referenced by: '<S10>/Integrator'
   */
  0.0
};
