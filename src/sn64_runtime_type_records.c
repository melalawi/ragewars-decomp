#include "sn64_type_records.h"

#if defined(VERSION_US_REV1)
/* Serialized symbol/type definitions: ROM 0xFDE08..0x101000,
 * resident VMA 0x800FD208. Boundary fields continue in
 * adjacent inventory spans; this object owns only this assigned interval. */
typedef struct Sn64RuntimeTypeRecords {
    /* ROM 0xFDE08: CDefragger_t / CDefragger_t */
    struct {
        Sn64DefinitionHeaderTail header;
        unsigned char name_length;
        char name[12];
    } r0_CDefragger_t_CDefragger_t;
    /* ROM 0xFDE21: CDefragger_t / Thread */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r1_CDefragger_t_Thread;
    /* ROM 0xFDE42: CDefragger_t / Stack */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[5];
    } r2_CDefragger_t_Stack;
    /* ROM 0xFDE5C: CDefragger_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[4];
    } r3_CDefragger_t__eos;
    /* ROM 0xFDE7D: CDefragger_t / CDefragger */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r4_CDefragger_t_CDefragger;
    /* ROM 0xFDEA4: CTextureInfo_t / CTextureInfo_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r5_CTextureInfo_t_CTextureInfo_t;
    /* ROM 0xFDEC0: CTextureInfo_t / m_nBitmaps */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r6_CTextureInfo_t_m_nBitmaps;
    /* ROM 0xFDED8: CTextureInfo_t / m_nPalettes */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r7_CTextureInfo_t_m_nPalettes;
    /* ROM 0xFDEF1: CTextureInfo_t / m_pFormat */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[9];
    } r8_CTextureInfo_t_m_pFormat;
    /* ROM 0xFDF1E: CTextureInfo_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[4];
    } r9_CTextureInfo_t__eos;
    /* ROM 0xFDF41: CTextureInfo_t / CTextureInfo */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[12];
    } r10_CTextureInfo_t_CTextureInfo;
    /* ROM 0xFDF6C: CTextureLoader_t / CTextureLoader_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r11_CTextureLoader_t_CTextureLoader_t;
    /* ROM 0xFDF8A: CTextureLoader_t / rpTextureSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r12_CTextureLoader_t_rpTextureSet;
    /* ROM 0xFDFA4: CTextureLoader_t / TextureSetSize */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r13_CTextureLoader_t_TextureSetSize;
    /* ROM 0xFDFC0: CTextureLoader_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[4];
    } r14_CTextureLoader_t__eos;
    /* ROM 0xFDFE5: CTextureLoader_t / CTextureLoader */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[14];
    } r15_CTextureLoader_t_CTextureLoader;
    /* ROM 0xFE014: PARTICLE_IMPACTS_GRASS_OR_WOODequ / PARTICLE_IMPACTS_GRASS_OR_WOODequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[33];
    } r16_PARTICLE_IMPACTS_GRASS_OR_WOODequ_PARTICLE_IMPACTS_GRASS_OR_WOODequ;
    /* ROM 0xFE043: PARTICLE_IMPACTS_GRASS_OR_WOODequ / PARTICLE_IMPACTS_GRASS_OR_WOOD */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r17_PARTICLE_IMPACTS_GRASS_OR_WOODequ_PARTICLE_IMPACTS_GRASS_OR_WOOD;
    /* ROM 0xFE06F: PARTICLE_IMPACTS_GRASS_OR_WOODequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[33];
        unsigned char name_length;
        char name[4];
    } r18_PARTICLE_IMPACTS_GRASS_OR_WOODequ__eos;
    /* ROM 0xFE0A5: PARTICLE_IMPACTS_WATERSURFACEequ / PARTICLE_IMPACTS_WATERSURFACEequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[32];
    } r19_PARTICLE_IMPACTS_WATERSURFACEequ_PARTICLE_IMPACTS_WATERSURFACEequ;
    /* ROM 0xFE0D3: PARTICLE_IMPACTS_WATERSURFACEequ / PARTICLE_IMPACTS_WATERSURFACE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[29];
    } r20_PARTICLE_IMPACTS_WATERSURFACEequ_PARTICLE_IMPACTS_WATERSURFACE;
    /* ROM 0xFE0FE: PARTICLE_IMPACTS_WATERSURFACEequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[32];
        unsigned char name_length;
        char name[4];
    } r21_PARTICLE_IMPACTS_WATERSURFACEequ__eos;
    /* ROM 0xFE133: PARTICLE_IMPACTS_STEELequ / PARTICLE_IMPACTS_STEELequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[25];
    } r22_PARTICLE_IMPACTS_STEELequ_PARTICLE_IMPACTS_STEELequ;
    /* ROM 0xFE15A: PARTICLE_IMPACTS_STEELequ / PARTICLE_IMPACTS_STEEL */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r23_PARTICLE_IMPACTS_STEELequ_PARTICLE_IMPACTS_STEEL;
    /* ROM 0xFE17E: PARTICLE_IMPACTS_STEELequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[25];
        unsigned char name_length;
        char name[4];
    } r24_PARTICLE_IMPACTS_STEELequ__eos;
    /* ROM 0xFE1AC: PARTICLE_IMPACTS_STONEequ / PARTICLE_IMPACTS_STONEequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[25];
    } r25_PARTICLE_IMPACTS_STONEequ_PARTICLE_IMPACTS_STONEequ;
    /* ROM 0xFE1D3: PARTICLE_IMPACTS_STONEequ / PARTICLE_IMPACTS_STONE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r26_PARTICLE_IMPACTS_STONEequ_PARTICLE_IMPACTS_STONE;
    /* ROM 0xFE1F7: PARTICLE_IMPACTS_STONEequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[25];
        unsigned char name_length;
        char name[4];
    } r27_PARTICLE_IMPACTS_STONEequ__eos;
    /* ROM 0xFE225: PARTICLE_IMPACTS_FLESHequ / PARTICLE_IMPACTS_FLESHequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[25];
    } r28_PARTICLE_IMPACTS_FLESHequ_PARTICLE_IMPACTS_FLESHequ;
    /* ROM 0xFE24C: PARTICLE_IMPACTS_FLESHequ / PARTICLE_IMPACTS_FLESH */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r29_PARTICLE_IMPACTS_FLESHequ_PARTICLE_IMPACTS_FLESH;
    /* ROM 0xFE270: PARTICLE_IMPACTS_FLESHequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[25];
        unsigned char name_length;
        char name[4];
    } r30_PARTICLE_IMPACTS_FLESHequ__eos;
    /* ROM 0xFE29E: PARTICLE_IMPACTS_ALIENFLESHequ / PARTICLE_IMPACTS_ALIENFLESHequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r31_PARTICLE_IMPACTS_ALIENFLESHequ_PARTICLE_IMPACTS_ALIENFLESHequ;
    /* ROM 0xFE2CA: PARTICLE_IMPACTS_ALIENFLESHequ / PARTICLE_IMPACTS_ALIENFLESH */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r32_PARTICLE_IMPACTS_ALIENFLESHequ_PARTICLE_IMPACTS_ALIENFLESH;
    /* ROM 0xFE2F3: PARTICLE_IMPACTS_ALIENFLESHequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[4];
    } r33_PARTICLE_IMPACTS_ALIENFLESHequ__eos;
    /* ROM 0xFE326: PARTICLE_IMPACTS_FLESHWATERequ / PARTICLE_IMPACTS_FLESHWATERequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r34_PARTICLE_IMPACTS_FLESHWATERequ_PARTICLE_IMPACTS_FLESHWATERequ;
    /* ROM 0xFE352: PARTICLE_IMPACTS_FLESHWATERequ / PARTICLE_IMPACTS_FLESHWATER */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r35_PARTICLE_IMPACTS_FLESHWATERequ_PARTICLE_IMPACTS_FLESHWATER;
    /* ROM 0xFE37B: PARTICLE_IMPACTS_FLESHWATERequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[4];
    } r36_PARTICLE_IMPACTS_FLESHWATERequ__eos;
    /* ROM 0xFE3AE: PARTICLE_IMPACTS_LAVAequ / PARTICLE_IMPACTS_LAVAequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r37_PARTICLE_IMPACTS_LAVAequ_PARTICLE_IMPACTS_LAVAequ;
    /* ROM 0xFE3D4: PARTICLE_IMPACTS_LAVAequ / PARTICLE_IMPACTS_LAVA */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r38_PARTICLE_IMPACTS_LAVAequ_PARTICLE_IMPACTS_LAVA;
    /* ROM 0xFE3F7: PARTICLE_IMPACTS_LAVAequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[4];
    } r39_PARTICLE_IMPACTS_LAVAequ__eos;
    /* ROM 0xFE424: PARTICLE_IMPACTS_SWAMPequ / PARTICLE_IMPACTS_SWAMPequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[25];
    } r40_PARTICLE_IMPACTS_SWAMPequ_PARTICLE_IMPACTS_SWAMPequ;
    /* ROM 0xFE44B: PARTICLE_IMPACTS_SWAMPequ / PARTICLE_IMPACTS_SWAMP */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r41_PARTICLE_IMPACTS_SWAMPequ_PARTICLE_IMPACTS_SWAMP;
    /* ROM 0xFE46F: PARTICLE_IMPACTS_SWAMPequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[25];
        unsigned char name_length;
        char name[4];
    } r42_PARTICLE_IMPACTS_SWAMPequ__eos;
    /* ROM 0xFE49D: PARTICLE_IMPACTS_FORCEFIELDequ / PARTICLE_IMPACTS_FORCEFIELDequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r43_PARTICLE_IMPACTS_FORCEFIELDequ_PARTICLE_IMPACTS_FORCEFIELDequ;
    /* ROM 0xFE4C9: PARTICLE_IMPACTS_FORCEFIELDequ / PARTICLE_IMPACTS_FORCEFIELD */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r44_PARTICLE_IMPACTS_FORCEFIELDequ_PARTICLE_IMPACTS_FORCEFIELD;
    /* ROM 0xFE4F2: PARTICLE_IMPACTS_FORCEFIELDequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[4];
    } r45_PARTICLE_IMPACTS_FORCEFIELDequ__eos;
    /* ROM 0xFE525: PARTICLE_IMPACTS_ENDLIFEequ / PARTICLE_IMPACTS_ENDLIFEequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r46_PARTICLE_IMPACTS_ENDLIFEequ_PARTICLE_IMPACTS_ENDLIFEequ;
    /* ROM 0xFE54E: PARTICLE_IMPACTS_ENDLIFEequ / PARTICLE_IMPACTS_ENDLIFE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r47_PARTICLE_IMPACTS_ENDLIFEequ_PARTICLE_IMPACTS_ENDLIFE;
    /* ROM 0xFE574: PARTICLE_IMPACTS_ENDLIFEequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[4];
    } r48_PARTICLE_IMPACTS_ENDLIFEequ__eos;
    /* ROM 0xFE5A4: PARTICLE_IMPACTS_EVERYFRAMEequ / PARTICLE_IMPACTS_EVERYFRAMEequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r49_PARTICLE_IMPACTS_EVERYFRAMEequ_PARTICLE_IMPACTS_EVERYFRAMEequ;
    /* ROM 0xFE5D0: PARTICLE_IMPACTS_EVERYFRAMEequ / PARTICLE_IMPACTS_EVERYFRAME */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r50_PARTICLE_IMPACTS_EVERYFRAMEequ_PARTICLE_IMPACTS_EVERYFRAME;
    /* ROM 0xFE5F9: PARTICLE_IMPACTS_EVERYFRAMEequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[4];
    } r51_PARTICLE_IMPACTS_EVERYFRAMEequ__eos;
    /* ROM 0xFE62C: PARTICLE_IMPACTS_ENDLIFEWATERequ / PARTICLE_IMPACTS_ENDLIFEWATERequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[32];
    } r52_PARTICLE_IMPACTS_ENDLIFEWATERequ_PARTICLE_IMPACTS_ENDLIFEWATERequ;
    /* ROM 0xFE65A: PARTICLE_IMPACTS_ENDLIFEWATERequ / PARTICLE_IMPACTS_ENDLIFEWATER */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[29];
    } r53_PARTICLE_IMPACTS_ENDLIFEWATERequ_PARTICLE_IMPACTS_ENDLIFEWATER;
    /* ROM 0xFE685: PARTICLE_IMPACTS_ENDLIFEWATERequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[32];
        unsigned char name_length;
        char name[4];
    } r54_PARTICLE_IMPACTS_ENDLIFEWATERequ__eos;
    /* ROM 0xFE6BA: PARTICLE_IMPACTS_EVERYFRAMEWATERequ / PARTICLE_IMPACTS_EVERYFRAMEWATERequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[35];
    } r55_PARTICLE_IMPACTS_EVERYFRAMEWATERequ_PARTICLE_IMPACTS_EVERYFRAMEWATERequ;
    /* ROM 0xFE6EB: PARTICLE_IMPACTS_EVERYFRAMEWATERequ / PARTICLE_IMPACTS_EVERYFRAMEWATER */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[32];
    } r56_PARTICLE_IMPACTS_EVERYFRAMEWATERequ_PARTICLE_IMPACTS_EVERYFRAMEWATER;
    /* ROM 0xFE719: PARTICLE_IMPACTS_EVERYFRAMEWATERequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[35];
        unsigned char name_length;
        char name[4];
    } r57_PARTICLE_IMPACTS_EVERYFRAMEWATERequ__eos;
    /* ROM 0xFE751: PARTICLE_IMPACTS_AMTequ / PARTICLE_IMPACTS_AMTequ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[23];
    } r58_PARTICLE_IMPACTS_AMTequ_PARTICLE_IMPACTS_AMTequ;
    /* ROM 0xFE776: PARTICLE_IMPACTS_AMTequ / PARTICLE_IMPACTS_AMT */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r59_PARTICLE_IMPACTS_AMTequ_PARTICLE_IMPACTS_AMT;
    /* ROM 0xFE798: PARTICLE_IMPACTS_AMTequ / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[23];
        unsigned char name_length;
        char name[4];
    } r60_PARTICLE_IMPACTS_AMTequ__eos;
    /* ROM 0xFE7C4: PARTICLE_IMPACTS_AMTequ / SF */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[2];
    } r61_PARTICLE_IMPACTS_AMTequ_SF;
    /* ROM 0xFE7D4: CROMSection_t / CROMSection_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r62_CROMSection_t_CROMSection_t;
    /* ROM 0xFE7EF: CROMSection_t / m_nTextureSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r63_CROMSection_t_m_nTextureSet;
    /* ROM 0xFE80A: CROMSection_t / m_dwMatFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r64_CROMSection_t_m_dwMatFlags;
    /* ROM 0xFE824: CROMSection_t / m_nMaterial */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r65_CROMSection_t_m_nMaterial;
    /* ROM 0xFE83D: CROMSection_t / m_NodeType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r66_CROMSection_t_m_NodeType;
    /* ROM 0xFE855: CROMSection_t / pad */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[3];
    } r67_CROMSection_t_pad;
    /* ROM 0xFE86D: CROMSection_t / m_Color */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r68_CROMSection_t_m_Color;
    /* ROM 0xFE889: CROMSection_t / m_BlackColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r69_CROMSection_t_m_BlackColor;
    /* ROM 0xFE8AA: CROMSection_t / m_MultU */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r70_CROMSection_t_m_MultU;
    /* ROM 0xFE8BF: CROMSection_t / m_MultV */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r71_CROMSection_t_m_MultV;
    /* ROM 0xFE8D4: CROMSection_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[4];
    } r72_CROMSection_t__eos;
    /* ROM 0xFE8F6: CROMSection_t / CROMSection */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r73_CROMSection_t_CROMSection;
    /* ROM 0xFE91F: CGameSection_t / CGameSection_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r74_CGameSection_t_CGameSection_t;
    /* ROM 0xFE93B: CGameSection_t / m_dwMatFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r75_CGameSection_t_m_dwMatFlags;
    /* ROM 0xFE955: CGameSection_t / m_nMaterial */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r76_CGameSection_t_m_nMaterial;
    /* ROM 0xFE96E: CGameSection_t / m_NodeType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r77_CGameSection_t_m_NodeType;
    /* ROM 0xFE986: CGameSection_t / m_LastTextureFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r78_CGameSection_t_m_LastTextureFrame;
    /* ROM 0xFE9A6: CGameSection_t / m_TextureLoader */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[15];
    } r79_CGameSection_t_m_TextureLoader;
    /* ROM 0xFE9D6: CGameSection_t / m_Color */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r80_CGameSection_t_m_Color;
    /* ROM 0xFE9F2: CGameSection_t / m_BlackColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r81_CGameSection_t_m_BlackColor;
    /* ROM 0xFEA13: CGameSection_t / m_MultU */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r82_CGameSection_t_m_MultU;
    /* ROM 0xFEA28: CGameSection_t / m_MultV */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r83_CGameSection_t_m_MultV;
    /* ROM 0xFEA3D: CGameSection_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[4];
    } r84_CGameSection_t__eos;
    /* ROM 0xFEA60: CGameSection_t / CGameSection */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[12];
    } r85_CGameSection_t_CGameSection;
    /* ROM 0xFEA8B: CROMTextureFormat_t / CROMTextureFormat_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r86_CROMTextureFormat_t_CROMTextureFormat_t;
    /* ROM 0xFEAAC: CROMTextureFormat_t / m_Format */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r87_CROMTextureFormat_t_m_Format;
    /* ROM 0xFEAC2: CROMTextureFormat_t / m_PlaybackSpeed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r88_CROMTextureFormat_t_m_PlaybackSpeed;
    /* ROM 0xFEADF: CROMTextureFormat_t / m_WidthShift */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r89_CROMTextureFormat_t_m_WidthShift;
    /* ROM 0xFEAF9: CROMTextureFormat_t / m_HeightShift */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r90_CROMTextureFormat_t_m_HeightShift;
    /* ROM 0xFEB14: CROMTextureFormat_t / m_Effect */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r91_CROMTextureFormat_t_m_Effect;
    /* ROM 0xFEB2A: CROMTextureFormat_t / m_EffectMode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r92_CROMTextureFormat_t_m_EffectMode;
    /* ROM 0xFEB44: CROMTextureFormat_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r93_CROMTextureFormat_t__eos;
    /* ROM 0xFEB6C: CROMTextureFormat_t / CROMTextureFormat */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } r94_CROMTextureFormat_t_CROMTextureFormat;
    /* ROM 0xFEBA1: CROMLevel_t / CROMLevel_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r95_CROMLevel_t_CROMLevel_t;
    /* ROM 0xFEBBA: CROMLevel_t / m_GridDistance */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r96_CROMLevel_t_m_GridDistance;
    /* ROM 0xFEBD6: CROMLevel_t / m_BlackColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r97_CROMLevel_t_m_BlackColor;
    /* ROM 0xFEBF7: CROMLevel_t / m_WhiteColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r98_CROMLevel_t_m_WhiteColor;
    /* ROM 0xFEC18: CROMLevel_t / m_DirectionalLight */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[18];
    } r99_CROMLevel_t_m_DirectionalLight;
    /* ROM 0xFEC3F: CROMLevel_t / m_AmbientLight */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[14];
    } r100_CROMLevel_t_m_AmbientLight;
    /* ROM 0xFEC62: CROMLevel_t / m_bFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r101_CROMLevel_t_m_bFlags;
    /* ROM 0xFEC78: CROMLevel_t / m_Direction */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[11];
    } r102_CROMLevel_t_m_Direction;
    /* ROM 0xFEC98: CROMLevel_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[4];
    } r103_CROMLevel_t__eos;
    /* ROM 0xFECB8: CROMLevel_t / CROMLevel */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[9];
    } r104_CROMLevel_t_CROMLevel;
    /* ROM 0xFECDD: CRandomSFPair_t / CRandomSFPair_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r105_CRandomSFPair_t_CRandomSFPair_t;
    /* ROM 0xFECFA: CRandomSFPair_t / v */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r106_CRandomSFPair_t_v;
    /* ROM 0xFED09: CRandomSFPair_t / r */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r107_CRandomSFPair_t_r;
    /* ROM 0xFED18: CRandomSFPair_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r108_CRandomSFPair_t__eos;
    /* ROM 0xFED3C: CRandomSFPair_t / CRandomSFPair */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r109_CRandomSFPair_t_CRandomSFPair;
    /* ROM 0xFED69: CRandomS8Pair_t / CRandomS8Pair_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r110_CRandomS8Pair_t_CRandomS8Pair_t;
    /* ROM 0xFED86: CRandomS8Pair_t / v */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r111_CRandomS8Pair_t_v;
    /* ROM 0xFED95: CRandomS8Pair_t / r */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r112_CRandomS8Pair_t_r;
    /* ROM 0xFEDA4: CRandomS8Pair_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r113_CRandomS8Pair_t__eos;
    /* ROM 0xFEDC8: CRandomS8Pair_t / CRandomS8Pair */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r114_CRandomS8Pair_t_CRandomS8Pair;
    /* ROM 0xFEDF5: CROMParticleImpact_t / CROMParticleImpact_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r115_CROMParticleImpact_t_CROMParticleImpact_t;
    /* ROM 0xFEE17: CROMParticleImpact_t / m_ImpactEventValue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[18];
    } r116_CROMParticleImpact_t_m_ImpactEventValue;
    /* ROM 0xFEE4B: CROMParticleImpact_t / m_ImpactParticleType */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[20];
    } r117_CROMParticleImpact_t_m_ImpactParticleType;
    /* ROM 0xFEE74: CROMParticleImpact_t / m_ImpactEventType */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[17];
    } r118_CROMParticleImpact_t_m_ImpactEventType;
    /* ROM 0xFEE9A: CROMParticleImpact_t / m_ImpactSoundType */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[17];
    } r119_CROMParticleImpact_t_m_ImpactSoundType;
    /* ROM 0xFEEC0: CROMParticleImpact_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[4];
    } r120_CROMParticleImpact_t__eos;
    /* ROM 0xFEEE9: CROMParticleImpact_t / CROMParticleImpact */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[18];
    } r121_CROMParticleImpact_t_CROMParticleImpact;
    /* ROM 0xFEF20: CROMParticleOffset_t / CROMParticleOffset_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r122_CROMParticleOffset_t_CROMParticleOffset_t;
    /* ROM 0xFEF42: CROMParticleOffset_t / m_XPosOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r123_CROMParticleOffset_t_m_XPosOffset;
    /* ROM 0xFEF6E: CROMParticleOffset_t / m_YPosOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r124_CROMParticleOffset_t_m_YPosOffset;
    /* ROM 0xFEF9A: CROMParticleOffset_t / m_ZPosOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r125_CROMParticleOffset_t_m_ZPosOffset;
    /* ROM 0xFEFC6: CROMParticleOffset_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[4];
    } r126_CROMParticleOffset_t__eos;
    /* ROM 0xFEFEF: CROMParticleOffset_t / CROMParticleOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[18];
    } r127_CROMParticleOffset_t_CROMParticleOffset;
    /* ROM 0xFF026: CROMParticleRot_t / CROMParticleRot_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r128_CROMParticleRot_t_CROMParticleRot_t;
    /* ROM 0xFF045: CROMParticleRot_t / m_XRot */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[6];
    } r129_CROMParticleRot_t_m_XRot;
    /* ROM 0xFF06B: CROMParticleRot_t / m_XRotInc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[9];
    } r130_CROMParticleRot_t_m_XRotInc;
    /* ROM 0xFF094: CROMParticleRot_t / m_YRot */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[6];
    } r131_CROMParticleRot_t_m_YRot;
    /* ROM 0xFF0BA: CROMParticleRot_t / m_YRotInc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[9];
    } r132_CROMParticleRot_t_m_YRotInc;
    /* ROM 0xFF0E3: CROMParticleRot_t / m_ZRot */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[6];
    } r133_CROMParticleRot_t_m_ZRot;
    /* ROM 0xFF109: CROMParticleRot_t / m_ZRotInc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[9];
    } r134_CROMParticleRot_t_m_ZRotInc;
    /* ROM 0xFF132: CROMParticleRot_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[4];
    } r135_CROMParticleRot_t__eos;
    /* ROM 0xFF158: CROMParticleRot_t / CROMParticleRot */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[15];
    } r136_CROMParticleRot_t_CROMParticleRot;
    /* ROM 0xFF189: CROMParticleScale_t / CROMParticleScale_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r137_CROMParticleScale_t_CROMParticleScale_t;
    /* ROM 0xFF1AA: CROMParticleScale_t / m_XScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[8];
    } r138_CROMParticleScale_t_m_XScale;
    /* ROM 0xFF1D2: CROMParticleScale_t / m_XScaleInc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[11];
    } r139_CROMParticleScale_t_m_XScaleInc;
    /* ROM 0xFF1FD: CROMParticleScale_t / m_YScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[8];
    } r140_CROMParticleScale_t_m_YScale;
    /* ROM 0xFF225: CROMParticleScale_t / m_YScaleInc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[11];
    } r141_CROMParticleScale_t_m_YScaleInc;
    /* ROM 0xFF250: CROMParticleScale_t / m_ZScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[8];
    } r142_CROMParticleScale_t_m_ZScale;
    /* ROM 0xFF278: CROMParticleScale_t / m_ZScaleInc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[11];
    } r143_CROMParticleScale_t_m_ZScaleInc;
    /* ROM 0xFF2A3: CROMParticleScale_t / m_ShadowScale */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r144_CROMParticleScale_t_m_ShadowScale;
    /* ROM 0xFF2BE: CROMParticleScale_t / m_NearScale */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r145_CROMParticleScale_t_m_NearScale;
    /* ROM 0xFF2D7: CROMParticleScale_t / m_FarScale */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r146_CROMParticleScale_t_m_FarScale;
    /* ROM 0xFF2EF: CROMParticleScale_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r147_CROMParticleScale_t__eos;
    /* ROM 0xFF317: CROMParticleScale_t / CROMParticleScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } r148_CROMParticleScale_t_CROMParticleScale;
    /* ROM 0xFF34C: CROMParticleDir_t / CROMParticleDir_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r149_CROMParticleDir_t_CROMParticleDir_t;
    /* ROM 0xFF36B: CROMParticleDir_t / m_XDirection */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r150_CROMParticleDir_t_m_XDirection;
    /* ROM 0xFF397: CROMParticleDir_t / m_YDirection */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r151_CROMParticleDir_t_m_YDirection;
    /* ROM 0xFF3C3: CROMParticleDir_t / m_ZDirection */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r152_CROMParticleDir_t_m_ZDirection;
    /* ROM 0xFF3EF: CROMParticleDir_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[4];
    } r153_CROMParticleDir_t__eos;
    /* ROM 0xFF415: CROMParticleDir_t / CROMParticleDir */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[15];
    } r154_CROMParticleDir_t_CROMParticleDir;
    /* ROM 0xFF446: CROMParticleSineWave_t / CROMParticleSineWave_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r155_CROMParticleSineWave_t_CROMParticleSineWave_t;
    /* ROM 0xFF46A: CROMParticleSineWave_t / m_XAmplitude */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r156_CROMParticleSineWave_t_m_XAmplitude;
    /* ROM 0xFF496: CROMParticleSineWave_t / m_XFrequency */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r157_CROMParticleSineWave_t_m_XFrequency;
    /* ROM 0xFF4C2: CROMParticleSineWave_t / m_XPhase */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[8];
    } r158_CROMParticleSineWave_t_m_XPhase;
    /* ROM 0xFF4EA: CROMParticleSineWave_t / m_YAmplitude */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r159_CROMParticleSineWave_t_m_YAmplitude;
    /* ROM 0xFF516: CROMParticleSineWave_t / m_YFrequency */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[12];
    } r160_CROMParticleSineWave_t_m_YFrequency;
    /* ROM 0xFF542: CROMParticleSineWave_t / m_YPhase */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[8];
    } r161_CROMParticleSineWave_t_m_YPhase;
    /* ROM 0xFF56A: CROMParticleSineWave_t / m_nSineWaveFadeIn */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r162_CROMParticleSineWave_t_m_nSineWaveFadeIn;
    /* ROM 0xFF589: CROMParticleSineWave_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[22];
        unsigned char name_length;
        char name[4];
    } r163_CROMParticleSineWave_t__eos;
    /* ROM 0xFF5B4: CROMParticleSineWave_t / CROMParticleSineWave */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[22];
        unsigned char name_length;
        char name[20];
    } r164_CROMParticleSineWave_t_CROMParticleSineWave;
    /* ROM 0xFF5EF: CROMParticlePhysics_t / CROMParticlePhysics_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r165_CROMParticlePhysics_t_CROMParticlePhysics_t;
    /* ROM 0xFF612: CROMParticlePhysics_t / m_Gravity */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[9];
    } r166_CROMParticlePhysics_t_m_Gravity;
    /* ROM 0xFF63B: CROMParticlePhysics_t / m_Velocity */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[10];
    } r167_CROMParticlePhysics_t_m_Velocity;
    /* ROM 0xFF665: CROMParticlePhysics_t / m_BounceEnergy */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r168_CROMParticlePhysics_t_m_BounceEnergy;
    /* ROM 0xFF681: CROMParticlePhysics_t / m_GroundFriction */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r169_CROMParticlePhysics_t_m_GroundFriction;
    /* ROM 0xFF69F: CROMParticlePhysics_t / m_AirFriction */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r170_CROMParticlePhysics_t_m_AirFriction;
    /* ROM 0xFF6BA: CROMParticlePhysics_t / m_WaterFriction */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r171_CROMParticlePhysics_t_m_WaterFriction;
    /* ROM 0xFF6D7: CROMParticlePhysics_t / m_Acceleration */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r172_CROMParticlePhysics_t_m_Acceleration;
    /* ROM 0xFF6F3: CROMParticlePhysics_t / m_MinMaxVelocity */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r173_CROMParticlePhysics_t_m_MinMaxVelocity;
    /* ROM 0xFF711: CROMParticlePhysics_t / m_CollRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r174_CROMParticlePhysics_t_m_CollRadius;
    /* ROM 0xFF72B: CROMParticlePhysics_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r175_CROMParticlePhysics_t__eos;
    /* ROM 0xFF755: CROMParticlePhysics_t / CROMParticlePhysics */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r176_CROMParticlePhysics_t_CROMParticlePhysics;
    /* ROM 0xFF78E: CROMParticleColor_t / CROMParticleColor_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r177_CROMParticleColor_t_CROMParticleColor_t;
    /* ROM 0xFF7AF: CROMParticleColor_t / m_WhiteColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r178_CROMParticleColor_t_m_WhiteColor;
    /* ROM 0xFF7D0: CROMParticleColor_t / m_BlackColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r179_CROMParticleColor_t_m_BlackColor;
    /* ROM 0xFF7F1: CROMParticleColor_t / m_WhiteColor2 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[13];
    } r180_CROMParticleColor_t_m_WhiteColor2;
    /* ROM 0xFF813: CROMParticleColor_t / m_BlackColor2 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[13];
    } r181_CROMParticleColor_t_m_BlackColor2;
    /* ROM 0xFF835: CROMParticleColor_t / m_RandomizeHue */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r182_CROMParticleColor_t_m_RandomizeHue;
    /* ROM 0xFF851: CROMParticleColor_t / m_RandomizeSaturation */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r183_CROMParticleColor_t_m_RandomizeSaturation;
    /* ROM 0xFF874: CROMParticleColor_t / m_RandomizeBrightness */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r184_CROMParticleColor_t_m_RandomizeBrightness;
    /* ROM 0xFF897: CROMParticleColor_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r185_CROMParticleColor_t__eos;
    /* ROM 0xFF8BF: CROMParticleColor_t / CROMParticleColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } r186_CROMParticleColor_t_CROMParticleColor;
    /* ROM 0xFF8F4: CROMParticleGeneral_t / CROMParticleGeneral_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r187_CROMParticleGeneral_t_CROMParticleGeneral_t;
    /* ROM 0xFF917: CROMParticleGeneral_t / m_nFrames */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r188_CROMParticleGeneral_t_m_nFrames;
    /* ROM 0xFF92E: CROMParticleGeneral_t / m_nFramesRnd */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r189_CROMParticleGeneral_t_m_nFramesRnd;
    /* ROM 0xFF948: CROMParticleGeneral_t / m_Probability */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r190_CROMParticleGeneral_t_m_Probability;
    /* ROM 0xFF963: CROMParticleGeneral_t / m_Visibility */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r191_CROMParticleGeneral_t_m_Visibility;
    /* ROM 0xFF97D: CROMParticleGeneral_t / m_nParticles */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r192_CROMParticleGeneral_t_m_nParticles;
    /* ROM 0xFF997: CROMParticleGeneral_t / m_nParticlesRnd */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r193_CROMParticleGeneral_t_m_nParticlesRnd;
    /* ROM 0xFF9B4: CROMParticleGeneral_t / m_nPriority */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r194_CROMParticleGeneral_t_m_nPriority;
    /* ROM 0xFF9CD: CROMParticleGeneral_t / m_nFadeIn */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r195_CROMParticleGeneral_t_m_nFadeIn;
    /* ROM 0xFF9E4: CROMParticleGeneral_t / m_nFadeOut */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r196_CROMParticleGeneral_t_m_nFadeOut;
    /* ROM 0xFF9FC: CROMParticleGeneral_t / m_FPS */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r197_CROMParticleGeneral_t_m_FPS;
    /* ROM 0xFFA0F: CROMParticleGeneral_t / m_nInBetweens */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r198_CROMParticleGeneral_t_m_nInBetweens;
    /* ROM 0xFFA2A: CROMParticleGeneral_t / m_nMaxDelay */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r199_CROMParticleGeneral_t_m_nMaxDelay;
    /* ROM 0xFFA43: CROMParticleGeneral_t / m_Alignment */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r200_CROMParticleGeneral_t_m_Alignment;
    /* ROM 0xFFA5C: CROMParticleGeneral_t / m_Alert */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r201_CROMParticleGeneral_t_m_Alert;
    /* ROM 0xFFA71: CROMParticleGeneral_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r202_CROMParticleGeneral_t__eos;
    /* ROM 0xFFA9B: CROMParticleGeneral_t / CROMParticleGeneral */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r203_CROMParticleGeneral_t_CROMParticleGeneral;
    /* ROM 0xFFAD4: CROMParticleEffect_t / CROMParticleEffect_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r204_CROMParticleEffect_t_CROMParticleEffect_t;
    /* ROM 0xFFAF6: CROMParticleEffect_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r205_CROMParticleEffect_t_m_dwFlags;
    /* ROM 0xFFB0D: CROMParticleEffect_t / m_nTextureSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r206_CROMParticleEffect_t_m_nTextureSet;
    /* ROM 0xFFB28: CROMParticleEffect_t / m_nSwoosh */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r207_CROMParticleEffect_t_m_nSwoosh;
    /* ROM 0xFFB3F: CROMParticleEffect_t / m_nDynamicLight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r208_CROMParticleEffect_t_m_nDynamicLight;
    /* ROM 0xFFB5C: CROMParticleEffect_t / m_Playback */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r209_CROMParticleEffect_t_m_Playback;
    /* ROM 0xFFB74: CROMParticleEffect_t / m_InstanceBehavior */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r210_CROMParticleEffect_t_m_InstanceBehavior;
    /* ROM 0xFFB94: CROMParticleEffect_t / m_WallBehavior */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r211_CROMParticleEffect_t_m_WallBehavior;
    /* ROM 0xFFBB0: CROMParticleEffect_t / m_GroundBehavior */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r212_CROMParticleEffect_t_m_GroundBehavior;
    /* ROM 0xFFBCE: CROMParticleEffect_t / m_SoundType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r213_CROMParticleEffect_t_m_SoundType;
    /* ROM 0xFFBE7: CROMParticleEffect_t / m_MaxAngleChangePerFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r214_CROMParticleEffect_t_m_MaxAngleChangePerFrame;
    /* ROM 0xFFC0D: CROMParticleEffect_t / m_ProximityDetectionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[26];
    } r215_CROMParticleEffect_t_m_ProximityDetectionRadius;
    /* ROM 0xFFC35: CROMParticleEffect_t / m_bFlags2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r216_CROMParticleEffect_t_m_bFlags2;
    /* ROM 0xFFC4C: CROMParticleEffect_t / padding */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r217_CROMParticleEffect_t_padding;
    /* ROM 0xFFC68: CROMParticleEffect_t / m_rpObject */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r218_CROMParticleEffect_t_m_rpObject;
    /* ROM 0xFFC80: CROMParticleEffect_t / m_pImpact */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[9];
    } r219_CROMParticleEffect_t_m_pImpact;
    /* ROM 0xFFCAE: CROMParticleEffect_t / m_pOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[9];
    } r220_CROMParticleEffect_t_m_pOffset;
    /* ROM 0xFFCDC: CROMParticleEffect_t / m_pRot */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[6];
    } r221_CROMParticleEffect_t_m_pRot;
    /* ROM 0xFFD04: CROMParticleEffect_t / m_pScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[8];
    } r222_CROMParticleEffect_t_m_pScale;
    /* ROM 0xFFD30: CROMParticleEffect_t / m_pDir */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[6];
    } r223_CROMParticleEffect_t_m_pDir;
    /* ROM 0xFFD58: CROMParticleEffect_t / m_pSineWave */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[22];
        unsigned char name_length;
        char name[11];
    } r224_CROMParticleEffect_t_m_pSineWave;
    /* ROM 0xFFD8A: CROMParticleEffect_t / m_pPhysics */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r225_CROMParticleEffect_t_m_pPhysics;
    /* ROM 0xFFDBA: CROMParticleEffect_t / m_pColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[8];
    } r226_CROMParticleEffect_t_m_pColor;
    /* ROM 0xFFDE6: CROMParticleEffect_t / m_pGeneral */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r227_CROMParticleEffect_t_m_pGeneral;
    /* ROM 0xFFE16: CROMParticleEffect_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[4];
    } r228_CROMParticleEffect_t__eos;
    /* ROM 0xFFE3F: CROMParticleEffect_t / CROMParticleEffect */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[18];
    } r229_CROMParticleEffect_t_CROMParticleEffect;
    /* ROM 0xFFE76: CROMWarpPoint_t / CROMWarpPoint_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r230_CROMWarpPoint_t_CROMWarpPoint_t;
    /* ROM 0xFFE93: CROMWarpPoint_t / m_vPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r231_CROMWarpPoint_t_m_vPos;
    /* ROM 0xFFEB4: CROMWarpPoint_t / m_RotY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r232_CROMWarpPoint_t_m_RotY;
    /* ROM 0xFFEC8: CROMWarpPoint_t / m_nLevel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r233_CROMWarpPoint_t_m_nLevel;
    /* ROM 0xFFEDE: CROMWarpPoint_t / m_nRegion */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r234_CROMWarpPoint_t_m_nRegion;
    /* ROM 0xFFEF5: CROMWarpPoint_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r235_CROMWarpPoint_t__eos;
    /* ROM 0xFFF19: CROMWarpPoint_t / CROMWarpPoint */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r236_CROMWarpPoint_t_CROMWarpPoint;
    /* ROM 0xFFF46: CROMNode_t / CROMNode_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r237_CROMNode_t_CROMNode_t;
    /* ROM 0xFFF5E: CROMNode_t / vBoundsCorners */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[14];
    } r238_CROMNode_t_vBoundsCorners;
    /* ROM 0xFFF8B: CROMNode_t / m_MaxBounds */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r239_CROMNode_t_m_MaxBounds;
    /* ROM 0xFFFA4: CROMNode_t / m_ParentIndex */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r240_CROMNode_t_m_ParentIndex;
    /* ROM 0xFFFBF: CROMNode_t / m_Symbol */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r241_CROMNode_t_m_Symbol;
    /* ROM 0xFFFD5: CROMNode_t / m_MaterialType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r242_CROMNode_t_m_MaterialType;
    /* ROM 0xFFFF1: CROMNode_t / pad */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[3];
    } r243_CROMNode_t_pad;
    /* ROM 0x100009: CROMNode_t / m_DamageScaler */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r244_CROMNode_t_m_DamageScaler;
    /* ROM 0x100025: CROMNode_t / m_dwModelFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r245_CROMNode_t_m_dwModelFlags;
    /* ROM 0x100041: CROMNode_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r246_CROMNode_t__eos;
    /* ROM 0x100060: CROMNode_t / CROMNode */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r247_CROMNode_t_CROMNode;
    /* ROM 0x100083: CROMObjectInfo_t / CROMObjectInfo_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r248_CROMObjectInfo_t_CROMObjectInfo_t;
    /* ROM 0x1000A1: CROMObjectInfo_t / m_Bounds */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[8];
    } r249_CROMObjectInfo_t_m_Bounds;
    /* ROM 0x1000C6: CROMObjectInfo_t / m_HeadTrackStartNode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r250_CROMObjectInfo_t_m_HeadTrackStartNode;
    /* ROM 0x1000E8: CROMObjectInfo_t / m_HeadTrackEndNode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r251_CROMObjectInfo_t_m_HeadTrackEndNode;
    /* ROM 0x100108: CROMObjectInfo_t / m_HeadTrackFactor */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r252_CROMObjectInfo_t_m_HeadTrackFactor;
    /* ROM 0x100127: CROMObjectInfo_t / pad0 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r253_CROMObjectInfo_t_pad0;
    /* ROM 0x100139: CROMObjectInfo_t / m_nVariation */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r254_CROMObjectInfo_t_m_nVariation;
    /* ROM 0x100153: CROMObjectInfo_t / m_UnitScale */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r255_CROMObjectInfo_t_m_UnitScale;
    /* ROM 0x10016C: CROMObjectInfo_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[4];
    } r256_CROMObjectInfo_t__eos;
    /* ROM 0x100191: CROMObjectInfo_t / CROMObjectInfo */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[14];
    } r257_CROMObjectInfo_t_CROMObjectInfo;
    /* ROM 0x1001C0: CNode_t / CNode_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r258_CNode_t_CNode_t;
    /* ROM 0x1001D5: CNode_t / m_pPrev */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[7];
    } r259_CNode_t_m_pPrev;
    /* ROM 0x1001F4: CNode_t / m_pNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[7];
    } r260_CNode_t_m_pNext;
    /* ROM 0x100213: CNode_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[4];
    } r261_CNode_t__eos;
    /* ROM 0x10022F: CNode_t / CNode */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[5];
    } r262_CNode_t_CNode;
    /* ROM 0x10024C: CNodeList_t / CNodeList_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r263_CNodeList_t_CNodeList_t;
    /* ROM 0x100265: CNodeList_t / m_pHead */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[7];
    } r264_CNodeList_t_m_pHead;
    /* ROM 0x100284: CNodeList_t / m_pTail */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[7];
    } r265_CNodeList_t_m_pTail;
    /* ROM 0x1002A3: CNodeList_t / m_Length */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r266_CNodeList_t_m_Length;
    /* ROM 0x1002B9: CNodeList_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[4];
    } r267_CNodeList_t__eos;
    /* ROM 0x1002D9: CNodeList_t / CNodeList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[9];
    } r268_CNodeList_t_CNodeList;
    /* ROM 0x1002FE: CDynamicList_t / CDynamicList_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r269_CDynamicList_t_CDynamicList_t;
    /* ROM 0x10031A: CDynamicList_t / m_FreeList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[10];
    } r270_CDynamicList_t_m_FreeList;
    /* ROM 0x100340: CDynamicList_t / m_ActiveList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[12];
    } r271_CDynamicList_t_m_ActiveList;
    /* ROM 0x100368: CDynamicList_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[4];
    } r272_CDynamicList_t__eos;
    /* ROM 0x10038B: CDynamicList_t / CDynamicList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[12];
    } r273_CDynamicList_t_CDynamicList;
    /* ROM 0x1003B6: CSelection_t / CSelection_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r274_CSelection_t_CSelection_t;
    /* ROM 0x1003D0: CSelection_t / m_Number */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r275_CSelection_t_m_Number;
    /* ROM 0x1003E6: CSelection_t / m_Weight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r276_CSelection_t_m_Weight;
    /* ROM 0x1003FC: CSelection_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[4];
    } r277_CSelection_t__eos;
    /* ROM 0x10041D: CSelection_t / CSelection */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r278_CSelection_t_CSelection;
    /* ROM 0x100444: CSelectionList_t / CSelectionList_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r279_CSelectionList_t_CSelectionList_t;
    /* ROM 0x100462: CSelectionList_t / m_Entries */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r280_CSelectionList_t_m_Entries;
    /* ROM 0x100479: CSelectionList_t / m_List */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[6];
    } r281_CSelectionList_t_m_List;
    /* ROM 0x1004A0: CSelectionList_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[4];
    } r282_CSelectionList_t__eos;
    /* ROM 0x1004C5: CSelectionList_t / CSelectionList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[14];
    } r283_CSelectionList_t_CSelectionList;
    /* ROM 0x1004F4: CGameAnimateState_t / CGameAnimateState_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r284_CGameAnimateState_t_CGameAnimateState_t;
    /* ROM 0x100515: CGameAnimateState_t / cFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r285_CGameAnimateState_t_cFrame;
    /* ROM 0x100529: CGameAnimateState_t / nAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r286_CGameAnimateState_t_nAnim;
    /* ROM 0x10053C: CGameAnimateState_t / nDesiredAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r287_CGameAnimateState_t_nDesiredAnim;
    /* ROM 0x100556: CGameAnimateState_t / nFrames */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r288_CGameAnimateState_t_nFrames;
    /* ROM 0x10056B: CGameAnimateState_t / CycleCompleted */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r289_CGameAnimateState_t_CycleCompleted;
    /* ROM 0x100587: CGameAnimateState_t / Active */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r290_CGameAnimateState_t_Active;
    /* ROM 0x10059B: CGameAnimateState_t / LoopTo */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r291_CGameAnimateState_t_LoopTo;
    /* ROM 0x1005AF: CGameAnimateState_t / pmeAnimData */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[11];
    } r292_CGameAnimateState_t_pmeAnimData;
    /* ROM 0x1005D6: CGameAnimateState_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r293_CGameAnimateState_t__eos;
    /* ROM 0x1005FE: CGameAnimateState_t / CGameAnimateState */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } r294_CGameAnimateState_t_CGameAnimateState;
    /* ROM 0x100633: CGameAnimateState_t / CGAS */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r295_CGameAnimateState_t_CGAS;
    /* ROM 0x10065B: CGameAnimateState_t / CRIOrient */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[9];
    } r296_CGameAnimateState_t_CRIOrient;
    /* ROM 0x10068D: CGameAnimateState_t / CRNIndex */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[8];
    } r297_CGameAnimateState_t_CRNIndex;
    /* ROM 0x1006B5: AnimInfo_t / AnimInfo_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r298_AnimInfo_t_AnimInfo_t;
    /* ROM 0x1006CD: AnimInfo_t / NodeAnimIndices */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[15];
    } r299_AnimInfo_t_NodeAnimIndices;
    /* ROM 0x1006FC: AnimInfo_t / InitialOrients */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[14];
    } r300_AnimInfo_t_InitialOrients;
    /* ROM 0x100733: AnimInfo_t / isTransSets */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[11];
    } r301_AnimInfo_t_isTransSets;
    /* ROM 0x100755: AnimInfo_t / isRotSets */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[9];
    } r302_AnimInfo_t_isRotSets;
    /* ROM 0x100775: AnimInfo_t / RotIndex1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r303_AnimInfo_t_RotIndex1;
    /* ROM 0x10078C: AnimInfo_t / RotIndex2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r304_AnimInfo_t_RotIndex2;
    /* ROM 0x1007A3: AnimInfo_t / TransIndex1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r305_AnimInfo_t_TransIndex1;
    /* ROM 0x1007BC: AnimInfo_t / TransIndex2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r306_AnimInfo_t_TransIndex2;
    /* ROM 0x1007D5: AnimInfo_t / Blend */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r307_AnimInfo_t_Blend;
    /* ROM 0x1007E8: AnimInfo_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r308_AnimInfo_t__eos;
    /* ROM 0x100807: AnimInfo_t / AnimInfo */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r309_AnimInfo_t_AnimInfo;
    /* ROM 0x10082A: CGameObjectInstanceModes / CGameObjectInstanceModes */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r310_CGameObjectInstanceModes_CGameObjectInstanceModes;
    /* ROM 0x100850: CGameObjectInstanceModes / IDLE_MODE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r311_CGameObjectInstanceModes_IDLE_MODE;
    /* ROM 0x100867: CGameObjectInstanceModes / TRANS_FADE_OUT_MODE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r312_CGameObjectInstanceModes_TRANS_FADE_OUT_MODE;
    /* ROM 0x100888: CGameObjectInstanceModes / END_OF_MODES */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r313_CGameObjectInstanceModes_END_OF_MODES;
    /* ROM 0x1008A2: CGameObjectInstanceModes / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[4];
    } r314_CGameObjectInstanceModes__eos;
    /* ROM 0x1008CF: ModelTypes / ModelTypes */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r315_ModelTypes_ModelTypes;
    /* ROM 0x1008E7: ModelTypes / NORMAL_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r316_ModelTypes_NORMAL_MODEL_TYPE;
    /* ROM 0x100906: ModelTypes / EXTREME1_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r317_ModelTypes_EXTREME1_MODEL_TYPE;
    /* ROM 0x100927: ModelTypes / EXTREME2_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r318_ModelTypes_EXTREME2_MODEL_TYPE;
    /* ROM 0x100948: ModelTypes / EXTREME3_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r319_ModelTypes_EXTREME3_MODEL_TYPE;
    /* ROM 0x100969: ModelTypes / EXTREME4_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r320_ModelTypes_EXTREME4_MODEL_TYPE;
    /* ROM 0x10098A: ModelTypes / EXTREME5_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r321_ModelTypes_EXTREME5_MODEL_TYPE;
    /* ROM 0x1009AB: ModelTypes / EXTREME6_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r322_ModelTypes_EXTREME6_MODEL_TYPE;
    /* ROM 0x1009CC: ModelTypes / EXTREME7_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r323_ModelTypes_EXTREME7_MODEL_TYPE;
    /* ROM 0x1009ED: ModelTypes / EXTREME8_MODEL_TYPE */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r324_ModelTypes_EXTREME8_MODEL_TYPE;
    /* ROM 0x100A0E: ModelTypes / MODEL_TYPES */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r325_ModelTypes_MODEL_TYPES;
    /* ROM 0x100A27: ModelTypes / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r326_ModelTypes__eos;
    /* ROM 0x100A46: CROMObjectInstance_t / CROMObjectInstance_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r327_CROMObjectInstance_t_CROMObjectInstance_t;
    /* ROM 0x100A68: CROMObjectInstance_t / m_VisBits */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r328_CROMObjectInstance_t_m_VisBits;
    /* ROM 0x100A8C: CROMObjectInstance_t / m_vPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r329_CROMObjectInstance_t_m_vPos;
    /* ROM 0x100AAD: CROMObjectInstance_t / m_vScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r330_CROMObjectInstance_t_m_vScale;
    /* ROM 0x100AD0: CROMObjectInstance_t / m_nObjType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r331_CROMObjectInstance_t_m_nObjType;
    /* ROM 0x100AE8: CROMObjectInstance_t / m_nTypeFlag */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r332_CROMObjectInstance_t_m_nTypeFlag;
    /* ROM 0x100B01: CROMObjectInstance_t / m_nCurrentRegion */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r333_CROMObjectInstance_t_m_nCurrentRegion;
    /* ROM 0x100B1F: CROMObjectInstance_t / m_nVariation */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r334_CROMObjectInstance_t_m_nVariation;
    /* ROM 0x100B39: CROMObjectInstance_t / m_RotY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r335_CROMObjectInstance_t_m_RotY;
    /* ROM 0x100B4D: CROMObjectInstance_t / m_bFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r336_CROMObjectInstance_t_m_bFlags;
    /* ROM 0x100B63: CROMObjectInstance_t / m_nPath */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r337_CROMObjectInstance_t_m_nPath;
    /* ROM 0x100B78: CROMObjectInstance_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[4];
    } r338_CROMObjectInstance_t__eos;
    /* ROM 0x100BA1: CROMObjectInstance_t / CROMObjectInstance */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[18];
    } r339_CROMObjectInstance_t_CROMObjectInstance;
    /* ROM 0x100BD8: CGameObjectInstance_t / CGameObjectInstance_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r340_CGameObjectInstance_t_CGameObjectInstance_t;
    /* ROM 0x100BFB: CGameObjectInstance_t / ah */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[18];
        unsigned char name_length;
        char name[2];
    } r341_CGameObjectInstance_t_ah;
    /* ROM 0x100C20: CGameObjectInstance_t / m_vScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r342_CGameObjectInstance_t_m_vScale;
    /* ROM 0x100C43: CGameObjectInstance_t / m_qGround */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r343_CGameObjectInstance_t_m_qGround;
    /* ROM 0x100C67: CGameObjectInstance_t / m_RotY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r344_CGameObjectInstance_t_m_RotY;
    /* ROM 0x100C7B: CGameObjectInstance_t / m_CollisionYOffset */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r345_CGameObjectInstance_t_m_CollisionYOffset;
    /* ROM 0x100C9B: CGameObjectInstance_t / m_mfOrient */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[2];
        unsigned char tag_length;
        unsigned char name_length;
        char name[10];
    } r346_CGameObjectInstance_t_m_mfOrient;
    /* ROM 0x100CBE: CGameObjectInstance_t / m_pmtDrawMtxs */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[13];
    } r347_CGameObjectInstance_t_m_pmtDrawMtxs;
    /* ROM 0x100CE3: CGameObjectInstance_t / m_pmtLastFrameDrawMtxs */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[22];
    } r348_CGameObjectInstance_t_m_pmtLastFrameDrawMtxs;
    /* ROM 0x100D11: CGameObjectInstance_t / m_pmfShadow */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[2];
        unsigned char tag_length;
        unsigned char name_length;
        char name[11];
    } r349_CGameObjectInstance_t_m_pmfShadow;
    /* ROM 0x100D35: CGameObjectInstance_t / m_pDList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[8];
    } r350_CGameObjectInstance_t_m_pDList;
    /* ROM 0x100D55: CGameObjectInstance_t / m_rpObjectInfo */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r351_CGameObjectInstance_t_m_rpObjectInfo;
    /* ROM 0x100D71: CGameObjectInstance_t / m_rpAnims */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r352_CGameObjectInstance_t_m_rpAnims;
    /* ROM 0x100D88: CGameObjectInstance_t / m_rpModelsIndex */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r353_CGameObjectInstance_t_m_rpModelsIndex;
    /* ROM 0x100DA5: CGameObjectInstance_t / m_ObjectInfoSize */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r354_CGameObjectInstance_t_m_ObjectInfoSize;
    /* ROM 0x100DC3: CGameObjectInstance_t / m_ModelsIndexSize */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r355_CGameObjectInstance_t_m_ModelsIndexSize;
    /* ROM 0x100DE2: CGameObjectInstance_t / m_nCurrentModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r356_CGameObjectInstance_t_m_nCurrentModel;
    /* ROM 0x100DFF: CGameObjectInstance_t / m_rpModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r357_CGameObjectInstance_t_m_rpModel;
    /* ROM 0x100E16: CGameObjectInstance_t / m_ModelSize */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r358_CGameObjectInstance_t_m_ModelSize;
    /* ROM 0x100E2F: CGameObjectInstance_t / m_nTypeFlag */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r359_CGameObjectInstance_t_m_nTypeFlag;
    /* ROM 0x100E48: CGameObjectInstance_t / m_nAnims */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r360_CGameObjectInstance_t_m_nAnims;
    /* ROM 0x100E5E: CGameObjectInstance_t / m_nModels */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r361_CGameObjectInstance_t_m_nModels;
    /* ROM 0x100E75: CGameObjectInstance_t / m_Bounds */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[8];
    } r362_CGameObjectInstance_t_m_Bounds;
    /* ROM 0x100E9A: CGameObjectInstance_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r363_CGameObjectInstance_t_m_dwFlags;
    /* ROM 0x100EB1: CGameObjectInstance_t / m_asCurrent */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[11];
    } r364_CGameObjectInstance_t_m_asCurrent;
    /* ROM 0x100EE0: CGameObjectInstance_t / m_asBlend */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[9];
    } r365_CGameObjectInstance_t_m_asBlend;
    /* ROM 0x100F0D: CGameObjectInstance_t / m_BlendLength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r366_CGameObjectInstance_t_m_BlendLength;
    /* ROM 0x100F28: CGameObjectInstance_t / m_uBlender */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r367_CGameObjectInstance_t_m_uBlender;
    /* ROM 0x100F40: CGameObjectInstance_t / m_BlendPos */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r368_CGameObjectInstance_t_m_BlendPos;
    /* ROM 0x100F58: CGameObjectInstance_t / m_BlendStart */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r369_CGameObjectInstance_t_m_BlendStart;
    /* ROM 0x100F72: CGameObjectInstance_t / m_BlendFinish */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r370_CGameObjectInstance_t_m_BlendFinish;
    /* ROM 0x100F8D: CGameObjectInstance_t / m_ShadowAlpha */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r371_CGameObjectInstance_t_m_ShadowAlpha;
    /* ROM 0x100FA8: CGameObjectInstance_t / m_ActiveSwooshes */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r372_CGameObjectInstance_t_m_ActiveSwooshes;
    /* ROM 0x100FC6: CGameObjectInstance_t / m_Lights */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[8];
    } r373_CGameObjectInstance_t_m_Lights;
    /* ROM 0x100FEA: CGameObjectInstance_t / m_AI */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[5];
        unsigned char name_length;
    } r374_CGameObjectInstance_t_m_AI;
} Sn64RuntimeTypeRecords;

const Sn64RuntimeTypeRecords sn64_runtime_type_records = {
    { { SN64_VALUE_TAIL24(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(1584U) }, 12, "CDefragger_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(560U) }, SN64_LE16(0), 10, "OSThread_s", 6, "Thread" },
    { { SN64_LE32(560U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(1024U) }, SN64_LE16(1), { SN64_LE32(128U) }, 0, 5, "Stack" },
    { { SN64_LE32(1584U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(1584U) }, SN64_LE16(0), 12, "CDefragger_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(1584U) }, SN64_LE16(0), 12, "CDefragger_t", 10, "CDefragger" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 14, "CTextureInfo_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 10, "m_nBitmaps" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 11, "m_nPalettes" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 19, "CROMTextureFormat_t", 9, "m_pFormat" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 14, "CTextureInfo_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 14, "CTextureInfo_t", 12, "CTextureInfo" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 16, "CTextureLoader_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 12, "rpTextureSet" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 14, "TextureSetSize" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 16, "CTextureLoader_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 16, "CTextureLoader_t", 14, "CTextureLoader" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 33, "PARTICLE_IMPACTS_GRASS_OR_WOODequ" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 30, "PARTICLE_IMPACTS_GRASS_OR_WOOD" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 33, "PARTICLE_IMPACTS_GRASS_OR_WOODequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 32, "PARTICLE_IMPACTS_WATERSURFACEequ" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 29, "PARTICLE_IMPACTS_WATERSURFACE" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 32, "PARTICLE_IMPACTS_WATERSURFACEequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 25, "PARTICLE_IMPACTS_STEELequ" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 22, "PARTICLE_IMPACTS_STEEL" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 25, "PARTICLE_IMPACTS_STEELequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 25, "PARTICLE_IMPACTS_STONEequ" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 22, "PARTICLE_IMPACTS_STONE" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 25, "PARTICLE_IMPACTS_STONEequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 25, "PARTICLE_IMPACTS_FLESHequ" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 22, "PARTICLE_IMPACTS_FLESH" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 25, "PARTICLE_IMPACTS_FLESHequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 30, "PARTICLE_IMPACTS_ALIENFLESHequ" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 27, "PARTICLE_IMPACTS_ALIENFLESH" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 30, "PARTICLE_IMPACTS_ALIENFLESHequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 30, "PARTICLE_IMPACTS_FLESHWATERequ" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 27, "PARTICLE_IMPACTS_FLESHWATER" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 30, "PARTICLE_IMPACTS_FLESHWATERequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 24, "PARTICLE_IMPACTS_LAVAequ" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 21, "PARTICLE_IMPACTS_LAVA" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 24, "PARTICLE_IMPACTS_LAVAequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 25, "PARTICLE_IMPACTS_SWAMPequ" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 22, "PARTICLE_IMPACTS_SWAMP" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 25, "PARTICLE_IMPACTS_SWAMPequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 30, "PARTICLE_IMPACTS_FORCEFIELDequ" },
    { { SN64_LE32(9U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 27, "PARTICLE_IMPACTS_FORCEFIELD" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 30, "PARTICLE_IMPACTS_FORCEFIELDequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 27, "PARTICLE_IMPACTS_ENDLIFEequ" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 24, "PARTICLE_IMPACTS_ENDLIFE" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 27, "PARTICLE_IMPACTS_ENDLIFEequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 30, "PARTICLE_IMPACTS_EVERYFRAMEequ" },
    { { SN64_LE32(11U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 27, "PARTICLE_IMPACTS_EVERYFRAME" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 30, "PARTICLE_IMPACTS_EVERYFRAMEequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 32, "PARTICLE_IMPACTS_ENDLIFEWATERequ" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 29, "PARTICLE_IMPACTS_ENDLIFEWATER" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 32, "PARTICLE_IMPACTS_ENDLIFEWATERequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 35, "PARTICLE_IMPACTS_EVERYFRAMEWATERequ" },
    { { SN64_LE32(13U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 32, "PARTICLE_IMPACTS_EVERYFRAMEWATER" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 35, "PARTICLE_IMPACTS_EVERYFRAMEWATERequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 23, "PARTICLE_IMPACTS_AMTequ" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 20, "PARTICLE_IMPACTS_AMT" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 23, "PARTICLE_IMPACTS_AMTequ", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x000D), SN64_LE32(0U) }, 2, "SF" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(24U) }, 13, "CROMSection_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 13, "m_nTextureSet" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 12, "m_dwMatFlags" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_nMaterial" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 10, "m_NodeType" },
    { { SN64_LE32(11U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(1U) }, SN64_LE16(1), { SN64_LE32(1U) }, 0, 3, "pad" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 7, "m_Color" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 12, "m_BlackColor" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 7, "m_MultU" },
    { { SN64_LE32(22U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 7, "m_MultV" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(24U) }, SN64_LE16(0), 13, "CROMSection_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 13, "CROMSection_t", 11, "CROMSection" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(28U) }, 14, "CGameSection_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 12, "m_dwMatFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_nMaterial" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 10, "m_NodeType" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 18, "m_LastTextureFrame" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 16, "CTextureLoader_t", 15, "m_TextureLoader" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 7, "m_Color" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 12, "m_BlackColor" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 7, "m_MultU" },
    { { SN64_LE32(26U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 7, "m_MultV" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(28U) }, SN64_LE16(0), 14, "CGameSection_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(28U) }, SN64_LE16(0), 14, "CGameSection_t", 12, "CGameSection" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(6U) }, 19, "CROMTextureFormat_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 8, "m_Format" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 15, "m_PlaybackSpeed" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 12, "m_WidthShift" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 13, "m_HeightShift" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 8, "m_Effect" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 12, "m_EffectMode" },
    { { SN64_LE32(6U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(6U) }, SN64_LE16(0), 19, "CROMTextureFormat_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(6U) }, SN64_LE16(0), 19, "CROMTextureFormat_t", 17, "CROMTextureFormat" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 11, "CROMLevel_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_GridDistance" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 12, "m_BlackColor" },
    { { SN64_LE32(7U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 12, "m_WhiteColor" },
    { { SN64_LE32(10U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 18, "m_DirectionalLight" },
    { { SN64_LE32(13U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 14, "m_AmbientLight" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 8, "m_bFlags" },
    { { SN64_LE32(17U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0032), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 11, "m_Direction" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 11, "CROMLevel_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 11, "CROMLevel_t", 9, "CROMLevel" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 15, "CRandomSFPair_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 1, "v" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 1, "r" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 13, "CRandomSFPair" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(2U) }, 15, "CRandomS8Pair_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 1, "v" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 1, "r" },
    { { SN64_LE32(2U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(2U) }, SN64_LE16(0), 15, "CRandomS8Pair_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(2U) }, SN64_LE16(0), 15, "CRandomS8Pair_t", 13, "CRandomS8Pair" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(196U) }, 20, "CROMParticleImpact_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0038), SN64_LE32(112U) }, SN64_LE16(1), { SN64_LE32(14U) }, 13, "s_CEventValue", 18, "m_ImpactEventValue" },
    { { SN64_LE32(112U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003D), SN64_LE32(28U) }, SN64_LE16(1), { SN64_LE32(14U) }, 0, 20, "m_ImpactParticleType" },
    { { SN64_LE32(140U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003D), SN64_LE32(28U) }, SN64_LE16(1), { SN64_LE32(14U) }, 0, 17, "m_ImpactEventType" },
    { { SN64_LE32(168U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003D), SN64_LE32(28U) }, SN64_LE16(1), { SN64_LE32(14U) }, 0, 17, "m_ImpactSoundType" },
    { { SN64_LE32(196U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(196U) }, SN64_LE16(0), 20, "CROMParticleImpact_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(196U) }, SN64_LE16(0), 20, "CROMParticleImpact_t", 18, "CROMParticleImpact" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 20, "CROMParticleOffset_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_XPosOffset" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_YPosOffset" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_ZPosOffset" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 20, "CROMParticleOffset_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 20, "CROMParticleOffset_t", 18, "CROMParticleOffset" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(24U) }, 17, "CROMParticleRot_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 6, "m_XRot" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 9, "m_XRotInc" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 6, "m_YRot" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 9, "m_YRotInc" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 6, "m_ZRot" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 9, "m_ZRotInc" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(24U) }, SN64_LE16(0), 17, "CROMParticleRot_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 17, "CROMParticleRot_t", 15, "CROMParticleRot" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(36U) }, 19, "CROMParticleScale_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 8, "m_XScale" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 11, "m_XScaleInc" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 8, "m_YScale" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 11, "m_YScaleInc" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 8, "m_ZScale" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 11, "m_ZScaleInc" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_ShadowScale" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_NearScale" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_FarScale" },
    { { SN64_LE32(36U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(36U) }, SN64_LE16(0), 19, "CROMParticleScale_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(36U) }, SN64_LE16(0), 19, "CROMParticleScale_t", 17, "CROMParticleScale" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 17, "CROMParticleDir_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_XDirection" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_YDirection" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_ZDirection" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 17, "CROMParticleDir_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 17, "CROMParticleDir_t", 15, "CROMParticleDir" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(26U) }, 22, "CROMParticleSineWave_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_XAmplitude" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_XFrequency" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 8, "m_XPhase" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_YAmplitude" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 12, "m_YFrequency" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 8, "m_YPhase" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 17, "m_nSineWaveFadeIn" },
    { { SN64_LE32(26U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(26U) }, SN64_LE16(0), 22, "CROMParticleSineWave_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(26U) }, SN64_LE16(0), 22, "CROMParticleSineWave_t", 20, "CROMParticleSineWave" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(22U) }, 21, "CROMParticlePhysics_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 9, "m_Gravity" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CRandomSFPair_t", 10, "m_Velocity" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 14, "m_BounceEnergy" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 16, "m_GroundFriction" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 13, "m_AirFriction" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 15, "m_WaterFriction" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 14, "m_Acceleration" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 16, "m_MinMaxVelocity" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_CollRadius" },
    { { SN64_LE32(22U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(22U) }, SN64_LE16(0), 21, "CROMParticlePhysics_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(22U) }, SN64_LE16(0), 21, "CROMParticlePhysics_t", 19, "CROMParticlePhysics" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(15U) }, 19, "CROMParticleColor_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 12, "m_WhiteColor" },
    { { SN64_LE32(3U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 12, "m_BlackColor" },
    { { SN64_LE32(6U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 13, "m_WhiteColor2" },
    { { SN64_LE32(9U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 13, "m_BlackColor2" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 14, "m_RandomizeHue" },
    { { SN64_LE32(13U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 21, "m_RandomizeSaturation" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 21, "m_RandomizeBrightness" },
    { { SN64_LE32(15U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(15U) }, SN64_LE16(0), 19, "CROMParticleColor_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(15U) }, SN64_LE16(0), 19, "CROMParticleColor_t", 17, "CROMParticleColor" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 21, "CROMParticleGeneral_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 9, "m_nFrames" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_nFramesRnd" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 13, "m_Probability" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 12, "m_Visibility" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 12, "m_nParticles" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 15, "m_nParticlesRnd" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_nPriority" },
    { { SN64_LE32(9U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 9, "m_nFadeIn" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 10, "m_nFadeOut" },
    { { SN64_LE32(11U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 5, "m_FPS" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 13, "m_nInBetweens" },
    { { SN64_LE32(13U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_nMaxDelay" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_Alignment" },
    { { SN64_LE32(15U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 7, "m_Alert" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 21, "CROMParticleGeneral_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 21, "CROMParticleGeneral_t", 19, "CROMParticleGeneral" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(60U) }, 20, "CROMParticleEffect_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 13, "m_nTextureSet" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 9, "m_nSwoosh" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 15, "m_nDynamicLight" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 10, "m_Playback" },
    { { SN64_LE32(9U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 18, "m_InstanceBehavior" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 14, "m_WallBehavior" },
    { { SN64_LE32(11U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 16, "m_GroundBehavior" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 11, "m_SoundType" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 24, "m_MaxAngleChangePerFrame" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 26, "m_ProximityDetectionRadius" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 9, "m_bFlags2" },
    { { SN64_LE32(19U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(1U) }, SN64_LE16(1), { SN64_LE32(1U) }, 0, 7, "padding" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 10, "m_rpObject" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(196U) }, SN64_LE16(0), 20, "CROMParticleImpact_t", 9, "m_pImpact" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(12U) }, SN64_LE16(0), 20, "CROMParticleOffset_t", 9, "m_pOffset" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 17, "CROMParticleRot_t", 6, "m_pRot" },
    { { SN64_LE32(36U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(36U) }, SN64_LE16(0), 19, "CROMParticleScale_t", 8, "m_pScale" },
    { { SN64_LE32(40U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(12U) }, SN64_LE16(0), 17, "CROMParticleDir_t", 6, "m_pDir" },
    { { SN64_LE32(44U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(26U) }, SN64_LE16(0), 22, "CROMParticleSineWave_t", 11, "m_pSineWave" },
    { { SN64_LE32(48U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(22U) }, SN64_LE16(0), 21, "CROMParticlePhysics_t", 10, "m_pPhysics" },
    { { SN64_LE32(52U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(15U) }, SN64_LE16(0), 19, "CROMParticleColor_t", 8, "m_pColor" },
    { { SN64_LE32(56U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(16U) }, SN64_LE16(0), 21, "CROMParticleGeneral_t", 10, "m_pGeneral" },
    { { SN64_LE32(60U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(60U) }, SN64_LE16(0), 20, "CROMParticleEffect_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(60U) }, SN64_LE16(0), 20, "CROMParticleEffect_t", 18, "CROMParticleEffect" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 15, "CROMWarpPoint_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 6, "m_vPos" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_RotY" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 8, "m_nLevel" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 9, "m_nRegion" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 15, "CROMWarpPoint_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 15, "CROMWarpPoint_t", 13, "CROMWarpPoint" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(112U) }, 10, "CROMNode_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0038), SN64_LE32(96U) }, SN64_LE16(1), { SN64_LE32(8U) }, 10, "CVector3_t", 14, "vBoundsCorners" },
    { { SN64_LE32(96U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_MaxBounds" },
    { { SN64_LE32(100U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 13, "m_ParentIndex" },
    { { SN64_LE32(101U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 8, "m_Symbol" },
    { { SN64_LE32(102U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 14, "m_MaterialType" },
    { { SN64_LE32(103U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(1U) }, SN64_LE16(1), { SN64_LE32(1U) }, 0, 3, "pad" },
    { { SN64_LE32(104U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_DamageScaler" },
    { { SN64_LE32(108U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 14, "m_dwModelFlags" },
    { { SN64_LE32(112U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(112U) }, SN64_LE16(0), 10, "CROMNode_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(112U) }, SN64_LE16(0), 10, "CROMNode_t", 8, "CROMNode" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(32U) }, 16, "CROMObjectInfo_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 12, "CROMBounds_t", 8, "m_Bounds" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 20, "m_HeadTrackStartNode" },
    { { SN64_LE32(25U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 18, "m_HeadTrackEndNode" },
    { { SN64_LE32(26U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 17, "m_HeadTrackFactor" },
    { { SN64_LE32(27U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 4, "pad0" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_nVariation" },
    { { SN64_LE32(30U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_UnitScale" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(32U) }, SN64_LE16(0), 16, "CROMObjectInfo_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(32U) }, SN64_LE16(0), 16, "CROMObjectInfo_t", 14, "CROMObjectInfo" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 7, "CNode_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(8U) }, SN64_LE16(0), 7, "CNode_t", 7, "m_pPrev" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(8U) }, SN64_LE16(0), 7, "CNode_t", 7, "m_pNext" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 7, "CNode_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 7, "CNode_t", 5, "CNode" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 11, "CNodeList_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(8U) }, SN64_LE16(0), 7, "CNode_t", 7, "m_pHead" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(8U) }, SN64_LE16(0), 7, "CNode_t", 7, "m_pTail" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 8, "m_Length" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 11, "CNodeList_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 11, "CNodeList_t", 9, "CNodeList" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(24U) }, 14, "CDynamicList_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 11, "CNodeList_t", 10, "m_FreeList" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 11, "CNodeList_t", 12, "m_ActiveList" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(24U) }, SN64_LE16(0), 14, "CDynamicList_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 14, "CDynamicList_t", 12, "CDynamicList" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 12, "CSelection_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 8, "m_Number" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 8, "m_Weight" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 12, "CSelection_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 12, "CSelection_t", 10, "CSelection" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(102U) }, 16, "CSelectionList_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 9, "m_Entries" },
    { { SN64_LE32(2U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0038), SN64_LE32(100U) }, SN64_LE16(1), { SN64_LE32(25U) }, 12, "CSelection_t", 6, "m_List" },
    { { SN64_LE32(102U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(102U) }, SN64_LE16(0), 16, "CSelectionList_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(102U) }, SN64_LE16(0), 16, "CSelectionList_t", 14, "CSelectionList" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 19, "CGameAnimateState_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "cFrame" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 5, "nAnim" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "nDesiredAnim" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 7, "nFrames" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 14, "CycleCompleted" },
    { { SN64_LE32(11U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 6, "Active" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 6, "LoopTo" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 11, "pmeAnimData" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 19, "CGameAnimateState_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 19, "CGameAnimateState_t", 17, "CGameAnimateState" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 19, "CGameAnimateState_t", 4, "CGAS" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 24, "CROMInitialOrientation_t", 9, "CRIOrient" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CROMNodeIndex_t", 8, "CRNIndex" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(36U) }, 10, "AnimInfo_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(4U) }, SN64_LE16(0), 15, "CROMNodeIndex_t", 15, "NodeAnimIndices" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(20U) }, SN64_LE16(0), 24, "CROMInitialOrientation_t", 14, "InitialOrients" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(8U) }, SN64_LE16(0), 6, "s_ISet", 11, "isTransSets" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(8U) }, SN64_LE16(0), 6, "s_ISet", 9, "isRotSets" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 9, "RotIndex1" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 9, "RotIndex2" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 11, "TransIndex1" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 11, "TransIndex2" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 5, "Blend" },
    { { SN64_LE32(36U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(36U) }, SN64_LE16(0), 10, "AnimInfo_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(36U) }, SN64_LE16(0), 10, "AnimInfo_t", 8, "AnimInfo" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 24, "CGameObjectInstanceModes" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 9, "IDLE_MODE" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "TRANS_FADE_OUT_MODE" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 12, "END_OF_MODES" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 24, "CGameObjectInstanceModes", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 10, "ModelTypes" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 17, "NORMAL_MODEL_TYPE" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME1_MODEL_TYPE" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME2_MODEL_TYPE" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME3_MODEL_TYPE" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME4_MODEL_TYPE" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME5_MODEL_TYPE" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME6_MODEL_TYPE" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME7_MODEL_TYPE" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "EXTREME8_MODEL_TYPE" },
    { { SN64_LE32(9U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 11, "MODEL_TYPES" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 10, "ModelTypes", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(40U) }, 20, "CROMObjectInstance_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CVisBits_t", 9, "m_VisBits" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 6, "m_vPos" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 8, "m_vScale" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 10, "m_nObjType" },
    { { SN64_LE32(30U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_nTypeFlag" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 16, "m_nCurrentRegion" },
    { { SN64_LE32(34U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_nVariation" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 6, "m_RotY" },
    { { SN64_LE32(38U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 8, "m_bFlags" },
    { { SN64_LE32(39U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 7, "m_nPath" },
    { { SN64_LE32(40U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(40U) }, SN64_LE16(0), 20, "CROMObjectInstance_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(40U) }, SN64_LE16(0), 20, "CROMObjectInstance_t", 18, "CROMObjectInstance" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(744U) }, 21, "CGameObjectInstance_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(80U) }, SN64_LE16(0), 18, "CAnimInstanceHdr_t", 2, "ah" },
    { { SN64_LE32(80U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 8, "m_vScale" },
    { { SN64_LE32(92U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 10, "CQuatern_t", 9, "m_qGround" },
    { { SN64_LE32(108U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_RotY" },
    { { SN64_LE32(112U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 18, "m_CollisionYOffset" },
    { { SN64_LE32(116U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x00F6), SN64_LE32(64U) }, SN64_LE16(2), { SN64_LE32(4U), SN64_LE32(4U) }, 0, 10, "m_mfOrient" },
    { { SN64_LE32(180U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0019), SN64_LE32(64U) }, SN64_LE16(0), 7, ".26fake", 13, "m_pmtDrawMtxs" },
    { { SN64_LE32(184U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0019), SN64_LE32(64U) }, SN64_LE16(0), 7, ".26fake", 22, "m_pmtLastFrameDrawMtxs" },
    { { SN64_LE32(188U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x03D6), SN64_LE32(4U) }, SN64_LE16(2), { SN64_LE32(4U), SN64_LE32(4U) }, 0, 11, "m_pmfShadow" },
    { { SN64_LE32(192U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0019), SN64_LE32(8U) }, SN64_LE16(0), 7, ".63fake", 8, "m_pDList" },
    { { SN64_LE32(196U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 14, "m_rpObjectInfo" },
    { { SN64_LE32(200U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 9, "m_rpAnims" },
    { { SN64_LE32(204U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 15, "m_rpModelsIndex" },
    { { SN64_LE32(208U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 16, "m_ObjectInfoSize" },
    { { SN64_LE32(212U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 17, "m_ModelsIndexSize" },
    { { SN64_LE32(216U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 15, "m_nCurrentModel" },
    { { SN64_LE32(220U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 9, "m_rpModel" },
    { { SN64_LE32(224U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 11, "m_ModelSize" },
    { { SN64_LE32(228U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_nTypeFlag" },
    { { SN64_LE32(230U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 8, "m_nAnims" },
    { { SN64_LE32(231U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 9, "m_nModels" },
    { { SN64_LE32(232U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 12, "CROMBounds_t", 8, "m_Bounds" },
    { { SN64_LE32(256U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(260U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 19, "CGameAnimateState_t", 11, "m_asCurrent" },
    { { SN64_LE32(280U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 19, "CGameAnimateState_t", 9, "m_asBlend" },
    { { SN64_LE32(300U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 13, "m_BlendLength" },
    { { SN64_LE32(304U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_uBlender" },
    { { SN64_LE32(308U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_BlendPos" },
    { { SN64_LE32(312U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 12, "m_BlendStart" },
    { { SN64_LE32(313U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 13, "m_BlendFinish" },
    { { SN64_LE32(314U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 13, "m_ShadowAlpha" },
    { { SN64_LE32(315U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 16, "m_ActiveSwooshes" },
    { { SN64_LE32(320U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0038), SN64_LE32(48U) }, SN64_LE16(1), { SN64_LE32(2U) }, 7, ".36fake", 8, "m_Lights" },
    { { SN64_LE32(368U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(368U) }, SN64_LE16(0), 5, "CAI_t", 4 },
};
typedef char sn64_runtime_type_records_size_check[(sizeof(Sn64RuntimeTypeRecords) == 12792) ? 1 : -1];
#endif
