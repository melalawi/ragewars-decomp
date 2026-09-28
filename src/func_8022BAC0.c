#include "basetypes.h"

extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);
extern s32 D_801468F4;
extern s32 D_8011FE88;

void func_8022BAC0(void *arg0) {
    s32 var_a2;
    void *result;

    var_a2 = *(s32 *)((char *)arg0 + 0x5E0);
    if (D_801468F4 != 0 && *(u8 *)((char *)(*(void **)((char *)arg0 + 0x5D8)) + 0x8F) == 1) {
        var_a2 = 0x13;
    }
    result = func_8028CF7C(&D_8011FE88, 0xB, var_a2);
    if (result != 0) {
        *(void **)((char *)arg0 + 0x18) = result;
    } else {
        result = func_8028CF7C(&D_8011FE88, 0xB, -1);
        if (result != 0) {
            *(void **)((char *)arg0 + 0x18) = result;
        } else {
            result = func_8028CF7C(&D_8011FE88, -1, -1);
            *(void **)((char *)arg0 + 0x18) = result;
        }
    }
    *(f32 *)((char *)arg0 + 0x50) = *(f32 *)((char *)result + 0xFC);
    *(f32 *)((char *)arg0 + 0x54) = *(f32 *)((char *)result + 0x100);
    *(f32 *)((char *)arg0 + 0x58) = *(f32 *)((char *)result + 0x104);
}
