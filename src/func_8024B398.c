#include "basetypes.h"

typedef struct {
    s32 unk0;
    f32 vec4[3];
    f32 vec10[3];
    u16 unk1C;
    u16 unk1E;
    u16 resource20;
    u16 resource22;
    s16 amount24;
    u8 unk26;
    u8 unk27;
} Input;

typedef struct { f32 x, y, z; } Vec3f;

extern s32 D_8011FE88;
extern f32 D_800C8C38[];

extern void *func_8028CF48(void *, s32);
extern s32 func_8028B370(void *, s32);
extern s32 func_80285F28(void *, void *);
extern void func_80246690(void *, u16, u16, s32, void *, s32, s32, f32,
                          Vec3f, u8, Vec3f, Vec3f, s32);

void func_8024B398(void *arg0, Input *arg1) {
    void *resource0;
    s32 resource1;
    s32 lookup;
    s32 amountRaw;
    f32 fzero;
    f32 amount;
    Vec3f zero;

    resource0 = func_8028CF48(&D_8011FE88, arg1->resource22);
    if (arg1->resource20 == 0xFFFF) {
        resource1 = 0;
    } else {
        resource1 = func_8028B370(&D_8011FE88, arg1->resource20);
    }
    amountRaw = arg1->amount24;
    fzero = 0.0f;
    amount = amountRaw * D_800C8C38[1];
    zero.x = zero.y = zero.z = fzero;
    lookup = func_80285F28(&D_8011FE88, arg0);
    func_80246690(arg0, arg1->unk1C, arg1->unk1E, arg1->unk0,
                  resource0, arg1->unk27 == 0xFF ? -1 : arg1->unk27,
                  resource1, amount, *(Vec3f *)arg1->vec4, arg1->unk26,
                  *(Vec3f *)arg1->vec10, zero, lookup);
}
