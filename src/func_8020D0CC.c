#include "basetypes.h"

extern void func_8020C5A0(void *arg0, void *node);

typedef struct func_8020D0CC_S1 func_8020D0CC_S1;
typedef struct func_8020D0CC_S2 func_8020D0CC_S2;
struct func_8020D0CC_S1 {
    char pad0[0x24];
    void* unk24;
};
struct func_8020D0CC_S2 {
    char pad0[0x10];
    void* unk10;
};

/** Find a keyed node in the object's list and pass it to func_8020C5A0. */
void func_8020D0CC(void *arg0, s32 key) {
    void *node = ((func_8020D0CC_S1 *)(arg0))->unk24;

    if (node == 0) {
        goto not_found;
    }
loop:
    if (*(s32 *)node == key) {
        goto found;
    }
    node = ((func_8020D0CC_S2 *)(node))->unk10;
    if (node != 0) {
        goto loop;
    }
not_found:
    node = 0;
found:
    func_8020C5A0(arg0, node);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C3620_18[] = {0x0023F7DCU, 0x0023F80CU, 0x0023F838U, 0x0023F860U, 0x0023F88CU, 0x0023F8C4U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8724_4 = 10.2399998f;
const float unbake_rodata_800C8728_4 = 30.7199993f;
const float unbake_rodata_800C872C_4 = 0.204799995f;
const float unbake_rodata_800C8730_4 = 1.0f;
const float unbake_rodata_800C8734_4 = 4.09600019f;
const float unbake_rodata_800C8738_4 = 1.04857612f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C36A0_4 = 1.0f;
const float unbake_rodata_800C36A4_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C361C_4 = 1.0f;
const float unbake_rodata_800C3620_4 = 2.14748365e+09f;
const float unbake_rodata_800C3624_4 = 2.0f;
const float unbake_rodata_800C3628_4 = 2.14748365e+09f;
const float unbake_rodata_800C362C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3630_4 = 2.14748365e+09f;
const float unbake_rodata_800C3634_4 = 1.0f;
const float unbake_rodata_800C3638_4 = 2.14748365e+09f;
const float unbake_rodata_800C363C_4 = 1.0f;
const float unbake_rodata_800C3640_4 = 2.14748365e+09f;
const float unbake_rodata_800C3644_4 = 2.14748365e+09f;
const float unbake_rodata_800C3648_4 = 2.0f;
const float unbake_rodata_800C364C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3650_4 = 2.0f;
const float unbake_rodata_800C3654_4 = 2.14748365e+09f;
const float unbake_rodata_800C3658_4 = 1.0f;
const float unbake_rodata_800C365C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3660_4 = 2.14748365e+09f;
const float unbake_rodata_800C3664_4 = 2.14748365e+09f;
const float unbake_rodata_800C3668_4 = 1.0f;
const float unbake_rodata_800C366C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3670_4 = 1.0f;
const float unbake_rodata_800C3674_4 = 2.14748365e+09f;
const float unbake_rodata_800C3678_4 = 2.0f;
const float unbake_rodata_800C367C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3680_4 = 2.14748365e+09f;
const float unbake_rodata_800C3684_4 = 1.0f;
const float unbake_rodata_800C3688_4 = 2.14748365e+09f;
const float unbake_rodata_800C368C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3690_4 = 2.14748365e+09f;
const float unbake_rodata_800C3694_4 = 2.14748365e+09f;
const float unbake_rodata_800C3698_4 = 1.0f;
const float unbake_rodata_800C369C_4 = 2.14748365e+09f;
const float unbake_rodata_800C36A0_4 = 1.0f;
const float unbake_rodata_800C36A4_4 = 2.14748365e+09f;
const float unbake_rodata_800C36A8_4 = 2.14748365e+09f;
const float unbake_rodata_800C36AC_4 = 1.0f;
const float unbake_rodata_800C36B0_4 = 2.14748365e+09f;
const float unbake_rodata_800C36B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C36B8_4 = 1.0f;
const float unbake_rodata_800C36BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C36C0_4 = 2.14748365e+09f;
const float unbake_rodata_800C36C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C36C8_4 = 2.14748365e+09f;
const float unbake_rodata_800C36CC_4 = 1.0f;
const float unbake_rodata_800C36D0_4 = 2.14748365e+09f;
const float unbake_rodata_800C36D4_4 = 1.0f;
const float unbake_rodata_800C36D8_4 = 2.14748365e+09f;
const float unbake_rodata_800C36DC_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3634_4 = 10.2399998f;
const float unbake_rodata_800C3638_4 = 30.7199993f;
const float unbake_rodata_800C363C_4 = 0.204799995f;
const float unbake_rodata_800C3640_4 = 1.0f;
const float unbake_rodata_800C3644_4 = 4.09600019f;
const float unbake_rodata_800C3648_4 = 1.04857612f;
#endif
