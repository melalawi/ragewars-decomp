#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern void func_80271FD8(Vec3 *out, void *arg1, void *arg2);
extern f32 func_802BC380(f32);
extern f64 D_800C8640;

typedef struct func_80239668_S1 func_80239668_S1;
typedef struct func_80239668_S2 func_80239668_S2;
struct func_80239668_S1 {
    char pad0[0x20];
    void* unk20;
    char pad20[0x30 - 0x20 - sizeof(void*)];
    s32 unk30;
};
struct func_80239668_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x128 - 0x4 - sizeof(void*)];
    char unk128;
};

f32 func_80239668(void *arg0, void *arg1) {
    Vec3 position;
    f32 sum;
    void *node;
    f64 divisor;
    s32 count;

    if (((func_80239668_S1 *)(arg0))->unk30 == 0) {
        return 0.0f;
    }
    node = ((func_80239668_S1 *)(arg0))->unk20;
    sum = 0.0f;
    if (node != 0) {
        do {
            func_80271FD8(&position, &((func_80239668_S2 *)(node))->unk128, arg1);
            sum += func_802BC380(
                (position.x * position.x) +
                (position.y * position.y) +
                (position.z * position.z));
            node = ((func_80239668_S2 *)(node))->unk4;
        } while (node != 0);
    }
    count = ((func_80239668_S1 *)(arg0))->unk30;
    divisor = (f64)count;
    if (count < 0) {
        divisor += D_800C8640;
    }
    return sum / (f32)divisor;
}
