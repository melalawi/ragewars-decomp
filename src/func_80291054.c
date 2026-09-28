#include "basetypes.h"

extern s32 D_80146958;
extern f32 D_80146D74;
extern f32 D_800D2988;
extern char D_80145040;
extern s32 D_800D29D4;
extern s32 D_800D29D0;
extern s32 D_8014692C;
extern s32 D_800E28D0[];
extern f32 D_8014AD78;
extern f32 D_800CA4E0[];
extern f32 D_800CA4E8;
extern s32 D_8011FAB0;
extern s32 *D_800D7E40;
extern f32 D_800CA4EC;

extern int func_8022A404(void *arg0);
extern void func_802947DC(void *arg0, s32 arg1);
extern void func_80293808(void *arg0, s32 arg1);

void func_80291054(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_v1;

    if (D_80146958 != 0) {
        temp_f0 = D_80146D74 - D_800D2988;
        D_80146D74 = temp_f0;
        if (temp_f0 <= 0.0f) {
            func_8022A404(&D_80145040);
            if (D_800D29D4 != 0) {
                if (D_800D29D0 == 0) {
                    func_802947DC(arg0, 0x7CF);
                    return;
                }
                goto block_6;
            }
            if (D_800D29D0 != 0) {
block_6:
                func_80293808(arg0, 1);
                D_8014692C = 1;
            }
        }
    } else {
        if (D_800E28D0[1] >= 0xDF) {
            D_8014AD78 -= D_800CA4E0[0];
        } else {
            D_8014AD78 -= D_800CA4E0[1];
        }
        temp_f1 = (f32)D_800E28D0[1] * D_800CA4E8;
        if (D_8014AD78 <= -temp_f1) {
            temp_v1 = D_8011FAB0 + 1;
            D_8011FAB0 = temp_v1;
            D_8014AD78 += temp_f1;
            if (D_800D7E40[temp_v1] == 0) {
                D_80146958 = 1;
                D_80146D74 = D_800CA4EC;
            }
        }
    }
}
