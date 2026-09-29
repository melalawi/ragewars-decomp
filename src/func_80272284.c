#include "basetypes.h"

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct func_80272284_S1 func_80272284_S1;
typedef struct func_80272284_S2 func_80272284_S2;
struct func_80272284_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_80272284_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void *func_80272284(void *arg0, void *arg1, void *arg2) {
    Vec3 tmp;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;

    temp_f5 = ((func_80272284_S1 *)(arg1))->unk0;
    temp_f4 = ((func_80272284_S2 *)(arg2))->unk0;
    temp_f2 = (temp_f5 * temp_f4) + (((func_80272284_S1 *)(arg1))->unk4 * ((func_80272284_S2 *)(arg2))->unk4) + (((func_80272284_S1 *)(arg1))->unk8 * ((func_80272284_S2 *)(arg2))->unk8);
    tmp.x = temp_f5 - (temp_f2 * temp_f4);
    tmp.y = ((func_80272284_S1 *)(arg1))->unk4 - (temp_f2 * ((func_80272284_S2 *)(arg2))->unk4);
    tmp.z = ((func_80272284_S1 *)(arg1))->unk8 - (temp_f2 * ((func_80272284_S2 *)(arg2))->unk8);
    *(Vec3 *)arg0 = tmp;
    return arg0;
}
