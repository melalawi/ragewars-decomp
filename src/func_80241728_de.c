#include "common/types.h"
#include "span_1000/code_802406DC.h"
#include "span_1000/types.h"
#include "types.h"








f32 func_80241728_de(void *arg0, f32 arg1, f32 arg2) {
    Vec3 normal;
    Vec3 point;

    normal = ((func_80241718_S1 *)(arg0))->unk48;
    if (normal.y == 0.0f) {
        return ((func_80241718_S1 *)(arg0))->unk1C;
    }
    point = ((Field_Vec_18 *)(arg0))->value;
    return (((point.z - arg2) * normal.z) + ((point.x - arg1) * normal.x) + (point.y * normal.y)) / normal.y;
}
