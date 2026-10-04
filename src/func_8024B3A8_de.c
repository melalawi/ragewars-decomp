#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "types.h"





extern s32 D_8011BDC8;
extern f32 D_800C3B48_de[];

extern void *func_8028CF6C_de(void *, s32);
extern s32 func_8028B394_de(void *, s32);
extern s32 func_80285F58_de(void *, void *);
extern void func_802466A0_de(void *, u16, u16, s32, void *, s32, s32, f32,
                          Vec3, u8, Vec3, Vec3, s32);

void func_8024B3A8_de(void *arg0, Input_func_8024B3A8_de *arg1) {
    void *resource0;
    s32 resource1;
    s32 lookup;
    s32 amountRaw;
    f32 fzero;
    f32 amount;
    Vec3 zero;

    resource0 = func_8028CF6C_de(&D_8011BDC8, arg1->resource22);
    if (arg1->resource20 == 0xFFFF) {
        resource1 = 0;
    } else {
        resource1 = func_8028B394_de(&D_8011BDC8, arg1->resource20);
    }
    amountRaw = arg1->amount24;
    fzero = 0.0f;
    amount = amountRaw * D_800C3B48_de[1];
    zero.x = zero.y = zero.z = fzero;
    lookup = func_80285F58_de(&D_8011BDC8, arg0);
    func_802466A0_de(arg0, arg1->unk1C, arg1->unk1E, arg1->unk0,
                  resource0, arg1->unk27 == 0xFF ? -1 : arg1->unk27,
                  resource1, amount, *(Vec3 *)arg1->vec4, arg1->unk26,
                  *(Vec3 *)arg1->vec10, zero, lookup);
}
