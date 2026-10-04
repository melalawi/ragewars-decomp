#include "common/types.h"
#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Allocates a block sized for the entries of a list through func_8025343C_de, builds it with func_80440DA0_de from four arguments, registers it with func_80255CB8_de and advances the owner's rotating counter below four, returning the block or zero. Adapted from func_804427C4_de with the list and all four values passed as arguments instead of read from a parameter block changed. */






extern char D_800DE4E8[];
extern void **func_8025343C_de(s32, s32, s32, char *);
extern void func_80440DA0_de(void *, void **, struct List_func_80442574_de *, s32, s32, s32, s32, struct func_8025E5B0_S1 *);
extern void func_80255CB8_de(struct func_8025E5B0_S1 *, void *);

void *func_8044322C_de(struct func_8025E5B0_S1 *owner, struct List_func_80442574_de *list, s32 a, s32 b, s32 c, s32 d) {
    s32 size = list->count * 40 + 0x1D8;
    s32 i;
    void **block;
    void *first;

    for (i = 0; i < list->count; i++) {
        s32 extra = 0;
        if (list->entries[i].type == 3) {
            extra = 0x480;
        }
        size += extra;
    }
    block = func_8025343C_de(0, size, 0x3B, D_800DE4E8 + 4);
    if (block == 0) {
        return 0;
    }
    first = *block;
    if (first == 0) {
        return 0;
    }
    func_80440DA0_de(first, block, list, a, b, c, d, owner);
    func_80255CB8_de(owner, first);
    if (++owner->unk14 >= 4) {
        owner->unk14 = 0;
    }
    return first;
}
