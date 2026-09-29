#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct func_80274DFC_S1 func_80274DFC_S1;
typedef struct func_80274DFC_S2 func_80274DFC_S2;
struct func_80274DFC_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
    char pad8[0x30 - 0x8 - sizeof(f32)];
    Vector3 unk30;
};
struct func_80274DFC_S2 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
};

/** Half-plane test: is arg1 on the positive side of arg0's normal (at +0x30)? */
s32 func_80274DFC(void *arg0, void *arg1) {
    Vector3 normal;
    Vector3 delta;
    s32 result;

    normal = ((func_80274DFC_S1 *)(arg0))->unk30;
    delta.x = ((func_80274DFC_S2 *)(arg1))->unk0 - ((func_80274DFC_S1 *)(arg0))->unk0;
    delta.z = ((func_80274DFC_S2 *)(arg1))->unk8 - ((func_80274DFC_S1 *)(arg0))->unk8;
    result = 0;
    if (!(((normal.x * delta.x) + (normal.z * delta.z)) <= 0.0f)) {
        result = 1;
    }
    return result;
}
