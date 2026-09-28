#include "basetypes.h"

extern void *D_800D052C[];
extern s16 D_800D0588[];

s16 func_8022AB8C(void *arg0) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = D_800D052C[*(s16 *)((char *)arg0 + 0x62E)];
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
        return D_800D0588[temp_v1];
    }
    return -1;
}
