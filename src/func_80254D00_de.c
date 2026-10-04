#include "common/types.h"
#include "span_1000/code_8025477C.h"
#include "types.h"

extern void func_80254D44_de(s32 arg0, s32 arg1);



void func_80254D00_de(void) {
    s32 *p = &D_801005A8;
    func_80254D44_de(0, *p);
    D_80100598[*p] = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED202_4[] = {0x00, 0xF3, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801002B4_4[] = {0x00, 0xE0, 0x3A, 0x05};
#endif
