#include "basetypes.h"

extern void **D_80104564;
extern s32 D_80104570;
extern s32 D_8010513C;

extern void func_80255E78(void *, s32);

void func_80254A70(s32 arg0, s32 arg1) {
    func_80255E78((void *)&D_80104570, arg1);
    if (*(s32 *)(arg1 + 0xC) & 0x1000) {
        func_80255E78((char *)&D_80104570 + 0x14, arg1);
    }
    if (*(&D_80104570 - 2) == arg1) {
        *(&D_80104570 - 2) = 0;
    }
    *(s32 *)(arg1 + 0xC) = 0;
    D_80104564[D_8010513C] = (void *)arg1;
    *(&D_80104570 + 0x2F3) += 1;
}
