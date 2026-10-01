#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 pad0;
    s32 pad1;
} Rec;

extern char *func_8028FD94(s32 *, s32);

typedef struct func_8024C91C_S1 func_8024C91C_S1;
typedef struct func_8024C91C_S2 func_8024C91C_S2;
typedef struct func_8024C91C_S3 func_8024C91C_S3;
typedef struct func_8024C91C_S4 func_8024C91C_S4;
struct func_8024C91C_S1 {
    char* unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    Rec* unk4;
    char pad4[0x8 - 0x4 - sizeof(Rec*)];
    void* unk8;
    char pad8[0x18 - 0x8 - sizeof(void*)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    f32 unk20;
};
struct func_8024C91C_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_8024C91C_S3 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_8024C91C_S4 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void func_8024C91C(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec *recs;
    void *base;
    char *a;
    f32 scale;

    idx = *(s16 *)(((func_8024C91C_S1 *)(o))->unk0 + arg1 * 4);
    if (idx == -1) {
        recs = ((func_8024C91C_S1 *)(o))->unk4;
        *(Vec3i *)arg2 = *(Vec3i *)&recs[arg1];
        return;
    }
    base = func_8028FD94(((func_8024C91C_S1 *)(o))->unk8, (s32) idx);
    a = (char *)base + (((func_8024C91C_S1 *)(o))->unk18) * 4;
    base = (char *)base + (((func_8024C91C_S1 *)(o))->unk1C) * 4;

    scale = ((func_8024C91C_S1 *)(o))->unk20;

    ((func_8024C91C_S2 *)(arg2))->unk0 = ((func_8024C91C_S3 *)(a))->unk0 + scale * (((func_8024C91C_S4 *)(base))->unk0 - ((func_8024C91C_S3 *)(a))->unk0);
    ((func_8024C91C_S2 *)(arg2))->unk4 = ((func_8024C91C_S3 *)(a))->unk4 + scale * (((func_8024C91C_S4 *)(base))->unk4 - ((func_8024C91C_S3 *)(a))->unk4);
    ((func_8024C91C_S2 *)(arg2))->unk8 = ((func_8024C91C_S3 *)(a))->unk8 + scale * (((func_8024C91C_S4 *)(base))->unk8 - ((func_8024C91C_S3 *)(a))->unk8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0AD4_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5904_4C[] = {0x00, 0x43, 0x94, 0xE0, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x43, 0x94, 0xE8, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x43, 0x94, 0x20, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x43, 0x94, 0xB0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x43, 0x95, 0xE4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x43, 0x95, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE660_18[] = {0x0043BDC4U, 0x0043BDC4U, 0x0043BDD4U, 0x0043BDD4U, 0x0043BDE4U, 0x0043BF6CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E94D0_74[] = {0x00431560U, 0x00432F24U, 0x00431668U, 0x00431F00U, 0x00432F24U, 0x00432B60U, 0x00432214U, 0x0043208CU, 0x004323BCU, 0x00432F24U, 0x00431DC4U, 0x00431C40U, 0x004325D8U, 0x00432F24U, 0x004317BCU, 0x00431900U, 0x00432F24U, 0x00432F24U, 0x00432F24U, 0x00432F24U, 0x00432BF8U, 0x00432958U, 0x00432C58U, 0x00432D1CU, 0x00432DC4U, 0x00432E24U, 0x00432A7CU, 0x00432E7CU, 0x00432ED8U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DE6C8_24[] = {0x00442FFCU, 0x00443024U, 0x00443024U, 0x00443004U, 0x00443014U, 0x00443024U, 0x00443034U, 0x00443074U, 0x004430B4U};
const float unbake_rodata_800DE6EC_4 = 2.14748365e+09f;
const float unbake_rodata_800DE6F0_4 = 2.14748365e+09f;
const float unbake_rodata_800DE6F4_4 = 2.14748365e+09f;
#endif
