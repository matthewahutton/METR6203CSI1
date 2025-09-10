/*
 * Resetmdl.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Resetmdl".
 *
 * Model version              : 1.21
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Wed Sep 10 21:26:53 2025
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Resetmdl.h"
#include "Resetmdl_private.h"
#include "rt_nonfinite.h"
#include "Resetmdl_dt.h"

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.001, 0.0,
};

/* Block signals (default storage) */
B_Resetmdl_T Resetmdl_B;

/* Real-time model */
static RT_MODEL_Resetmdl_T Resetmdl_M_;
RT_MODEL_Resetmdl_T *const Resetmdl_M = &Resetmdl_M_;

/* Model output function */
void Resetmdl_output(void)
{
  /* S-Function (ECPDSPReset): '<S1>/S-Function' */

  /* Level2 S-Function Block: '<S1>/S-Function' (ECPDSPReset) */
  {
    SimStruct *rts = Resetmdl_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<Root>/Add 1' */
  Resetmdl_B.Add1 = Resetmdl_P.Add1_Value;
}

/* Model update function */
void Resetmdl_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Resetmdl_M->Timing.clockTick0)) {
    ++Resetmdl_M->Timing.clockTickH0;
  }

  Resetmdl_M->Timing.t[0] = Resetmdl_M->Timing.clockTick0 *
    Resetmdl_M->Timing.stepSize0 + Resetmdl_M->Timing.clockTickH0 *
    Resetmdl_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Resetmdl_initialize(void)
{
  /* Start for S-Function (ECPDSPReset): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (ECPDSPReset) */
  {
    SimStruct *rts = Resetmdl_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Add 1' */
  Resetmdl_B.Add1 = Resetmdl_P.Add1_Value;
}

/* Model terminate function */
void Resetmdl_terminate(void)
{
  /* Terminate for S-Function (ECPDSPReset): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (ECPDSPReset) */
  {
    SimStruct *rts = Resetmdl_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Resetmdl_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Resetmdl_update();
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
  Resetmdl_initialize();
}

void MdlTerminate(void)
{
  Resetmdl_terminate();
}

/* Registration function */
RT_MODEL_Resetmdl_T *Resetmdl(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Resetmdl_M, 0,
                sizeof(RT_MODEL_Resetmdl_T));
  rtsiSetSolverName(&Resetmdl_M->solverInfo,"FixedStepDiscrete");
  Resetmdl_M->solverInfoPtr = (&Resetmdl_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Resetmdl_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    Resetmdl_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Resetmdl_M->Timing.sampleTimes = (&Resetmdl_M->Timing.sampleTimesArray[0]);
    Resetmdl_M->Timing.offsetTimes = (&Resetmdl_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Resetmdl_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    Resetmdl_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(Resetmdl_M, &Resetmdl_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Resetmdl_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    Resetmdl_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Resetmdl_M, 1.0);
  Resetmdl_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  Resetmdl_M->Sizes.checksums[0] = (2378275662U);
  Resetmdl_M->Sizes.checksums[1] = (1514160962U);
  Resetmdl_M->Sizes.checksums[2] = (1721101104U);
  Resetmdl_M->Sizes.checksums[3] = (1572852869U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Resetmdl_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Resetmdl_M->extModeInfo,
      &Resetmdl_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Resetmdl_M->extModeInfo, Resetmdl_M->Sizes.checksums);
    rteiSetTPtr(Resetmdl_M->extModeInfo, rtmGetTPtr(Resetmdl_M));
  }

  Resetmdl_M->solverInfoPtr = (&Resetmdl_M->solverInfo);
  Resetmdl_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Resetmdl_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Resetmdl_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Resetmdl_M->blockIO = ((void *) &Resetmdl_B);

  {
    Resetmdl_B.SFunction = 0.0;
    Resetmdl_B.Add1 = 0.0;
  }

  /* parameters */
  Resetmdl_M->defaultParam = ((real_T *)&Resetmdl_P);

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Resetmdl_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    RTWSfcnInfo *sfcnInfo = &Resetmdl_M->NonInlinedSFcns.sfcnInfo;
    Resetmdl_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Resetmdl_M)));
    Resetmdl_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Resetmdl_M->Sizes.numSampTimes);
    Resetmdl_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr(Resetmdl_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,Resetmdl_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Resetmdl_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Resetmdl_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(Resetmdl_M));
    rtssSetStepSizePtr(sfcnInfo, &Resetmdl_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Resetmdl_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &Resetmdl_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &Resetmdl_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Resetmdl_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Resetmdl_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &Resetmdl_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Resetmdl_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Resetmdl_M->solverInfoPtr);
  }

  Resetmdl_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&Resetmdl_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    Resetmdl_M->childSfunctions =
      (&Resetmdl_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    Resetmdl_M->childSfunctions[0] =
      (&Resetmdl_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: Resetmdl/<S1>/S-Function (ECPDSPReset) */
    {
      SimStruct *rts = Resetmdl_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Resetmdl_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Resetmdl_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Resetmdl_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Resetmdl_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Resetmdl_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Resetmdl_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Resetmdl_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Resetmdl_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Resetmdl_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Resetmdl_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Resetmdl_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Resetmdl_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &Resetmdl_B.Add1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Resetmdl_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "Resetmdl/ECPDSP Reset/S-Function");
      ssSetRTModel(rts,Resetmdl_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Resetmdl_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Resetmdl_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Resetmdl_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Resetmdl_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Resetmdl_P.SFunction_P4_Size);
      }

      /* registration */
      ECPDSPReset(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

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
  Resetmdl_M->Sizes.numContStates = (0);/* Number of continuous states */
  Resetmdl_M->Sizes.numY = (0);        /* Number of model outputs */
  Resetmdl_M->Sizes.numU = (0);        /* Number of model inputs */
  Resetmdl_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Resetmdl_M->Sizes.numSampTimes = (1);/* Number of sample times */
  Resetmdl_M->Sizes.numBlocks = (3);   /* Number of blocks */
  Resetmdl_M->Sizes.numBlockIO = (2);  /* Number of block outputs */
  Resetmdl_M->Sizes.numBlockPrms = (18);/* Sum of parameter "widths" */
  return Resetmdl_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
