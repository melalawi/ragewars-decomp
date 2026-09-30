#ifndef SHARED_SHARED_SPECIALOBJECTVIEW_H
#define SHARED_SHARED_SPECIALOBJECTVIEW_H

#include "basetypes.h"

typedef struct Shared_SpecialObjectView Shared_SpecialObjectView;
struct Shared_SpecialObjectView {
    char pad0[0x170];
    char segment[100]; /* +0x170: src/func_8021B468.c */
    s32 reset; /* +0x1D4: src/func_8021B468.c */
};
typedef char Shared_SpecialObjectView_size_check[(sizeof(Shared_SpecialObjectView) == 0x1D8) ? 1 : -1];

#endif
