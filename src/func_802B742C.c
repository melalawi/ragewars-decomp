#include "basetypes.h"

s32 func_802B742C(void *arg0) {
    u8 *p;
    s32 b;
    s32 val;

    p = *(u8 **)((char *)arg0 + 8);
    b = *p;
    *(u8 **)((char *)arg0 + 8) = p + 1;
    val = b;
    if (val & 0x80) {
        val = val & 0x7F;
        do {
            p = *(u8 **)((char *)arg0 + 8);
            b = *p;
            *(u8 **)((char *)arg0 + 8) = p + 1;
            val = (val << 7) + (b & 0x7F);
        } while (b & 0x80);
    }
    return val;
}
