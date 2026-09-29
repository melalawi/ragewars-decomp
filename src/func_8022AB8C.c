#include "basetypes.h"

extern void *D_800D052C[];
extern s16 D_800D0588[];

typedef struct func_8022AB8C_S1 func_8022AB8C_S1;
typedef struct func_8022AB8C_S2 func_8022AB8C_S2;
struct func_8022AB8C_S1 {
    char pad0[0x594];
    s32 unk594;
    char pad594[0x62E - 0x594 - sizeof(s32)];
    s16 unk62E;
};
struct func_8022AB8C_S2 {
    char pad0[0x20];
    s16* unk20;
    char pad20[0x24 - 0x20 - sizeof(s16*)];
    s16* unk24;
};

s16 func_8022AB8C(void *arg0) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = D_800D052C[((func_8022AB8C_S1 *)(arg0))->unk62E];
    if (((func_8022AB8C_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AB8C_S2 *)(temp_v0))->unk20;
    } else {
        var_v0 = ((func_8022AB8C_S2 *)(temp_v0))->unk24;
    }
    if (var_v0 != 0) {
        temp_v1 = *var_v0;
    } else {
        temp_v1 = -1;
    }
    if (temp_v1 != -1) {
        return D_800D0588[temp_v1];
    }
    return -1;
}
