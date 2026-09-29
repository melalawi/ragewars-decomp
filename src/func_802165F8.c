#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    Vec3 first;
    Vec3 first_normalized;
    f32 first_length;
    Vec3 flat;
    Vec3 flat_normalized;
    f32 flat_length;
    f32 height;
} Result;

extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern void func_802720EC(f32 *arg0);
extern f32 func_802BC380(f32);

typedef struct func_802165F8_S1 func_802165F8_S1;
typedef struct func_802165F8_S2 func_802165F8_S2;
struct func_802165F8_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x6C - 0x8 - sizeof(Vec3)];
    f32 unk6C;
};
struct func_802165F8_S2 {
    char pad0[0x48];
    Vec3 unk48;
    char pad48[0x60 - 0x48 - sizeof(Vec3)];
    f32 unk60;
};

void func_802165F8(void *arg0, void *arg1, Result *result) {
    func_80271FD8(&result->first, &((func_802165F8_S1 *)(arg0))->unk8,
                  &((func_802165F8_S2 *)(arg1))->unk48);
    result->first_normalized = result->first;
    func_802720EC(&result->first_normalized.x);
    result->first_length = func_802BC380(
        result->first.x * result->first.x +
        result->first.y * result->first.y +
        result->first.z * result->first.z);
    result->flat.x = result->first.x;
    result->flat.y = 0.0f;
    result->flat.z = result->first.z;
    result->flat_normalized = result->flat;
    func_802720EC(&result->flat_normalized.x);
    result->flat_length = func_802BC380(
        result->flat.x * result->flat.x +
        result->flat.y * result->flat.y +
        result->flat.z * result->flat.z);
    result->height = ((func_802165F8_S1 *)(arg0))->unk6C -
                     ((func_802165F8_S2 *)(arg1))->unk60;
}
