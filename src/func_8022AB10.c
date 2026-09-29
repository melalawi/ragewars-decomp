#include "basetypes.h"

extern void *D_800D052C[];

typedef struct {
    char pad[0x5F4];
    s16 table[1];
} Actor;

typedef struct func_8022AB10_S1 func_8022AB10_S1;
typedef struct func_8022AB10_S2 func_8022AB10_S2;
struct func_8022AB10_S1 {
    char pad0[0x594];
    s32 unk594;
    char pad594[0x604 - 0x594 - sizeof(s32)];
    s8 unk604;
};
struct func_8022AB10_S2 {
    char pad0[0x20];
    s16* unk20;
    char pad20[0x24 - 0x20 - sizeof(s16*)];
    s16* unk24;
};

s16 func_8022AB10(void *arg0, s32 arg1) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    if ((arg1 == 1) && (((func_8022AB10_S1 *)(arg0))->unk604 != 0)) {
        return -1;
    }
    temp_v0 = D_800D052C[arg1];
    if (((func_8022AB10_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AB10_S2 *)(temp_v0))->unk20;
    } else {
        var_v0 = ((func_8022AB10_S2 *)(temp_v0))->unk24;
    }
    if (var_v0 != 0) {
        temp_v1 = *var_v0;
    } else {
        temp_v1 = -1;
    }
    if (temp_v1 != -1) {
        return ((Actor *)arg0)->table[temp_v1];
    }
    return -1;
}
