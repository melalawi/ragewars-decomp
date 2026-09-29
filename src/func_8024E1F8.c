#include "basetypes.h"

/* Reports whether an actor's current state counts as active: states 1 and 5 always do, and state 11 does for a live mirrored actor whose controller flag at 0x80C is set or for which func_80245788 agrees. */

extern s32 func_80245788(char *actor);

typedef struct func_8024E1F8_S1 func_8024E1F8_S1;
struct func_8024E1F8_S1 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};

s32 func_8024E1F8(char *actor)
{
    switch (*((func_8024E1F8_S1 *)(actor))->unk18) {
    case 1:
    case 5:
        return 1;
    case 11:
        if (*(u8 *)actor != 1) {
            return 0;
        }
        if (!(((func_8024E1F8_S1 *)(actor))->unk100 & 0x300000)) {
            return 0;
        }
        if (*(s32 *)(((func_8024E1F8_S1 *)(actor))->unk1D8 + 0x80C) != 0 || func_80245788(actor) != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
