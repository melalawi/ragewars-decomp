#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);

typedef struct func_802172D0_S1 func_802172D0_S1;
typedef struct func_802172D0_S2 func_802172D0_S2;
typedef struct func_802172D0_S3 func_802172D0_S3;
struct func_802172D0_S1 {
    char pad0[0xFC];
    void* unkFC;
};
struct func_802172D0_S2 {
    char pad0[0xC];
    s32 unkC;
};
struct func_802172D0_S3 {
    char pad0[0x8];
    char unk8;
    char pad8[0xD0 - 0x8 - sizeof(char)];
    void* unkD0;
};

void func_802172D0(void *arg0, void *arg1, s32 arg2) {
    void *node;
    void *fallback;
    s32 kind;

    node = ((func_802172D0_S1 *)(arg1))->unkFC;
    fallback = (void *)-1;
    if (node != 0) {
        if (((func_802172D0_S2 *)(node))->unkC == arg2) {
            return;
        }
        func_8025CA44(func_8025CC8C(), ((func_802172D0_S1 *)(arg1))->unkFC);
    }

    kind = *(u8 *)arg0;
    if (kind != 0) {
        if (kind >= 0) {
            if (kind < 3) {
                fallback = arg0;
            }
        }
    } else {
        fallback = ((func_802172D0_S3 *)(arg0))->unkD0;
    }

    ((func_802172D0_S1 *)(arg1))->unkFC =
        func_8025C97C(func_8025CC8C(), arg2, &((func_802172D0_S3 *)(arg0))->unk8,
                      &((func_802172D0_S3 *)(arg0))->unk8, (s32)fallback);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4A1C_4 = 56.0000038f;
const float unbake_rodata_800C4A20_4 = 0.21960786f;
const float unbake_rodata_800C4A24_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9BDC_4 = 56.0000038f;
const float unbake_rodata_800C9BE0_4 = 0.21960786f;
const float unbake_rodata_800C9BE4_4 = 255.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C4898_1C[] = {0x0026A280U, 0x0026A280U, 0x0026A288U, 0x0026A298U, 0x0026A298U, 0x0026A2A0U, 0x0026A290U};
const float unbake_rodata_800C48B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C48B8_4 = 2.14748365e+09f;
const float unbake_rodata_800C48BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C48C0_4 = 2.14748365e+09f;
const float unbake_rodata_800C48C4_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C48C8_1C[] = {0x0026A588U, 0x0026A588U, 0x0026A590U, 0x0026A5A0U, 0x0026A5A0U, 0x0026A5A8U, 0x0026A598U};
const float unbake_rodata_800C48E4_4 = 2.14748365e+09f;
const float unbake_rodata_800C48E8_4 = 2.14748365e+09f;
const float unbake_rodata_800C48EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C48F0_4 = 2.14748365e+09f;
const float unbake_rodata_800C48F4_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C48F8_1C[] = {0x0026A974U, 0x0026A974U, 0x0026A97CU, 0x0026A98CU, 0x0026A98CU, 0x0026A994U, 0x0026A984U};
const float unbake_rodata_800C4914_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C4790_A8[] = {0x00268D04U, 0x00268D24U, 0x00268D44U, 0x00268D64U, 0x00268D84U, 0x00268DA4U, 0x00268DC4U, 0x00268DE4U, 0x00268E04U, 0x00268E24U, 0x00268E44U, 0x00268E54U, 0x00268E74U, 0x00268E94U, 0x00268EC4U, 0x00268EE4U, 0x00268F04U, 0x00268F14U, 0x00268F34U, 0x00268F54U, 0x00268F7CU, 0x00268F9CU, 0x00268FBCU, 0x00268FDCU, 0x00268FFCU, 0x0026901CU, 0x0026903CU, 0x0026905CU, 0x00269074U, 0x00269094U, 0x002690A4U, 0x002690D4U, 0x002690F4U, 0x00269114U, 0x0026913CU, 0x00269154U, 0x00269174U, 0x00269194U, 0x002691B4U, 0x002691D4U, 0x002691F4U, 0x00269214U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C4A60_4 = 2.38418579e-05f;
const float unbake_rodata_800C4A64_4 = 9.31322575e-09f;
const float unbake_rodata_800C4A68_4 = (-1.0f);
const float unbake_rodata_800C4A6C_4 = 9.31322575e-09f;
const float unbake_rodata_800C4A70_4 = 0.00999999978f;
const float unbake_rodata_800C4A74_4 = 0.00999999978f;
const float unbake_rodata_800C4A78_4 = 0.00999999978f;
const float unbake_rodata_800C4A7C_4 = 0.00999999978f;
const float unbake_rodata_800C4A80_4 = 0.00999999978f;
const float unbake_rodata_800C4A84_4 = 0.00999999978f;
const float unbake_rodata_800C4A88_4 = 2.38418579e-05f;
const float unbake_rodata_800C4A8C_4 = 4.65661287e-10f;
const double unbake_rodata_800C4A90_8 = 4294967296.0;
const float unbake_rodata_800C4A98_4 = 2.37487257e-06f;
#endif
