#include "basetypes.h"

extern s32 func_802170A0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

extern s32 D_8011FE88;

void func_80203B60(void *arg0, void *arg1) {
    char *o0 = (char *) arg0;
    char *o1 = (char *) arg1;
    char *tmp;
    s32 masked;
    s32 *pFlag;

    tmp = *(char **) (o0 + 0x18) + 0x14;
    func_802170A0(arg0, arg1, 4, *(s32 *) (tmp + 0xC), *(s32 *) (tmp + 0x10));
    pFlag = &D_8011FE88;
    *(s32 *) (o1 + 0x110) = 0;
    func_80285D80(pFlag, arg0, 1);
    func_80278DE8(arg0, 1, arg0);
    masked = *(s32 *) (o0 + 0x100) & 0xFFFEFFFF;
    *(s32 *) (o0 + 0x100) = masked;
    if (*pFlag != 4) {
        *(s32 *) (o0 + 0x100) = masked | 0x08000000;
    }
}
