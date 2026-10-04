#include "span_16E000/code_8043847C.h"
#include "types.h"

/* Releases the object D_800E58A4 holds through func_802547E4_de, clears D_800E58A4 and returns zero. */
extern void *D_800E1854_de;
extern void func_802547E4_de(void *);

s32 func_804392D0_de(void) {
    func_802547E4_de(D_800E1854_de);
    D_800E1854_de = 0;
    return 0;
}
