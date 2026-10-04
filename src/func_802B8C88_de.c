#include "span_1000/code_802BD198.h"
#include "types.h"
/* __osContDataCrc, drafted from ultralib src/io/crc.c (the branch before 2.0J): the CRC of a
   32-byte Controller Pak block with generator 0x85, flushed with eight zero bits. */

u8 func_802B8C88_de(u8 *data)
{
    u8 temp = 0;
    u8 temp2;
    int i;
    int j;

    for (i = 0; i <= 32; i++) {
        for (j = 7; j > -1; j--) {
            temp2 = (temp & 0x80) ? 0x85 : 0;

            temp <<= 1;

            if (i == 32) {
                temp &= -1;
            } else {
                temp |= ((*data & (1 << j)) ? 1 : 0);
            }

            temp ^= temp2;
        }
        data++;
    }
    return temp;
}
