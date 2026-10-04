#include "span_16E000/code_8042D1BC.h"
#include "types.h"

/* Stores a pair of words: the second argument in D_8015402C and the first in the word before
   it; func_8042E988_de does the same for the pair ending at D_80154024. */
extern s32 D_8014DD9C;

void func_8042E9A0_de(s32 first, s32 second) {
    s32 *pair = &D_8014DD9C;

    pair[0] = second;
    pair[-1] = first;
}
