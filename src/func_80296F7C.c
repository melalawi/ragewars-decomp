#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

typedef struct func_80296F7C_S1 func_80296F7C_S1;
struct func_80296F7C_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    void* unk8;
};

void func_80296F7C(s32 **arg0, void *arg1) {
    s32 *temp_s0;
    s32 *tmp;

    temp_s0 = *arg0;
    if (*temp_s0 != 0) {
        ((func_80296F7C_S1 *)(arg1))->unk8 = func_8028FD94(temp_s0, 0);
        tmp = func_8028FD94(temp_s0, 1);
        ((func_80296F7C_S1 *)(arg1))->unk0 = *tmp;
        tmp = func_8028FD94(temp_s0, 2);
        ((func_80296F7C_S1 *)(arg1))->unk4 = *tmp;
        return;
    }
    ((func_80296F7C_S1 *)(arg1))->unk8 = 0;
    ((func_80296F7C_S1 *)(arg1))->unk0 = 0;
    ((func_80296F7C_S1 *)(arg1))->unk4 = 0;
}
