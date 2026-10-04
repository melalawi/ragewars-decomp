#include "span_1000/code_802B033C.h"
#include "span_1000/code_802BDDB8.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Waits for the masked byte at offset 1 of a status block to equal a given value, polling only while the low two status bits func_802BDEA0_us_rev1 reports are clear, returning 1 on a match and, after D_800D3650 retries of the given poll count each, setting D_8014D3E8 and returning 0. Adapted from func_802B1A68_us_rev1 with the status address, mask, expected value and timeout reload taken from the arguments. */


extern s32 D_8014D3E8;



s32 func_802B1904_us_rev1(u8 *status, u8 mask, u32 arg2, s32 reload) {
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
        } while (func_802BDEA0_us_rev1() & 3);
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
