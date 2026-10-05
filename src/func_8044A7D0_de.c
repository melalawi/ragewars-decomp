#include "span_16E000/code_8044ACCC.h"
#include "types.h"

/* Initialises the two lists at offsets 0x8B4 and 0x8A0 of a pool with node offsets 0 and 4
   through func_80255CA0_de, adds the pool's four entries of 0x228 bytes to the second list through
   func_80255D14_de and clears the halfword at 0x8C8. */
extern void func_80255CA0_de(void *, s32, s32);
extern void func_80255D14_de(void *, void *);




void func_8044A7D0_de(char *pool) {
    s32 i;
    char *entry;

    func_80255CA0_de(pool + 0x8B4, 0, 4);
    func_80255CA0_de(pool + 0x8A0, 0, 4);
    for (i = 0, entry = pool; i < 4; i++, entry += 0x228) {
        func_80255D14_de(pool + 0x8A0, entry);
    }
    ((func_8044B420_S1 *)(pool))->unk8C8 = 0;
}
