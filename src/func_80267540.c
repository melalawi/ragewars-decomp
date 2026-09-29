#include "basetypes.h"

/* Decides whether one actor may affect another: always when the override D_801462E5 is set; never for actors of the same kind or a target lacking flags 0x310000, nor, while D_8013B290 is set, when neither actor carries 0x300000; otherwise only when the target is in state 1, 4, 7 or 11. */

extern u8 D_801462E5;
extern s32 D_8013B290;

typedef struct func_80267540_S1 func_80267540_S1;
typedef struct func_80267540_S2 func_80267540_S2;
struct func_80267540_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};
struct func_80267540_S2 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0xE4 - 0x18 - sizeof(s32*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};

s32 func_80267540(char *actor, char *target)
{
    s32 flags;

    if (D_801462E5 != 0) {
        return 1;
    }
    if (((func_80267540_S1 *)(actor))->unkE4 == ((func_80267540_S2 *)(target))->unkE4) {
        return 0;
    }
    flags = ((func_80267540_S2 *)(target))->unk100;
    if (!(flags & 0x310000)) {
        return 0;
    }
    if (D_8013B290 != 0 && !(((func_80267540_S1 *)(actor))->unk100 & 0x300000) && !(flags & 0x300000)) {
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
