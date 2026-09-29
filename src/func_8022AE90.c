#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);
extern s32 D_8013B29C;
extern s32 D_80146894;

typedef struct func_8022AE90_S1 func_8022AE90_S1;
struct func_8022AE90_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5DC - 0x8 - sizeof(char)];
    s32 unk5DC;
    char pad5DC[0x11BC - 0x5DC - sizeof(s32)];
    s32 unk11BC;
};

void func_8022AE90(void *arg0, s32 arg1) {
    s32 field5DC;
    void *var_s1;

    field5DC = ((func_8022AE90_S1 *)(arg0))->unk5DC;
    if (field5DC != 0) {
        var_s1 = (void *)(field5DC + 0x128);
    } else {
        var_s1 = &((func_8022AE90_S1 *)(arg0))->unk8;
    }
    if (D_8013B29C == 0 && D_80146894 == 0) {
        func_8025CA44(func_8025CC8C(), ((func_8022AE90_S1 *)(arg0))->unk11BC);
        ((func_8022AE90_S1 *)(arg0))->unk11BC = (s32)func_8025C97C((void *)func_8025CC8C(), arg1, var_s1, var_s1, (s32)arg0);
    }
}
