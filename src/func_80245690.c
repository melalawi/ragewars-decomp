#include "basetypes.h"

extern int func_80245774(void);
extern void func_80245B64(s32 arg0);
extern void func_80245BB0(void);
extern void func_802537D8(void *, void *);
extern void *D_800E2830;

typedef struct func_80245690_S1 func_80245690_S1;
struct func_80245690_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x38 - 0x4 - sizeof(s32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x60 - 0x3C - sizeof(s32)];
    s32 unk60;
};

void func_80245690(void) {
    if (func_80245774() != 0) {
        s32 temp_a1;
        void *record;

        func_80245B64(1);
        func_80245BB0();
        temp_a1 = *(s32 *)D_800E2830;
        if (temp_a1 != 0) {
            func_802537D8(0, temp_a1);
        }
        record = D_800E2830;
        ((func_80245690_S1 *)(record))->unk0 = 0;
        ((func_80245690_S1 *)(record))->unk4 = 0;
        ((func_80245690_S1 *)(record))->unk38 = 0;
        ((func_80245690_S1 *)(record))->unk3C = 0;
        ((func_80245690_S1 *)(record))->unk60 = 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD33C_4 = 5.0f;
const float unbake_rodata_800DD340_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800E24C0_8 = 4294967296.0;
const float unbake_rodata_800E24C8_4 = 0.0174532942f;
const float unbake_rodata_800E24CC_4 = 1.0f;
const float unbake_rodata_800E24D0_4 = 50.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED3F8_4[] = {0x20, 0x20, 0x20, 0x00};
#elif defined(VERSION_EU_X)
const double unbake_rodata_800E8470_8 = 4294967296.0;
const float unbake_rodata_800E8478_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DDAF0_3[] = {0x25, 0x64, 0x00};
const unsigned char unbake_rodata_800DDAF4_5[] = {0x25, 0x64, 0x25, 0x25, 0x00};
#endif
