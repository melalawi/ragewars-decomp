#include "basetypes.h"

extern void func_802A98E0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_802ABB6C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    if (arg5 != 0) {
        func_802A98E0(arg0, arg1, arg2, arg3, arg4, 1, arg6, arg7);
    }
    func_802A98E0(arg0, arg1, arg2, arg3, arg4, 0, arg6, arg7);
}
