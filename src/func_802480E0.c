/* Sways a model part: from the frame count D_800D2978, a per-part phase ((flags & 0x38) * 50, plus 40
 * unless flag 4 is set) and the part's time divided by 113, it reads a 120-step sine table at D_800D0720 to
 * build a rotation axis and angle for the part's sway mode (2: about a wobbling z/y axis, 0x82: doubled
 * about a wobbling x/y axis, 0x40: doubled about a fully wobbling axis, 1: 0.7 of the swing about y) and
 * applies that rotation to the part's matrix about its own origin; other modes leave it unchanged. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 count;
    f32 value[120];
} SineTable;

extern SineTable D_800D0720;
extern s32 D_800D2978;
extern void func_802720EC(Vec3 *);
extern void func_8027302C(f32 *, f32 *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_802734B8(f32 *, f32, f32, f32);
extern void func_80272D70(f32 *, f32, f32, f32, f32);
extern void func_8026F690(f32 *, f32 *, f32 *);

void func_802480E0(s32 time, s32 flags, f32 *matrix) {
    f32 rotation[16];
    f32 inverse[16];
    Vec3 origin;
    Vec3 axis;
    u32 t;
    f32 angle;
    f32 flip;
    s32 mode;

    t = D_800D2978;
    t += (flags & 0x38) * 50;
    t += (u32)(time & 0xFFFF) / 113;
    if (!(flags & 4)) {
        t += 40;
    }
    axis.x = 0.0f;
    axis.z = 0.0f;
    axis.y = 1.0f;
    mode = flags & 0xC3;
    if (mode == 2) {
        axis.z = 1.0f;
        axis.x = 0.0f;
        angle = D_800D0720.value[t % 120] - 0.5f;
        axis.y = D_800D0720.value[(t + 12) % 120];
    } else if (mode == 0x82) {
        axis.x = 1.0f;
        axis.z = 0.0f;
        angle = D_800D0720.value[t % 120] - 0.5f;
        axis.y = D_800D0720.value[(t + 12) % 120];
        angle *= 2.0f;
    } else if (mode == 0x40) {
        angle = D_800D0720.value[(t + 30) % 120] - 0.5f;
        axis.x = D_800D0720.value[(t + 12) % 120];
        axis.y = D_800D0720.value[(t + 42) % 120];
        axis.z = D_800D0720.value[(t + 110) % 120];
        angle *= 2.0f;
    } else if (mode == 1) {
        angle = D_800D0720.value[(t + 70) % 120] - 0.5f;
        angle *= 0.7f;
    } else {
        return;
    }
    func_802720EC(&axis);
    origin.x = matrix[12];
    origin.y = matrix[13];
    origin.z = matrix[14];
    func_8027302C(inverse, matrix);
    flip = -1.0f;
    func_8027200C(&origin, &origin, flip);
    func_802734B8(inverse, origin.x, origin.y, origin.z);
    func_80272D70(rotation, angle, axis.x, axis.y, axis.z);
    func_8026F690(matrix, inverse, rotation);
    func_8027200C(&origin, &origin, flip);
    func_802734B8(matrix, origin.x, origin.y, origin.z);
}
