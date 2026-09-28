#include "basetypes.h"

u8 *func_802A125C(u8 *arg0, u8 *arg1) {
    u8 *dst;
    u8 c;

    c = *arg1;
    arg1++;
    *arg0 = c;
    dst = arg0 + 1;
    if (c != 0) {
        do {
            c = *arg1;
            arg1++;
            *dst = c;
            dst++;
        } while (c != 0);
    }
    return arg0;
}
