#include "common/types.h"
#include "span_1000/code_80260D98.h"
#include "span_1000/types.h"
#include "types.h"






void func_802610A8_de(void *arg0, s32 arg1) {
    s32 count;
    s8 *ptr;
    s32 magic;

    count = 1;
    (*(s32 *)arg0) = arg1;
    ((func_80203E78_S1 *)arg0)->unk4 = ((arg1 * 4) + 0xF) & ~7;
    if (arg1 > 0) {
        magic = 0xDEADBEEF;
        ptr = &((func_8025BD20_S1 *)((arg0)))->unk4;
        do {
            (((func_80203E78_S1 *)(ptr))->unk4) = magic;
            count += 1;
            ptr += 4;
        } while (arg1 >= count);
    }
}
