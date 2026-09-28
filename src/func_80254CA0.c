#include "basetypes.h"

extern void func_80254CE4(s32 arg0, s32 arg1);
extern s32 D_801045A8;
extern s32 D_80104598[];

void func_80254CA0(void) {
    s32 *p = &D_801045A8;
    func_80254CE4(0, *p);
    D_80104598[*p] = 0;
}
