#include "basetypes.h"

/* Decides whether one actor may affect another: always when the override D_801462E5 is set; never for actors of the same kind or a target lacking flags 0x310000, nor, while D_8013B290 is set, when neither actor carries 0x300000; otherwise only when the target is in state 1, 4, 7 or 11. */

extern u8 D_801462E5;
extern s32 D_8013B290;

s32 func_80267540(char *actor, char *target)
{
    s32 flags;

    if (D_801462E5 != 0) {
        return 1;
    }
    if (*(u16 *)(actor + 0xE4) == *(u16 *)(target + 0xE4)) {
        return 0;
    }
    flags = *(s32 *)(target + 0x100);
    if (!(flags & 0x310000)) {
        return 0;
    }
    if (D_8013B290 != 0 && !(*(s32 *)(actor + 0x100) & 0x300000) && !(flags & 0x300000)) {
        return 0;
    }
    switch (**(s32 **)(target + 0x18)) {
    case 1:
    case 4:
    case 7:
    case 11:
        return 1;
    }
    return 0;
}
