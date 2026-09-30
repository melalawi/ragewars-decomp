#ifndef SHARED_SHARED_SCREEN_H
#define SHARED_SHARED_SCREEN_H

#include "basetypes.h"

typedef struct Shared_Screen Shared_Screen;
struct Shared_Screen {
    char pad0[0x1C];
    s32 state; /* +0x1C: src/func_8042BD40.c */
    char pad20[0xC0];
    void * menu; /* +0xE0: src/func_8042BD40.c */
    struct Shared_Item_func_8042BD40 * cursor; /* +0xE4: src/func_8042BD40.c */
    s32 unkE8; /* +0xE8: src/func_8042BD40.c */
    s32 count; /* +0xEC: src/func_8042BD40.c */
    s32 order[8]; /* +0xF0: src/func_8042BD40.c */
    s32 picks[8][2]; /* +0x110: src/func_8042BD40.c */
    char pad150[0x190];
    char stageName[64]; /* +0x2E0: src/func_8042BD40.c */
    s32 unk320; /* +0x320: src/func_8042BD40.c */
    s32 result; /* +0x324: src/func_8042BD40.c */
    s32 active; /* +0x328: src/func_8042BD40.c */
    s32 lastPick; /* +0x32C: src/func_8042BD40.c */
};
typedef char Shared_Screen_size_check[(sizeof(Shared_Screen) == 0x330) ? 1 : -1];

#endif
