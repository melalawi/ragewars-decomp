/* Returns 1 if any of D_801468A0's unk1C, unk20 or unk28 fields is nonzero, otherwise 0. */
#include "basetypes.h"

typedef struct {
    char pad[0x1C];
    s32 unk1C;
    s32 unk20;
    char pad2[4];
    s32 unk28;
} State;

extern State D_801468A0;

s32 func_8043E750(void) {
    State *s = &D_801468A0;
    s32 result;

    result = 0;
    if ((s->unk28 != 0) || (s->unk1C != 0) || (s->unk20 != 0)) {
        result = 1;
    }
    return result;
}
