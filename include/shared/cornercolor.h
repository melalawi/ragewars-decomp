#ifndef SHARED_SHARED_CORNERCOLOR_H
#define SHARED_SHARED_CORNERCOLOR_H

#include "basetypes.h"

/* One corner colour of a screen rectangle as func_80415D10 receives it: a word holding alpha in
   its top byte, which the display list wants rotated to RGBA. */
typedef struct Shared_CornerColor Shared_CornerColor;
struct Shared_CornerColor {
    u8 a; /* +0x0: src/func_80415D10.c */
    u8 r; /* +0x1: src/func_80415D10.c */
    u8 g; /* +0x2: src/func_80415D10.c */
    u8 b; /* +0x3: src/func_80415D10.c */
};
typedef char Shared_CornerColor_size_check[(sizeof(Shared_CornerColor) == 0x4) ? 1 : -1];

#endif
