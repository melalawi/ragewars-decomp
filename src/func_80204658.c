#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern void func_802A6D28(void *, s32);
extern s32 D_8011FE88;
extern s32 D_800CD4C0;
extern char D_8013BA80;

void func_80204658(void *arg0) {
    void *temp_s1;
    s32 temp_v1;
    s32 masked;
    s32 *pFlag;

    temp_s1 = *(void **)((char *)arg0 + 0x18);
    pFlag = &D_8011FE88;
    func_80285D80(pFlag, arg0, 1);
    if (D_800CD4C0 == 0) {
        func_80278DE8(arg0, 0x80000, arg0);
    }
    func_802A6D28(&D_8013BA80, arg0);
    if (*pFlag != 4) {
        temp_v1 = *(s32 *)((char *)arg0 + 0x100) | 0x08000000;
        *(s32 *)((char *)arg0 + 0x100) = temp_v1;
        if (*(s32 *)((char *)temp_s1 + 0x14) & 2) {
            masked = temp_v1 & ~0x2000;
            masked = masked & ~0x100;
            *(s32 *)((char *)arg0 + 0x100) = masked;
        }
        if (*(s16 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x28) == 0) {
            *(s32 *)((char *)arg0 + 0x100) = *(s32 *)((char *)arg0 + 0x100) & ~0x100;
        }
    }
}
