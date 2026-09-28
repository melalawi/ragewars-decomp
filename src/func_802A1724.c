#include "basetypes.h"

extern s32 func_802A0470(void);

s32 func_802A1724(s32 arg0, s32 unused1, s32 arg2) {
    s32 result;

    result = arg0;
    if (arg2 != 0) {
        result = func_802A0470();
    }
    return result;
}
