#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern void func_80271FD8(Vec3 *out, void *arg1, void *arg2);
extern f32 func_802BC380(f32);
extern f64 D_800C8640;

f32 func_80239668(void *arg0, void *arg1) {
    Vec3 position;
    f32 sum;
    void *node;
    f64 divisor;
    s32 count;

    if (*(s32 *)((char *)arg0 + 0x30) == 0) {
        return 0.0f;
    }
    node = *(void **)((char *)arg0 + 0x20);
    sum = 0.0f;
    if (node != 0) {
        do {
            func_80271FD8(&position, (char *)node + 0x128, arg1);
            sum += func_802BC380(
                (position.x * position.x) +
                (position.y * position.y) +
                (position.z * position.z));
            node = *(void **)((char *)node + 4);
        } while (node != 0);
    }
    count = *(s32 *)((char *)arg0 + 0x30);
    divisor = (f64)count;
    if (count < 0) {
        divisor += D_800C8640;
    }
    return sum / (f32)divisor;
}
