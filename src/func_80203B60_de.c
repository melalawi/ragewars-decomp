#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_802170A0_de(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80285DB0_de(void *, void *, s32);
extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);

extern s32 D_8011BDC8;








void func_80203B60_de(void *arg0, void *arg1) {
    char *o0 = (char *) arg0;
    char *o1 = (char *) arg1;
    char *tmp;
    s32 masked;
    s32 *pFlag;

    tmp = ((func_80203B60_S1 *)(o0))->unk18 + 0x14;
    func_802170A0_de(arg0, arg1, 4, ((func_80203B60_S2 *)(tmp))->unkC, ((func_80203B60_S2 *)(tmp))->unk10);
    pFlag = &D_8011BDC8;
    ((func_80203B60_S3 *)(o1))->unk110 = 0;
    func_80285DB0_de(pFlag, arg0, 1);
    func_80278D78_de(arg0, 1, arg0);
    masked = ((func_80203B60_S1 *)(o0))->unk100 & 0xFFFEFFFF;
    ((func_80203B60_S1 *)(o0))->unk100 = masked;
    if (*pFlag != 4) {
        ((func_80203B60_S1 *)(o0))->unk100 = masked | 0x08000000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C1A20_14[] = {0x00206A74U, 0x00206BDCU, 0x00206C9CU, 0x00206B3CU, 0x00206D14U};
const float unbake_rodata_800C1A34_4 = (-0.512000024f);
const float unbake_rodata_800C1A38_4 = 0.512000024f;
const float unbake_rodata_800C1A3C_4 = 45.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C6BC8_8 = 4294967296.0;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1D40_28[] = {0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x0020583CU, 0x00205960U, 0x00205960U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1D80_28[] = {0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x0020583CU, 0x00205960U, 0x00205960U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1AA0_28[] = {0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x0020581CU, 0x00205940U, 0x00205940U};
#endif
