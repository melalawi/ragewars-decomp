#include "basetypes.h"

/* Initialises the two lists at offsets 0x5F00 and 0x5F14 of a pool with nodes at offsets 0x2E8 and
   0x2EC through func_80255C40, then adds the pool's 32 entries of 0x2F8 bytes to the first list
   through func_80255CB4. */
extern void func_80255C40(void *, s32, s32);
extern void func_80255CB4(void *, void *);

void func_8044BA40(char *pool) {
    s32 i;
    char *entry;

    func_80255C40(pool + 0x5F00, 0x2E8, 0x2EC);
    func_80255C40(pool + 0x5F14, 0x2E8, 0x2EC);
    for (i = 0, entry = pool; i < 0x20; i++, entry += 0x2F8) {
        func_80255CB4(pool + 0x5F00, entry);
    }
}
