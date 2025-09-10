/*
 * plant_block_swing_catch_working_v0.h
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

#ifndef plant_block_swing_catch_working_v0_h_
#define plant_block_swing_catch_working_v0_h_
#ifndef plant_block_swing_catch_working_v0_COMMON_INCLUDES_
#define plant_block_swing_catch_working_v0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "sldrtdef.h"
#endif                 /* plant_block_swing_catch_working_v0_COMMON_INCLUDES_ */

#include "plant_block_swing_catch_working_v0_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rt_zcfcn.h"
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
#define plant_block_swing_catch_working_v0_rtModel RT_MODEL_plant_block_swing_catch_working_v0_T

/* Block signals (default storage) */
typedef struct {
  real_T SFunction[5];                 /* '<S1>/S-Function' */
  real_T theta;                        /* '<Root>/Gain1' */
  real_T thetacorrection1;             /* '<S6>/theta correction1' */
  real_T theta_dot;                    /* '<Root>/Derivative1' */
  real_T Abs1;                         /* '<S6>/Abs1' */
  real_T LowPassFilterFlyWheel4;       /* '<Root>/Low Pass Filter Fly Wheel4' */
  real_T Add2;                         /* '<Root>/Add2' */
  real_T ActualGimbleVelocity;    /* '<Root>/Low Pass Filter Gimble Velocity' */
  real_T LowPassFilterFlyWheel6;       /* '<Root>/Low Pass Filter Fly Wheel6' */
  real_T SliderGain;                   /* '<S125>/Slider Gain' */
  real_T LowPassFilterFlyWheel5;       /* '<Root>/Low Pass Filter Fly Wheel5' */
  real_T SliderGain_b;                 /* '<S126>/Slider Gain' */
  real_T SliderGain_d;                 /* '<S127>/Slider Gain' */
  real_T LowPassFilterFlyWheel3;       /* '<Root>/Low Pass Filter Fly Wheel3' */
  real_T SliderGain_h;                 /* '<S128>/Slider Gain' */
  real_T Product2;                     /* '<Root>/Product2' */
  real_T LowPassFilterFlyWheel;        /* '<S2>/Low Pass Filter Fly Wheel' */
  real_T FilterCoefficient;            /* '<S49>/Filter Coefficient' */
  real_T Saturation;                   /* '<S2>/Saturation' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T thetacorrection1_a;           /* '<Root>/theta correction1' */
  real_T LowPassFilterGimbleVelocity1;
                                 /* '<Root>/Low Pass Filter Gimble Velocity1' */
  real_T PositionFilter1;              /* '<S4>/Position Filter1' */
  real_T TrigonometricFunction1;       /* '<S4>/Trigonometric Function1' */
  real_T EnableSwingVelocity1;         /* '<S4>/Enable Swing Velocity1' */
  real_T Integrator1;                  /* '<S4>/Integrator1' */
  real_T Saturation1;                  /* '<S4>/Saturation1' */
  real_T Integrator3;                  /* '<S4>/Integrator3' */
  real_T TrigonometricFunction;        /* '<S4>/Trigonometric Function' */
  real_T Saturation_g;                 /* '<S4>/Saturation' */
  real_T Add6;                         /* '<S4>/Add6' */
  real_T Derivative6;                  /* '<Root>/Derivative6' */
  real_T SliderGain_p;                 /* '<S67>/Slider Gain' */
  real_T SliderGain_n;                 /* '<S66>/Slider Gain' */
  real_T TransferFcn;                  /* '<S9>/Transfer Fcn' */
  real_T FilterCoefficient_k;          /* '<S169>/Filter Coefficient' */
  real_T Sum;                          /* '<S175>/Sum' */
  real_T LowPassFilterFlyWheel2;       /* '<Root>/Low Pass Filter Fly Wheel2' */
  real_T Gain_k;                       /* '<S9>/Gain' */
  real_T LowPassFilterFlyWheel1;       /* '<Root>/Low Pass Filter Fly Wheel1' */
  real_T Gain2;                        /* '<S9>/Gain2' */
  real_T E;                            /* '<S9>/Sum' */
  real_T Product2_b;                   /* '<S9>/Product2' */
  real_T w_2;                 /* '<S9>/Table Acceleration to Gimble Velocity' */
  real_T EnableSwingVelocity1_k;       /* '<Root>/Enable Swing Velocity1' */
  real_T Product;                      /* '<S3>/Product' */
  real_T SliderGain_po;                /* '<S65>/Slider Gain' */
  real_T Product2_d;                   /* '<S3>/Product2' */
  real_T Product1;                     /* '<S3>/Product1' */
  real_T FilterCoefficient_m;          /* '<S105>/Filter Coefficient' */
  real_T Saturation2;                  /* '<S3>/Saturation2' */
  real_T Add;                          /* '<S3>/Add' */
  real_T Saturation1_p;                /* '<Root>/Saturation1' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T Gain4;                        /* '<Root>/Gain4' */
  real_T LowPassFilterGimbleVelocity2;
                                 /* '<Root>/Low Pass Filter Gimble Velocity2' */
  real_T theta4;                       /* '<Root>/Gain3' */
  real_T Derivative2;                  /* '<Root>/Derivative2' */
  real_T encodertoradians;             /* '<S2>/encoder to radians' */
  real_T Derivative;                   /* '<S2>/Derivative' */
  real_T IntegralGain;                 /* '<S43>/Integral Gain' */
  real_T radsectorpm;                  /* '<S2>/rad//sec to rpm' */
  real_T IntegralGain_k;               /* '<S99>/Integral Gain' */
  real_T Resetafterswingstate;         /* '<S9>/Abs1' */
  real_T Memory;                       /* '<S131>/Memory' */
  real_T Reset;                        /* '<S131>/Reset' */
  real_T Sum3;                         /* '<S9>/Sum3' */
  real_T IntegralGain_b;               /* '<S163>/Integral Gain' */
  real_T LowPassFilterFlyWheel7;       /* '<S10>/Low Pass Filter Fly Wheel7' */
  real_T Sum_d;                        /* '<S10>/Sum' */
  real_T SliderGain_o;                 /* '<S186>/Slider Gain' */
  real_T SliderGain_c;                 /* '<S185>/Slider Gain' */
  real_T SliderGain_i;                 /* '<S184>/Slider Gain' */
  real_T Add_n;                        /* '<S10>/Add' */
  real_T p;                            /* '<Root>/Steady Catch' */
  real_T x;                            /* '<S6>/State Switch v1' */
  real_T y;                            /* '<S6>/State Switch v1' */
  real_T z;                            /* '<S6>/State Switch v1' */
  real_T r;                            /* '<S6>/State Switch v1' */
  real_T g;                            /* '<Root>/Stable pendulum' */
} B_plant_block_swing_catch_working_v0_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TimeStampA;                   /* '<Root>/Derivative1' */
  real_T LastUAtTimeA;                 /* '<Root>/Derivative1' */
  real_T TimeStampB;                   /* '<Root>/Derivative1' */
  real_T LastUAtTimeB;                 /* '<Root>/Derivative1' */
  real_T TimeStampA_n;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeA_p;               /* '<Root>/Derivative4' */
  real_T TimeStampB_i;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeB_l;               /* '<Root>/Derivative4' */
  real_T TimeStampA_b;                 /* '<Root>/Derivative5' */
  real_T LastUAtTimeA_b;               /* '<Root>/Derivative5' */
  real_T TimeStampB_f;                 /* '<Root>/Derivative5' */
  real_T LastUAtTimeB_p;               /* '<Root>/Derivative5' */
  real_T TimeStampA_h;                 /* '<Root>/Derivative6' */
  real_T LastUAtTimeA_f;               /* '<Root>/Derivative6' */
  real_T TimeStampB_j;                 /* '<Root>/Derivative6' */
  real_T LastUAtTimeB_i;               /* '<Root>/Derivative6' */
  real_T TimeStampA_e;                 /* '<S3>/Derivative' */
  real_T LastUAtTimeA_o;               /* '<S3>/Derivative' */
  real_T TimeStampB_m;                 /* '<S3>/Derivative' */
  real_T LastUAtTimeB_h;               /* '<S3>/Derivative' */
  real_T TimeStampA_j;                 /* '<Root>/Derivative2' */
  real_T LastUAtTimeA_j;               /* '<Root>/Derivative2' */
  real_T TimeStampB_e;                 /* '<Root>/Derivative2' */
  real_T LastUAtTimeB_c;               /* '<Root>/Derivative2' */
  real_T TimeStampA_bp;                /* '<S2>/Derivative' */
  real_T LastUAtTimeA_e;               /* '<S2>/Derivative' */
  real_T TimeStampB_fd;                /* '<S2>/Derivative' */
  real_T LastUAtTimeB_k;               /* '<S2>/Derivative' */
  real_T Memory_PreviousInput;         /* '<S131>/Memory' */
  real_T TimeStampA_h5;                /* '<S10>/Derivative' */
  real_T LastUAtTimeA_k;               /* '<S10>/Derivative' */
  real_T TimeStampB_o;                 /* '<S10>/Derivative' */
  real_T LastUAtTimeB_d;               /* '<S10>/Derivative' */
  struct {
    void *LoggedData;
  } AllStopr_PWORK;                    /* '<Root>/All Stop - r' */

  struct {
    void *LoggedData;
  } CatchEnable_PWORK;                 /* '<Root>/Catch Enable' */

  struct {
    void *LoggedData;
  } CatchEnableuin1_PWORK;             /* '<Root>/Catch Enable - u -in1' */

  struct {
    void *LoggedData[2];
  } CatchSpeedToWorkspace_PWORK;       /* '<Root>/Catch Speed To Workspace' */

  struct {
    void *LoggedData;
  } Encoder1_PWORK;                    /* '<Root>/Encoder 1' */

  struct {
    void *LoggedData;
  } FlywheelVoltage_PWORK;             /* '<Root>/Flywheel Voltage' */

  struct {
    void *LoggedData;
  } GimbalEncoder1_PWORK;              /* '<Root>/Gimbal Encoder1' */

  struct {
    void *LoggedData;
  } GimbleRectificationVoltage_PWORK;/* '<Root>/Gimble Rectification Voltage' */

  struct {
    void *LoggedData[2];
  } GimbleVelocityscope_PWORK;         /* '<Root>/Gimble Velocity scope' */

  struct {
    void *LoggedData[4];
  } GimbleVoltage_PWORK;               /* '<Root>/Gimble Voltage' */

  struct {
    void *LoggedData[2];
  } PendulumEncoder_PWORK;             /* '<Root>/Pendulum Encoder' */

  struct {
    void *LoggedData;
  } PendulumEncodervel_PWORK;          /* '<Root>/Pendulum Encoder vel' */

  struct {
    void *LoggedData;
  } Restx_PWORK;                       /* '<Root>/Rest - x' */

  struct {
    void *LoggedData[2];
  } Steady_PWORK;                      /* '<Root>/Steady' */

  struct {
    void *LoggedData[4];
  } SwingEnableuin1_PWORK;             /* '<Root>/Swing Enable - u -in1' */

  struct {
    void *LoggedData[2];
  } SwingEnableuin2_PWORK;             /* '<Root>/Swing Enable - u -in2' */

  struct {
    void *LoggedData[2];
  } SwingEnableuin3_PWORK;             /* '<Root>/Swing Enable - u -in3' */

  struct {
    void *LoggedData[4];
  } SwingEnableuin4_PWORK;             /* '<Root>/Swing Enable - u -in4' */

  struct {
    void *LoggedData[3];
  } SwingEnableuout_PWORK;             /* '<Root>/Swing Enable - u -out' */

  struct {
    void *LoggedData;
  } SwingEnabley_PWORK;                /* '<Root>/Swing Enable - y' */

  struct {
    void *LoggedData;
  } SwingOuput_PWORK;                  /* '<Root>/Swing Ouput' */

  struct {
    void *LoggedData[2];
  } SwingSpeedToWorkspace_PWORK;       /* '<Root>/Swing Speed To Workspace' */

  struct {
    void *LoggedData;
  } TableRectificationVoltage_PWORK;  /* '<Root>/Table Rectification Voltage' */

  struct {
    void *LoggedData;
  } FlywheelRotSpeedrads_PWORK;        /* '<S2>/Flywheel Rot Speed, rad//s' */

  struct {
    void *LoggedData;
  } RPMToWorkspace_PWORK;              /* '<S2>/RPM To Workspace' */

  struct {
    void *LoggedData;
  } AppliedCatchVoltage_PWORK;         /* '<S3>/Applied Catch Voltage' */

  struct {
    void *LoggedData;
  } AppliedSwingVoltage1_PWORK;        /* '<S3>/Applied Swing Voltage1' */

  struct {
    void *LoggedData;
  } OutputVoltage_PWORK;               /* '<S3>/Output Voltage' */

  struct {
    void *LoggedData;
  } SwingEnable_PWORK;                 /* '<S3>/Swing Enable' */

  struct {
    void *LoggedData[3];
  } catchcheck_PWORK;                  /* '<S3>/catch check' */

  struct {
    void *LoggedData;
  } catcherror_PWORK;                  /* '<S3>/catch error' */

  struct {
    void *LoggedData;
  } swingcheck1_PWORK;                 /* '<S3>/swing check1' */

  struct {
    void *LoggedData;
  } swingerror_PWORK;                  /* '<S3>/swing error' */

  struct {
    void *LoggedData[2];
  } Errors_PWORK;                      /* '<S4>/Errors' */

  struct {
    void *LoggedData[2];
  } Errors1_PWORK;                     /* '<S4>/Errors1' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S4>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<S4>/Scope1' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_h;                     /* '<S8>/Scope' */

  struct {
    void *LoggedData;
  } Collect_PWORK;                     /* '<S9>/Collect' */

  struct {
    void *LoggedData;
  } Energy_PWORK;                      /* '<S9>/Energy' */

  struct {
    void *LoggedData[3];
  } EnergyToWorkspace_PWORK;           /* '<S9>/Energy To Workspace' */

  struct {
    void *LoggedData[2];
  } Error_PWORK;                       /* '<S9>/Error' */

  struct {
    void *LoggedData;
  } KToWorkspace_PWORK;                /* '<S9>/K To Workspace' */

  struct {
    void *LoggedData;
  } Lyapunovseqn_PWORK;                /* '<S9>/Lyapunov's eqn' */

  struct {
    void *LoggedData;
  } MinEnergy_PWORK;                   /* '<S9>/Min Energy' */

  struct {
    void *LoggedData;
  } Theta__PWORK;                      /* '<S9>/Theta_' */

  struct {
    void *LoggedData[4];
  } Compensation_PWORK;                /* '<S10>/Compensation' */

  struct {
    void *LoggedData;
  } TableVelocityIn_PWORK;             /* '<S10>/Table Velocity In' */

  int32_T sfEvent;                     /* '<Root>/Steady Catch' */
  int32_T sfEvent_a;                   /* '<S6>/State Switch v1' */
  int32_T sfEvent_j;                   /* '<Root>/Stable pendulum' */
  uint32_T is_c1_plant_block_swing_catch_working_v0;/* '<Root>/Steady Catch' */
  uint32_T is_c3_plant_block_swing_catch_working_v0;/* '<S6>/State Switch v1' */
  uint32_T is_c5_plant_block_swing_catch_working_v0;/* '<Root>/Stable pendulum' */
  uint8_T is_active_c1_plant_block_swing_catch_working_v0;/* '<Root>/Steady Catch' */
  uint8_T is_active_c3_plant_block_swing_catch_working_v0;/* '<S6>/State Switch v1' */
  uint8_T is_active_c5_plant_block_swing_catch_working_v0;/* '<Root>/Stable pendulum' */
} DW_plant_block_swing_catch_working_v0_T;

/* Continuous states (default storage) */
typedef struct {
  real_T LowPassFilterFlyWheel4_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel4' */
  real_T LowPassFilterGimbleVelocity_CSTATE;
                                  /* '<Root>/Low Pass Filter Gimble Velocity' */
  real_T LowPassFilterFlyWheel6_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel6' */
  real_T LowPassFilterFlyWheel5_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel5' */
  real_T LowPassFilterFlyWheel3_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel3' */
  real_T LowPassFilterFlyWheel_CSTATE; /* '<S2>/Low Pass Filter Fly Wheel' */
  real_T Integrator_CSTATE;            /* '<S46>/Integrator' */
  real_T Filter_CSTATE;                /* '<S41>/Filter' */
  real_T LowPassFilterGimbleVelocity1_CSTATE;
                                 /* '<Root>/Low Pass Filter Gimble Velocity1' */
  real_T PositionFilter1_CSTATE;       /* '<S4>/Position Filter1' */
  real_T Integrator1_CSTATE;           /* '<S4>/Integrator1' */
  real_T Integrator3_CSTATE;           /* '<S4>/Integrator3' */
  real_T Integrator_CSTATE_f;          /* '<S3>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S9>/Transfer Fcn' */
  real_T Integrator_CSTATE_m;          /* '<S166>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S161>/Filter' */
  real_T LowPassFilterFlyWheel2_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel2' */
  real_T LowPassFilterFlyWheel1_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel1' */
  real_T Integrator_CSTATE_n;          /* '<S102>/Integrator' */
  real_T Filter_CSTATE_b;              /* '<S97>/Filter' */
  real_T LowPassFilterFlyWheel_CSTATE_c;/* '<S10>/Low Pass Filter Fly Wheel' */
  real_T LowPassFilterGimbleVelocity2_CSTATE;
                                 /* '<Root>/Low Pass Filter Gimble Velocity2' */
  real_T LowPassFilterFlyWheel7_CSTATE;/* '<S10>/Low Pass Filter Fly Wheel7' */
  real_T Integrator_CSTATE_p;          /* '<S10>/Integrator' */
} X_plant_block_swing_catch_working_v0_T;

/* State derivatives (default storage) */
typedef struct {
  real_T LowPassFilterFlyWheel4_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel4' */
  real_T LowPassFilterGimbleVelocity_CSTATE;
                                  /* '<Root>/Low Pass Filter Gimble Velocity' */
  real_T LowPassFilterFlyWheel6_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel6' */
  real_T LowPassFilterFlyWheel5_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel5' */
  real_T LowPassFilterFlyWheel3_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel3' */
  real_T LowPassFilterFlyWheel_CSTATE; /* '<S2>/Low Pass Filter Fly Wheel' */
  real_T Integrator_CSTATE;            /* '<S46>/Integrator' */
  real_T Filter_CSTATE;                /* '<S41>/Filter' */
  real_T LowPassFilterGimbleVelocity1_CSTATE;
                                 /* '<Root>/Low Pass Filter Gimble Velocity1' */
  real_T PositionFilter1_CSTATE;       /* '<S4>/Position Filter1' */
  real_T Integrator1_CSTATE;           /* '<S4>/Integrator1' */
  real_T Integrator3_CSTATE;           /* '<S4>/Integrator3' */
  real_T Integrator_CSTATE_f;          /* '<S3>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S9>/Transfer Fcn' */
  real_T Integrator_CSTATE_m;          /* '<S166>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S161>/Filter' */
  real_T LowPassFilterFlyWheel2_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel2' */
  real_T LowPassFilterFlyWheel1_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel1' */
  real_T Integrator_CSTATE_n;          /* '<S102>/Integrator' */
  real_T Filter_CSTATE_b;              /* '<S97>/Filter' */
  real_T LowPassFilterFlyWheel_CSTATE_c;/* '<S10>/Low Pass Filter Fly Wheel' */
  real_T LowPassFilterGimbleVelocity2_CSTATE;
                                 /* '<Root>/Low Pass Filter Gimble Velocity2' */
  real_T LowPassFilterFlyWheel7_CSTATE;/* '<S10>/Low Pass Filter Fly Wheel7' */
  real_T Integrator_CSTATE_p;          /* '<S10>/Integrator' */
} XDot_plant_block_swing_catch_working_v0_T;

/* State disabled  */
typedef struct {
  boolean_T LowPassFilterFlyWheel4_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel4' */
  boolean_T LowPassFilterGimbleVelocity_CSTATE;
                                  /* '<Root>/Low Pass Filter Gimble Velocity' */
  boolean_T LowPassFilterFlyWheel6_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel6' */
  boolean_T LowPassFilterFlyWheel5_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel5' */
  boolean_T LowPassFilterFlyWheel3_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel3' */
  boolean_T LowPassFilterFlyWheel_CSTATE;/* '<S2>/Low Pass Filter Fly Wheel' */
  boolean_T Integrator_CSTATE;         /* '<S46>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S41>/Filter' */
  boolean_T LowPassFilterGimbleVelocity1_CSTATE;
                                 /* '<Root>/Low Pass Filter Gimble Velocity1' */
  boolean_T PositionFilter1_CSTATE;    /* '<S4>/Position Filter1' */
  boolean_T Integrator1_CSTATE;        /* '<S4>/Integrator1' */
  boolean_T Integrator3_CSTATE;        /* '<S4>/Integrator3' */
  boolean_T Integrator_CSTATE_f;       /* '<S3>/Integrator' */
  boolean_T TransferFcn_CSTATE;        /* '<S9>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_m;       /* '<S166>/Integrator' */
  boolean_T Filter_CSTATE_j;           /* '<S161>/Filter' */
  boolean_T LowPassFilterFlyWheel2_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel2' */
  boolean_T LowPassFilterFlyWheel1_CSTATE;/* '<Root>/Low Pass Filter Fly Wheel1' */
  boolean_T Integrator_CSTATE_n;       /* '<S102>/Integrator' */
  boolean_T Filter_CSTATE_b;           /* '<S97>/Filter' */
  boolean_T LowPassFilterFlyWheel_CSTATE_c;/* '<S10>/Low Pass Filter Fly Wheel' */
  boolean_T LowPassFilterGimbleVelocity2_CSTATE;
                                 /* '<Root>/Low Pass Filter Gimble Velocity2' */
  boolean_T LowPassFilterFlyWheel7_CSTATE;/* '<S10>/Low Pass Filter Fly Wheel7' */
  boolean_T Integrator_CSTATE_p;       /* '<S10>/Integrator' */
} XDis_plant_block_swing_catch_working_v0_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<S4>/Integrator1' */
  ZCSigState Integrator3_Reset_ZCE;    /* '<S4>/Integrator3' */
  ZCSigState Integrator_Reset_ZCE;     /* '<S3>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_c;   /* '<S166>/Integrator' */
  ZCSigState Filter_Reset_ZCE;         /* '<S161>/Filter' */
  ZCSigState Integrator_Reset_ZCE_k;   /* '<S102>/Integrator' */
  ZCSigState Filter_Reset_ZCE_g;       /* '<S97>/Filter' */
  ZCSigState Integrator_Reset_ZCE_f;   /* '<S10>/Integrator' */
} PrevZCX_plant_block_swing_catch_working_v0_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            plant_block_swing_catch_working_v0_B
#define BlockIO                        B_plant_block_swing_catch_working_v0_T
#define rtX                            plant_block_swing_catch_working_v0_X
#define ContinuousStates               X_plant_block_swing_catch_working_v0_T
#define rtXdot                         plant_block_swing_catch_working_v0_XDot
#define StateDerivatives               XDot_plant_block_swing_catch_working_v0_T
#define tXdis                          plant_block_swing_catch_working_v0_XDis
#define StateDisabled                  XDis_plant_block_swing_catch_working_v0_T
#define rtP                            plant_block_swing_catch_working_v0_P
#define Parameters                     P_plant_block_swing_catch_working_v0_T
#define rtDWork                        plant_block_swing_catch_working_v0_DW
#define D_Work                         DW_plant_block_swing_catch_working_v0_T
#define rtPrevZCSigState               plant_block_swing_catch_working_v0_PrevZCX
#define PrevZCSigStates                PrevZCX_plant_block_swing_catch_working_v0_T

/* Parameters (default storage) */
struct P_plant_block_swing_catch_working_v0_T_ {
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S39>/Derivative Gain'
                                        */
  real_T PIDController_D_o;            /* Mask Parameter: PIDController_D_o
                                        * Referenced by: '<S159>/Derivative Gain'
                                        */
  real_T PIDGimbleVelocitySwing_D;   /* Mask Parameter: PIDGimbleVelocitySwing_D
                                      * Referenced by: '<S95>/Derivative Gain'
                                      */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S43>/Integral Gain'
                                        */
  real_T PIDGimbleVelocitySwing_I;   /* Mask Parameter: PIDGimbleVelocitySwing_I
                                      * Referenced by: '<S99>/Integral Gain'
                                      */
  real_T PIDController_I_n;            /* Mask Parameter: PIDController_I_n
                                        * Referenced by: '<S163>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionForFilter;
                      /* Mask Parameter: PIDController_InitialConditionForFilter
                       * Referenced by: '<S41>/Filter'
                       */
  real_T PIDController_InitialConditionForFilter_l;
                    /* Mask Parameter: PIDController_InitialConditionForFilter_l
                     * Referenced by: '<S161>/Filter'
                     */
  real_T PIDGimbleVelocitySwing_InitialConditionForFilter;
             /* Mask Parameter: PIDGimbleVelocitySwing_InitialConditionForFilter
              * Referenced by: '<S97>/Filter'
              */
  real_T PIDController_InitialConditionForIntegrator;
                  /* Mask Parameter: PIDController_InitialConditionForIntegrator
                   * Referenced by: '<S46>/Integrator'
                   */
  real_T PIDController_InitialConditionForIntegrator_e;
                /* Mask Parameter: PIDController_InitialConditionForIntegrator_e
                 * Referenced by: '<S166>/Integrator'
                 */
  real_T PIDGimbleVelocitySwing_InitialConditionForIntegrator;
         /* Mask Parameter: PIDGimbleVelocitySwing_InitialConditionForIntegrator
          * Referenced by: '<S102>/Integrator'
          */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S49>/Filter Coefficient'
                                        */
  real_T PIDController_N_e;            /* Mask Parameter: PIDController_N_e
                                        * Referenced by: '<S169>/Filter Coefficient'
                                        */
  real_T PIDGimbleVelocitySwing_N;   /* Mask Parameter: PIDGimbleVelocitySwing_N
                                      * Referenced by: '<S105>/Filter Coefficient'
                                      */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S51>/Proportional Gain'
                                        */
  real_T PIDController_P_n;            /* Mask Parameter: PIDController_P_n
                                        * Referenced by: '<S171>/Proportional Gain'
                                        */
  real_T PIDGimbleVelocitySwing_P;   /* Mask Parameter: PIDGimbleVelocitySwing_P
                                      * Referenced by: '<S107>/Proportional Gain'
                                      */
  real_T SliderGain_gain;              /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S125>/Slider Gain'
                                        */
  real_T SliderGain1_gain;             /* Mask Parameter: SliderGain1_gain
                                        * Referenced by: '<S126>/Slider Gain'
                                        */
  real_T SliderGain2_gain;             /* Mask Parameter: SliderGain2_gain
                                        * Referenced by: '<S127>/Slider Gain'
                                        */
  real_T SliderGain3_gain;             /* Mask Parameter: SliderGain3_gain
                                        * Referenced by: '<S128>/Slider Gain'
                                        */
  real_T SliderGain4_gain;             /* Mask Parameter: SliderGain4_gain
                                        * Referenced by: '<S123>/Slider Gain'
                                        */
  real_T SliderGain3_gain_e;           /* Mask Parameter: SliderGain3_gain_e
                                        * Referenced by: '<S122>/Slider Gain'
                                        */
  real_T SliderGain1_gain_o;           /* Mask Parameter: SliderGain1_gain_o
                                        * Referenced by: '<S120>/Slider Gain'
                                        */
  real_T SliderGain2_gain_j;           /* Mask Parameter: SliderGain2_gain_j
                                        * Referenced by: '<S121>/Slider Gain'
                                        */
  real_T SliderGain2_gain_c;           /* Mask Parameter: SliderGain2_gain_c
                                        * Referenced by: '<S67>/Slider Gain'
                                        */
  real_T SliderGain1_gain_k;           /* Mask Parameter: SliderGain1_gain_k
                                        * Referenced by: '<S66>/Slider Gain'
                                        */
  real_T SliderGain_gain_g;            /* Mask Parameter: SliderGain_gain_g
                                        * Referenced by: '<S65>/Slider Gain'
                                        */
  real_T SliderProportional_gain;     /* Mask Parameter: SliderProportional_gain
                                       * Referenced by: '<S186>/Slider Gain'
                                       */
  real_T SliderIntegral_gain;          /* Mask Parameter: SliderIntegral_gain
                                        * Referenced by: '<S185>/Slider Gain'
                                        */
  real_T SliderDerivative_gain;        /* Mask Parameter: SliderDerivative_gain
                                        * Referenced by: '<S184>/Slider Gain'
                                        */
  real_T MinMaxRunningResettable1_vinit;
                               /* Mask Parameter: MinMaxRunningResettable1_vinit
                                * Referenced by:
                                *   '<S131>/Initial Condition'
                                *   '<S131>/Memory'
                                */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P1[6];              /* Computed Parameter: SFunction_P1
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: STime
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P3;                 /* Expression: TimeOutPer
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: HWAccess
                                        * Referenced by: '<S1>/S-Function'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/(2608*32)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant4_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real_T LowPassFilterFlyWheel4_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel4_A
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel4'
                                  */
  real_T LowPassFilterFlyWheel4_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel4_C
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel4'
                                  */
  real_T Constant1_Value;              /* Expression: 2*pi
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: pi
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T LowPassFilterGimbleVelocity_A;
                            /* Computed Parameter: LowPassFilterGimbleVelocity_A
                             * Referenced by: '<Root>/Low Pass Filter Gimble Velocity'
                             */
  real_T LowPassFilterGimbleVelocity_C;
                            /* Computed Parameter: LowPassFilterGimbleVelocity_C
                             * Referenced by: '<Root>/Low Pass Filter Gimble Velocity'
                             */
  real_T LowPassFilterFlyWheel6_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel6_A
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel6'
                                  */
  real_T LowPassFilterFlyWheel6_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel6_C
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel6'
                                  */
  real_T LowPassFilterFlyWheel5_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel5_A
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel5'
                                  */
  real_T LowPassFilterFlyWheel5_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel5_C
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel5'
                                  */
  real_T LowPassFilterFlyWheel3_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel3_A
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel3'
                                  */
  real_T LowPassFilterFlyWheel3_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel3_C
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel3'
                                  */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S8>/Gain4'
                                        */
  real_T LowPassFilterFlyWheel_A; /* Computed Parameter: LowPassFilterFlyWheel_A
                                   * Referenced by: '<S2>/Low Pass Filter Fly Wheel'
                                   */
  real_T LowPassFilterFlyWheel_C; /* Computed Parameter: LowPassFilterFlyWheel_C
                                   * Referenced by: '<S2>/Low Pass Filter Fly Wheel'
                                   */
  real_T Desiredrpm_Value;             /* Expression: 400
                                        * Referenced by: '<S2>/Desired rpm'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 32000
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -32000
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/(3882*32)
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant4_Value_c;            /* Expression: 2*pi
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T LowPassFilterGimbleVelocity1_A;
                           /* Computed Parameter: LowPassFilterGimbleVelocity1_A
                            * Referenced by: '<Root>/Low Pass Filter Gimble Velocity1'
                            */
  real_T LowPassFilterGimbleVelocity1_C;
                           /* Computed Parameter: LowPassFilterGimbleVelocity1_C
                            * Referenced by: '<Root>/Low Pass Filter Gimble Velocity1'
                            */
  real_T PositionFilter1_A;            /* Computed Parameter: PositionFilter1_A
                                        * Referenced by: '<S4>/Position Filter1'
                                        */
  real_T PositionFilter1_C;            /* Computed Parameter: PositionFilter1_C
                                        * Referenced by: '<S4>/Position Filter1'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S4>/Integrator1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 2500
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -2500
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<S4>/Integrator3'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 40000
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -40000
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S3>/Integrator'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S9>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S9>/Transfer Fcn'
                                        */
  real_T LowPassFilterFlyWheel2_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel2_A
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel2'
                                  */
  real_T LowPassFilterFlyWheel2_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel2_C
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel2'
                                  */
  real_T Gain_Gain_h;                  /* Expression: 0.5*0.0131
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T LowPassFilterFlyWheel1_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel1_A
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel1'
                                  */
  real_T LowPassFilterFlyWheel1_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel1_C
                                  * Referenced by: '<Root>/Low Pass Filter Fly Wheel1'
                                  */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1580*9.81*0.2698
                                        * Referenced by: '<S9>/Gain2'
                                        */
  real_T TableAccelerationtoGimbleVelocity_Gain;
                                     /* Expression: 0.1530/(41.8879*0.0273*0.37)
                                      * Referenced by: '<S9>/Table Acceleration to Gimble Velocity'
                                      */
  real_T Saturation1_UpperSat_k;       /* Expression: 50000
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: -50000
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 23500
                                        * Referenced by: '<S3>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -23500
                                        * Referenced by: '<S3>/Saturation2'
                                        */
  real_T LowPassFilterFlyWheel_A_b;
                                /* Computed Parameter: LowPassFilterFlyWheel_A_b
                                 * Referenced by: '<S10>/Low Pass Filter Fly Wheel'
                                 */
  real_T LowPassFilterFlyWheel_C_g;
                                /* Computed Parameter: LowPassFilterFlyWheel_C_g
                                 * Referenced by: '<S10>/Low Pass Filter Fly Wheel'
                                 */
  real_T Saturation1_UpperSat_j;       /* Expression: 23500
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: -23500
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Constant5_Value;              /* Expression: 2*pi
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Gain4_Gain_g;                 /* Expression: 180/3.14159
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T LowPassFilterGimbleVelocity2_A;
                           /* Computed Parameter: LowPassFilterGimbleVelocity2_A
                            * Referenced by: '<Root>/Low Pass Filter Gimble Velocity2'
                            */
  real_T LowPassFilterGimbleVelocity2_C;
                           /* Computed Parameter: LowPassFilterGimbleVelocity2_C
                            * Referenced by: '<Root>/Low Pass Filter Gimble Velocity2'
                            */
  real_T Gain3_Gain;                   /* Expression: 1/(2546*32)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T encodertoradians_Gain;        /* Expression: 1/(1061*32)
                                        * Referenced by: '<S2>/encoder to radians'
                                        */
  real_T radsectorpm_Gain;             /* Expression: 30/pi
                                        * Referenced by: '<S2>/rad//sec to rpm'
                                        */
  real_T Constant4_Value_l;            /* Expression: 1
                                        * Referenced by: '<S9>/Constant4'
                                        */
  real_T DesiredEnergy_Value;          /* Expression: 0
                                        * Referenced by: '<S9>/Desired Energy'
                                        */
  real_T LowPassFilterFlyWheel7_A;
                                 /* Computed Parameter: LowPassFilterFlyWheel7_A
                                  * Referenced by: '<S10>/Low Pass Filter Fly Wheel7'
                                  */
  real_T LowPassFilterFlyWheel7_C;
                                 /* Computed Parameter: LowPassFilterFlyWheel7_C
                                  * Referenced by: '<S10>/Low Pass Filter Fly Wheel7'
                                  */
  real_T Integrator_IC_g;              /* Expression: 0
                                        * Referenced by: '<S10>/Integrator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_plant_block_swing_catch_working_v0_T {
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
  real_T odeF[1][24];
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
extern P_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_P;

/* Block signals (default storage) */
extern B_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_B;

/* Continuous states (default storage) */
extern X_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_X;

/* Disabled states (default storage) */
extern XDis_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_XDis;

/* Block states (default storage) */
extern DW_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_plant_block_swing_catch_working_v0_T
  plant_block_swing_catch_working_v0_PrevZCX;

/* Model entry point functions */
extern void plant_block_swing_catch_working_v0_initialize(void);
extern void plant_block_swing_catch_working_v0_output(void);
extern void plant_block_swing_catch_working_v0_update(void);
extern void plant_block_swing_catch_working_v0_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern plant_block_swing_catch_working_v0_rtModel
  *plant_block_swing_catch_working_v0(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_plant_block_swing_catch_working_v0_T *const
  plant_block_swing_catch_working_v0_M;

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
 * '<Root>' : 'plant_block_swing_catch_working_v0'
 * '<S1>'   : 'plant_block_swing_catch_working_v0/ECPDSP Driver'
 * '<S2>'   : 'plant_block_swing_catch_working_v0/Flywheel Control'
 * '<S3>'   : 'plant_block_swing_catch_working_v0/Gimble Control'
 * '<S4>'   : 'plant_block_swing_catch_working_v0/Gimble Rectification'
 * '<S5>'   : 'plant_block_swing_catch_working_v0/Stable pendulum'
 * '<S6>'   : 'plant_block_swing_catch_working_v0/State Selection'
 * '<S7>'   : 'plant_block_swing_catch_working_v0/Steady Catch'
 * '<S8>'   : 'plant_block_swing_catch_working_v0/Subsystem2'
 * '<S9>'   : 'plant_block_swing_catch_working_v0/Swing Up'
 * '<S10>'  : 'plant_block_swing_catch_working_v0/Table Position Rectification'
 * '<S11>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller'
 * '<S12>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Anti-windup'
 * '<S13>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/D Gain'
 * '<S14>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/External Derivative'
 * '<S15>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Filter'
 * '<S16>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Filter ICs'
 * '<S17>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/I Gain'
 * '<S18>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Ideal P Gain'
 * '<S19>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Ideal P Gain Fdbk'
 * '<S20>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Integrator'
 * '<S21>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Integrator ICs'
 * '<S22>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/N Copy'
 * '<S23>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/N Gain'
 * '<S24>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/P Copy'
 * '<S25>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Parallel P Gain'
 * '<S26>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Reset Signal'
 * '<S27>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Saturation'
 * '<S28>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Saturation Fdbk'
 * '<S29>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Sum'
 * '<S30>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Sum Fdbk'
 * '<S31>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tracking Mode'
 * '<S32>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tracking Mode Sum'
 * '<S33>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tsamp - Integral'
 * '<S34>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tsamp - Ngain'
 * '<S35>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/postSat Signal'
 * '<S36>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/preInt Signal'
 * '<S37>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/preSat Signal'
 * '<S38>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Anti-windup/Passthrough'
 * '<S39>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/D Gain/Internal Parameters'
 * '<S40>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/External Derivative/Error'
 * '<S41>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Filter/Cont. Filter'
 * '<S42>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S43>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/I Gain/Internal Parameters'
 * '<S44>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Ideal P Gain/Passthrough'
 * '<S45>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S46>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Integrator/Continuous'
 * '<S47>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Integrator ICs/Internal IC'
 * '<S48>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/N Copy/Disabled'
 * '<S49>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/N Gain/Internal Parameters'
 * '<S50>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/P Copy/Disabled'
 * '<S51>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S52>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Reset Signal/Disabled'
 * '<S53>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Saturation/Passthrough'
 * '<S54>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Saturation Fdbk/Disabled'
 * '<S55>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Sum/Sum_PID'
 * '<S56>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Sum Fdbk/Disabled'
 * '<S57>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tracking Mode/Disabled'
 * '<S58>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S59>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S60>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S61>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/postSat Signal/Forward_Path'
 * '<S62>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/preInt Signal/Internal PreInt'
 * '<S63>'  : 'plant_block_swing_catch_working_v0/Flywheel Control/PID Controller/preSat Signal/Forward_Path'
 * '<S64>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing'
 * '<S65>'  : 'plant_block_swing_catch_working_v0/Gimble Control/Slider Gain'
 * '<S66>'  : 'plant_block_swing_catch_working_v0/Gimble Control/Slider Gain1'
 * '<S67>'  : 'plant_block_swing_catch_working_v0/Gimble Control/Slider Gain2'
 * '<S68>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Anti-windup'
 * '<S69>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/D Gain'
 * '<S70>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/External Derivative'
 * '<S71>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Filter'
 * '<S72>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Filter ICs'
 * '<S73>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/I Gain'
 * '<S74>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Ideal P Gain'
 * '<S75>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Ideal P Gain Fdbk'
 * '<S76>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Integrator'
 * '<S77>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Integrator ICs'
 * '<S78>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/N Copy'
 * '<S79>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/N Gain'
 * '<S80>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/P Copy'
 * '<S81>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Parallel P Gain'
 * '<S82>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Reset Signal'
 * '<S83>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Saturation'
 * '<S84>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Saturation Fdbk'
 * '<S85>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Sum'
 * '<S86>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Sum Fdbk'
 * '<S87>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tracking Mode'
 * '<S88>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tracking Mode Sum'
 * '<S89>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tsamp - Integral'
 * '<S90>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tsamp - Ngain'
 * '<S91>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/postSat Signal'
 * '<S92>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/preInt Signal'
 * '<S93>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/preSat Signal'
 * '<S94>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Anti-windup/Passthrough'
 * '<S95>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/D Gain/Internal Parameters'
 * '<S96>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/External Derivative/Error'
 * '<S97>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Filter/Cont. Filter'
 * '<S98>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Filter ICs/Internal IC - Filter'
 * '<S99>'  : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/I Gain/Internal Parameters'
 * '<S100>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Ideal P Gain/Passthrough'
 * '<S101>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Ideal P Gain Fdbk/Disabled'
 * '<S102>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Integrator/Continuous'
 * '<S103>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Integrator ICs/Internal IC'
 * '<S104>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/N Copy/Disabled'
 * '<S105>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/N Gain/Internal Parameters'
 * '<S106>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/P Copy/Disabled'
 * '<S107>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Parallel P Gain/Internal Parameters'
 * '<S108>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Reset Signal/External Reset'
 * '<S109>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Saturation/Passthrough'
 * '<S110>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Saturation Fdbk/Disabled'
 * '<S111>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Sum/Sum_PID'
 * '<S112>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Sum Fdbk/Disabled'
 * '<S113>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tracking Mode/Disabled'
 * '<S114>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tracking Mode Sum/Passthrough'
 * '<S115>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tsamp - Integral/TsSignalSpecification'
 * '<S116>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/Tsamp - Ngain/Passthrough'
 * '<S117>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/postSat Signal/Forward_Path'
 * '<S118>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/preInt Signal/Internal PreInt'
 * '<S119>' : 'plant_block_swing_catch_working_v0/Gimble Control/PID Gimble Velocity - Swing/preSat Signal/Forward_Path'
 * '<S120>' : 'plant_block_swing_catch_working_v0/Gimble Rectification/Slider Gain1'
 * '<S121>' : 'plant_block_swing_catch_working_v0/Gimble Rectification/Slider Gain2'
 * '<S122>' : 'plant_block_swing_catch_working_v0/Gimble Rectification/Slider Gain3'
 * '<S123>' : 'plant_block_swing_catch_working_v0/Gimble Rectification/Slider Gain4'
 * '<S124>' : 'plant_block_swing_catch_working_v0/State Selection/State Switch v1'
 * '<S125>' : 'plant_block_swing_catch_working_v0/Subsystem2/Slider Gain'
 * '<S126>' : 'plant_block_swing_catch_working_v0/Subsystem2/Slider Gain1'
 * '<S127>' : 'plant_block_swing_catch_working_v0/Subsystem2/Slider Gain2'
 * '<S128>' : 'plant_block_swing_catch_working_v0/Subsystem2/Slider Gain3'
 * '<S129>' : 'plant_block_swing_catch_working_v0/Swing Up/MinMax Running Resettable1'
 * '<S130>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller'
 * '<S131>' : 'plant_block_swing_catch_working_v0/Swing Up/MinMax Running Resettable1/Subsystem'
 * '<S132>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Anti-windup'
 * '<S133>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/D Gain'
 * '<S134>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/External Derivative'
 * '<S135>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Filter'
 * '<S136>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Filter ICs'
 * '<S137>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/I Gain'
 * '<S138>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Ideal P Gain'
 * '<S139>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Ideal P Gain Fdbk'
 * '<S140>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Integrator'
 * '<S141>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Integrator ICs'
 * '<S142>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/N Copy'
 * '<S143>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/N Gain'
 * '<S144>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/P Copy'
 * '<S145>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Parallel P Gain'
 * '<S146>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Reset Signal'
 * '<S147>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Saturation'
 * '<S148>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Saturation Fdbk'
 * '<S149>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Sum'
 * '<S150>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Sum Fdbk'
 * '<S151>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tracking Mode'
 * '<S152>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tracking Mode Sum'
 * '<S153>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tsamp - Integral'
 * '<S154>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tsamp - Ngain'
 * '<S155>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/postSat Signal'
 * '<S156>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/preInt Signal'
 * '<S157>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/preSat Signal'
 * '<S158>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Anti-windup/Passthrough'
 * '<S159>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/D Gain/Internal Parameters'
 * '<S160>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/External Derivative/Error'
 * '<S161>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Filter/Cont. Filter'
 * '<S162>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S163>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/I Gain/Internal Parameters'
 * '<S164>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Ideal P Gain/Passthrough'
 * '<S165>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S166>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Integrator/Continuous'
 * '<S167>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Integrator ICs/Internal IC'
 * '<S168>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/N Copy/Disabled'
 * '<S169>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/N Gain/Internal Parameters'
 * '<S170>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/P Copy/Disabled'
 * '<S171>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S172>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Reset Signal/External Reset'
 * '<S173>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Saturation/Passthrough'
 * '<S174>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Saturation Fdbk/Disabled'
 * '<S175>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Sum/Sum_PID'
 * '<S176>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Sum Fdbk/Disabled'
 * '<S177>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tracking Mode/Disabled'
 * '<S178>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S179>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S180>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S181>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/postSat Signal/Forward_Path'
 * '<S182>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/preInt Signal/Internal PreInt'
 * '<S183>' : 'plant_block_swing_catch_working_v0/Swing Up/PID Controller/preSat Signal/Forward_Path'
 * '<S184>' : 'plant_block_swing_catch_working_v0/Table Position Rectification/Slider Derivative'
 * '<S185>' : 'plant_block_swing_catch_working_v0/Table Position Rectification/Slider Integral'
 * '<S186>' : 'plant_block_swing_catch_working_v0/Table Position Rectification/Slider Proportional'
 */
#endif                               /* plant_block_swing_catch_working_v0_h_ */
