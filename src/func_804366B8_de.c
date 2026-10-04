#include "span_16E000/code_80435CF0.h"
#include "types.h"

/* Stores arg0 into its own D_80146417 entry and pushes the five settings of slot arg0 of the D_80102C89 table into the objects D_800E5690 holds through func_8041AD10_de and func_8041A6EC_de. */


extern struct State_func_804366B8_de *D_800E1640_de;
extern s8 D_800FEC89[];
extern u8 D_800FEC8A[];
extern u8 D_800FEC8B[];
extern u8 D_800FEC8C[];
extern u8 D_800FEC8D[];
extern u8 D_80142357[];
extern void func_8041AD10_de(void *, s32);
extern void func_8041A6EC_de(void *, s32);

void func_804366B8_de(s32 arg0) {
    u8 *slot = &D_80142357[arg0 * 0x96];

    *slot = arg0;
    func_8041AD10_de(D_800E1640_de->a, D_800FEC89[arg0 * 0x190]);
    func_8041AD10_de(D_800E1640_de->b, D_800FEC8A[arg0 * 0x190]);
    func_8041A6EC_de(D_800E1640_de->c, D_800FEC8B[arg0 * 0x190]);
    func_8041A6EC_de(D_800E1640_de->d, D_800FEC8C[arg0 * 0x190]);
    func_8041AD10_de(D_800E1640_de->e, D_800FEC8D[arg0 * 0x190]);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCC89_1[] = {0x24};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEC89_1[] = {0x20};
#endif
