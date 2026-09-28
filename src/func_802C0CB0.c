#include "basetypes.h"

extern s32 func_802C2170(void);

s32 func_802C0CB0(s32 arg0) {
    if (arg0 < 0 && (u32)arg0 <= 0x9FFFFFFFU) {
        return arg0 & 0x1FFFFFFF;
    }
    if ((u32)(arg0 + 0x60000000) > 0x1FFFFFFFU) {
        return func_802C2170();
    }
    return arg0 & 0x1FFFFFFF;
}
