#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern u8 D_801462E1;
extern f32 D_800C8FD0;
extern s32 D_800D0960;
extern char D_80145088;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);
extern void func_8025BD20(void **arg0);
extern void func_80259460(void *arg0);
extern void func_8025CCB0(void *arg0);
extern void func_8025D948(void *arg0);
extern void func_8025D470(void *arg0);
extern s32 func_802934DC(void);
extern void *func_80239594(s32 *arg0, Vec3 *arg1);
extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

s32 func_8025844C(void *arg0) {
    char *object = arg0;
    u8 *bytes = &D_801462E1;
    char *queue;
    u32 mask;
    s32 count;

    *(f32 *)(object + 0x2BA0) = (f32)bytes[0] * D_800C8FD0;
    *(f32 *)(object + 0x2BA4) = (f32)bytes[-1] * D_800C8FD0;
    *(f32 *)(object + 0x2BA8) = (f32)bytes[1] * D_800C8FD0;
    queue = object + 0x110;
    *(s32 *)(object + 0x2BB0) = bytes[-2];
    mask = func_802C2020();
    count = *(s32 *)(queue + 0x1C) + 1;
    *(s32 *)(queue + 0x1C) = count;
    if (count != 1) {
        func_802C2040(mask);
        func_802C0390(queue, 0, 1);
    } else {
        func_802C2040(mask);
    }

    func_8025BD20((void **)(object + 0x1DB8));
    {
        char *queue2 = object + 0x110;
        u32 mask2 = func_802C2020();
        s32 count2 = *(s32 *)(queue2 + 0x1C) - 1;

        *(s32 *)(queue2 + 0x1C) = count2;
        if (count2 != 0) {
            func_802C2040(mask2);
            func_802C0510(queue2, 0, 1);
        } else {
            func_802C2040(mask2);
        }
    }

    func_80259460(object + 0x138);
    func_8025CCB0(object + 0x2BC0);
    queue = object + 0x1D64;
    func_8025D948(queue);
    func_8025D470(queue);

    if (D_800D0960 != 0 &&
        *(s32 *)(object + 0x2BB4) != 0 &&
        func_802934DC() != 0 &&
        *(s32 *)(object + 0x134) > 0) {
        Vec3 zero;
        void *result;
        Vec3 *vec;

        zero.z = 0.0f;
        zero.y = 0.0f;
        zero.x = 0.0f;
        result = func_80239594(&D_80145088, &zero);
        vec = (Vec3 *)((char *)result + 0x128);
        if ((*(s32 *)(object + 0x104) & 3) == 0) {
            func_80257DF4(object, *(s32 *)(object + 0x134), *vec, 0, -1);
        }
    }
    return ++*(s32 *)(object + 0x104);
}
