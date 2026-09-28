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
            e = (Entry *)((u8 *)e + 0x28);
        } while (e->dst != 0);
    }
}
