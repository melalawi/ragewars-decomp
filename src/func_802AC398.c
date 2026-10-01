#include "basetypes.h"

extern void func_802A94E8(void);
extern void func_802A9700(void);
extern void func_802ABB58(f32 arg0, f32 arg1);
extern void func_802ABB2C(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern f32 D_800CB3E8;

void func_802AC398(void) {
    char pad[256];
    (void)pad;
    func_802A94E8();
    func_802A9700();
    func_802ABB58(D_800CB3E8, D_800CB3E8);
    func_802ABB2C(0xFF, 0xFF, 0xFF, 0xC8, 0xC8, 0xC8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C6188_4 = 0.699999988f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB3E8_4 = 0.699999988f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C64F8_4 = 0.699999988f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6538_4 = 0.699999988f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C6258_4 = 0.699999988f;
#endif
