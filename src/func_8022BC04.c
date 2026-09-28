#include "basetypes.h"

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern s32 D_801450B8;
extern s32 D_8014694C;
extern void *D_800D052C[];
extern s32 D_8011FE88;

void func_8022BC04(void *arg0) {
    s32 var_t0;

    if (*(s32 *)((char *)arg0 + 0x1450) != 0) {
        if (D_8014694C == 0) {
            var_t0 = 0x17;
            goto after;
        }
    }
    var_t0 = (D_801450B8 == 1) ? 0 : 0x17;
after:
    func_8028B250(&D_8011FE88, (char *)arg0 + 0x2E8,
        *(u16 *)((char *)D_800D052C[*(s16 *)((char *)arg0 + 0x62E)] + 4) + var_t0,
        *(s32 *)((char *)*(void **)((char *)arg0 + 0x484) + 0x10));
}
