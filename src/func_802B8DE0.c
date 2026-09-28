#include "basetypes.h"

extern char D_800CC7C0;
extern char D_800CC7C4;
extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);

s32 func_802B8DE0(void *arg0, void **arg1) {
    s32 var_s0;
    void *var_a0;

    var_s0 = 0x7FFFFFFF;
    if (*(void **)arg0 == 0) {
        func_802BFD40(&D_800CC7C0, &D_800CC7C4, 0x133);
    }
    *arg1 = 0;
    var_a0 = *(void **)arg0;
    if (var_a0 != 0) {
        do {
            if ((*(s32 *)((char *)var_a0 + 0x10) - *(s32 *)((char *)arg0 + 0x20)) < var_s0) {
                *arg1 = var_a0;
                var_s0 = *(s32 *)((char *)var_a0 + 0x10) - *(s32 *)((char *)arg0 + 0x20);
            }
            var_a0 = *(void **)var_a0;
        } while (var_a0 != 0);
    }
    return *(s32 *)((char *)*arg1 + 0x10);
}
