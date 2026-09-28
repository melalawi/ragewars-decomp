#include "basetypes.h"

/* Stores a pair of words: the second argument in D_8015402C and the first in the word before
   it; func_8042EB68 does the same for the pair ending at D_80154024. */
extern s32 D_8015402C;

void func_8042EB80(s32 first, s32 second) {
    s32 *pair = &D_8015402C;

    pair[0] = second;
    pair[-1] = first;
}
