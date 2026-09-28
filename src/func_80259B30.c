/* Returns the stereo pan of a sound at a position for a listener: centre (0x40) without a listener, when
 * the sound is horizontally within a small radius or straight ahead; otherwise the horizontal direction
 * in listener space is compared with the forward axis through func_80274640 and func_802BC200, given the
 * side's sign, and scaled around the centre by D_800C8FF8. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C8FF0;
extern f32 D_800C8FF8;
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272C3C(void *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern f32 func_80274640(f32);
extern f32 func_802BC200(f32);
extern float fabsf(float);

s16 func_80259B30(Vec3 *position, void *listener) {
    Vec3 forward;
    Vec3 offset;
    Vec3 local;
    f32 pan;

    if (listener == 0) {
        return 0x40;
    }
    func_80271FD8(&offset, (Vec3 *)((char *)listener + 0x128), position);
    if (offset.x * offset.x + offset.z * offset.z < D_800C8FF0) {
        return 0x40;
    }
    func_80272C3C((char *)listener + 0x160, &offset, &local);
    local.y = 0.0f;
    forward.x = forward.y = local.y;
    forward.z = *(f32 *)((char *)&D_800C8FF0 + 4);
    func_802720EC(&local);
    pan = func_802BC200(func_80274640(local.x * forward.x + local.y * forward.y + local.z * forward.z));
    if (local.x == 0.0f) {
        return 0x40;
    }
    if (0.0f < local.x) {
        if (pan < 0.0f) {
            pan = -pan;
        }
    } else {
        pan = -fabsf(pan);
    }
    return pan * D_800C8FF8 + D_800C8FF8;
}
