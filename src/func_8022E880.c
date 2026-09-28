#include "basetypes.h"

extern char D_8013B1A8;
extern void func_80268C7C(void *a, s32 b);

void func_8022E880(void *unused0, s32 *arg1) {
    s32 temp;

    temp = *arg1;
    if (temp != 0) {
        func_80268C7C(&D_8013B1A8, temp);
        *arg1 = 0;
    }
}
