    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (plant_block_2024_P)
        ;%
            section.nData     = 46;
            section.data(46)  = dumData; %prealloc

                    ;% plant_block_2024_P.PIDController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_P.PIDController1_D
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_P.PIDController_I
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% plant_block_2024_P.PIDController1_I
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% plant_block_2024_P.PIDController_InitialConditionForFilter
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% plant_block_2024_P.PIDController1_InitialConditionForFilter
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% plant_block_2024_P.PIDController_InitialConditionForIntegrator
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% plant_block_2024_P.PIDController1_InitialConditionForIntegrator
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% plant_block_2024_P.PIDController_N
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% plant_block_2024_P.PIDController1_N
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% plant_block_2024_P.PIDController_P
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% plant_block_2024_P.PIDController1_P
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% plant_block_2024_P.Constant_Value
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% plant_block_2024_P.targetGyro_Value
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% plant_block_2024_P.Gain1_Gain
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% plant_block_2024_P.Switch_Threshold
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% plant_block_2024_P.TransferFcn1_A
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 19;

                    ;% plant_block_2024_P.TransferFcn1_C
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% plant_block_2024_P.TransferFcn8_A
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% plant_block_2024_P.TransferFcn8_C
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% plant_block_2024_P.TransferFcn2_A
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% plant_block_2024_P.TransferFcn2_C
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% plant_block_2024_P.Constant2_Value
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% plant_block_2024_P.Constant1_Value
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% plant_block_2024_P.Merge_InitialOutput
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% plant_block_2024_P.SFunction_P1_Size
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% plant_block_2024_P.SFunction_P1
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 30;

                    ;% plant_block_2024_P.SFunction_P2_Size
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 36;

                    ;% plant_block_2024_P.SFunction_P2
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 38;

                    ;% plant_block_2024_P.SFunction_P3_Size
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 39;

                    ;% plant_block_2024_P.SFunction_P3
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 41;

                    ;% plant_block_2024_P.SFunction_P4_Size
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 42;

                    ;% plant_block_2024_P.SFunction_P4
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 44;

                    ;% plant_block_2024_P.TransferFcn3_A
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 45;

                    ;% plant_block_2024_P.TransferFcn3_C
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 46;

                    ;% plant_block_2024_P.Gain1_Gain_o
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 47;

                    ;% plant_block_2024_P.Gain2_Gain
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 48;

                    ;% plant_block_2024_P.Gain3_Gain
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 49;

                    ;% plant_block_2024_P.Gain5_Gain
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 50;

                    ;% plant_block_2024_P.Gain_Gain
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 51;

                    ;% plant_block_2024_P.Gain6_Gain
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 52;

                    ;% plant_block_2024_P.Gain7_Gain
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 53;

                    ;% plant_block_2024_P.Saturation1_UpperSat
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 54;

                    ;% plant_block_2024_P.Saturation1_LowerSat
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 55;

                    ;% plant_block_2024_P.Saturation_UpperSat
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 56;

                    ;% plant_block_2024_P.Saturation_LowerSat
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 57;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% plant_block_2024_P.ManualSwitch1_CurrentSetting
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_P.ManualSwitch_CurrentSetting
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_P.ManualSwitch2_CurrentSetting
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (plant_block_2024_B)
        ;%
            section.nData     = 30;
            section.data(30)  = dumData; %prealloc

                    ;% plant_block_2024_B.phi
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_B.ManualSwitch1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_B.dphi
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% plant_block_2024_B.theta
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% plant_block_2024_B.theta_l
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% plant_block_2024_B.dtheta
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% plant_block_2024_B.torqueRequest
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% plant_block_2024_B.Merge
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% plant_block_2024_B.SFunction
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% plant_block_2024_B.ddphi
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% plant_block_2024_B.gimblePostFilter
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 14;

                    ;% plant_block_2024_B.gimbleSpeed
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

                    ;% plant_block_2024_B.gimblePreFilter
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 16;

                    ;% plant_block_2024_B.phiPreFilter
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

                    ;% plant_block_2024_B.thetaPreFilter
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 18;

                    ;% plant_block_2024_B.gimblespeedrequest
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 19;

                    ;% plant_block_2024_B.gyroPreFilter
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 20;

                    ;% plant_block_2024_B.FlywheelSpeed
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 21;

                    ;% plant_block_2024_B.ManualSwitch2
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 22;

                    ;% plant_block_2024_B.FilterCoefficient
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 23;

                    ;% plant_block_2024_B.Sum
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 24;

                    ;% plant_block_2024_B.gimbleSpeedError
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 25;

                    ;% plant_block_2024_B.FilterCoefficient_h
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 26;

                    ;% plant_block_2024_B.gimbleVoltage
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 27;

                    ;% plant_block_2024_B.flywheelVoltage
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 28;

                    ;% plant_block_2024_B.IntegralGain
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 29;

                    ;% plant_block_2024_B.IntegralGain_b
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 30;

                    ;% plant_block_2024_B.torqueRequest_j
                    section.data(28).logicalSrcIdx = 28;
                    section.data(28).dtTransOffset = 31;

                    ;% plant_block_2024_B.ddtheta_control
                    section.data(29).logicalSrcIdx = 29;
                    section.data(29).dtTransOffset = 32;

                    ;% plant_block_2024_B.state
                    section.data(30).logicalSrcIdx = 30;
                    section.data(30).dtTransOffset = 33;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (plant_block_2024_DW)
        ;%
            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% plant_block_2024_DW.TimeStampA
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.LastUAtTimeA
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_DW.TimeStampB
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% plant_block_2024_DW.LastUAtTimeB
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% plant_block_2024_DW.TimeStampA_i
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% plant_block_2024_DW.LastUAtTimeA_a
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% plant_block_2024_DW.TimeStampB_k
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% plant_block_2024_DW.LastUAtTimeB_f
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% plant_block_2024_DW.TimeStampA_l
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% plant_block_2024_DW.LastUAtTimeA_e
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% plant_block_2024_DW.TimeStampB_n
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% plant_block_2024_DW.LastUAtTimeB_i
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% plant_block_2024_DW.TimeStampA_d
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% plant_block_2024_DW.LastUAtTimeA_i
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% plant_block_2024_DW.TimeStampB_b
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% plant_block_2024_DW.LastUAtTimeB_b
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% plant_block_2024_DW.TimeStampA_b
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% plant_block_2024_DW.LastUAtTimeA_d
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% plant_block_2024_DW.TimeStampB_o
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% plant_block_2024_DW.LastUAtTimeB_d
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 21;
            section.data(21)  = dumData; %prealloc

                    ;% plant_block_2024_DW.Scope_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 20;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Demux1_at_outport_4_PWORK.AQHandles
                    section.data(2).logicalSrcIdx = 21;
                    section.data(2).dtTransOffset = 2;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Derivative3_at_outport_0_PWORK.AQHandles
                    section.data(3).logicalSrcIdx = 22;
                    section.data(3).dtTransOffset = 3;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Derivative4_at_outport_0_PWORK.AQHandles
                    section.data(4).logicalSrcIdx = 23;
                    section.data(4).dtTransOffset = 4;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Derivative5_at_outport_0_PWORK.AQHandles
                    section.data(5).logicalSrcIdx = 24;
                    section.data(5).dtTransOffset = 5;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Derivative7_at_outport_0_PWORK.AQHandles
                    section.data(6).logicalSrcIdx = 25;
                    section.data(6).dtTransOffset = 6;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Gain1_at_outport_0_PWORK.AQHandles
                    section.data(7).logicalSrcIdx = 26;
                    section.data(7).dtTransOffset = 7;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Gain2_at_outport_0_PWORK.AQHandles
                    section.data(8).logicalSrcIdx = 27;
                    section.data(8).dtTransOffset = 8;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Gain3_at_outport_0_PWORK.AQHandles
                    section.data(9).logicalSrcIdx = 28;
                    section.data(9).dtTransOffset = 9;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Gain5_at_outport_0_PWORK.AQHandles
                    section.data(10).logicalSrcIdx = 29;
                    section.data(10).dtTransOffset = 10;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Gain6_at_outport_0_PWORK.AQHandles
                    section.data(11).logicalSrcIdx = 30;
                    section.data(11).dtTransOffset = 11;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Gain_at_outport_0_PWORK.AQHandles
                    section.data(12).logicalSrcIdx = 31;
                    section.data(12).dtTransOffset = 12;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_MATLABFunction3_at_outport_0_PWORK.AQHandles
                    section.data(13).logicalSrcIdx = 32;
                    section.data(13).dtTransOffset = 13;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_MATLABFunction4_at_outport_0_PWORK.AQHandles
                    section.data(14).logicalSrcIdx = 33;
                    section.data(14).dtTransOffset = 14;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_PIDController_at_outport_0_PWORK.AQHandles
                    section.data(15).logicalSrcIdx = 34;
                    section.data(15).dtTransOffset = 15;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Saturation1_at_outport_0_PWORK.AQHandles
                    section.data(16).logicalSrcIdx = 35;
                    section.data(16).dtTransOffset = 16;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Saturation_at_outport_0_PWORK.AQHandles
                    section.data(17).logicalSrcIdx = 36;
                    section.data(17).dtTransOffset = 17;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Sum1_at_outport_0_PWORK.AQHandles
                    section.data(18).logicalSrcIdx = 37;
                    section.data(18).dtTransOffset = 18;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_TransferFcn1_at_outport_0_PWORK.AQHandles
                    section.data(19).logicalSrcIdx = 38;
                    section.data(19).dtTransOffset = 19;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_TransferFcn2_at_outport_0_PWORK.AQHandles
                    section.data(20).logicalSrcIdx = 39;
                    section.data(20).dtTransOffset = 20;

                    ;% plant_block_2024_DW.TimeScope_PWORK.LoggedData
                    section.data(21).logicalSrcIdx = 40;
                    section.data(21).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% plant_block_2024_DW.sfEvent
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.sfEvent_n
                    section.data(2).logicalSrcIdx = 42;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_DW.sfEvent_f
                    section.data(3).logicalSrcIdx = 43;
                    section.data(3).dtTransOffset = 2;

                    ;% plant_block_2024_DW.sfEvent_j
                    section.data(4).logicalSrcIdx = 44;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% plant_block_2024_DW.is_c7_plant_block_2024
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% plant_block_2024_DW.If_ActiveSubsystem
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.IfActionSubsystem1_SubsysRanBC
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_DW.IfActionSubsystem_SubsysRanBC
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% plant_block_2024_DW.is_active_c7_plant_block_2024
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% plant_block_2024_DW.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.doneDoubleBufferReInit_p
                    section.data(2).logicalSrcIdx = 51;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_DW.doneDoubleBufferReInit_a
                    section.data(3).logicalSrcIdx = 52;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1258172375;
    targMap.checksum1 = 2573173150;
    targMap.checksum2 = 41111898;
    targMap.checksum3 = 2524644680;

