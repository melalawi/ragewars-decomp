#include "types.h"

/* 802BF67C stores sine/cosine values through the first two float buffers
 * and builds an integer permutation table through the third pointer.
 * ROM D9F70..D9F7C. */
extern f32 D_80151AC8[];
extern f32 D_80151BC8[];
extern s32 D_80152B80[];
struct ResidentTransformWorkspaces {
    f32 *firstTrigonometric;
    f32 *secondTrigonometric;
    s32 *permutation;
};
struct ResidentTransformWorkspaces D_800D9370 = {
    D_80151AC8, D_80151BC8, D_80152B80
};
