#include "common/types.h"
#include "span_1000/code_8025477C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_802BAC60_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_802BB5F0_de(s32 *, s32);
extern void func_802BB160_de(s32 *arg0, void *arg1, s32 arg2);
extern void func_802BB2A0_de(s32, s32, s32);

extern s32 D_800CD704;






s32 func_80255170_de(s32 *arg0, void *arg1) {
    char sp10[0x18];
    s32 sp28;
    s32 sp2C;
    s32 temp;

    func_802BAC60_de(sp10, (s32) &sp28, 1);
    temp = D_800CD8B8_de;
    ((func_80228774_S1 *)(arg1))->unk20 = sp10;
    D_800CD704 = 2;
    func_802BB5F0_de(arg0, temp);
    func_802BB160_de(&((func_80255110_S2 *)(arg0))->unk230, arg1, 1);
    func_802BB2A0_de((s32) sp10, (s32) &sp2C, 1);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD7C8_4[] = {0x00, 0x00, 0x00, 0x0E};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B28_4[] = {0x00, 0x00, 0x00, 0x0E};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE498_4[] = {0x00, 0x00, 0x00, 0x0E};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEE68_4[] = {0x00, 0x00, 0x00, 0x0E};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD8B8_4[] = {0x00, 0x00, 0x00, 0x0E};
#endif
