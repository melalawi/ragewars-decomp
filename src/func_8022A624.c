#include "basetypes.h"

typedef struct func_8022A624_S1 func_8022A624_S1;
typedef struct func_8022A624_S2 func_8022A624_S2;
typedef struct func_8022A624_S3 func_8022A624_S3;
struct func_8022A624_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A624_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(void*)];
    void* unk16E0;
};
struct func_8022A624_S3 {
    char pad0[0x564];
    s32 unk564;
};

void *func_8022A624(void *arg0, u32 arg1) {
    void *var_v1;
    void *temp_v0;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_8022A624_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                temp_v0 = ((func_8022A624_S2 *)(var_v1))->unk5DC;
                if (temp_v0 != 0 && ((func_8022A624_S3 *)(temp_v0))->unk564 == 0) {
                    if (var_a2 == (s32) arg1) {
                        return var_v1;
                    }
                    var_a2 += 1;
                }
                var_v1 = ((func_8022A624_S2 *)(var_v1))->unk16E0;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}
