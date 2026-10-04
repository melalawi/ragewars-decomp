#include "common/types.h"
#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Allocates a block sized for the entries of a list (forty bytes each plus 0x480 for every entry of type three, over a 0x1D8 header) through func_8025343C_de, builds it with func_80440DA0_de from four parameters, registers it with func_80255CB8_de and advances the owner's rotating counter below four, returning the block or zero. */








extern char D_800DE4E8[];
extern void **func_8025343C_de(s32, s32, s32, char *);
extern void func_80440DA0_de(void *, void **, struct List_func_80442574_de *, s32, s32, s32, s32, struct func_8025E5B0_S1 *);
extern void func_80255CB8_de(struct func_8025E5B0_S1 *, void *);

void *func_80442690_de(struct func_8025E5B0_S1 *owner, struct Params_func_80442690_de *params, struct List_func_80442574_de *list) {
    s32 a = params->a;
    s32 b = params->b;
    s32 c = params->c;
    s32 d = params->d;
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
