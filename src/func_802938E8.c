#include "basetypes.h"

extern s32 D_8010F194;
extern f32 D_800CA588;

s32 func_802938E8(s32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    s32 *flag = &D_8010F194;

    if ((*flag != 0) && (arg3 != -1)) {
        *(s8 *)(arg0 + 0x26DC1) = 2;
        *(s32 *)(arg0 + 0x26DBC) = arg3;
        *flag = 0;
        return 1;
    }
    if ((arg1 * D_800CA588) < *(f32 *)(arg0 + 0x26DB0)) {
        *(s8 *)(arg0 + 0x26DC1) = 2;
        *(s32 *)(arg0 + 0x26DBC) = arg2;
        return 1;
    }
    return 0;
}
