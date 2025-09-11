/*
 * plant_block_2024.h
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

#ifndef plant_block_2024_h_
#define plant_block_2024_h_
#ifndef plant_block_2024_COMMON_INCLUDES_
#define plant_block_2024_COMMON_INCLUDES_
#include "ToAsyncQueueTgtAppSvc/ToAsyncQueueTgtAppSvcCIntrf.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "sldrtdef.h"
#endif                                 /* plant_block_2024_COMMON_INCLUDES_ */

#include "plant_block_2024_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <string.h>
#include "rt_defines.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetProxyFunctions
#define rtmGetProxyFunctions(rtm)      ()
#endif

#ifndef rtmSetProxyFunctions
#define rtmSetProxyFunctions(rtm, val) ()
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStubFunctions
#define rtmGetStubFunctions(rtm)       ()
#endif

#ifndef rtmSetStubFunctions
#define rtmSetStubFunctions(rtm, val)  ()
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define plant_block_2024_rtModel       RT_MODEL_plant_block_2024_T

/* Block signals (default storage) */
typedef struct {
  real_T phi;                          /* '<Root>/Transfer Fcn1' */
  real_T ManualSwitch1;                /* '<Root>/Manual Switch1' */
  real_T dphi;                         /* '<Root>/Derivative3' */
  real_T theta;                        /* '<Root>/Transfer Fcn2' */
  real_T theta_l;                      /* '<Root>/Manual Switch' */
  real_T dtheta;                       /* '<Root>/Derivative5' */
  real_T torqueRequest;                /* '<Root>/Multiport Switch' */
  real_T Merge;                        /* '<Root>/Merge' */
  real_T SFunction[5];                 /* '<S9>/S-Function' */
  real_T ddphi;                        /* '<Root>/Derivative4' */
  real_T gimblePostFilter;             /* '<Root>/Transfer Fcn3' */
  real_T gimbleSpeed;                  /* '<Root>/Derivative7' */
  real_T gimblePreFilter;              /* '<Root>/Gain1' */
  real_T phiPreFilter;                 /* '<Root>/Gain2' */
  real_T thetaPreFilter;               /* '<Root>/Gain3' */
  real_T gimblespeedrequest;           /* '<Root>/Gain5' */
  real_T gyroPreFilter;                /* '<Root>/Gain' */
  real_T FlywheelSpeed;                /* '<Root>/Gain6' */
  real_T ManualSwitch2;                /* '<Root>/Manual Switch2' */
  real_T FilterCoefficient;            /* '<S47>/Filter Coefficient' */
  real_T Sum;                          /* '<S53>/Sum' */
  real_T gimbleSpeedError;             /* '<Root>/Sum1' */
  real_T FilterCoefficient_h;          /* '<S99>/Filter Coefficient' */
  real_T gimbleVoltage;                /* '<Root>/Saturation1' */
  real_T flywheelVoltage;              /* '<Root>/Saturation' */
  real_T IntegralGain;                 /* '<S41>/Integral Gain' */
  real_T IntegralGain_b;               /* '<S93>/Integral Gain' */
  real_T torqueRequest_j;              /* '<Root>/MATLAB Function4' */
  real_T ddtheta_control;              /* '<Root>/MATLAB Function3' */
  real_T state;                        /* '<Root>/Chart' */
} B_plant_block_2024_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TimeStampA;                   /* '<Root>/Derivative3' */
  real_T LastUAtTimeA;                 /* '<Root>/Derivative3' */
  real_T TimeStampB;                   /* '<Root>/Derivative3' */
  real_T LastUAtTimeB;                 /* '<Root>/Derivative3' */
  real_T TimeStampA_i;                 /* '<Root>/Derivative5' */
  real_T LastUAtTimeA_a;               /* '<Root>/Derivative5' */
  real_T TimeStampB_k;                 /* '<Root>/Derivative5' */
  real_T LastUAtTimeB_f;               /* '<Root>/Derivative5' */
  real_T TimeStampA_l;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeA_e;               /* '<Root>/Derivative4' */
  real_T TimeStampB_n;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeB_i;               /* '<Root>/Derivative4' */
  real_T TimeStampA_d;                 /* '<Root>/Derivative7' */
  real_T LastUAtTimeA_i;               /* '<Root>/Derivative7' */
  real_T TimeStampB_b;                 /* '<Root>/Derivative7' */
  real_T LastUAtTimeB_b;               /* '<Root>/Derivative7' */
  real_T TimeStampA_b;                 /* '<Root>/Derivative6' */
  real_T LastUAtTimeA_d;               /* '<Root>/Derivative6' */
  real_T TimeStampB_o;                 /* '<Root>/Derivative6' */
  real_T LastUAtTimeB_d;               /* '<Root>/Derivative6' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux1_at_outport_4_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Derivative3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Derivative4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Derivative5_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Derivative7_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain5_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain6_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_MATLABFunction3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_MATLABFunction4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PIDController_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Saturation1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Saturation_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sum1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_TransferFcn1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_TransferFcn2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *LoggedData;
  } TimeScope_PWORK;                   /* '<Root>/Time Scope' */

  int32_T sfEvent;                     /* '<S8>/Swing-up' */
  int32_T sfEvent_n;                   /* '<Root>/MATLAB Function4' */
  int32_T sfEvent_f;                   /* '<Root>/MATLAB Function3' */
  int32_T sfEvent_j;                   /* '<Root>/Chart' */
  uint32_T is_c7_plant_block_2024;     /* '<Root>/Chart' */
  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<Root>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<Root>/If Action Subsystem' */
  uint8_T is_active_c7_plant_block_2024;/* '<Root>/Chart' */
  boolean_T doneDoubleBufferReInit;    /* '<S8>/Swing-up' */
  boolean_T doneDoubleBufferReInit_p;  /* '<Root>/MATLAB Function4' */
  boolean_T doneDoubleBufferReInit_a;  /* '<Root>/MATLAB Function3' */
} DW_plant_block_2024_T;

/* Continuous states (default storage) */
typedef struct {
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T TransferFcn8_CSTATE;          /* '<Root>/Transfer Fcn8' */
  real_T TransferFcn2_CSTATE;          /* '<Root>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<Root>/Transfer Fcn3' */
  real_T Integrator_CSTATE;            /* '<S44>/Integrator' */
  real_T Filter_CSTATE;                /* '<S39>/Filter' */
  real_T Integrator_CSTATE_d;          /* '<S96>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S91>/Filter' */
} X_plant_block_2024_T;

/* State derivatives (default storage) */
typedef struct {
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T TransferFcn8_CSTATE;          /* '<Root>/Transfer Fcn8' */
  real_T TransferFcn2_CSTATE;          /* '<Root>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<Root>/Transfer Fcn3' */
  real_T Integrator_CSTATE;            /* '<S44>/Integrator' */
  real_T Filter_CSTATE;                /* '<S39>/Filter' */
  real_T Integrator_CSTATE_d;          /* '<S96>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S91>/Filter' */
} XDot_plant_block_2024_T;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn1_CSTATE;       /* '<Root>/Transfer Fcn1' */
  boolean_T TransferFcn8_CSTATE;       /* '<Root>/Transfer Fcn8' */
  boolean_T TransferFcn2_CSTATE;       /* '<Root>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE;       /* '<Root>/Transfer Fcn3' */
  boolean_T Integrator_CSTATE;         /* '<S44>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S39>/Filter' */
  boolean_T Integrator_CSTATE_d;       /* '<S96>/Integrator' */
  boolean_T Filter_CSTATE_g;           /* '<S91>/Filter' */
} XDis_plant_block_2024_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            plant_block_2024_B
#define BlockIO                        B_plant_block_2024_T
#define rtX                            plant_block_2024_X
#define ContinuousStates               X_plant_block_2024_T
#define rtXdot                         plant_block_2024_XDot
#define StateDerivatives               XDot_plant_block_2024_T
#define tXdis                          plant_block_2024_XDis
#define StateDisabled                  XDis_plant_block_2024_T
#define rtP                            plant_block_2024_P
#define Parameters                     P_plant_block_2024_T
#define rtDWork                        plant_block_2024_DW
#define D_Work                         DW_plant_block_2024_T

/* Parameters (default storage) */
struct P_plant_block_2024_T_ {
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S37>/Derivative Gain'
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S89>/Derivative Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S41>/Integral Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S93>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionForFilter;
                      /* Mask Parameter: PIDController_InitialConditionForFilter
                       * Referenced by: '<S39>/Filter'
                       */
  real_T PIDController1_InitialConditionForFilter;
                     /* Mask Parameter: PIDController1_InitialConditionForFilter
                      * Referenced by: '<S91>/Filter'
                      */
  real_T PIDController_InitialConditionForIntegrator;
                  /* Mask Parameter: PIDController_InitialConditionForIntegrator
                   * Referenced by: '<S44>/Integrator'
                   */
  real_T PIDController1_InitialConditionForIntegrator;
                 /* Mask Parameter: PIDController1_InitialConditionForIntegrator
                  * Referenced by: '<S96>/Integrator'
                  */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S47>/Filter Coefficient'
                                        */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S99>/Filter Coefficient'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S49>/Proportional Gain'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S101>/Proportional Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T targetGyro_Value;             /* Expression: 400
                                        * Referenced by: '<Root>/targetGyro'
                                        */
  real_T Gain1_Gain[4];       /* Expression: -[0.0001, 00.0001, 0.0003, 00.0002]
                               * Referenced by: '<S8>/Gain1'
                               */
  real_T Switch_Threshold;             /* Expression: 0.2
                                        * Referenced by: '<S8>/Switch'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T TransferFcn8_A;               /* Computed Parameter: TransferFcn8_A
                                        * Referenced by: '<Root>/Transfer Fcn8'
                                        */
  real_T TransferFcn8_C;               /* Computed Parameter: TransferFcn8_C
                                        * Referenced by: '<Root>/Transfer Fcn8'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<Root>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<Root>/Transfer Fcn2'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Merge_InitialOutput;          /* Expression: [1]
                                        * Referenced by: '<Root>/Merge'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P1[6];              /* Computed Parameter: SFunction_P1
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: STime
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P3;                 /* Expression: TimeOutPer
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: HWAccess
                                        * Referenced by: '<S9>/S-Function'
                                        */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<Root>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<Root>/Transfer Fcn3'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 1/(3883*32)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/(2608*32)
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/(2546*32)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1.15
                                        * Referenced by: '<Root>/Gain5'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/(1061*32)
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain6_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<Root>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 2
                                        * Referenced by: '<Root>/Gain7'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 30000
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -30000
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 30000
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -30000
                                        * Referenced by: '<Root>/Saturation'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch1'
                              */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch2'
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_plant_block_2024_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[2];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn0;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeF[1][8];
  ODE1_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_plant_block_2024_T plant_block_2024_P;

/* Block signals (default storage) */
extern B_plant_block_2024_T plant_block_2024_B;

/* Continuous states (default storage) */
extern X_plant_block_2024_T plant_block_2024_X;

/* Disabled states (default storage) */
extern XDis_plant_block_2024_T plant_block_2024_XDis;

/* Block states (default storage) */
extern DW_plant_block_2024_T plant_block_2024_DW;

/* Model entry point functions */
extern void plant_block_2024_initialize(void);
extern void plant_block_2024_output(void);
extern void plant_block_2024_update(void);
extern void plant_block_2024_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern plant_block_2024_rtModel *plant_block_2024(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_plant_block_2024_T *const plant_block_2024_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'plant_block_2024'
 * '<S1>'   : 'plant_block_2024/Chart'
 * '<S2>'   : 'plant_block_2024/If Action Subsystem'
 * '<S3>'   : 'plant_block_2024/If Action Subsystem1'
 * '<S4>'   : 'plant_block_2024/MATLAB Function3'
 * '<S5>'   : 'plant_block_2024/MATLAB Function4'
 * '<S6>'   : 'plant_block_2024/PID Controller'
 * '<S7>'   : 'plant_block_2024/PID Controller1'
 * '<S8>'   : 'plant_block_2024/Subsystem6'
 * '<S9>'   : 'plant_block_2024/Windows 10 ECPDSP Driver'
 * '<S10>'  : 'plant_block_2024/PID Controller/Anti-windup'
 * '<S11>'  : 'plant_block_2024/PID Controller/D Gain'
 * '<S12>'  : 'plant_block_2024/PID Controller/External Derivative'
 * '<S13>'  : 'plant_block_2024/PID Controller/Filter'
 * '<S14>'  : 'plant_block_2024/PID Controller/Filter ICs'
 * '<S15>'  : 'plant_block_2024/PID Controller/I Gain'
 * '<S16>'  : 'plant_block_2024/PID Controller/Ideal P Gain'
 * '<S17>'  : 'plant_block_2024/PID Controller/Ideal P Gain Fdbk'
 * '<S18>'  : 'plant_block_2024/PID Controller/Integrator'
 * '<S19>'  : 'plant_block_2024/PID Controller/Integrator ICs'
 * '<S20>'  : 'plant_block_2024/PID Controller/N Copy'
 * '<S21>'  : 'plant_block_2024/PID Controller/N Gain'
 * '<S22>'  : 'plant_block_2024/PID Controller/P Copy'
 * '<S23>'  : 'plant_block_2024/PID Controller/Parallel P Gain'
 * '<S24>'  : 'plant_block_2024/PID Controller/Reset Signal'
 * '<S25>'  : 'plant_block_2024/PID Controller/Saturation'
 * '<S26>'  : 'plant_block_2024/PID Controller/Saturation Fdbk'
 * '<S27>'  : 'plant_block_2024/PID Controller/Sum'
 * '<S28>'  : 'plant_block_2024/PID Controller/Sum Fdbk'
 * '<S29>'  : 'plant_block_2024/PID Controller/Tracking Mode'
 * '<S30>'  : 'plant_block_2024/PID Controller/Tracking Mode Sum'
 * '<S31>'  : 'plant_block_2024/PID Controller/Tsamp - Integral'
 * '<S32>'  : 'plant_block_2024/PID Controller/Tsamp - Ngain'
 * '<S33>'  : 'plant_block_2024/PID Controller/postSat Signal'
 * '<S34>'  : 'plant_block_2024/PID Controller/preInt Signal'
 * '<S35>'  : 'plant_block_2024/PID Controller/preSat Signal'
 * '<S36>'  : 'plant_block_2024/PID Controller/Anti-windup/Passthrough'
 * '<S37>'  : 'plant_block_2024/PID Controller/D Gain/Internal Parameters'
 * '<S38>'  : 'plant_block_2024/PID Controller/External Derivative/Error'
 * '<S39>'  : 'plant_block_2024/PID Controller/Filter/Cont. Filter'
 * '<S40>'  : 'plant_block_2024/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S41>'  : 'plant_block_2024/PID Controller/I Gain/Internal Parameters'
 * '<S42>'  : 'plant_block_2024/PID Controller/Ideal P Gain/Passthrough'
 * '<S43>'  : 'plant_block_2024/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S44>'  : 'plant_block_2024/PID Controller/Integrator/Continuous'
 * '<S45>'  : 'plant_block_2024/PID Controller/Integrator ICs/Internal IC'
 * '<S46>'  : 'plant_block_2024/PID Controller/N Copy/Disabled'
 * '<S47>'  : 'plant_block_2024/PID Controller/N Gain/Internal Parameters'
 * '<S48>'  : 'plant_block_2024/PID Controller/P Copy/Disabled'
 * '<S49>'  : 'plant_block_2024/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S50>'  : 'plant_block_2024/PID Controller/Reset Signal/Disabled'
 * '<S51>'  : 'plant_block_2024/PID Controller/Saturation/Passthrough'
 * '<S52>'  : 'plant_block_2024/PID Controller/Saturation Fdbk/Disabled'
 * '<S53>'  : 'plant_block_2024/PID Controller/Sum/Sum_PID'
 * '<S54>'  : 'plant_block_2024/PID Controller/Sum Fdbk/Disabled'
 * '<S55>'  : 'plant_block_2024/PID Controller/Tracking Mode/Disabled'
 * '<S56>'  : 'plant_block_2024/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S57>'  : 'plant_block_2024/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S58>'  : 'plant_block_2024/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S59>'  : 'plant_block_2024/PID Controller/postSat Signal/Forward_Path'
 * '<S60>'  : 'plant_block_2024/PID Controller/preInt Signal/Internal PreInt'
 * '<S61>'  : 'plant_block_2024/PID Controller/preSat Signal/Forward_Path'
 * '<S62>'  : 'plant_block_2024/PID Controller1/Anti-windup'
 * '<S63>'  : 'plant_block_2024/PID Controller1/D Gain'
 * '<S64>'  : 'plant_block_2024/PID Controller1/External Derivative'
 * '<S65>'  : 'plant_block_2024/PID Controller1/Filter'
 * '<S66>'  : 'plant_block_2024/PID Controller1/Filter ICs'
 * '<S67>'  : 'plant_block_2024/PID Controller1/I Gain'
 * '<S68>'  : 'plant_block_2024/PID Controller1/Ideal P Gain'
 * '<S69>'  : 'plant_block_2024/PID Controller1/Ideal P Gain Fdbk'
 * '<S70>'  : 'plant_block_2024/PID Controller1/Integrator'
 * '<S71>'  : 'plant_block_2024/PID Controller1/Integrator ICs'
 * '<S72>'  : 'plant_block_2024/PID Controller1/N Copy'
 * '<S73>'  : 'plant_block_2024/PID Controller1/N Gain'
 * '<S74>'  : 'plant_block_2024/PID Controller1/P Copy'
 * '<S75>'  : 'plant_block_2024/PID Controller1/Parallel P Gain'
 * '<S76>'  : 'plant_block_2024/PID Controller1/Reset Signal'
 * '<S77>'  : 'plant_block_2024/PID Controller1/Saturation'
 * '<S78>'  : 'plant_block_2024/PID Controller1/Saturation Fdbk'
 * '<S79>'  : 'plant_block_2024/PID Controller1/Sum'
 * '<S80>'  : 'plant_block_2024/PID Controller1/Sum Fdbk'
 * '<S81>'  : 'plant_block_2024/PID Controller1/Tracking Mode'
 * '<S82>'  : 'plant_block_2024/PID Controller1/Tracking Mode Sum'
 * '<S83>'  : 'plant_block_2024/PID Controller1/Tsamp - Integral'
 * '<S84>'  : 'plant_block_2024/PID Controller1/Tsamp - Ngain'
 * '<S85>'  : 'plant_block_2024/PID Controller1/postSat Signal'
 * '<S86>'  : 'plant_block_2024/PID Controller1/preInt Signal'
 * '<S87>'  : 'plant_block_2024/PID Controller1/preSat Signal'
 * '<S88>'  : 'plant_block_2024/PID Controller1/Anti-windup/Passthrough'
 * '<S89>'  : 'plant_block_2024/PID Controller1/D Gain/Internal Parameters'
 * '<S90>'  : 'plant_block_2024/PID Controller1/External Derivative/Error'
 * '<S91>'  : 'plant_block_2024/PID Controller1/Filter/Cont. Filter'
 * '<S92>'  : 'plant_block_2024/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S93>'  : 'plant_block_2024/PID Controller1/I Gain/Internal Parameters'
 * '<S94>'  : 'plant_block_2024/PID Controller1/Ideal P Gain/Passthrough'
 * '<S95>'  : 'plant_block_2024/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S96>'  : 'plant_block_2024/PID Controller1/Integrator/Continuous'
 * '<S97>'  : 'plant_block_2024/PID Controller1/Integrator ICs/Internal IC'
 * '<S98>'  : 'plant_block_2024/PID Controller1/N Copy/Disabled'
 * '<S99>'  : 'plant_block_2024/PID Controller1/N Gain/Internal Parameters'
 * '<S100>' : 'plant_block_2024/PID Controller1/P Copy/Disabled'
 * '<S101>' : 'plant_block_2024/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S102>' : 'plant_block_2024/PID Controller1/Reset Signal/Disabled'
 * '<S103>' : 'plant_block_2024/PID Controller1/Saturation/Passthrough'
 * '<S104>' : 'plant_block_2024/PID Controller1/Saturation Fdbk/Disabled'
 * '<S105>' : 'plant_block_2024/PID Controller1/Sum/Sum_PID'
 * '<S106>' : 'plant_block_2024/PID Controller1/Sum Fdbk/Disabled'
 * '<S107>' : 'plant_block_2024/PID Controller1/Tracking Mode/Disabled'
 * '<S108>' : 'plant_block_2024/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S109>' : 'plant_block_2024/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S110>' : 'plant_block_2024/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S111>' : 'plant_block_2024/PID Controller1/postSat Signal/Forward_Path'
 * '<S112>' : 'plant_block_2024/PID Controller1/preInt Signal/Internal PreInt'
 * '<S113>' : 'plant_block_2024/PID Controller1/preSat Signal/Forward_Path'
 * '<S114>' : 'plant_block_2024/Subsystem6/Swing-up'
 */
#endif                                 /* plant_block_2024_h_ */
