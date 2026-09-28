#include "basetypes.h"

extern f32 D_800C6FD0;
extern void *D_8013B388;

void func_8020EE50(void) {
    void *var_a0;
    f32 k;

    var_a0 = D_8013B388;
    if (var_a0 != 0) {
        k = D_800C6FD0;
        do {
            *(f32 *) ((char *) var_a0 + 0x18) =
                *(f32 *) ((char *) var_a0 + 0x18) +
                (f32) (*(s32 *) ((char *) var_a0 + 0x38) * 0x1E) * k;
            var_a0 = *(void **) ((char *) var_a0 + 0x10);
        } while (var_a0 != 0);
    }
}
