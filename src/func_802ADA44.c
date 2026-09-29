#include "basetypes.h"

extern int func_8024E914(void *arg0);
extern s32 func_802AC6DC(void *arg0, void *arg1, s32 arg2);
extern void func_80290528(void *arg0);
extern void func_8028B874(void *arg0, void *arg1, s32 arg2);
extern void func_80278E74(s32 arg0, s32 arg1, void *arg2);
extern char D_8011FE88[];

typedef struct func_802ADA44_S1 func_802ADA44_S1;
struct func_802ADA44_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x19C - 0x14 - sizeof(s32)];
    u16 unk19C;
    char pad19C[0x1D0 - 0x19C - sizeof(u16)];
    s32 unk1D0;
};

void func_802ADA44(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = ((func_802ADA44_S1 *)(arg1))->unk19C;
    if (temp_v1 & 8) {
        if (((func_802ADA44_S1 *)(arg1))->unk1D0 & 1) {
            goto block_4;
        }
    } else if (!(temp_v1 & 1)) {
block_4:
        if (func_802AC6DC(arg0, arg1, func_8024E914(arg1)) != 0) {
            temp_v0 = ((func_802ADA44_S1 *)(arg1))->unk19C | 1;
            ((func_802ADA44_S1 *)(arg1))->unk19C = temp_v0;
            if (temp_v0 & 8) {
                func_80290528(arg1);
                return;
            }
            func_8028B874(D_8011FE88, arg1, 1);
            func_80278E74(((func_802ADA44_S1 *)(arg1))->unk14, 0x400, arg0);
        }
    }
}
