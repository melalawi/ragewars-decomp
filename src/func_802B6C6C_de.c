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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C77A8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCAD8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C8478_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8E48_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7888_4 = 1.0f;
#endif
