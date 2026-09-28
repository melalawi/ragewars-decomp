#include "basetypes.h"

extern s32 D_800D0D58;
extern void func_8025E194(s32 arg0);

void func_8025CAD0(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = *(void **)((char *)arg0 + 0x14);
    if (var_s0 != 0) {
        do {
            func_8025E194(*(s32 *)((char *)var_s0 + 8));
            temp_v0 = *(s32 *)((char *)var_s0 + 8);
            var_s0 = *(void **)((char *)var_s0 + 4);
            D_800D0D58 = temp_v0;
        } while (var_s0 != 0);
    }
    *(s32 *)((char *)arg0 + 0x28) = 1;
}
