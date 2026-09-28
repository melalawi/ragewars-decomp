#include "basetypes.h"

extern void func_8023941C(void *arg0);
extern void func_8021EED8(void *arg0, void *arg1);
extern s32 D_800D0EBC;

/* Notifies the entity list associated with arg0 about arg1 and calls a handler for each owner. */
void func_8022A37C(void *arg0, void *arg1) {
    void *var_s0;

    if (D_800D0EBC != 0) {
        func_8023941C(arg1);
        var_s0 = *(void **)((char *)arg0 + 0x20);
        if (var_s0 != 0) {
            do {
                if (*(void **)((char *)var_s0 + 0x5DC) == arg1) {
                    func_8021EED8(var_s0, arg1);
                }
                var_s0 = *(void **)((char *)var_s0 + 0x16E0);
            } while (var_s0 != 0);
        }
    }
}
