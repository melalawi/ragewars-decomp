#include "basetypes.h"

typedef struct func_8022C54C_S1 func_8022C54C_S1;
typedef struct func_8022C54C_S2 func_8022C54C_S2;
typedef struct func_8022C54C_S3 func_8022C54C_S3;
struct func_8022C54C_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022C54C_S2 {
    char pad0[0x5D8];
    void* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(void*)];
    void* unk16E0;
};
struct func_8022C54C_S3 {
    char pad0[0x90];
    u8 unk90;
};

void *func_8022C54C(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_8022C54C_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                if (((func_8022C54C_S3 *)((((func_8022C54C_S2 *)(var_v1))->unk5D8)))->unk90 == 0) {
                    if (var_a2 == (s32) arg1) {
                        return var_v1;
                    }
                    var_a2 += 1;
                }
                var_v1 = ((func_8022C54C_S2 *)(var_v1))->unk16E0;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}
