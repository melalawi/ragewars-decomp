#include "basetypes.h"

void func_8028F934(void *arg0, void *arg1) {
    void *temp_v0;

    if ((*(s32 *)((s8 *)arg1 + 0x10)) == 2) {
        temp_v0 = *(void **)((s8 *)arg0 + 0x2EC);
        if (temp_v0 != 0) {
            *(void **)((s8 *)temp_v0 + 0) = arg1;
        } else {
            *(void **)((s8 *)arg0 + 0x2E4) = arg1;
        }
        *(void **)((s8 *)arg0 + 0x2EC) = arg1;
        *(s32 *)((s8 *)arg0 + 0x300) = 1;
    } else {
        temp_v0 = *(void **)((s8 *)arg0 + 0x2F0);
        if (temp_v0 != 0) {
            *(void **)((s8 *)temp_v0 + 0) = arg1;
        } else {
            *(void **)((s8 *)arg0 + 0x2E8) = arg1;
        }
        *(void **)((s8 *)arg0 + 0x2F0) = arg1;
    }
    *(void **)((s8 *)arg1 + 0) = 0;
    *(s32 *)((s8 *)arg1 + 4) = (*(s32 *)((s8 *)arg1 + 8)) & 3;
}
