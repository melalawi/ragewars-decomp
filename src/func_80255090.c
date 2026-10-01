#include "basetypes.h"

extern void func_802BFD50(void *arg0, s32 arg1, s32 arg2);
extern void func_802A101C(void *arg0, s32 arg1, s32 arg2);
extern void func_802BFD80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802C0840(s32 arg0);
extern s32 D_800D2B1C;
extern s32 D_255220;

void func_80255090(s32 arg0, s32 arg1) {
    func_802BFD50((void *)(arg0 + 0x230), arg0 + 0x248, 0x80);
    func_802A101C((void *)(arg0 + 0x448), arg1, 0x1000);
    func_802BFD80(arg0, arg1, &D_255220, arg0, arg0 + 0x1448, D_800D2B1C);
    func_802C0840(arg0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD7BC_8[] = {0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B1C_8[] = {0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE48C_8[] = {0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEE5C_8[] = {0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD8AC_8[] = {0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C};
#endif
