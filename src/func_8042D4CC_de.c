#include "span_16E000/code_8042D1BC.h"
#include "types.h"

/* Releases the object D_800E53C0 holds through func_802547E4_de, clears D_800E53C0 and returns zero. */
extern void *D_800E1370;
extern void func_802547E4_de(void *);

s32 func_8042D4CC_de(void) {
    func_802547E4_de(D_800E1370);
    D_800E1370 = 0;
    return 0;
}
