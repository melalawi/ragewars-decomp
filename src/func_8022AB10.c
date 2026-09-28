#include "basetypes.h"

extern void *D_800D052C[];

typedef struct {
    char pad[0x5F4];
    s16 table[1];
} Actor;

s16 func_8022AB10(void *arg0, s32 arg1) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    if ((arg1 == 1) && (*(s8 *)((char *)arg0 + 0x604) != 0)) {
        return -1;
    }
    temp_v0 = D_800D052C[arg1];
    if (*(s32 *)((char *)arg0 + 0x594) == 1) {
        var_v0 = *(s16 **)((char *)temp_v0 + 0x20);
    } else {
        var_v0 = *(s16 **)((char *)temp_v0 + 0x24);
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
