#include "span_16E000/code_8042D1BC.h"
#include "types.h"

/* Marks the pair ending at D_80154024 as set by storing one there, and stores its argument in the
   word before it; func_8042E9A0_de fills the pair ending at D_8015402C. */
extern s32 D_8014DD94;

void func_8042E988_de(s32 value) {
    s32 *pair = &D_8014DD94;

    pair[0] = 1;
    pair[-1] = value;
}
