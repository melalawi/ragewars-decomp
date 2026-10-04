#include "span_1000/code_802BB9D0.h"
#include "span_C76B0/data.h"
#include "types.h"



void func_802B6C6C_de(u8 *arg0) {
    u8 *diag;
    u8 *elem;
    s32 r;
    s32 c;
    f32 one;

    r = 0;
    one = D_800C7888_de;
    diag = arg0;
    do {
        c = 0;
        elem = arg0;
        do {
            if (r == c) {
                *(f32 *)diag = one;
            } else {
                *(s32 *)elem = 0;
            }
            c += 1;
            elem += 4;
        } while (c < 4);
        diag += 0x14;
        r += 1;
        arg0 += 0x10;
    } while (r < 4);
}
