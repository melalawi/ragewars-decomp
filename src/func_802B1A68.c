#include "basetypes.h"

/* Waits for bit 0 of the cartridge-domain status byte D_B2000015 to equal arg0, polling only while the low two status bits func_802BDEA0 reports are clear, returning 1 on a match and, after D_800D3650 retries of two polls each, setting D_8014D3E8 and returning 0. Adapted from func_802B19C0 with the timeout reload 0x4E20 changed to 1 and the mask held as a byte. */

extern s32 D_800D3650;
extern s32 D_8014D3E8;
extern u8 D_B2000015;

extern u32 func_802BDEA0(void);

s32 func_802B1A68(u32 arg0) {
    s32 retries;
    s32 result;
    s32 timeout;
    u8 mask;
    s32 value;
    s32 expected;

    retries = D_800D3650;
    mask = 1;
    result = 0;
    timeout = 1;
    expected = arg0 & 0xFF;
    do {
        do {
        } while (func_802BDEA0() & 3);
        value = D_B2000015 & mask;
        if (value == expected) {
            result = 1;
            goto done;
        }
        if (timeout-- == 0) {
            retries--;
            timeout = 1;
        }
    } while (retries > 0);
    D_8014D3E8 = 1;
done:
    return result;
}
