#include "basetypes.h"

extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern s32 D_800D0D5C;

void func_8025CB2C(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = *(void **)((char *)arg0 + 0x14);
    if (var_s0 != 0) {
        do {
            temp_v0 = func_8025DE74(*(s16 *)((char *)var_s0 + 0xE),
                                     *(s32 *)((char *)var_s0 + 0x10),
                                     *(s32 *)((char *)var_s0 + 0x14),
                                     *(s32 *)((char *)var_s0 + 0x18),
                                     *(s32 *)((char *)var_s0 + 0x1C),
                                     -1);
            *(s32 *)((char *)var_s0 + 8) = temp_v0;
            var_s0 = *(void **)((char *)var_s0 + 4);
            D_800D0D5C = temp_v0;
        } while (var_s0 != 0);
    }
    *(s32 *)((char *)arg0 + 0x28) = 0;
}
