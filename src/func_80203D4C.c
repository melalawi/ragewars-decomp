#include "basetypes.h"

/* Rotates a point about a pivot by an object's orientation: builds the rotation matrix from the
   three angles at offset 0x130 of the object through func_80202CA0 and func_802742B4 (the body of
   func_80203CFC, inlined here as the frame layout shows), takes the point's offset from the pivot,
   rotates it through func_80272C3C into the point and adds the pivot back. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern void func_80202CA0(s32 *, f32 *);
extern void func_802742B4(s32 *, f32 *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272C3C(f32 *, Vec3 *, Vec3 *);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);

static inline void build_rotation(void *object, f32 *matrix) {
    s32 rotation[4];
    f32 angles[3];

    angles[0] = *(f32 *)((char *)object + 0x130);
    angles[1] = *(f32 *)((char *)object + 0x134);
    angles[2] = *(f32 *)((char *)object + 0x138);
    func_80202CA0(rotation, angles);
    func_802742B4(rotation, matrix);
}

void func_80203D4C(void *unused, void *object, Vec3 *pivot, Vec3 *point) {
    f32 matrix[16];
    Vec3 offset;

    build_rotation(object, matrix);
    func_80271FD8(&offset, point, pivot);
    func_80272C3C(matrix, &offset, point);
    func_80271FA4(point, point, pivot);
}
