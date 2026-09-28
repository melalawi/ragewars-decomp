#include "basetypes.h"

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern u8 D_801462C8[];
extern s32 D_800CE47C;
extern s32 D_800CE430[];
extern char D_8011FE88;

void func_8022BB70(void *arg0) {
    s32 var_a2;
    u8 *base;

    base = D_801462C8;
    if (base[0x1D] == 0) {
        var_a2 = 0x66;
    } else if (*(s32 *)(base + 0x62C) != 0 && *(u8 *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x8F) != 0) {
        var_a2 = D_800CE47C;
    } else {
        var_a2 = D_800CE430[*(s16 *)((char *)*(void **)((char *)arg0 + 0x18) + 0xC)];
        *(u8 *)((char *)arg0 + 3) = *(u8 *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x81);
    }
    func_8028B250(&D_8011FE88, arg0, var_a2, *(s32 *)((char *)arg0 + 0x86C));
}
