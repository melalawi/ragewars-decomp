/* Enables mode 1 through func_802A33BC, places the menu model at (17, -10, -50) with uniform scale 0.14, zero rotation and a (0, 5, 0) offset, then issues request 0xE78 through func_8025DF54; returns zero. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[8];
    char model[1];
} Menu;

extern Menu *D_800E3590;
extern void func_802A33BC(s32 mode);
extern void func_80439D3C(char *model, s32 arg1, Vec3 scale, Vec3 position);
extern void func_80439DC0(char *model, Vec3 rotation);
extern void func_80439E10(char *model, Vec3 offset);
extern void func_8025DF54(s32 request);

s32 func_8041DC3C(void) {
    Vec3 scale;
    Vec3 position;
    Vec3 rotation;
    Vec3 offset;

    func_802A33BC(1);
    scale.x = 0.14f;
    scale.y = 0.14f;
    scale.z = 0.14f;
    rotation.x = 0.0f;
    rotation.y = 0.0f;
    rotation.z = 0.0f;
    offset.x = 0.0f;
    offset.y = 5.0f;
    offset.z = 0.0f;
    position.x = 17.0f;
    position.y = -10.0f;
    position.z = -50.0f;
    func_80439D3C(D_800E3590->model, 0, scale, position);
    func_80439DC0(D_800E3590->model, rotation);
    func_80439E10(D_800E3590->model, offset);
    func_8025DF54(0xE78);
    return 0;
}
