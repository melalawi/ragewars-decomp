#include "basetypes.h"

extern f32 D_800C6FD0;
extern void *D_8013B388;

typedef struct func_8020EE50_S1 func_8020EE50_S1;
struct func_8020EE50_S1 {
    char pad0[0x10];
    void* unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    f32 unk18;
    char pad18[0x38 - 0x18 - sizeof(f32)];
    s32 unk38;
};

void func_8020EE50(void) {
    void *var_a0;
    f32 k;

    var_a0 = D_8013B388;
    if (var_a0 != 0) {
        k = D_800C6FD0;
        do {
            ((func_8020EE50_S1 *)(var_a0))->unk18 =
                ((func_8020EE50_S1 *)(var_a0))->unk18 +
                (f32) (((func_8020EE50_S1 *)(var_a0))->unk38 * 0x1E) * k;
            var_a0 = ((func_8020EE50_S1 *)(var_a0))->unk10;
        } while (var_a0 != 0);
    }
}
