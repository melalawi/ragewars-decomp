#include "basetypes.h"

extern void *func_80250754(void *arg0, s32 arg1);
extern s32 *func_8026E27C(void **arg0, s32 arg1, s32 *arg2);
extern s32 func_80251F0C(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5, void *arg6, void *arg7, s32 arg8);

extern s32 D_800D2640;
extern char D_250BD4;
extern char D_800C8F30;

typedef struct func_80250ACC_S1 func_80250ACC_S1;
struct func_80250ACC_S1 {
    char pad0[0x20];
    s32 unk20;
    char pad20[0xB4 - 0x20 - sizeof(s32)];
    void* unkB4;
    char padB4[0xD0 - 0xB4 - sizeof(void*)];
    s32 unkD0;
};

s32 *func_80250ACC(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    char *o = (char *) arg0;
    void *temp_v0;
    s32 *var_s1;
    s32 ret2;

    var_s1 = arg3;
    temp_v0 = func_80250754(arg0, arg2);
    if (temp_v0 != 0) {
        ((func_80250ACC_S1 *)(o))->unkB4 = temp_v0;
        *var_s1 = (s32) temp_v0;
        var_s1 = func_8026E27C(temp_v0, arg1, var_s1 + 1);
        ret2 = func_80251F0C(0, ((func_80250ACC_S1 *)(o))->unkD0 | D_800D2640, temp_v0, ((func_80250ACC_S1 *)(o))->unk20, 8, arg0, &D_250BD4, &D_800C8F30, 1);
        if (ret2 != 0) {
            *var_s1 = ret2;
            var_s1 += 1;
        }
    }
    return var_s1;
}
