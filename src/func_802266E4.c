#include "basetypes.h"

typedef struct {
    s32 value;
    u8 pad[0x18C];
} Entry190;

typedef struct { s32 unk0; } func_802266E4_G1;
extern func_802266E4_G1 D_801468F4;
typedef struct { s32 unk0; } func_802266E4_G2;
extern func_802266E4_G2 D_80146938;
typedef struct { u8 unk0; } func_802266E4_G3;
extern func_802266E4_G3 D_801462D5;
extern char D_8011FE80;
extern char D_8011FE88;
extern char D_8011FE94;
extern Entry190 D_80102B10[];
extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);

typedef struct func_802266E4_S1 func_802266E4_S1;
typedef struct func_802266E4_S2 func_802266E4_S2;
typedef struct func_802266E4_S3 func_802266E4_S3;
struct func_802266E4_S1 {
    char pad0[0x3];
    s8 unk3;
    char pad3[0x18 - 0x3 - sizeof(s8)];
    void* unk18;
    char pad18[0x50 - 0x18 - sizeof(void*)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x174 - 0x58 - sizeof(f32)];
    s32 unk174;
    char pad174[0x5D4 - 0x174 - sizeof(s32)];
    s32 unk5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char* unk5D8;
    char pad5D8[0x5E0 - 0x5D8 - sizeof(char*)];
    s32 unk5E0;
    char pad5E0[0x5E4 - 0x5E0 - sizeof(s32)];
    s32 unk5E4;
    char pad5E4[0x1450 - 0x5E4 - sizeof(s32)];
    s32 unk1450;
};
struct func_802266E4_S2 {
    char pad0[0xFC];
    f32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(f32)];
    f32 unk100;
    char pad100[0x104 - 0x100 - sizeof(f32)];
    f32 unk104;
};
struct func_802266E4_S3 {
    char pad0[0x18];
    s32 unk18;
};

void func_802266E4(void *arg0) {
    char *o = (char *)arg0;
    s32 resource_type;
    void *result;
    s32 value;
    s8 type;

    resource_type = ((func_802266E4_S1 *)(o))->unk5E0;
    if (D_801468F4.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x8F) == 1) {
        resource_type = 0x13;
    }
    result = func_8028CF7C(&D_8011FE80 + 8, 0xB, resource_type);
    if (result != 0) {
        ((func_802266E4_S1 *)(o))->unk18 = result;
    } else {
        result = func_8028CF7C(&D_8011FE88, 0xB, -1);
        if (result != 0) {
            ((func_802266E4_S1 *)(o))->unk18 = result;
        } else {
            result = func_8028CF7C(&D_8011FE94 - 12, -1, -1);
            ((func_802266E4_S1 *)(o))->unk18 = result;
        }
    }
    ((func_802266E4_S1 *)(o))->unk50 = ((func_802266E4_S2 *)(result))->unkFC;
    ((func_802266E4_S1 *)(o))->unk54 = ((func_802266E4_S2 *)(result))->unk100;
    ((func_802266E4_S1 *)(o))->unk58 = ((func_802266E4_S2 *)(result))->unk104;

    if (D_801468F4.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x8F) != 0) {
        ((func_802266E4_S1 *)(o))->unk5E4 = 0xA00;
        ((func_802266E4_S1 *)(o))->unk174 = 0xA00;
        return;
    }

    if (D_80146938.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x94) != 0) {
        type = *(s8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x80);
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
        }
    } else {
        value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
    }
    if (D_801462D5.unk0 == 1 && ((func_802266E4_S1 *)(o))->unk1450 == 0) {
        value += D_80102B10[((func_802266E4_S1 *)(o))->unk5D4].value;
    }
    ((func_802266E4_S1 *)(o))->unk5E4 = value;

    if (D_80146938.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x94) != 0) {
        type = *(s8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x80);
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
        }
    } else {
        value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
    }
    if (D_801462D5.unk0 == 1 && ((func_802266E4_S1 *)(o))->unk1450 == 0) {
        value += D_80102B10[((func_802266E4_S1 *)(o))->unk5D4].value;
    }
    ((func_802266E4_S1 *)(o))->unk174 = value;
    ((func_802266E4_S1 *)(o))->unk3 = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C515C_12[] = {0x4D, 0x75, 0x6C, 0x74, 0x69, 0x20, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA31C_12[] = {0x4D, 0x75, 0x6C, 0x74, 0x69, 0x20, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C50B4_4 = 6.28318548f;
const float unbake_rodata_800C50B8_4 = 262144.0f;
const float unbake_rodata_800C50BC_4 = 262144.0f;
const unsigned int unbake_rodata_800C50C0_1C[] = {0x00280364U, 0x00280370U, 0x0028037CU, 0x002803B0U, 0x002803DCU, 0x00280358U, 0x00280350U};
const float unbake_rodata_800C50DC_4 = 0.09765625f;
const float unbake_rodata_800C50E0_4 = 2.85714293f;
const float unbake_rodata_800C50E4_4 = (-1.0f);
const float unbake_rodata_800C50E8_4 = 0.418879062f;
const float unbake_rodata_800C50EC_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4F58_4 = 16.0f;
const float unbake_rodata_800C4F5C_4 = 0.000492125982f;
const float unbake_rodata_800C4F60_4 = 1.0f;
const float unbake_rodata_800C4F64_4 = 0.000492125982f;
const float unbake_rodata_800C4F68_4 = 0.00100000005f;
const float unbake_rodata_800C4F6C_4 = 1.0f;
const float unbake_rodata_800C4F70_4 = 47.5f;
const float unbake_rodata_800C4F74_4 = 0.25f;
const float unbake_rodata_800C4F78_4 = 0.0210526325f;
const float unbake_rodata_800C4F7C_4 = 1.0f;
const float unbake_rodata_800C4F80_4 = 1.0f;
const float unbake_rodata_800C4F84_4 = 1.0f;
const float unbake_rodata_800C4F88_4 = 1.0f;
const float unbake_rodata_800C4F8C_4 = 1.57079649f;
const float unbake_rodata_800C4F90_4 = 1.0f;
const float unbake_rodata_800C4F94_4 = 3.14159298f;
const unsigned int unbake_rodata_800C4F98_2C[] = {0x0027E30CU, 0x0027E494U, 0x0027E488U, 0x0027E354U, 0x0027E488U, 0x0027E3B0U, 0x0027E42CU, 0x0027E488U, 0x0027E494U, 0x0027E494U, 0x0027E494U};
const float unbake_rodata_800C4FC4_4 = 5.11999989f;
const float unbake_rodata_800C4FC8_4 = 5.11999989f;
const float unbake_rodata_800C4FCC_4 = 1.02400005f;
const float unbake_rodata_800C4FD0_4 = 5.11999989f;
const float unbake_rodata_800C4FD4_4 = 5.11999989f;
const float unbake_rodata_800C4FD8_4 = 0.00392156886f;
const float unbake_rodata_800C4FDC_4 = 0.0341796875f;
const float unbake_rodata_800C4FE0_4 = (-1.0f);
const float unbake_rodata_800C4FE4_4 = 10.2399998f;
const float unbake_rodata_800C4FE8_4 = 10.2399998f;
const float unbake_rodata_800C4FEC_4 = 0.00787401572f;
const float unbake_rodata_800C4FF0_4 = 0.087266475f;
const float unbake_rodata_800C4FF4_4 = 18.8495579f;
const float unbake_rodata_800C4FF8_4 = 0.25f;
const float unbake_rodata_800C4FFC_4 = 43.9822998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C51F4_4 = 3.40282347e+38f;
const float unbake_rodata_800C51F8_4 = 3.14159274f;
const float unbake_rodata_800C51FC_4 = 204.799988f;
const float unbake_rodata_800C5200_4 = (-3.14159274f);
const float unbake_rodata_800C5204_4 = 10430.0596f;
#endif
