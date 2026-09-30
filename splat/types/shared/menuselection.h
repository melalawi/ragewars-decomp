#ifndef SHARED_SHARED_MENUSELECTION_H
#define SHARED_SHARED_MENUSELECTION_H

#include "basetypes.h"

typedef struct Shared_MenuSelection Shared_MenuSelection;
struct Shared_MenuSelection {
    volatile s32 index; /* +0x0: src/func_80294F1C.c */
    s32 value; /* +0x4: src/func_80294F1C.c */
    s32 changed; /* +0x8: src/func_80294F1C.c */
};
typedef char Shared_MenuSelection_size_check[(sizeof(Shared_MenuSelection) == 0xC) ? 1 : -1];

#endif
