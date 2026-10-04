#include "span_1000/code_802AD4B4.h"
#include "types.h"

extern int func_8024E924_de(void *arg0);
extern s32 func_802AB6EC_de(void *arg0, void *arg1, s32 arg2);
extern void func_80290548_de(void *arg0);
extern void func_8028B898_de(void *arg0, void *arg1, s32 arg2);
extern void func_80278E04_de(s32 arg0, s32 arg1, void *arg2);
extern char D_8011BDC8[];




void func_802ACA54_de(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = ((func_802ADA44_S1 *)(arg1))->unk19C;
    if (temp_v1 & 8) {
        if (((func_802ADA44_S1 *)(arg1))->unk1D0 & 1) {
            goto block_4;
        }
    } else if (!(temp_v1 & 1)) {
block_4:
        if (func_802AB6EC_de(arg0, arg1, func_8024E924_de(arg1)) != 0) {
            temp_v0 = ((func_802ADA44_S1 *)(arg1))->unk19C | 1;
            ((func_802ADA44_S1 *)(arg1))->unk19C = temp_v0;
            if (temp_v0 & 8) {
                func_80290548_de(arg1);
                return;
            }
            func_8028B898_de(D_8011BDC8, arg1, 1);
            func_80278E04_de(((func_802ADA44_S1 *)(arg1))->unk14, 0x400, arg0);
        }
    }
}
