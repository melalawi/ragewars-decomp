#include "basetypes.h"

typedef struct { s32 unk0; } func_802331EC_G1;
extern func_802331EC_G1 D_801450B8;
extern void *D_800D052C[];
extern f32 D_800C8138[2];

extern void func_802227D0(void *, void *, s32);
extern void func_8021A9A4(void *arg0, s32 arg1);
extern s32 func_80214178(void *, void *, s32);
extern void func_8022AE90(void *arg0, s32 arg1);
extern void func_8022AF64(void *arg0, s32 arg1);

typedef struct func_802331EC_S1 func_802331EC_S1;
typedef struct func_802331EC_S2 func_802331EC_S2;
typedef struct func_802331EC_S3 func_802331EC_S3;
typedef struct func_802331EC_S4 func_802331EC_S4;
typedef struct func_802331EC_S5 func_802331EC_S5;
struct func_802331EC_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_802331EC_S2 {
    char pad0[0x64];
    f32 unk64;
    char pad64[0x130 - 0x64 - sizeof(f32)];
    f32 unk130;
    char pad130[0x13C - 0x130 - sizeof(f32)];
    s32 unk13C;
};
struct func_802331EC_S3 {
    char pad0[0x1450];
    s32 unk1450;
};
struct func_802331EC_S4 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x11C0 - 0x62E - sizeof(s16)];
    volatile s32 unk11C0;
};
struct func_802331EC_S5 {
    char pad0[0x18];
    f32 unk18;
};

void func_802331EC(void *arg0, void *arg1) {
    void *temp_s0;
    void *temp_a0;
    s16 index;

    temp_s0 = ((func_802331EC_S1 *)(arg0))->unk1D8;
    if (((func_802331EC_S2 *)(arg1))->unk13C == 2) {
        func_802227D0(temp_s0, temp_s0, 2);
    } else {
        ((func_802331EC_S2 *)(arg1))->unk64 = D_800C8138[0];
        if ((((func_802331EC_S3 *)(temp_s0))->unk1450 == 0) &&
            (D_801450B8.unk0 == 1)) {
            func_8021A9A4(((func_802331EC_S1 *)(arg0))->unk1D8, 0x3FB);
        } else {
            func_8021A9A4(((func_802331EC_S1 *)(arg0))->unk1D8, 0x4CD);
        }
        func_80214178(arg0, arg1, 4);
        func_8022AE90(temp_s0, 0x977);
        func_8022AF64(temp_s0, 0x974);

        temp_a0 = ((func_802331EC_S1 *)(arg0))->unk1D8;
        index = ((func_802331EC_S4 *)(temp_a0))->unk62E;
        ((func_802331EC_S2 *)(arg1))->unk130 =
            ((func_802331EC_S5 *)(D_800D052C[index]))->unk18 *
            D_800C8138[1];
        if ((((func_802331EC_S4 *)(temp_a0))->unk62E == 8) &&
            (((func_802331EC_S4 *)(temp_a0))->unk11C0 == 0)) {
            func_8022AF64(temp_a0, 0xA3C);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F78_4 = 2.5f;
const float unbake_rodata_800C2F7C_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8138_4 = 2.5f;
const float unbake_rodata_800C813C_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32F8_4 = 2.5f;
const float unbake_rodata_800C32FC_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3338_4 = 2.5f;
const float unbake_rodata_800C333C_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3048_4 = 2.5f;
const float unbake_rodata_800C304C_4 = 15.0f;
#endif
