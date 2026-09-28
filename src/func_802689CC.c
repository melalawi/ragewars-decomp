#include "basetypes.h"

/* Calls func_80217388 on an object and its block at 0x170, sets bit 0x20 in that block's first word, clears flags 0x10000, 0x2000 and 0x100 at offset 0x100, and calls func_80262CA8 when flag 0x80000 remains set. Adapted from func_80279130 with the block taken at offset 0x170 of the object, a by-value record added as the fourth argument, and each flag update written as a compound assignment to memory. */
struct Pair {
    s32 first;
    s32 second;
};

extern void func_80217388(u8 *, u8 *);
extern void func_80262CA8(void *arg0);

void func_802689CC(u8 *object, s32 second, s32 third, struct Pair pair) {
    func_80217388(object, object + 0x170);
    *(s32 *)(object + 0x170) |= 0x20;
    *(s32 *)(object + 0x100) &= 0xFFFEFFFF;
    *(s32 *)(object + 0x100) &= ~0x2000;
    *(s32 *)(object + 0x100) &= ~0x100;
    if (*(s32 *)(object + 0x100) & 0x80000) {
        func_80262CA8(object);
    }
}
