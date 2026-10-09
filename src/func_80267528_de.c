#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802661FC.h"
#include "types.h"

/* Decides whether one actor may affect another: always when the override D_801462E5 is set; never for actors of the same kind or a target lacking flags 0x310000, nor, while D_8013B290 is set, when neither actor carries 0x300000; otherwise only when the target is in state 1, 4, 7 or 11. */

extern u8 D_801462E5;
extern s32 D_8013B290;






s32 func_80267528_de(char *actor, char *target)
{
    s32 flags;

    if (D_801462E5 != 0) {
        return 1;
    }
    if (((func_802044C8_S1 *)(actor))->unkE4 == ((func_80267540_S2 *)(target))->unkE4) {
        return 0;
    }
    flags = ((func_80267540_S2 *)(target))->unk100;
    if (!(flags & 0x310000)) {
        return 0;
    }
    if (D_8013B290 != 0 && !(((func_802044C8_S1 *)(actor))->unk100 & 0x300000) && !(flags & 0x300000)) {
        return 0;
    }
    switch (*((func_80267540_S2 *)(target))->unk18) {
    case 1:
    case 4:
    case 7:
    case 11:
        return 1;
    }
    return 0;
}
