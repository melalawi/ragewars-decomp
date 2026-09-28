/* Returns the distance from point p to the segment from a to b: the offset of p from a is reduced by
 * its projection onto the segment direction, clamped to the segment ends, before taking the length. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern f32 func_802BC380(f32);

f32 func_80241830(Vec3 *a, Vec3 *b, Vec3 *p) {
    Vec3 offset;
    Vec3 dir;
    f32 value;
    f32 len;

    func_80271FD8(&offset, p, a);
    func_80271FD8(&dir, b, a);
    value = dir.x * offset.x + dir.y * offset.y + dir.z * offset.z;
    if (!(value < 0.0f)) {
        len = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
        if (!(len <= value)) {
            func_8027200C(&dir, &dir, value / len);
        }
        func_80271FD8(&offset, &offset, &dir);
    }
    value = offset.x * offset.x + offset.y * offset.y + offset.z * offset.z;
    return func_802BC380(value);
}
