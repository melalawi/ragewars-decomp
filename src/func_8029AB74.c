#include "basetypes.h"

extern s32 func_80252FFC(s32 arg0);
extern s32 func_802A1724(s32 arg0, s32 unused1, s32 arg2);

void func_8029AB74(void *arg0, s32 arg1, s32 arg2) {
    if ((*(s32 *)((s8 *)arg0 + 0)) == 0) {
        *(s32 *)((s8 *)arg0 + 0) = func_80252FFC(arg2);
        *(s32 *)((s8 *)arg0 + 0xC) = 0;
        *(s32 *)((s8 *)arg0 + 4) = arg2;
    }
    {
        s32 t_c = *(s32 *)((s8 *)arg0 + 0xC);
        s32 t_0 = *(s32 *)((s8 *)arg0 + 0);
        func_802A1724(t_0 + t_c, arg1, arg2);
    }
    *(s32 *)((s8 *)arg0 + 0xC) = (*(s32 *)((s8 *)arg0 + 0xC)) + arg2;
}
