#include "span_1000/code_8029F304.h"
#include "span_C76B0/data.h"
#include "types.h"





void func_8029ED54_de(Mtx3x4_8029FD54 *arg0) {
    s32 col;
    s32 row;

    col = 0;
    row = 0;
    do {
        row = 0;
        do {
            arg0->m[row][col] = 0;
            row += 1;
        } while (row < 3);
        col += 1;
    } while (col < 3);
    arg0->m[0][0] = D_800C5CBC_de;
    arg0->m[1][1] = D_800C5CBC_de;
    arg0->m[2][2] = D_800C5CBC_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BEC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE4C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F5C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5F9C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5CBC_4 = 1.0f;
#endif
