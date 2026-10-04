#include "span_16E000/code_8043847C.h"
#include "types.h"

/* Releases the object D_800E58A0 holds through func_802547E4_de, clears D_800E58A0 and returns zero. */
extern void *D_800E1850;
extern void func_802547E4_de(void *);

s32 func_80438FE0_de(void) {
    func_802547E4_de(D_800E1850);
    D_800E1850 = 0;
    return 0;
}
