#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct func_80241718_S1 func_80241718_S1;
typedef struct func_80241718_S2 func_80241718_S2;
struct func_80241718_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x48 - 0x1C - sizeof(f32)];
    Vec3 unk48;
};
struct func_80241718_S2 {
    char pad0[0x18];
    Vec3 unk18;
};

f32 func_80241718(void *arg0, f32 arg1, f32 arg2) {
    Vec3 normal;
    Vec3 point;

    normal = ((func_80241718_S1 *)(arg0))->unk48;
    if (normal.y == 0.0f) {
        return ((func_80241718_S1 *)(arg0))->unk1C;
    }
    point = ((func_80241718_S2 *)(arg0))->unk18;
    return (((point.z - arg2) * normal.z) + ((point.x - arg1) * normal.x) + (point.y * normal.y)) / normal.y;
}
