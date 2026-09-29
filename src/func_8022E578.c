#include "basetypes.h"

extern f32 func_80272768(f32 *a, f32 *b);

typedef struct func_8022E578_S1 func_8022E578_S1;
typedef struct func_8022E578_S2 func_8022E578_S2;
struct func_8022E578_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022E578_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x5DC - 0x8 - sizeof(f32)];
    s32 unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(s32)];
    void* unk16E0;
};

f32 func_8022E578(void *arg0, f32 *arg1) {
    f32 var_f20;
    void *var_s0;

    var_s0 = ((func_8022E578_S1 *)(arg0))->unk20;
    var_f20 = 0.0f;
    if (var_s0 != 0) {
        do {
            if (((func_8022E578_S2 *)(var_s0))->unk5DC != 0) {
                var_f20 += func_80272768(arg1, &((func_8022E578_S2 *)(var_s0))->unk8);
            }
            var_s0 = ((func_8022E578_S2 *)(var_s0))->unk16E0;
        } while (var_s0 != 0);
    }
    return var_f20;
}
