#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;
typedef Vec3 Vector3;
typedef struct RawVec3 {
    s32 x;
    s32 y;
    s32 z;
} RawVec3;

extern f32 D_800C9C30;
extern f32 D_800C9C34;
extern f32 D_800C9C38;
extern f32 D_800D2988;
extern void func_80272088(Vector3 *, Vector3 *, Vector3 *);
extern void func_8027200C(void *, void *, f32);
extern f32 func_802BC200(f32);
extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern void func_80271FA4(Vector3 *, Vector3 *, Vector3 *);

void func_80279E40(void *arg0, f32 arg1) {
    Vec3 sp10;
    Vec3 sp20;
    RawVec3 sp30;
    Vec3 sp40;
    Vec3 sp50;
    Vec3 sp60;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 var_f20;
    s8 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x118), void **, 0x2C), s8 *, 0x18);
    var_f20 = D_800C9C30;
    if (temp_v0 != 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x140);
        temp_f0 = (f32) temp_v0;
        if (temp_f1 < temp_f0) {
            var_f20 = temp_f1 / temp_f0;
        }
    }
    var_f20 *= arg1;
    sp30 = M2C_FIELD(arg0, RawVec3 *, 0x174);
    if (M2C_FIELD(arg0, f32 *, 0x1AC) > 0.0f) {
        Vec3 *temp_s0;

        sp10.x = 0.0f;
        sp10.z = 0.0f;
        sp10.y = D_800C9C34;
        func_80272088(&sp20, &sp10, (Vec3 *)&sp30);
        func_8027200C(&sp40, &sp20, func_802BC200(M2C_FIELD(arg0, f32 *, 0x19C)) * M2C_FIELD(arg0, f32 *, 0x1AC) * var_f20);
        temp_f12 = M2C_FIELD(arg0, f32 *, 0x19C) + (M2C_FIELD(arg0, f32 *, 0x1A4) * var_f20 * D_800D2988);
        M2C_FIELD(arg0, f32 *, 0x19C) = temp_f12;
        func_8027200C(&sp50, &sp20, func_802BC200(temp_f12) * M2C_FIELD(arg0, f32 *, 0x1AC) * var_f20);
        temp_s0 = arg0 + 0x1C;
        func_80271FD8(temp_s0, temp_s0, &sp40);
        func_80271FA4((Vector3 *) temp_s0, (Vector3 *) temp_s0, (Vector3 *) &sp50);
    } else {
        M2C_FIELD(arg0, f32 *, 0x19C) = (f32) (M2C_FIELD(arg0, f32 *, 0x19C) + (M2C_FIELD(arg0, f32 *, 0x1A4) * var_f20 * D_800D2988));
    }
    if (M2C_FIELD(arg0, f32 *, 0x1B0) > 0.0f) {
        sp10.x = 0.0f;
        sp10.z = 0.0f;
        sp10.y = D_800C9C38;
        func_80272088(&sp60, &sp10, (Vec3 *)&sp30);
        func_80272088(&sp20, &sp60, (Vec3 *)&sp30);
        func_8027200C(&sp40, &sp20, func_802BC200(M2C_FIELD(arg0, f32 *, 0x1A0)) * M2C_FIELD(arg0, f32 *, 0x1B0) * var_f20);
        temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x1A0) + (M2C_FIELD(arg0, f32 *, 0x1A8) * var_f20 * D_800D2988);
        M2C_FIELD(arg0, f32 *, 0x1A0) = temp_f12_2;
        func_8027200C(&sp50, &sp20, func_802BC200(temp_f12_2) * M2C_FIELD(arg0, f32 *, 0x1B0) * var_f20);
        func_80271FD8((Vec3 *)((char *)arg0 + 0x1C), (Vec3 *)((char *)arg0 + 0x1C), &sp40);
        func_80271FA4((Vec3 *)((char *)arg0 + 0x1C), (Vec3 *)((char *)arg0 + 0x1C), &sp50);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x1A0) = (f32) (M2C_FIELD(arg0, f32 *, 0x1A0) + (M2C_FIELD(arg0, f32 *, 0x1A8) * var_f20 * D_800D2988));
}
