#include "span_1000/code_802B033C.h"
#include "span_1000/code_802BDDB8.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Waits for bit 1 of the cartridge-domain status byte D_B2000015 to equal arg0, polling only while the low two status bits func_802BDEA0_us_rev1 reports are clear, returning 1 on a match and, after D_800D3650 retries of 0x4E21 polls each, setting D_8014D3E8 and returning 0. Adapted from func_802B19C0_us_rev1 with the mask bit 1 and the expected value held as a byte. */


extern s32 D_8014D3E8;
extern u8 D_B2000015;



s32 func_802B1C68_us_rev1(u32 arg0) {
    s32 retries;
    s32 result;
    s32 timeout;
    s32 mask;
    s32 value;
    u8 expected;

    mask = 0x2;
    retries = D_800D3650;
    expected = (arg0 << 1) & 0xFF;
    result = 0;
    timeout = 0x4E20;
    do {
        do {
        } while (func_802BDEA0_us_rev1() & 3);
        value = D_B2000015 & mask;
        if (value == expected) {
            result = 1;
            goto done;
        }
        if (timeout-- == 0) {
            retries--;
            timeout = 0x4E20;
        }
    } while (retries > 0);
    D_8014D3E8 = 1;
done:
    return result;
}
