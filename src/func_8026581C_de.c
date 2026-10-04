#include "span_1000/code_8026565C.h"
#include "types.h"
/* Returns whether an address lies in either of two resident memory ranges. */
extern char D_800E4000, D_80166000, D_8014CEB0, D_8014DE3A;
int func_8026581C_de(u32 address) {
    if (address >= (u32)&D_800E4000 && address < (u32)&D_80166000) return 1;
    if (address >= (u32)&D_8014CEB0 && address < (u32)&D_8014DE3A) return 1;
    return 0;
}
