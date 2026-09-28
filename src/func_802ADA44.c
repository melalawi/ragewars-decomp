#include "basetypes.h"

extern int func_8024E914(void *arg0);
extern s32 func_802AC6DC(void *arg0, void *arg1, s32 arg2);
extern void func_80290528(void *arg0);
extern void func_8028B874(void *arg0, void *arg1, s32 arg2);
extern void func_80278E74(s32 arg0, s32 arg1, void *arg2);
extern char D_8011FE88[];

void func_802ADA44(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = *(u16 *) ((char *) arg1 + 0x19C);
    if (temp_v1 & 8) {
        if (*(s32 *) ((char *) arg1 + 0x1D0) & 1) {
            goto block_4;
        }
    } else if (!(temp_v1 & 1)) {
block_4:
        if (func_802AC6DC(arg0, arg1, func_8024E914(arg1)) != 0) {
            temp_v0 = *(u16 *) ((char *) arg1 + 0x19C) | 1;
            *(u16 *) ((char *) arg1 + 0x19C) = temp_v0;
            if (temp_v0 & 8) {
                func_80290528(arg1);
                return;
            }
            func_8028B874(D_8011FE88, arg1, 1);
            func_80278E74(*(s32 *) ((char *) arg1 + 0x14), 0x400, arg0);
        }
    }
}
