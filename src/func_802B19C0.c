#include "basetypes.h"

extern s32 D_800D3650;
extern s32 D_8014D3E8;
extern u8 D_B2000015;

extern u32 func_802BDEA0(void);

s32 func_802B19C0(u32 arg0) {
    s32 retries;
    s32 result;
    s32 timeout;
    s32 mask;
    s32 value;
    s32 expected;

    retries = D_800D3650;
    mask = 1;
    result = 0;
    timeout = 0x4E20;
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
            timeout = 0x4E20;
        }
    } while (retries > 0);
    D_8014D3E8 = 1;
done:
    return result;
}
