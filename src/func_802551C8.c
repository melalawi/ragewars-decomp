#include "basetypes.h"

extern s32 func_802C06E0(s32 *, s32);
extern s32 D_800D2B1C;
extern s32 D_800D2B28;

s32 func_802551C8(s32 *arg0) {
    if (*(s32 *)((char *)arg0 + 0x238) != 0) {
        do {
            func_802C06E0(arg0, D_800D2B28);
        } while (*(s32 *)((char *)arg0 + 0x238) != 0);
    }
    return func_802C06E0(arg0, D_800D2B1C);
}
