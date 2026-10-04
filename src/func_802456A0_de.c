#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
#include "types.h"

extern int func_80245784_de(void);
extern void func_80245B74_de(s32 arg0);
extern void func_80245BC0_de(void);
extern void func_80253838_de(void *, void *);
extern void *D_800DE7E0;




void func_802456A0_de(void) {
    if (func_80245784_de() != 0) {
        s32 temp_a1;
        void *record;

        func_80245B74_de(1);
        func_80245BC0_de();
        temp_a1 = *(s32 *)D_800DE7E0;
        if (temp_a1 != 0) {
            func_80253838_de(0, temp_a1);
        }
        record = D_800DE7E0;
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
