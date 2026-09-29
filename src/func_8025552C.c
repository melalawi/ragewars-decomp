#include "basetypes.h"

extern u32 D_800D0930;
extern volatile s32 D_800D0938;
extern s32 D_80105194;

typedef struct func_8025552C_S1 func_8025552C_S1;
struct func_8025552C_S1 {
    char pad0[0xC];
    void* unkC;
};

void func_8025552C(void) {
    s32 var_a1;
    s32 var_v1;
    u32 var_a0;
    u32 var_a0_2;
    u32 limit;
    void *var_v0;

    var_a1 = 0;
    var_a0 = var_a1;
    limit = D_800D0930;
    if (limit != 0) {
        var_v1 = limit;
        do {
            var_a0 += 1;
        } while (var_a0 < (u32)var_v1);
    }
    var_a0_2 = 0;
    if (D_800D0930 != 0) {
        do {
            var_v0 = (void *)(D_80105194 + (var_a0_2 * 0x10));
            var_v1 = 0;
            if (var_v0 != 0) {
                do {
                    var_v0 = ((func_8025552C_S1 *)(var_v0))->unkC;
                    var_v1 += 1;
                } while (var_v0 != 0);
            }
            if (var_v1 < var_a1) {
                var_v1 = var_a1;
            }
            var_a0_2 += 1;
            var_a1 = var_v1;
        } while (var_a0_2 < D_800D0930);
    }
    if (D_800D0938 != 0) {
        D_800D0938 = 0;
    }
}
