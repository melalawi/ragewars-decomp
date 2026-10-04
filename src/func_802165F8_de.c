#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "span_1000/types.h"
#include "types.h"





extern void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern void func_8027207C_de(f32 *arg0);
extern f32 func_802B72B0_de(f32);






void func_802165F8_de(void *arg0, void *arg1, Result_func_802165F8_de *result) {
    func_80271F68_de(&result->first, &((func_802165F8_S1 *)(arg0))->unk8,
                  &((func_802165F8_S2 *)(arg1))->unk48);
    result->first_normalized = result->first;
    func_8027207C_de(&result->first_normalized.x);
    result->first_length = func_802B72B0_de(
        result->first.x * result->first.x +
        result->first.y * result->first.y +
        result->first.z * result->first.z);
    result->flat.x = result->first.x;
    result->flat.y = 0.0f;
    result->flat.z = result->first.z;
    result->flat_normalized = result->flat;
    func_8027207C_de(&result->flat_normalized.x);
    result->flat_length = func_802B72B0_de(
        result->flat.x * result->flat.x +
        result->flat.y * result->flat.y +
        result->flat.z * result->flat.z);
    result->height = ((func_802165F8_S1 *)(arg0))->unk6C -
                     ((func_802165F8_S2 *)(arg1))->unk60;
}
