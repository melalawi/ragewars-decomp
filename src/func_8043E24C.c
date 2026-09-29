/* Returns 1 when any of the words at 0x28, 0x1C or 0x20 of D_801468A0 is nonzero, else 0. */
#include "basetypes.h"

typedef struct {
    char pad[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} State;

extern State D_801468A0;

s32 func_8043E24C(void) {
    State *s = &D_801468A0;
    s32 ret;

    ret = 0;
    if (s->unk28 != 0 || s->unk1C != 0 || s->unk20 != 0) {
        ret = 1;
    }
    return ret;
}
