#include "basetypes.h"

extern s32 func_802C0390(s32 arg0, s32 arg1, s32 arg2);
extern u32 func_802BFE70(void *object);
extern s32 D_8010FBC0;
extern s32 D_800D0E5C;

s32 func_8026451C(s32 arg0) {
    s32 result;

    result = func_802C0390((s32)&D_8010FBC0, 0, arg0) == 0;
    if (result != 0) {
        D_800D0E5C = func_802BFE70(0);
    }
    return result;
}
