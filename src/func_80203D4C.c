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

typedef struct func_80203D4C_S1 func_80203D4C_S1;
struct func_80203D4C_S1 {
    char pad0[0x130];
    f32 unk130;
    char pad130[0x134 - 0x130 - sizeof(f32)];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};

static inline void build_rotation(void *object, f32 *matrix) {
    s32 rotation[4];
    f32 angles[3];

    angles[0] = ((func_80203D4C_S1 *)(object))->unk130;
    angles[1] = ((func_80203D4C_S1 *)(object))->unk134;
    angles[2] = ((func_80203D4C_S1 *)(object))->unk138;
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
