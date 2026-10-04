#include "common/types.h"
#include "span_1000/code_8029F304.h"
#include "types.h"

extern void func_8029BBB0_de(f32 arg0, f32 *arg1, f32 *arg2);



void func_8029E5C0_de(Vec3 *arg0, Vec3 *arg1, f32 arg2) {
    Vec3 tmp;
    f32 sp20;
    f32 sp24;

    func_8029BBB0_de(arg2, &sp20, &sp24);
    tmp.x = arg1->x;
    tmp.y = (sp24 * arg1->y) - (sp20 * arg1->z);
    tmp.z = (sp24 * arg1->z) + (sp20 * arg1->y);
    *arg0 = tmp;
}
