#include "span_1000/code_80276544.h"
#include "types.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/* Blends a colour toward the grey of its brightest channel: with amount (0-100) zero it copies r, g, b to the outputs, otherwise each output is (channel * (100 - amount) + max(r, g, b) * amount) / 100. */
void func_80276968_de(u8 amount, u8 r, u8 g, u8 b, u8 *outR, u8 *outG, u8 *outB) {
    s32 rest;
    s32 top;

    if (amount != 0) {
        rest = 100 - amount;
        top = MAX(r, MAX(g, b));
        *outR = (r * rest + top * amount) * 0.01f;
        *outG = (g * rest + top * amount) * 0.01f;
        *outB = (b * rest + top * amount) * 0.01f;
    } else {
        *outR = r;
        *outG = g;
        *outB = b;
    }
}
