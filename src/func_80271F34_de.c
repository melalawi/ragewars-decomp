#include "common/types.h"
#include "span_1000/code_8026E5DC.h"


/** Add two three-component vectors. */
void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right) {
    result->x = left->x + right->x;
    result->y = left->y + right->y;
    result->z = left->z + right->z;
}
