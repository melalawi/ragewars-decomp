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

typedef struct func_80294608_S1 func_80294608_S1;
typedef struct func_80294608_S2 func_80294608_S2;
struct func_80294608_S1 {
    char pad0[0x26DB8];
    s32 unk26DB8;
    char pad26DB8[0x26DD8 - 0x26DB8 - sizeof(s32)];
    s32 unk26DD8;
};
struct func_80294608_S2 {
    char pad0[0x4];
    f32 unk4;
};

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
    field = ((func_80294608_S1 *)(arg0))->unk26DD8;
    D_800D2970 = 0;
    D_800D2994 = f;
    ((func_80294608_S2 *)(&D_800D2988))->unk4 = f;
    D_800D2990 = f;
    func_8044E178(dst, field, 0);
    ((func_80294608_S1 *)(arg0))->unk26DB8 = 0xD;
    D_80154048 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800CA5C0_4 = 1.0f;
#endif
