#include "span_1000/code_8027230C.h"
#include "types.h"

void func_80273040_de(f32 *arg0, f32 *arg1) {
    char *a0;
    char *a2;
    char *v1;
    s32 col;
    s32 row;
    s32 coloff;
    f32 last;

    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    arg0[4] = arg1[4];
    arg0[5] = arg1[5];
    arg0[6] = arg1[6];
    arg0[7] = arg1[7];
    arg0[8] = arg1[8];
    arg0[9] = arg1[9];
    arg0[10] = arg1[10];
    arg0[11] = arg1[11];
    arg0[12] = arg1[12];
    arg0[13] = arg1[13];
    arg0[14] = arg1[14];
    last = arg1[15];
    col = 0;
    arg0[15] = last;

    a0 = (char *)arg0;
    do {
        row = 0;
        coloff = col * 4;
        a2 = a0;
        v1 = (char *)arg1;
        do {
            *(f32 *)a2 = *(f32 *)(coloff + (s32)v1);
            v1 += 0x10;
            row += 1;
            a2 += 4;
        } while (row < 3);
        col += 1;
        a0 += 0x10;
    } while (col < 3);
}
