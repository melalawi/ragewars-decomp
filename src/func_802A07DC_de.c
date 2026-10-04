#include "span_1000/code_802A137C.h"
#include "types.h"

u8 *func_802A07DC_de(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p;
    s32 count;

    p = arg0;
    count = arg2;
    if (count != 0) {
        arg1 = arg1 & 0xFF;
loop:
        if (*p != arg1) {
            count -= 1;
            p += 1;
            if (count != 0) {
                goto loop;
            }
        }
    }
    if (count == 0) {
        return 0;
    }
    return p;
}
