#include "span_1000/code_8026D4F0.h"
#include "span_1000/code_802953FC.h"
#include "span_1000/code_802A26F8.h"
#include "span_1000/code_802A776C.h"
#include "span_1000/code_802AB720.h"
#include "span_C76B0/data.h"
#include "types.h"

extern int func_802A23B4_de(void);






extern void func_802AAB3C_de(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern void func_802A9234_de(s32);
extern void func_802A7660_de(void *arg0, int arg1);

extern u8 D_8014221E;




void func_802AA7A4_de(void *arg0) {
    char pad[256];
    (void)pad;

    if (func_802A23B4_de() == 1) {
        func_802A2090_de();
        func_8026D8F8_de();
        func_80295FF4_de();
    }
    func_802A84F8_de();
    func_802A8710_de();
    func_802AAB68_de(D_800C61F0_de, D_800C61F0_de);
    func_802AAB3C_de(0xFF, 0xFF, 0xFF, 0xC8, 0xC8, 0xC8);
    func_802A9234_de(D_8014221E);
    if (((func_802AB794_S1 *)(arg0))->unk40 != 0) {
        func_802A7660_de(arg0, 1);
    }
    if (((func_802AB794_S1 *)(arg0))->unk88 != 0) {
        func_802A7660_de(arg0, 2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C6120_4 = 0.699999988f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB380_4 = 0.699999988f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6490_4 = 0.699999988f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C64D0_4 = 0.699999988f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C61F0_4 = 0.699999988f;
#endif
