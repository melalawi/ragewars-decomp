#include "basetypes.h"

/* Stores a value in D_80153C8C, sets the write position D_80153C84 to row y of column x, the row
   stride being the halfword at offset 8 of the structure D_80153D58 points to, and calls the
   writer D_80153CDC points to. */
struct Layout {
    char pad[8];
    s16 stride;
};

extern struct Layout *D_80153D58;
extern void (*D_80153CDC)(void);
extern s32 D_80153C84;
extern s32 D_80153C8C;

void func_80413D14(s32 x, s32 y, s32 value) {
    D_80153C8C = value;
    D_80153C84 = x + y * D_80153D58->stride;
    D_80153CDC();
}
