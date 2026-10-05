#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80413728.h"
#include "types.h"

/* Stores a value in D_80153C8C, sets the write position D_80153C84 to row y of column x, the row
   stride being the halfword at offset 8 of the structure D_80153D58 points to, and calls the
   writer D_80153CDC points to. */


extern struct func_8022BECC_S2 *D_8014DAC8;
extern void (*D_8014DA4C)(void);
extern s32 D_8014D9F4;


void func_80413C94_de(s32 x, s32 y, s32 value) {
    D_8014D9FC = value;
    D_8014D9F4 = x + y * D_8014DAC8->unk8;
    D_8014DA4C();
}
