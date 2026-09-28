#include "basetypes.h"

extern void func_8025E2F4(s32 a);
extern void func_80293318(void *arg0, void *arg1, void *arg2);
extern void func_80286A78(void *arg0, void *arg1, void *arg2);
extern void func_8044AFC0(void *arg0, s32 arg1);
extern void func_80297008(unsigned int value);
extern u8 D_801468A0;
extern s32 D_8011FE88;

void func_80293EAC(void *arg0) {
    s8 *p1;
    s8 *p2;
    int new_var;

    func_8025E2F4(0);
    new_var = 0x5D8;
    p1 = ((s8 *)(&D_801468A0)) - new_var;
    *((s32 *)(((char *)(&D_801468A0)) + 0xAC)) = 0;
    *((s32 *)(((char *)(&D_801468A0)) + 0x88)) = 0;
    p1[0xB2] = 1;
    p1[0x1D] = 0;
    p1[0x1E] = 1;
    func_80293318(arg0, 0, 0);
    func_80286A78(&D_8011FE88, 0, 0);
    p2 = ((s8 *)(&D_801468A0)) - 0x1818;
    func_8044AFC0(p2, 1);
    *((s32 *)(p2 + 0x160)) = 0;
    func_80297008(0);
}
