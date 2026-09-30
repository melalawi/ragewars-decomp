#ifndef SHARED_SHARED_MENUGLOBAL_H
#define SHARED_SHARED_MENUGLOBAL_H

#include "basetypes.h"

typedef struct Shared_MenuGlobal Shared_MenuGlobal;
struct Shared_MenuGlobal {
    u8 alternateTitle; /* +0x0: src/func_80294F1C.c */
    u8 unused0[11]; /* +0x1: src/func_80294F1C.c */
    volatile s32 selectionIndex; /* +0xC: src/func_80294F1C.c */
    s32 selectionValue; /* +0x10: src/func_80294F1C.c */
    s32 titleWasShown; /* +0x14: src/func_80294F1C.c */
    u8 unused1[8480]; /* +0x18: src/func_80294F1C.c */
    u8 displayData; /* +0x2138: src/func_80294F1C.c */
    u8 unused2[127]; /* +0x2139: src/func_80294F1C.c */
    s32 frameCount; /* +0x21B8: src/func_80294F1C.c */
};
typedef char Shared_MenuGlobal_size_check[(sizeof(Shared_MenuGlobal) == 0x21BC) ? 1 : -1];

#endif
