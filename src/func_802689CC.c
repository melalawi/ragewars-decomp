#include "basetypes.h"

/* Calls func_80217388 on an object and its block at 0x170, sets bit 0x20 in that block's first word, clears flags 0x10000, 0x2000 and 0x100 at offset 0x100, and calls func_80262CA8 when flag 0x80000 remains set. Adapted from func_80279130 with the block taken at offset 0x170 of the object, a by-value record added as the fourth argument, and each flag update written as a compound assignment to memory. */
struct Pair {
    s32 first;
    s32 second;
};

extern void func_80217388(u8 *, u8 *);
extern void func_80262CA8(void *arg0);

typedef struct func_802689CC_S1 func_802689CC_S1;
struct func_802689CC_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x170 - 0x100 - sizeof(s32)];
    s32 unk170;
};

void func_802689CC(u8 *object, s32 second, s32 third, struct Pair pair) {
    func_80217388(object, (char *)object + 0x170);
    ((func_802689CC_S1 *)(object))->unk170 |= 0x20;
    ((func_802689CC_S1 *)(object))->unk100 &= 0xFFFEFFFF;
    ((func_802689CC_S1 *)(object))->unk100 &= ~0x2000;
    ((func_802689CC_S1 *)(object))->unk100 &= ~0x100;
    if (((func_802689CC_S1 *)(object))->unk100 & 0x80000) {
        func_80262CA8(object);
    }
}
