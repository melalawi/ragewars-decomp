/* Places an actor's ground shadow: the shadow size is the smaller of half the vertical offset from
 * func_8024E2EC and that minus a tenth of the actor's height above its ground height at 0x40, vanishing
 * when negative; a transform is built from the actor's orientation, scaled flat by the shadow size,
 * positioned at the ground under the actor, stored as the actor's per-frame matrix and submitted through
 * func_8026992C. */
#include "basetypes.h"

#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_800D297C;
extern f32 func_8024E2EC(void *);
extern void func_8024D860(f32 *, void *);
extern void func_802725BC(Vec3 *, f32);
extern void func_802742B4(f32 *, f32 *);
extern void func_802734EC(f32 *, f32, f32, f32);
extern void func_802734B8(f32 *, f32, f32, f32);
extern void func_802702EC(f32 *, void *);
extern void func_8026992C(void *, s32, s32);

void func_8024EF18(void *actor) {
    f32 matrix[16];
    Vec3 position;
    f32 rotation[4];
    f32 ground;
    f32 height;
    f32 size;

    ground = *(f32 *)((char *)actor + 0x40);
    height = *(f32 *)((char *)actor + 0xC) - ground;
    if (!(MIN(func_8024E2EC(actor) * 0.5f, func_8024E2EC(actor) * 0.5f - height * 0.1f) < 0.0f)) {
        size = MIN(func_8024E2EC(actor) * 0.5f, func_8024E2EC(actor) * 0.5f - height * 0.1f);
    } else {
        size = 0.0f;
    }
    func_8024D860(rotation, actor);
    position.x = *(f32 *)((char *)actor + 0x8);
    position.z = *(f32 *)((char *)actor + 0x10);
    position.y = ground;
    func_802725BC(&position, 20000.0f);
    func_802742B4(rotation, matrix);
    func_802734EC(matrix, size, 1.0f, size);
    func_802734B8(matrix, position.x, position.y, position.z);
    func_802702EC(matrix, (char *)actor + ((D_800D297C << 6) + 0xE8));
    func_8026992C((char *)actor + ((D_800D297C << 6) + 0xE8), 1, 0x96);
}
