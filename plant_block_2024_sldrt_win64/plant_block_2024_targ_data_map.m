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
            section.nData     = 43;
            section.data(43)  = dumData; %prealloc

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

                    ;% plant_block_2024_P.SFunction_P1_Size
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% plant_block_2024_P.SFunction_P1
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 14;

                    ;% plant_block_2024_P.SFunction_P2_Size
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 20;

                    ;% plant_block_2024_P.SFunction_P2
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 22;

                    ;% plant_block_2024_P.SFunction_P3_Size
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 23;

                    ;% plant_block_2024_P.SFunction_P3
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 25;

                    ;% plant_block_2024_P.SFunction_P4_Size
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 26;

                    ;% plant_block_2024_P.SFunction_P4
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 28;

                    ;% plant_block_2024_P.Gain_Gain
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 29;

                    ;% plant_block_2024_P.Gain6_Gain
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 30;

                    ;% plant_block_2024_P.TransferFcn_A
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 31;

                    ;% plant_block_2024_P.TransferFcn_C
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 32;

                    ;% plant_block_2024_P.targetGyro_Value
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 33;

                    ;% plant_block_2024_P.Saturation_UpperSat
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 34;

                    ;% plant_block_2024_P.Saturation_LowerSat
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 35;

                    ;% plant_block_2024_P.Integrator6_IC
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 36;

                    ;% plant_block_2024_P.TransferFcn1_A
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 37;

                    ;% plant_block_2024_P.TransferFcn1_C
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 38;

                    ;% plant_block_2024_P.TransferFcn2_A
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 39;

                    ;% plant_block_2024_P.TransferFcn2_C
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 40;

                    ;% plant_block_2024_P.Gain5_Gain
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 41;

                    ;% plant_block_2024_P.TransferFcn3_A
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 42;

                    ;% plant_block_2024_P.TransferFcn3_C
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 43;

                    ;% plant_block_2024_P.Gain1_Gain
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 44;

                    ;% plant_block_2024_P.Gain2_Gain
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 45;

                    ;% plant_block_2024_P.Gain3_Gain
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 46;

                    ;% plant_block_2024_P.Integrator7_IC
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 47;

                    ;% plant_block_2024_P.Integrator4_IC
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 48;

                    ;% plant_block_2024_P.Integrator5_IC
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 49;

                    ;% plant_block_2024_P.Saturation1_UpperSat
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 50;

                    ;% plant_block_2024_P.Saturation1_LowerSat
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 51;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% plant_block_2024_P.ManualSwitch1_CurrentSetting
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_P.ManualSwitch_CurrentSetting
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 1;

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
            section.nData     = 26;
            section.data(26)  = dumData; %prealloc

                    ;% plant_block_2024_B.SFunction
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_B.Gain
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 5;

                    ;% plant_block_2024_B.Gain6
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% plant_block_2024_B.FilterCoefficient
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 7;

                    ;% plant_block_2024_B.Saturation
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% plant_block_2024_B.Integrator6
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% plant_block_2024_B.ManualSwitch1
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% plant_block_2024_B.Derivative3
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% plant_block_2024_B.TransferFcn2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

                    ;% plant_block_2024_B.gimblespeedrequest
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% plant_block_2024_B.TransferFcn3
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 14;

                    ;% plant_block_2024_B.gimbalmotorvoltage
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

                    ;% plant_block_2024_B.Gain1
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 16;

                    ;% plant_block_2024_B.phi
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

                    ;% plant_block_2024_B.theta
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 18;

                    ;% plant_block_2024_B.Integrator7
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 19;

                    ;% plant_block_2024_B.Integrator4
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 20;

                    ;% plant_block_2024_B.Integrator5
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 21;

                    ;% plant_block_2024_B.ManualSwitch
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 22;

                    ;% plant_block_2024_B.IntegralGain
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 23;

                    ;% plant_block_2024_B.IntegralGain_b
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 24;

                    ;% plant_block_2024_B.FilterCoefficient_h
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 25;

                    ;% plant_block_2024_B.Saturation1
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 26;

                    ;% plant_block_2024_B.ddtheta
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 27;

                    ;% plant_block_2024_B.ddphi
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 28;

                    ;% plant_block_2024_B.torqueRequest
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 29;

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
        nTotSects     = 4;
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

                    ;% plant_block_2024_DW.TimeStampA_m
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% plant_block_2024_DW.LastUAtTimeA_a
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% plant_block_2024_DW.TimeStampB_h
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% plant_block_2024_DW.LastUAtTimeB_o
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

                    ;% plant_block_2024_DW.TimeStampA_i
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% plant_block_2024_DW.LastUAtTimeA_at
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% plant_block_2024_DW.TimeStampB_k
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% plant_block_2024_DW.LastUAtTimeB_f
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% plant_block_2024_DW.TimeStampA_d
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% plant_block_2024_DW.LastUAtTimeA_i
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% plant_block_2024_DW.TimeStampB_b
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% plant_block_2024_DW.LastUAtTimeB_b
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% plant_block_2024_DW.Scope_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 20;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.Scope1_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 21;
                    section.data(2).dtTransOffset = 2;

                    ;% plant_block_2024_DW.Scope2_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 22;
                    section.data(3).dtTransOffset = 5;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Integrator6_at_outport_0_PWORK.AQHandles
                    section.data(4).logicalSrcIdx = 23;
                    section.data(4).dtTransOffset = 9;

                    ;% plant_block_2024_DW.TAQSigLogging_InsertedFor_Integrator7_at_outport_0_PWORK.AQHandles
                    section.data(5).logicalSrcIdx = 24;
                    section.data(5).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% plant_block_2024_DW.sfEvent
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.sfEvent_k
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_DW.sfEvent_kx
                    section.data(3).logicalSrcIdx = 27;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% plant_block_2024_DW.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% plant_block_2024_DW.doneDoubleBufferReInit_o
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 1;

                    ;% plant_block_2024_DW.doneDoubleBufferReInit_m
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
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


    targMap.checksum0 = 1804039882;
    targMap.checksum1 = 3739924913;
    targMap.checksum2 = 3406658960;
    targMap.checksum3 = 223531076;

