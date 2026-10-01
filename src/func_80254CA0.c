#include "basetypes.h"

extern void func_80254CE4(s32 arg0, s32 arg1);
extern s32 D_801045A8;
extern s32 D_80104598[];

void func_80254CA0(void) {
    s32 *p = &D_801045A8;
    func_80254CE4(0, *p);
    D_80104598[*p] = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED202_4[] = {0x00, 0xF3, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801002B4_4[] = {0x00, 0xE0, 0x3A, 0x05};
#endif
