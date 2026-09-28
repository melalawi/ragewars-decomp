#include "basetypes.h"

extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);
extern int func_802BEE60(void);
extern s32 D_800CCC30;
extern s32 D_800CCC34;

s32 func_802C0150(s32 arg0, s32 *arg1) {
    if (arg0 & 3) {
        func_802BFD40(&D_800CCC30, &D_800CCC34, 0x33);
    }
    if (arg1 == 0) {
        func_802BFD40(&D_800CCC30, &D_800CCC34, 0x34);
    }
    if (func_802BEE60() != 0) {
        return -1;
    }
    *arg1 = *(s32 *)(arg0 | 0xA0000000);
    return 0;
}
