#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80274870_de(f32 *, f32, f32);
extern void func_802231D4_de(s32, s32, void *);
extern void func_802233F0_de(s32 arg0, s32 arg1, void *arg2);
extern s32 func_8024E62C_de(void *arg0);
extern void func_802227F4_de(void *, void *, s32);
extern char D_800C95A0;
extern char D_800C9558_de;




void func_8022CE78_de(s32 arg0, s32 arg1) {
    func_80274870_de(arg0 + 0x72C, 0.0f, 0.25f);
    func_802231D4_de(arg0, arg1, &D_800C95A0);
    func_802233F0_de(arg0, arg1, &D_800C9558_de);
    if (((func_8022CA04_S3 *)(arg1))->unk20 <= 0.0f) {
        if (func_8024E62C_de((void *) arg1) != 0) {
            func_802227F4_de((void *) arg0, (void *) arg1, 2);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7BF8_4 = 23170.4746f;
const float unbake_rodata_800C7BFC_4 = 0.5f;
const float unbake_rodata_800C7C00_4 = 32767.0f;
const float unbake_rodata_800C7C04_4 = (-32768.0f);
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CCB80_1C[] = {0x002BE444U, 0x002BE364U, 0x002BE398U, 0x002BE454U, 0x002BE454U, 0x002BE3CCU, 0x002BE408U};
#elif defined(VERSION_EU)
const double unbake_rodata_800C64E8_8 = 4294967296.0;
const float unbake_rodata_800C64F0_4 = 1.0f;
const float unbake_rodata_800C64F4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C64A8_8 = 4294967296.0;
const float unbake_rodata_800C64B0_4 = 1.0f;
const float unbake_rodata_800C64B4_4 = 1.0f;
const float unbake_rodata_800C64B8_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C77C0_8 = 4294967296.0;
const float unbake_rodata_800C77C8_4 = 5.77622632e-06f;
#endif
