extern void *D_800E2830;

#include "basetypes.h"

extern s32 D_800E28D0;
extern int D_800E28D4;

typedef struct func_80245A20_S1 func_80245A20_S1;
struct func_80245A20_S1 {
    char pad0[0x108];
    int unk108;
    char pad108[0x10C - 0x108 - sizeof(int)];
    int unk10C;
    char pad10C[0x110 - 0x10C - sizeof(int)];
    int unk110;
    char pad110[0x114 - 0x110 - sizeof(int)];
    int unk114;
};

/** Copy a two-word record into the global record and clear two trailing fields. */
void func_80245A20(void) {
    char *record = (char *)D_800E2830;
    int hi = D_800E28D4;
    int lo = D_800E28D0;
    ((func_80245A20_S1 *)(record))->unk10C = hi;
    ((func_80245A20_S1 *)(record))->unk108 = lo;
    ((func_80245A20_S1 *)(record))->unk110 = 0;
    ((func_80245A20_S1 *)(record))->unk114 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE184_4C[] = {0x00, 0x41, 0xC4, 0x8C, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x41, 0xC3, 0x2C, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x41, 0xC4, 0x5C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x41, 0xC5, 0x14, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x41, 0xC4, 0xF4, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x41, 0xC4, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E3308_28[] = {0x00, 0x41, 0x9B, 0x6C, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x75, 0x30, 0x00, 0x41, 0x97, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x00, 0x00, 0x00, 0xB3, 0x00, 0x00, 0x00, 0xB5};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EDAD0_3[] = {0x25, 0x64, 0x00};
#elif defined(VERSION_EU_X)
const double unbake_rodata_800E8928_8 = 0.0;
const double unbake_rodata_800E8930_8 = 1000000.0;
const double unbake_rodata_800E8938_8 = 10.0;
const double unbake_rodata_800E8940_8 = 1.0;
const double unbake_rodata_800E8948_8 = 0.10000000000000001;
const double unbake_rodata_800E8950_8 = 1.0;
const double unbake_rodata_800E8958_8 = 0.5;
const double unbake_rodata_800E8960_8 = 0.0;
const double unbake_rodata_800E8968_8 = 9.9999997473787516e-05;
const double unbake_rodata_800E8970_8 = 1.0;
const double unbake_rodata_800E8978_8 = 10.0;
const double unbake_rodata_800E8980_8 = 0.0;
const double unbake_rodata_800E8988_8 = 2147483647.0;
const double unbake_rodata_800E8990_8 = 0.5;
const double unbake_rodata_800E8998_8 = 0.10000000000000001;
const double unbake_rodata_800E89A0_8 = 0.050000000745058053;
const double unbake_rodata_800E89A8_8 = 10.0;
const double unbake_rodata_800E89B0_8 = 10.0;
const double unbake_rodata_800E89B8_8 = 0.10000000149011612;
const double unbake_rodata_800E89C0_8 = 0.0;
const double unbake_rodata_800E89C8_8 = 1.0;
const double unbake_rodata_800E89D0_8 = 10.0;
const double unbake_rodata_800E89D8_8 = 0.10000000000000001;
const double unbake_rodata_800E89E0_8 = 0.5;
const double unbake_rodata_800E89E8_8 = 1.0;
const double unbake_rodata_800E89F0_8 = 10.0;
const double unbake_rodata_800E89F8_8 = 0.10000000000000001;
const double unbake_rodata_800E8A00_8 = 10.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800DDF20_4 = 0.300000012f;
const float unbake_rodata_800DDF24_4 = 0.00899999961f;
const float unbake_rodata_800DDF28_4 = 3.0f;
const float unbake_rodata_800DDF2C_4 = (-5.0f);
const float unbake_rodata_800DDF30_4 = (-100.0f);
const float unbake_rodata_800DDF34_4 = (-30.0f);
const float unbake_rodata_800DDF38_4 = 0.300000012f;
#endif
