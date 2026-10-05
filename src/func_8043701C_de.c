#include "span_16E000/code_804366C4.h"
#include "types.h"

/* Releases the object D_800E5694 holds through func_802547E4_de, clears D_800E5694 and returns zero. */
extern void *D_800E1644_de;
extern void func_802547E4_de(void *);

s32 func_8043701C_de(void) {
    func_802547E4_de(D_800E1644_de);
    D_800E1644_de = 0;
    return 0;
}
