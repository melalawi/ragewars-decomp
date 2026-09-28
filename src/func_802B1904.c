/* Waits for the masked byte at offset 1 of a status block to equal a given value, polling only while the low two status bits func_802BDEA0 reports are clear, returning 1 on a match and, after D_800D3650 retries of the given poll count each, setting D_8014D3E8 and returning 0. Adapted from func_802B1A68 with the status address, mask, expected value and timeout reload taken from the arguments. */
#include "basetypes.h"

extern s32 D_800D3650;
extern s32 D_8014D3E8;

extern u32 func_802BDEA0(void);

s32 func_802B1904(u8 *status, u8 mask, u32 arg2, s32 reload) {
    s32 retries;
    s32 result;
    s32 timeout;
    s32 value;
    s32 expected;

    retries = D_800D3650;
    result = 0;
    timeout = reload;
    expected = arg2 & 0xFF;
    do {
        do {
        } while (func_802BDEA0() & 3);
        value = mask & status[1];
        if (value == expected) {
            result = 1;
            goto done;
        }
        if (timeout-- == 0) {
            retries--;
            timeout = reload;
        }
    } while (retries > 0);
    D_8014D3E8 = 1;
done:
    return result;
}
