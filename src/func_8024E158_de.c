#include "span_1000/code_8024DF4C.h"
#include "types.h"

extern void *jtbl_800C3CD8[];




/** Return whether this object is active for its current behavior class. */
s32 func_8024E158_de(void *arg0) {
    static void *type_labels[0] __attribute__((section(".sdata"))) = {
        &&return_one, &&return_one, &&return_zero, &&return_zero, &&return_one,
        &&return_zero, &&return_zero, &&return_one, &&return_one
    };
    if (*(u8 *)arg0 == 1) {
        if ((((func_8024E148_S1 *)(arg0))->unk100 & 0x300000) != 0) {
            goto return_one;
        }
    }
    goto check_type;

return_one:
    return 1;

check_type:
    {
        s32 type = *((func_8024E148_S1 *)(arg0))->unk18 - 1;
        if ((u32)type >= 9) {
            goto return_zero;
        }
        goto *jtbl_800C3CD8[type];
    }
return_zero:
    return 0;
}
