#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

extern void func_8029D6A8(void *arg0, void *arg2);

void func_802A0368(void *arg0, Vec3f *arg1, void *arg2, Vec3f *arg3) {
    char *m = (char *) arg0;

    func_8029D6A8(arg0, arg2);

    *(f32 *) (m + 0x0) = *(f32 *) (m + 0x0) * arg1->x;
    *(f32 *) (m + 0x4) = *(f32 *) (m + 0x4) * arg1->x;
    *(f32 *) (m + 0x8) = *(f32 *) (m + 0x8) * arg1->x;
    *(f32 *) (m + 0x10) = *(f32 *) (m + 0x10) * arg1->y;
    *(f32 *) (m + 0x14) = *(f32 *) (m + 0x14) * arg1->y;
    *(f32 *) (m + 0x18) = *(f32 *) (m + 0x18) * arg1->y;
    *(f32 *) (m + 0x20) = *(f32 *) (m + 0x20) * arg1->z;
    *(f32 *) (m + 0x24) = *(f32 *) (m + 0x24) * arg1->z;
    *(f32 *) (m + 0x28) = *(f32 *) (m + 0x28) * arg1->z;
    *(f32 *) (m + 0x30) = *(f32 *) (m + 0x30) + arg3->x;
    *(f32 *) (m + 0x34) = *(f32 *) (m + 0x34) + arg3->y;
    *(f32 *) (m + 0x38) = *(f32 *) (m + 0x38) + arg3->z;
}
