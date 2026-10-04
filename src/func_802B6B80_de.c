#include "span_1000/code_802BB9D0.h"
#include "span_C76B0/data.h"
#include "types.h"




void func_802B6B80_de(s32 *arg0) {
    f32 matrix[16];
    u8 *diagBase;
    u8 *diag;
    u8 *elem;
    u8 *row;
    s32 r;
    s32 c;
    f32 one;
    s32 *outLo;
    s32 *outHi;
    f32 *inRow;
    f32 *inPair;
    f32 mult;
    u32 mask;
    f32 t1;
    f32 t0;
    s32 v0;
    s32 v1;
    s32 i;
    s32 j;

    r = 0;
    one = D_800C7880_de;
    diagBase = (u8 *)matrix;
    row = (u8 *)matrix;
    do {
        c = 0;
        diag = diagBase;
        elem = row;
        do {
            if (r == c) {
                *(f32 *)diag = one;
            } else {
                *(s32 *)elem = 0;
            }
            c++;
            elem += 4;
        } while (c < 4);
        diagBase += 0x14;
        r++;
        row += 0x10;
    } while (r < 4);

    outLo = arg0;
    outHi = arg0 + 8;
    i = 0;
    mult = D_800C7884_de;
    mask = 0xFFFF0000;
    inRow = matrix;
    do {
        j = 0;
        inPair = inRow;
        do {
            t1 = inPair[0] * mult;
            t0 = inPair[1] * mult;
            inPair += 2;
            j++;
            v0 = (s32)t1;
            v1 = (s32)t0;
            *outLo = (v0 & mask) | ((u32)v1 >> 16);
            outLo++;
            *outHi = ((v0 << 16) & mask) | (v1 & 0xFFFF);
            outHi++;
        } while (j < 2);
        i++;
        inRow += 4;
    } while (i < 4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C77A0_4 = 1.0f;
const float unbake_rodata_800C77A4_4 = 65536.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCAD0_4 = 1.0f;
const float unbake_rodata_800CCAD4_4 = 65536.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C8470_4 = 1.0f;
const float unbake_rodata_800C8474_4 = 65536.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8E40_4 = 1.0f;
const float unbake_rodata_800C8E44_4 = 65536.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7880_4 = 1.0f;
const float unbake_rodata_800C7884_4 = 65536.0f;
#endif
