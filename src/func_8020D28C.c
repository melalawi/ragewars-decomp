#include "basetypes.h"

extern f32 D_800C6E90;

typedef struct func_8020D28C_S1 func_8020D28C_S1;
typedef struct func_8020D28C_S2 func_8020D28C_S2;
typedef struct func_8020D28C_S3 func_8020D28C_S3;
struct func_8020D28C_S1 {
    char pad0[0x24];
    char* unk24;
};
struct func_8020D28C_S2 {
    char pad0[0x10];
    char* unk10;
    char pad10[0x24 - 0x10 - sizeof(char*)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    s32 unk28;
};
struct func_8020D28C_S3 {
    char pad0[0x28];
    s32 unk28;
};

void *func_8020D28C(void *arg0) {
    char *node;
    char *best;
    f32 best_value;

    node = ((func_8020D28C_S1 *)(arg0))->unk24;
    best_value = D_800C6E90;
    best = 0;
    if (node != 0) {
        do {
            if (((func_8020D28C_S2 *)(node))->unk28 == 1) {
                f32 value = ((func_8020D28C_S2 *)(node))->unk24;
                if (value < best_value || best_value == D_800C6E90) {
                    best = node;
                    best_value = value;
                }
            }
            node = ((func_8020D28C_S2 *)(node))->unk10;
        } while (node != 0);
    }
    if (best != 0) {
        ((func_8020D28C_S3 *)(best))->unk28 = 0;
    }
    return best;
}
