#include "basetypes.h"

extern s8 D_8011FE88[];

extern s32 func_80285F28(void *arg0, void *arg1);
extern void func_80203C40(void *arg0, void *arg1, s32 arg2);
extern void func_80214178(void *arg0, void *arg1, s32 arg2);

typedef struct func_80203C84_S1 func_80203C84_S1;
struct func_80203C84_S1 {
    char pad0[0x34];
    s8 unk34;
};

void func_80203C84(void *arg0, void *arg1, s32 arg2) {
    if ((func_80285F28(D_8011FE88, arg0) == 0) &&
        (((func_80203C84_S1 *)(arg1))->unk34 == 0)) {
        func_80203C40(arg0, arg1, arg2);
        func_80214178(arg0, arg1, 1);
    }
}
