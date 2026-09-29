#include "basetypes.h"

/* Initialises the two lists at offsets 0x8B4 and 0x8A0 of a pool with node offsets 0 and 4
   through func_80255C40, adds the pool's four entries of 0x228 bytes to the second list through
   func_80255CB4 and clears the halfword at 0x8C8. */
extern void func_80255C40(void *, s32, s32);
extern void func_80255CB4(void *, void *);

typedef struct func_8044B420_S1 func_8044B420_S1;
struct func_8044B420_S1 {
    char pad0[0x8C8];
    s16 unk8C8;
};

void func_8044B420(char *pool) {
    s32 i;
    char *entry;

    func_80255C40(pool + 0x8B4, 0, 4);
    func_80255C40(pool + 0x8A0, 0, 4);
    for (i = 0, entry = pool; i < 4; i++, entry += 0x228) {
        func_80255CB4(pool + 0x8A0, entry);
    }
    ((func_8044B420_S1 *)(pool))->unk8C8 = 0;
}
