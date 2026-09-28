#include "basetypes.h"

/* Marks the pair ending at D_80154024 as set by storing one there, and stores its argument in the
   word before it; func_8042EB80 fills the pair ending at D_8015402C. */
extern s32 D_80154024;

void func_8042EB68(s32 value) {
    s32 *pair = &D_80154024;

    pair[0] = 1;
    pair[-1] = value;
}
