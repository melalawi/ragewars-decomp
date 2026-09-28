#include "basetypes.h"

typedef struct Block802BEF68 {
    s32 unk0;
    u32 flags;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20[6];
    s32 unk38;
    s32 unk3C;
} Block802BEF68;

extern Block802BEF68 *func_802BEE80(Block802BEF68 *arg0);
extern void func_802C2370(Block802BEF68 *, s32);
extern void func_802BF1F0(u32 arg0);
extern s32 func_802BF1C0(u32 arg0);
extern s32 func_802BF0C0(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
extern s32 func_802BF0A0(void);
extern s32 D_A0000000;

void func_802BEF68(Block802BEF68 *arg0) {
    Block802BEF68 *block;
    s32 result;

    block = func_802BEE80(arg0);
    if (block->flags & 1) {
        block->unk18 = block->unk38;
        block->unk1C = block->unk3C;
        arg0->flags &= ~1;
        if (block->flags & 4) {
            block->unk10 = *(s32 *)(((arg0->unk38 + 0xBFC) | 0xA0000000));
        }
    }
    func_802C2370(block, 0x40);
    func_802BF1F0(0x2B00);
    do {
        result = func_802BF1C0(0x04001000);
    } while (result == -1);
    do {
        result = func_802BF0C0(1, 0x04000FC0, (s32)block, 0x40);
    } while (result == -1);
    while (func_802BF0A0() != 0) {
    }
    do {
        result = func_802BF0C0(1, 0x04001000, block->unk8, block->unkC);
    } while (result == -1);
}
