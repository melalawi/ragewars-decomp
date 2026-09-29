#include "basetypes.h"

extern void *D_800D052C[];

typedef struct func_8022AAC4_S1 func_8022AAC4_S1;
typedef struct func_8022AAC4_S2 func_8022AAC4_S2;
struct func_8022AAC4_S1 {
    char pad0[0x594];
    s32 unk594;
};
struct func_8022AAC4_S2 {
    char pad0[0x20];
    s16* unk20;
    char pad20[0x24 - 0x20 - sizeof(s16*)];
    s16* unk24;
};

s16 func_8022AAC4(void *arg0, s32 arg1) {
    s16 *var_v0;
    void *temp_a0;

    temp_a0 = D_800D052C[arg1];
    if (((func_8022AAC4_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AAC4_S2 *)(temp_a0))->unk20;
    } else {
        var_v0 = ((func_8022AAC4_S2 *)(temp_a0))->unk24;
    }
    if (var_v0 != 0) {
        return *var_v0;
    }
    return -1;
}
