#include "basetypes.h"

extern void func_8029324C(void *arg0);
extern void func_8023EDF0(void);
extern void func_802954E0(void);
extern void func_8044E178(void *arg0, s32 arg1, s32 arg2);

extern s32 D_8011FE88;
extern f32 D_800CA5C0;
extern s32 D_800D2970;
extern s32 D_800D2980;
extern f32 D_800D2988;
extern f32 D_800D2990;
extern f32 D_800D2994;
extern s32 D_80146928;
extern s32 D_80154048;

void func_80294608(void *arg0) {
    void *dst;
    s32 field;
    f32 f;

    D_80146928 = 0;
    D_800D2980 = 0;
    func_8029324C(arg0);
    func_8023EDF0();
    func_802954E0();
    dst = &D_8011FE88;
    f = D_800CA5C0;
    field = *(s32 *)((char *)arg0 + 0x26DD8);
    D_800D2970 = 0;
    D_800D2994 = f;
    *(f32 *)((char *)&D_800D2988 + 4) = f;
    D_800D2990 = f;
    func_8044E178(dst, field, 0);
    *(s32 *)((char *)arg0 + 0x26DB8) = 0xD;
    D_80154048 = 0;
}
