#include "basetypes.h"

typedef struct Triple {
    f32 a;
    s32 b;
    f32 c;
} Triple;

extern void func_8024E78C(void *arg0, Triple t, void *arg4, s32 *arg5, s32 arg6, s32 arg7);
extern f32 func_80275E44(s32, s32, s32);

typedef struct func_8024E58C_S1 func_8024E58C_S1;
typedef struct func_8024E58C_S2 func_8024E58C_S2;
struct func_8024E58C_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
};
struct func_8024E58C_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
};

void func_8024E58C(void *arg0, void *arg1, void *arg2) {
    Triple t;
    s32 sp30;

    t.a = ((func_8024E58C_S1 *)(arg1))->unk0;
    t.b = 0;
    t.c = ((func_8024E58C_S1 *)(arg1))->unk8;
    func_8024E78C(arg0, t, arg2, &sp30, 0, 0);
    ((func_8024E58C_S2 *)(arg2))->unk4 = func_80275E44(sp30, *(s32 *)arg2, ((func_8024E58C_S2 *)(arg2))->unk8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE030_20[] = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8F, 0xC2, 0x00, 0x14, 0x24, 0x03, 0xFF, 0xFF, 0xA0, 0x43, 0x00, 0x0D, 0x03, 0xC0, 0xE8, 0x21, 0x8F, 0xBF, 0x00, 0x2C, 0x8F, 0xBE, 0x00, 0x28};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EED88_1C[] = {0x004444A4U, 0x004444CCU, 0x004444F4U, 0x0044451CU, 0x00444544U, 0x0044456CU, 0x00444594U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E9C70_18[] = {0x00440564U, 0x00440948U, 0x00440A54U, 0x00440C78U, 0x00440808U, 0x00440564U};
const float unbake_rodata_800E9C88_4 = 0.108108111f;
const float unbake_rodata_800E9C8C_4 = 0.5f;
const float unbake_rodata_800E9C90_4 = 0.00450450461f;
const float unbake_rodata_800E9C94_4 = 0.00450450461f;
const float unbake_rodata_800E9C98_4 = 0.00352112669f;
const float unbake_rodata_800E9C9C_4 = 0.00450450461f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E04D4_40[] = {0x00, 0x42, 0x32, 0xAC, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x42, 0x30, 0xD4, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x42, 0x32, 0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x42, 0x33, 0xE8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x42, 0x33, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#endif
