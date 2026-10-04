#include "span_1000/code_802BD198.h"
/** CRC-5-style bit-shuffle: 16 rounds folding bit 10 of arg0 with a rotating tap. */
int func_802B8C40_de(unsigned int arg0) {
    int var_a1;
    int var_a2;
    int var_a3;
    unsigned int var_a0;
    unsigned int temp_v1;
    int temp_v0;

    var_a0 = arg0;
    var_a1 = 0;
    var_a3 = 0xF;
    do {
        var_a2 = 0;
        if (var_a1 & 0x10) {
            var_a2 = 0x15;
        }
        var_a1 = var_a1 * 2;
        temp_v1 = var_a0 >> 10;
        var_a0 = var_a0 * 2;
        temp_v0 = ((var_a1 & 0xFF) | (temp_v1 & 1)) ^ var_a2;
        var_a1 = temp_v0;
        var_a3 -= 1;
    } while (var_a3 >= 0);
    return temp_v0 & 0x1F;
}
