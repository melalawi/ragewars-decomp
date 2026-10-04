#include "span_1000/code_802C4604.h"
/** Interleave the first and mirrored halves of 128 float pairs. */
void func_802BFF30_de(float *arg0, float *arg1) {
    short i = 0;
    do {
        arg0[i * 2] = arg1[i * 2];
        arg0[i * 2 + 1] = arg1[(255 - i * 2)];
        i++;
    } while (i < 128);
}
