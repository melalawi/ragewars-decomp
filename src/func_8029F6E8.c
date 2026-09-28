#include "basetypes.h"

extern void func_8029CBB0(f32 arg0, f32 *arg1, f32 *arg2);

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

void func_8029F6E8(Vector3 *arg0, Vector3 *arg1, f32 arg2) {
    Vector3 tmp;
    f32 sp20;
    f32 sp24;

    func_8029CBB0(arg2, &sp20, &sp24);
    tmp.x = (sp24 * arg1->x) - (sp20 * arg1->y);
    tmp.y = (sp24 * arg1->y) + (sp20 * arg1->x);
    tmp.z = arg1->z;
    *arg0 = tmp;
}
