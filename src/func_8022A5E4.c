typedef struct func_8022A5E4_S1 func_8022A5E4_S1;
typedef struct func_8022A5E4_S2 func_8022A5E4_S2;
struct func_8022A5E4_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A5E4_S2 {
    char pad0[0x16E0];
    void* unk16E0;
};

#include "basetypes.h"

void *func_8022A5E4(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_8022A5E4_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                if (var_a2 == (s32)arg1) {
                    return var_v1;
                }
                var_v1 = ((func_8022A5E4_S2 *)(var_v1))->unk16E0;
                var_a2 += 1;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}
