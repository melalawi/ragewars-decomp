#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802591C0.h"
#include "types.h"
/* Returns the stereo pan of a sound at a position for a listener: centre (0x40) without a listener, when
 * the sound is horizontally within a small radius or straight ahead; otherwise the horizontal direction
 * in listener space is compared with the forward axis through func_802745D0_de and func_802B7130_de, given the
 * side's sign, and scaled around the centre by D_800C8FF8. */





extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272BCC_de(void *, Vec3 *, Vec3 *);
extern void func_8027207C_de(Vec3 *);
extern f32 func_802745D0_de(f32);
extern f32 func_802B7130_de(f32);
extern float fabsf(float);






s16 func_80259B10_de(Vec3 *position, void *listener) {
    Vec3 forward;
    Vec3 offset;
    Vec3 local;
    f32 pan;

    if (listener == 0) {
        return 0x40;
    }
    func_80271F68_de(&offset, &((func_80259B30_S1 *)(listener))->unk128, position);
    if (offset.x * offset.x + offset.z * offset.z < D_800C3F00_de) {
        return 0x40;
    }
    func_80272BCC_de(&((func_80259B30_S1 *)(listener))->unk160, &offset, &local);
    local.y = 0.0f;
    forward.x = forward.y = local.y;
    forward.z = ((func_802077F4_S2 *)(&D_800C3F00_de))->unk4;
    func_8027207C_de(&local);
    pan = func_802B7130_de(func_802745D0_de(local.x * forward.x + local.y * forward.y + local.z * forward.z));
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
    return pan * D_800C3F08_de + D_800C3F08_de;
}
