#ifndef SHARED_SHARED_CONTROLVIEW_H
#define SHARED_SHARED_CONTROLVIEW_H

#include "basetypes.h"

typedef struct Shared_ControlView Shared_ControlView;
struct Shared_ControlView {
    char pad0[0x80];
    s8 mode; /* +0x80: src/func_8021B468.c */
    char pad81[0xE];
    u8 transientFlag; /* +0x8F: src/func_8021B468.c */
    s8 resetFlag; /* +0x90: src/func_8021B468.c */
    char pad91[0x3];
    u8 germanActive; /* +0x94: src/func_8021B468.c */
};
typedef char Shared_ControlView_size_check[(sizeof(Shared_ControlView) == 0x95) ? 1 : -1];

#endif
