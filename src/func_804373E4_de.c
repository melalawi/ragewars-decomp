#include "span_16E000/code_80436D48.h"
#include "types.h"

/* Releases the object D_800E5780 holds through func_802547E4_de, clears D_800E5780 and returns zero. */
extern void *D_800E1730;
extern void func_802547E4_de(void *);

s32 func_804373E4_de(void) {
    func_802547E4_de(D_800E1730);
    D_800E1730 = 0;
    return 0;
}
