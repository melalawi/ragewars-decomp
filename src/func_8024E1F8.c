#include "basetypes.h"

/* Reports whether an actor's current state counts as active: states 1 and 5 always do, and state 11 does for a live mirrored actor whose controller flag at 0x80C is set or for which func_80245788 agrees. */

extern s32 func_80245788(char *actor);

s32 func_8024E1F8(char *actor)
{
    switch (**(s32 **)(actor + 0x18)) {
    case 1:
    case 5:
        return 1;
    case 11:
        if (*(u8 *)actor != 1) {
            return 0;
        }
        if (!(*(s32 *)(actor + 0x100) & 0x300000)) {
            return 0;
        }
        if (*(s32 *)(*(char **)(actor + 0x1D8) + 0x80C) != 0 || func_80245788(actor) != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
