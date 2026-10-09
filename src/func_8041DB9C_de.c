#include "span_16E000/code_8041BEA8.h"
#include "types.h"

/* Releases the object D_800E3590 holds through func_802547E4_de, clears D_800E3590 and returns zero. */
extern void *D_800DF540;
extern void func_802547E4_de(void *);

s32 func_8041DB9C_de(void) {
    func_802547E4_de(D_800DF540);
    D_800DF540 = 0;
    return 0;
}
