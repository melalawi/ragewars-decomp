#include "span_1000/code_8026565C.h"
#include "types.h"

extern char D_800C8140_de;
extern char D_1087D;
extern char jtbl_800C19C0;
extern char D_63F8;
extern void *D_800DE7E0;
extern char D_389E;

/** Return whether an address lies within one of three recognized ranges. */
int func_80265784_de(u32 arg0) {
    if (arg0 >= (u32)&D_800C8140_de &&
        arg0 < (u32)&D_800C8140_de + (u32)&D_1087D) {
        return 1;
    }
    if (arg0 >= (u32)&jtbl_800C19C0 &&
        arg0 < (u32)&jtbl_800C19C0 + (u32)&D_63F8) {
        return 1;
    }
    if (arg0 >= (u32)&D_800DE7E0 &&
        arg0 < (u32)&D_800DE7E0 + (u32)&D_389E) {
        return 1;
    }
    return 0;
}
