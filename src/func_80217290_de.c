#include "span_1000/code_80213ED4.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_06e4f7ef1f9e.h"
#include "types.h"

/* Squared XZ distance to a point using the existing by-value vector ABI. */
f32 func_80217290_de(void *arg0, Vec3 point)
{
    f32 dx = point.x - ((SharedPlayer *)arg0)->views0.view8_3.pos.x;
    f32 dz = point.z - ((SharedPlayer *)arg0)->views0.view8_3.pos.z;
    return dx * dx + dz * dz;
}
