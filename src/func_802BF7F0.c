#include "basetypes.h"

typedef struct Inner {
    u32 word0;
    u32 flags;
} Inner;

typedef struct State {
    u16 status;
    u16 pad2;
    u32 word4;
    Inner *inner;
    u32 flags;
} State;

extern State *D_800D8444;
extern u32 func_802C2020(void);
extern void func_802C2040(u32 arg0);

void func_802BF7F0(s32 arg0) {
    u32 token;

    token = func_802C2020();
    if (arg0 & 1) {
        D_800D8444->flags |= 8;
    }
    if (arg0 & 2) {
        D_800D8444->flags &= ~8;
    }
    if (arg0 & 4) {
        D_800D8444->flags |= 4;
    }
    if (arg0 & 8) {
        D_800D8444->flags &= ~4;
    }
    if (arg0 & 0x10) {
        D_800D8444->flags |= 0x10;
    }
    if (arg0 & 0x20) {
        D_800D8444->flags &= ~0x10;
    }
    if (arg0 & 0x40) {
        D_800D8444->flags = (D_800D8444->flags | 0x10000) & ~0x300;
    }
    if (arg0 & 0x80) {
        D_800D8444->flags &= ~0x10000;
        D_800D8444->flags |= D_800D8444->inner->flags & 0x300;
    }
    D_800D8444->status |= 8;
    func_802C2040(token);
}
