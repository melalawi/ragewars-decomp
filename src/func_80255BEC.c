#include "basetypes.h"

typedef struct func_80255BEC_S1 func_80255BEC_S1;
typedef struct func_80255BEC_S2 func_80255BEC_S2;
struct func_80255BEC_S1 {
    char pad0[0x8];
    void* unk8;
};
struct func_80255BEC_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x14 - 0x4 - sizeof(void*)];
    u32 unk14;
};

void func_80255BEC(void *arg0, s32 *arg1, u32 *arg2) {
    u32 temp_a0;
    u32 var_v1;
    void *var_a3;

    *arg1 = 0;
    *arg2 = 0;
    var_a3 = ((func_80255BEC_S1 *)(arg0))->unk8;
    if (var_a3 != 0) {
        do {
            *arg1 += ((func_80255BEC_S2 *)(var_a3))->unk14;
            var_v1 = ((func_80255BEC_S2 *)(var_a3))->unk14;
            temp_a0 = *arg2;
            if (var_v1 < temp_a0) {
                var_v1 = temp_a0;
            }
            *arg2 = var_v1;
            var_a3 = ((func_80255BEC_S2 *)(var_a3))->unk4;
        } while (var_a3 != 0);
    }
}
