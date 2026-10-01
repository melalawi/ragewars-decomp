/* Refills a reusable slot state and copies each list entry's packed record into its own struct. */
#include "basetypes.h"

typedef struct Dst {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
} Dst;

typedef struct Entry {
    Dst *dst;
    s32 val0;
    u8 pad1[3];
    u8 flag0;
    u8 pad2[3];
    u8 flag1;
    u8 pad3[3];
    u8 flag2;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    f32 extra;
} Entry;

typedef struct {
    s32 unk0;
    char pad4[0x10];
    s32 unk14;
    char pad18[0x70];
    s32 unk88;
    char pad8C[0x10];
    s32 unk9C;
    char padA0[0x10];
    s32 unkB0;
    s32 unkB4;
    char padB8[0xC];
    s32 unkC4;
} Reusable;

extern Reusable *D_80103FCC;

typedef struct func_8023EE50_S1 func_8023EE50_S1;
struct func_8023EE50_S1 {
    char pad0[0x28];
    Entry unk28;
};

void func_8023EE50(Entry *arg0)
{
    Entry *e = arg0;
    s32 counter = -1;

    if (e->dst != 0) {
        do {
            Dst *dst = e->dst;

            D_80103FCC->unk0 = 0;
            D_80103FCC->unk14 = counter;
            D_80103FCC->unk88 = 0;
            D_80103FCC->unk9C = 0;
            D_80103FCC->unkB0 = 0;
            D_80103FCC->unkB4 = 0;
            D_80103FCC->unkC4 = 0;

            dst->unk0 = e->val0;
            dst->unk4 = e->flag0;
            dst->unk5 = e->flag1;
            dst->unk6 = e->flag2;
            dst->unk8 = e->x;
            dst->unkC = e->y;
            dst->unk10 = e->z;
            dst->unk14 = e->w;
            dst->unk18 = e->extra;
            e = &((func_8023EE50_S1 *)(e))->unk28;
        } while (e->dst != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1B90_20[] = {0x0042F404U, 0x0042F41CU, 0x0042F4C8U, 0x0042F410U, 0x0042F3F8U, 0x0042F3E0U, 0x0042F3ECU, 0x0042F4F0U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E4084_10[] = {0x80, 0x0D, 0x23, 0x30, 0x80, 0x0D, 0x87, 0x3C, 0x80, 0x0D, 0xC6, 0xB8, 0x80, 0x0E, 0x04, 0x74};
const unsigned char unbake_rodata_800E4094_10[] = {0x80, 0x0D, 0x23, 0x48, 0x80, 0x0D, 0x87, 0x58, 0x80, 0x0D, 0xC6, 0xD0, 0x80, 0x0E, 0x04, 0x8C};
const unsigned char unbake_rodata_800E40A4_10[] = {0x80, 0x0D, 0x23, 0x60, 0x80, 0x0D, 0x87, 0x74, 0x80, 0x0D, 0xC6, 0xE8, 0x80, 0x0E, 0x04, 0xA4};
const unsigned char unbake_rodata_800E40B4_10[] = {0x80, 0x0D, 0x23, 0x78, 0x80, 0x0D, 0x87, 0x90, 0x80, 0x0D, 0xC7, 0x00, 0x80, 0x0E, 0x04, 0xBC};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DE7BC_C[] = {0x80, 0x0D, 0x1A, 0x1C, 0x80, 0x0D, 0x6E, 0x04, 0x80, 0x0D, 0xB1, 0x44};
#elif defined(VERSION_DE)
const double unbake_rodata_800DD0E8_8 = 0.0;
const double unbake_rodata_800DD0F0_8 = 1000000.0;
const double unbake_rodata_800DD0F8_8 = 10.0;
const double unbake_rodata_800DD100_8 = 1.0;
const double unbake_rodata_800DD108_8 = 0.10000000000000001;
const double unbake_rodata_800DD110_8 = 1.0;
const double unbake_rodata_800DD118_8 = 0.5;
const double unbake_rodata_800DD120_8 = 0.0;
const double unbake_rodata_800DD128_8 = 9.9999997473787516e-05;
const double unbake_rodata_800DD130_8 = 1.0;
const double unbake_rodata_800DD138_8 = 10.0;
const double unbake_rodata_800DD140_8 = 0.0;
const double unbake_rodata_800DD148_8 = 2147483647.0;
const double unbake_rodata_800DD150_8 = 0.5;
const double unbake_rodata_800DD158_8 = 0.10000000000000001;
const double unbake_rodata_800DD160_8 = 0.050000000745058053;
const double unbake_rodata_800DD168_8 = 10.0;
const double unbake_rodata_800DD170_8 = 10.0;
const double unbake_rodata_800DD178_8 = 0.10000000149011612;
const double unbake_rodata_800DD180_8 = 0.0;
const double unbake_rodata_800DD188_8 = 1.0;
const double unbake_rodata_800DD190_8 = 10.0;
const double unbake_rodata_800DD198_8 = 0.10000000000000001;
const double unbake_rodata_800DD1A0_8 = 0.5;
const double unbake_rodata_800DD1A8_8 = 1.0;
const double unbake_rodata_800DD1B0_8 = 10.0;
const double unbake_rodata_800DD1B8_8 = 0.10000000000000001;
const double unbake_rodata_800DD1C0_8 = 10.0;
#endif
