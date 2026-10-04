#include "span_1000/code_80276544.h"
/* Darkens a colour by a percentage: with a non-zero percentage each channel becomes the channel scaled by one hundredth of (100 minus the percentage), and with zero the channels are copied unchanged. */

void func_80276B44_de(unsigned char percent, unsigned char r, unsigned char g, unsigned char b,
                   unsigned char *outR, unsigned char *outG, unsigned char *outB) {
    int remaining;

    if (percent != 0) {
        remaining = 100 - percent;
        *outR = (unsigned int)(r * 0.01f * remaining);
        *outG = (unsigned int)(g * 0.01f * remaining);
        *outB = (unsigned int)(b * 0.01f * remaining);
    } else {
        *outR = r;
        *outG = g;
        *outB = b;
    }
}
