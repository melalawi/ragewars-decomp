#ifndef SHARED_SHARED_MODELVIEW_H
#define SHARED_SHARED_MODELVIEW_H

#include "basetypes.h"

typedef struct Shared_ModelView Shared_ModelView;
struct Shared_ModelView {
    s32 unused; /* +0x0: src/func_8021B468.c */
    s32 flags; /* +0x4: src/func_8021B468.c */
};
typedef char Shared_ModelView_size_check[(sizeof(Shared_ModelView) == 0x8) ? 1 : -1];

#endif
