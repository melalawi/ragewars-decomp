#include "basetypes.h"

extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);
extern int func_802BEE60(void);
extern s32 D_800CCC50;
extern s32 D_800CCC54;

s32 func_802C01E0(s32 arg0, s32 arg1) {
    if (arg0 & 3) {
        func_802BFD40(&D_800CCC50, &D_800CCC54, 0x34);
    }
    if (func_802BEE60() != 0) {
        return -1;
    }
    *(s32 *)(arg0 | 0xA0000000) = arg1;
    return 0;
}
