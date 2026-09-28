#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800CAF78[];
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern void func_80272BA8(void *, void *, void *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272848(void *);

void func_802A41D8(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 setup[4];
    Vec3 first;
    Vec3 basis;
    Vec3 cross;
    Vec3 result;
    f32 neg_y;
    f32 neg_z;

    func_80271FD8(&first, (Vec3 *)((char *)arg0 + 0x10),
                  (Vec3 *)((char *)arg1 + 0x10));
    func_802720EC(&first);
    setup[0] = 0;
    setup[1] = 0;
    *(f32 *)&setup[2] = D_800CAF78[1];
    func_80272BA8((char *)arg2 + 0x1A0, setup, &basis);
    neg_y = -basis.y;
    neg_z = -basis.z;
    basis.y = neg_y;
    basis.z = neg_z;
    func_8027200C(&cross, &basis,
                  basis.x * first.x + neg_y * first.y + neg_z * first.z);
    func_80271FD8(&cross, &first, &cross);
    func_802720EC(&cross);
    func_80272088(&result, &basis, &cross);
    func_802720EC(&result);
    func_8027200C(&result, &result, *(f32 *)((char *)arg0 + 0x1C));
    func_8027200C(&cross, &cross, *(f32 *)((char *)arg0 + 0x20));
    func_8027200C(&basis, &basis, *(f32 *)((char *)arg0 + 0x24));
    func_80272848(arg3);
    *(f32 *)((char *)arg3 + 0x00) = result.x;
    *(f32 *)((char *)arg3 + 0x04) = result.y;
    *(f32 *)((char *)arg3 + 0x08) = result.z;
    *(f32 *)((char *)arg3 + 0x10) = cross.x;
    *(f32 *)((char *)arg3 + 0x14) = cross.y;
    *(f32 *)((char *)arg3 + 0x18) = cross.z;
    *(f32 *)((char *)arg3 + 0x20) = basis.x;
    *(f32 *)((char *)arg3 + 0x24) = basis.y;
    *(f32 *)((char *)arg3 + 0x28) = basis.z;
    *(f32 *)((char *)arg3 + 0x30) = *(f32 *)((char *)arg0 + 0x10);
    *(f32 *)((char *)arg3 + 0x34) = *(f32 *)((char *)arg0 + 0x14);
    *(f32 *)((char *)arg3 + 0x38) = *(f32 *)((char *)arg0 + 0x18);
}
