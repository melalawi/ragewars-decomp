#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern f32 func_802BC380(f32);

void func_8027335C(void *arg0, f32 *arg1) {
    char *m = (char *)arg0;
    Vector3 tmp;

    tmp.x = *(f32 *)(m + 0x0);
    tmp.y = *(f32 *)(m + 0x4);
    tmp.z = *(f32 *)(m + 0x8);
    arg1[0] = func_802BC380((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));

    tmp.x = *(f32 *)(m + 0x10);
    tmp.y = *(f32 *)(m + 0x14);
    tmp.z = *(f32 *)(m + 0x18);
    arg1[1] = func_802BC380((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));

    tmp.x = *(f32 *)(m + 0x20);
    tmp.y = *(f32 *)(m + 0x24);
    tmp.z = *(f32 *)(m + 0x28);
    arg1[2] = func_802BC380((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));
}
