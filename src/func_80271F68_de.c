#include "common/types.h"
#include "span_1000/code_8026E5DC.h"


/** Subtract the right vector from the left vector. */
void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2) {
    arg0->x = arg1->x - arg2->x;
    arg0->y = arg1->y - arg2->y;
    arg0->z = arg1->z - arg2->z;
}
