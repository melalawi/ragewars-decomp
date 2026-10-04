#include "span_1000/code_8027ED40.h"
#include "types.h"

extern u8 D_80142223;




s32 func_802833DC_de(void *arg0) {
    s32 result;

    result = 0;
    if ((*(((func_80283038_S1 *)((arg0)))->unk118)) & 0x02000000) {
        if ((((func_80283038_S1 *)((arg0)))->unk5C) & 2) {
            result = 2;
        } else if (D_80142223 == 2) {
            result = 1;
        }
    }
    return result;
}
