#include "span_1000/code_80233C78.h"
#include "types.h"
typedef void (*FuncPtr)(void);

extern char D_800CB380_de[];




void func_802390F4_de(void *arg0, s16 arg1) {
    FuncPtr fn;

    ((func_802390E4_S1 *)(arg0))->unk14 = arg1;
    ((func_802390E4_S1 *)(arg0))->unk18 = 0;
    ((func_802390E4_S1 *)(arg0))->unk1C = 0;
    ((func_802390E4_S1 *)(arg0))->unk20 = 0;
    fn = *(FuncPtr *)(D_800CB380_de + (((func_802390E4_S1 *)(arg0))->unk14 * 8));
    if (fn != 0) {
        fn();
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CB290_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D05C0_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CBF60_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CC930_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CB380_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
