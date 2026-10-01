#include "basetypes.h"

typedef struct {
    s32 w[7];
} Block7;

extern char *func_8028FD94(s32 *, s32);

extern char D_800F7D20;

void func_8020A604(void *arg0) {
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s4;
    s32 base2;
    char *tbl;
    Block7 *src;
    char *dst;

    s2 = 0;
    tbl = &D_800F7D20;
    s4 = 0;
    do {
        s0 = 0;
        base2 = s2 * 2;
        s1 = s4;
        do {
            src = func_8028FD94(arg0, base2 + s0);
            dst = (char *)(s1 + (s32)tbl);
            *(Block7 *)dst = *src;
            s0 += 1;
            s1 += 0x1C;
        } while (s0 < 2);
        s2 += 1;
        s4 += 0x38;
    } while (s2 < 0x16);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3488_4 = 1.0f;
const float unbake_rodata_800C348C_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C84E8_4 = 9.0f;
const float unbake_rodata_800C84EC_4 = 0.810000002f;
const float unbake_rodata_800C84F0_4 = 1.0f;
const float unbake_rodata_800C84F4_4 = 1.57079637f;
const float unbake_rodata_800C84F8_4 = 255.0f;
const float unbake_rodata_800C84FC_4 = 1.0f;
const float unbake_rodata_800C8500_4 = 0.0666666701f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C3450_8 = 4294967296.0;
const double unbake_rodata_800C3458_8 = 4294967296.0;
const double unbake_rodata_800C3460_8 = 4294967296.0;
const double unbake_rodata_800C3468_8 = 4294967296.0;
const double unbake_rodata_800C3470_8 = 4294967296.0;
const double unbake_rodata_800C3478_8 = 4294967296.0;
const float unbake_rodata_800C3480_4 = 995.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3450_4 = 1.0f;
const float unbake_rodata_800C3454_4 = 1.0f;
const float unbake_rodata_800C3458_4 = 15.0f;
const float unbake_rodata_800C345C_4 = 1.0f;
const float unbake_rodata_800C3460_4 = (-2.0f);
const float unbake_rodata_800C3464_4 = 3.0f;
const float unbake_rodata_800C3468_4 = 255.0f;
const float unbake_rodata_800C346C_4 = 2.14748365e+09f;
const double unbake_rodata_800C3470_8 = 4294967296.0;
const double unbake_rodata_800C3478_8 = 4294967296.0;
const double unbake_rodata_800C3480_8 = 4294967296.0;
const float unbake_rodata_800C3488_4 = 995.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C33F8_4 = 9.0f;
const float unbake_rodata_800C33FC_4 = 0.810000002f;
const float unbake_rodata_800C3400_4 = 1.0f;
const float unbake_rodata_800C3404_4 = 1.57079637f;
const float unbake_rodata_800C3408_4 = 255.0f;
const float unbake_rodata_800C340C_4 = 1.0f;
const float unbake_rodata_800C3410_4 = 0.0666666701f;
#endif
