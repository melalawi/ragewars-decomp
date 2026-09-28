#include "basetypes.h"

extern void func_8021CBAC(void *arg0, void *arg1);
extern s32 D_800CE47C;

#if defined(VERSION_US_REV1)
extern s32 D_800D0EBC;
#endif

/* Removes entity from list if owned by specific owner, with version-specific check. */
void func_8022A2FC(void *arg0, void *arg1) {
    void *var_s0;

#if defined(VERSION_US_REV1)
    if (D_800D0EBC != 0) {
        var_s0 = *(void **)((char *)arg0 + 0x20);
        if (var_s0 != 0) {
            do {
                if (*(void **)((char *)var_s0 + 0x5DC) == arg1 &&
                    *(s32 *)((char *)arg1 + 0x24) == 0 &&
                    *(u16 *)((char *)var_s0 + 0xE4) != D_800CE47C) {
                    func_8021CBAC(var_s0, arg1);
                }
                var_s0 = *(void **)((char *)var_s0 + 0x16E0);
            } while (var_s0 != 0);
        }
    }
#else
    var_s0 = *(void **)((char *)arg0 + 0x20);
    if (var_s0 != 0) {
        do {
            if (*(void **)((char *)var_s0 + 0x5DC) == arg1 &&
                *(s32 *)((char *)arg1 + 0x24) == 0 &&
                *(u16 *)((char *)var_s0 + 0xE4) != D_800CE47C) {
                func_8021CBAC(var_s0, arg1);
            }
            var_s0 = *(void **)((char *)var_s0 + 0x16E0);
        } while (var_s0 != 0);
    }
#endif
}
