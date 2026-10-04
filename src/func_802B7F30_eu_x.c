#include "common/types.h"
#include "span_1000/code_802BC630.h"
#include "span_1000/code_802BDDB8.h"
#include "span_1000/types.h"
#include "types.h"





extern void *D_800D4350[];
extern u8 D_80147220;
extern u8 D_80147350[];
extern u8 D_80147450;
extern u8 D_8014DE80[];


extern s32 func_802B9CB0_de(s32, s32);
extern void func_802BB2A0_de(s32, s32, s32);
extern u32 func_802B8C88_de(void *arg0);


u32 func_802B7F30_eu_x(Triple *arg0) {
    Block40 saved;
    u8 *source;
    s32 i;

    source = D_8014DE80;
    if (D_800D4350[arg0->z] == 0) {
        return 5;
    } else {
        u32 result;
        s32 count;

        func_802B9C14_de();
        D_80147220 = 3;
        func_802B9CB0_de(1, &D_80147350[arg0->z << 6]);
        func_802BB2A0_de(arg0->y, 0, 1);
        func_802B9CB0_de(0, D_8014DE80);
        func_802BB2A0_de(arg0->y, 0, 1);
        count = arg0->z;
        if (count != 0) {
            i = 0;
            if (count > 0) {
                do {
                    i++;
                    source++;
                } while (i < count);
            }
        }
        saved = *(Block40 *)source;
        result = (saved.bytes[2] & 0xC0) >> 4;
        if ((result == 0) && ((func_802B8C88_de(&D_80147450) & 0xFF) != saved.bytes[0x26])) {
            result = 4;
        }
        func_802B9C80_de();
        return result;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D8380_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E49D0_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DFB90_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D4350_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#endif
