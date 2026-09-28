#include "basetypes.h"

extern f32 func_8027638C(u16 *arg0, f32 arg1, u16 arg2);

f32 func_8027625C(u16 *arg0, f32 arg1) {
    f32 result = arg1;
    if (arg0 != 0) {
        result = func_8027638C(arg0, arg1, *arg0);
    }
    return result;
}
