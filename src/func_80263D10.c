#include "basetypes.h"

extern u8 D_8010FBE3[];
extern s32 func_80285A94(void *arg0, void *arg1, s32 arg2);

typedef struct func_80263D10_S1 func_80263D10_S1;
struct func_80263D10_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s8 unk4;
    char pad4[0x8 - 0x4 - sizeof(s8)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0xC4 - 0x28 - sizeof(s32)];
    s8 unkC4;
    char padC4[0xC5 - 0xC4 - sizeof(s8)];
    s8 unkC5;
    char padC5[0xC6 - 0xC5 - sizeof(s8)];
    s8 unkC6;
    char padC6[0xC7 - 0xC6 - sizeof(s8)];
    s8 unkC7;
    char padC7[0xC8 - 0xC7 - sizeof(s8)];
    s32 unkC8;
    char padC8[0xCC - 0xC8 - sizeof(s32)];
    s32 unkCC;
    char padCC[0xD0 - 0xCC - sizeof(s32)];
    s32 unkD0;
    char padD0[0xD4 - 0xD0 - sizeof(s32)];
    s32 unkD4;
    char padD4[0x220 - 0xD4 - sizeof(s32)];
    s32 unk220;
};

void func_80263D10(void *arg0) {
    char *o = (char *) arg0;
    s32 type;
    s32 bit;
    s32 bit2;
    s32 i;

    type = ((func_80263D10_S1 *)(o))->unk4;
    bit = ((D_8010FBE3[type * 4] >> 3) ^ 1) & 1;
    if (bit != 0 && ((func_80263D10_S1 *)(o))->unk0 == 0) {
        i = 0;
        ((func_80263D10_S1 *)(o))->unk4 = type;
        ((func_80263D10_S1 *)(o))->unk0 = 0;
        ((func_80263D10_S1 *)(o))->unkC8 = 0;
        ((func_80263D10_S1 *)(o))->unkCC = 0;
        ((func_80263D10_S1 *)(o))->unk220 = 0;
        ((func_80263D10_S1 *)(o))->unk8 = 0;
        ((func_80263D10_S1 *)(o))->unkC = 0;
        ((func_80263D10_S1 *)(o))->unk10 = 0;
        ((func_80263D10_S1 *)(o))->unkC4 = 0;
        ((func_80263D10_S1 *)(o))->unkC5 = 0;
        ((func_80263D10_S1 *)(o))->unkC6 = 0;
        ((func_80263D10_S1 *)(o))->unkC7 = 0;
        ((func_80263D10_S1 *)(o))->unk14 = 0;
        ((func_80263D10_S1 *)(o))->unk18 = 0;
        ((func_80263D10_S1 *)(o))->unk1C = 0;
        ((func_80263D10_S1 *)(o))->unk20 = 0;
        ((func_80263D10_S1 *)(o))->unk24 = 0;
        ((func_80263D10_S1 *)(o))->unk28 = 0;
        do {
            *(s8 *) (o + 0x2C + i * 4) = 0;
            *(s8 *) (o + 0x2D + i * 4) = 0;
            *(s8 *) (o + 0x2E + i * 4) = 0x30;
            *(s8 *) (o + 0x2F + i * 4) = 0;
            i += 1;
        } while (i < 0x20);
        bit2 = ((D_8010FBE3[type * 4] >> 3) ^ 1) & 1;
        ((func_80263D10_S1 *)(o))->unkD0 = 0;
        ((func_80263D10_S1 *)(o))->unkD4 = 0;
        ((func_80263D10_S1 *)(o))->unk0 = bit2;
        func_80285A94(o + 0x140, o + 0x16C, 3);
    }
    ((func_80263D10_S1 *)(o))->unk0 = bit;
}
