#include "basetypes.h"

typedef struct func_802644C8_S1 func_802644C8_S1;
struct func_802644C8_S1 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0xAC - 0x28 - sizeof(s32)];
    s32 unkAC;
    char padAC[0xB0 - 0xAC - sizeof(s32)];
    s32 unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(s32)];
    s32 unkB4;
    char padB4[0xB8 - 0xB4 - sizeof(s32)];
    s32 unkB8;
    char padB8[0xBC - 0xB8 - sizeof(s32)];
    s32 unkBC;
    char padBC[0xC0 - 0xBC - sizeof(s32)];
    s32 unkC0;
    char padC0[0xC4 - 0xC0 - sizeof(s32)];
    u8 unkC4;
    char padC4[0xC5 - 0xC4 - sizeof(u8)];
    u8 unkC5;
    char padC5[0xC6 - 0xC5 - sizeof(u8)];
    u8 unkC6;
    char padC6[0xC7 - 0xC6 - sizeof(u8)];
    u8 unkC7;
};

/** Shift the trailing state-history slots down and clear the newest slot. */
void func_802644C8(void *arg0) {
    u8 *o = (u8 *)arg0;
    u8 t_c4;
    u8 t_c5;
    s32 t_b0;
    s32 t_18;
    s32 t_1c;
    s32 t_20;
    s32 t_24;
    s32 t_28;

    t_c4 = ((func_802644C8_S1 *)(o))->unkC4;
    t_c5 = ((func_802644C8_S1 *)(o))->unkC5;
    t_b0 = ((func_802644C8_S1 *)(o))->unkB0;
    t_18 = ((func_802644C8_S1 *)(o))->unk18;
    t_1c = ((func_802644C8_S1 *)(o))->unk1C;
    t_20 = ((func_802644C8_S1 *)(o))->unk20;
    t_24 = ((func_802644C8_S1 *)(o))->unk24;
    t_28 = ((func_802644C8_S1 *)(o))->unk28;
    ((func_802644C8_S1 *)(o))->unk1C = 0;
    ((func_802644C8_S1 *)(o))->unk20 = 0;
    ((func_802644C8_S1 *)(o))->unk24 = 0;
    ((func_802644C8_S1 *)(o))->unk28 = 0;
    ((func_802644C8_S1 *)(o))->unkC6 = t_c4;
    ((func_802644C8_S1 *)(o))->unkC7 = t_c5;
    ((func_802644C8_S1 *)(o))->unkAC = t_b0;
    ((func_802644C8_S1 *)(o))->unkB0 = t_18;
    ((func_802644C8_S1 *)(o))->unkB4 = t_1c;
    ((func_802644C8_S1 *)(o))->unkB8 = t_20;
    ((func_802644C8_S1 *)(o))->unkBC = t_24;
    ((func_802644C8_S1 *)(o))->unkC0 = t_28;
}
