#include "basetypes.h"

extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;

typedef struct func_80203C40_S1 func_80203C40_S1;
struct func_80203C40_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_80203C40(void *arg0) {
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        ((func_80203C40_S1 *)(arg0))->unk100 |= 0x2100;
    }
}
