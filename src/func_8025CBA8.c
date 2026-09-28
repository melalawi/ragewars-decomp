#include "basetypes.h"

extern s32 func_8025E114(s32 arg0);

void func_8025CBA8(void *arg0) {
    void *var_s0;

    if (*(s32 *)((char *)arg0 + 0x28) == 0) {
        var_s0 = *(void **)((char *)arg0 + 0x14);
        if (var_s0 != 0) {
            do {
                if (func_8025E114(*(s32 *)((char *)var_s0 + 8)) == 0) {
                    *(s32 *)((char *)var_s0 + 0xC) = -1;
                    *(s32 *)((char *)var_s0 + 8) = -1;
                }
                var_s0 = *(void **)((char *)var_s0 + 4);
            } while (var_s0 != 0);
        }
    }
}
