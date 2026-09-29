#include "basetypes.h"

extern void *jtbl_800C8DC8[];

typedef struct func_8024E148_S1 func_8024E148_S1;
struct func_8024E148_S1 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    u32 unk100;
};

/** Return whether this object is active for its current behavior class. */
s32 func_8024E148(void *arg0) {
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
        goto *jtbl_800C8DC8[type];
    }
return_zero:
    return 0;
}
