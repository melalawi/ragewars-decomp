#include "span_1000/code_8026565C.h"
#include "types.h"

/* Tests whether an address lies in either recognized resident range. */
extern char D_00200500;
extern char D_C0DA8;
extern char D_00400000;
extern char D_48B38;

int func_80265878_de(u32 arg0) {
    if (arg0 >= (u32)&D_00200500 &&
        arg0 < (u32)&D_00200500 + (u32)&D_C0DA8) {
        return 1;
    }
    if (arg0 >= (u32)&D_00400000 &&
        arg0 < (u32)&D_00400000 + (u32)&D_48B38) {
        return 1;
    }
    return 0;
}

