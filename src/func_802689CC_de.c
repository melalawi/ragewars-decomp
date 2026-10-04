#include "common/types.h"
#include "span_1000/code_802688AC.h"
#include "types.h"

/* Calls func_80217388_de on an object and its block at 0x170, sets bit 0x20 in that block's first word, clears flags 0x10000, 0x2000 and 0x100 at offset 0x100, and calls func_80262C88_de when flag 0x80000 remains set. Adapted from func_802790C0_de with the block taken at offset 0x170 of the object, a by-value record added as the fourth argument, and each flag update written as a compound assignment to memory. */


extern void func_80217388_de(u8 *, u8 *);
extern void func_80262C88_de(void *arg0);




void func_802689CC_de(u8 *object, s32 second, s32 third, struct Shape_func_802764D4_de_2 pair) {
    func_80217388_de(object, (char *)object + 0x170);
    ((func_802689CC_S1 *)(object))->unk170 |= 0x20;
    ((func_802689CC_S1 *)(object))->unk100 &= 0xFFFEFFFF;
    ((func_802689CC_S1 *)(object))->unk100 &= ~0x2000;
    ((func_802689CC_S1 *)(object))->unk100 &= ~0x100;
    if (((func_802689CC_S1 *)(object))->unk100 & 0x80000) {
        func_80262C88_de(object);
    }
}
