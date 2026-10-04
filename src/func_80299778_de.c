#include "common/types.h"
#include "span_1000/code_80299FC4.h"
#include "types.h"

extern s32 D_80146E00;



void func_80299778_de(s32 arg0, s32 arg1, s32 arg2)
{
    s32 index;
    s32 count;
    Rec_func_8024C92C_de *ptr;

    index = -1;
    count = 0;
    ptr = D_80146E00 + 0x1C;
loop:
    if (ptr->x != arg0) {
        goto not_found;
    }
    index = count;
    goto found;
not_found:
    count += 1;
    ptr += 1;
    if (count < 0x40) {
        if (ptr) {
            goto loop;
        } else {
            goto loop;
        }
    }
found:
    ptr = &((Rec_func_8024C92C_de *)(D_80146E00 + 0x1C))[index];
    if (arg1 == 1) {
        ptr->y = arg2;
        ptr->z = 0;
        return;
    }
    ptr->z = arg2;
}
