#include "basetypes.h"

extern s32 func_8029EB58(s32 arg0);
extern unsigned int func_8029AB4C(void);
extern void func_802A2D14(void *arg0);
extern s32 func_8025DF54(s32);

s32 func_802A2F3C(void *arg0, s32 unused1, s32 unused2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    temp_s0 = func_8029EB58(arg4);
    if (temp_s0 < (s32)func_8029AB4C()) {
        *(s32 *)((char *)arg0 + 0x5C) = 2;
        *(s32 *)((char *)arg0 + 0x48) = 0;
    }
    if (arg3 != 1) {
        return 0;
    }
    *(s32 *)((char *)arg0 + 0x5C) = 0;
    func_802A2D14(arg0);
    func_8025DF54(0xE81);
    return 0;
}
