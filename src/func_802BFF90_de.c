#include "span_1000/code_802C4604.h"
/** Complex-multiply 128 (re,im) pairs in-place by per-element (a,b) factors. */
void func_802BFF90_de(float *arg0, float *arg1, float *arg2) {
    short i = 0;
    do {
        float re = arg0[i * 2];
        float im = arg0[i * 2 + 1];
        float a = arg1[i];
        float b = arg2[i];

        arg0[i * 2] = re * a - im * b;
        arg0[i * 2 + 1] = re * b + im * a;
        i++;
    } while (i < 0x80);
}
