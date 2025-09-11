    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
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
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (Resetmdl_P)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% Resetmdl_P.SFunction_P1_Size
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Resetmdl_P.SFunction_P1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% Resetmdl_P.SFunction_P2_Size
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 8;

                    ;% Resetmdl_P.SFunction_P2
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% Resetmdl_P.SFunction_P3_Size
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 11;

                    ;% Resetmdl_P.SFunction_P3
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 13;

                    ;% Resetmdl_P.SFunction_P4_Size
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 14;

                    ;% Resetmdl_P.SFunction_P4
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 16;

                    ;% Resetmdl_P.Add1_Value
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
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
        ;% Auto data (Resetmdl_B)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% Resetmdl_B.SFunction
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Resetmdl_B.Add1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

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
        nTotSects     = 0;
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
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (Resetmdl_DW)
        ;%

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


    targMap.checksum0 = 2378275662;
    targMap.checksum1 = 1514160962;
    targMap.checksum2 = 1721101104;
    targMap.checksum3 = 1572852869;

