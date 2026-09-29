#include "basetypes.h"

typedef struct func_80241604_S1 func_80241604_S1;
typedef struct func_80241604_S2 func_80241604_S2;
struct func_80241604_S1 {
    char pad0[0x8];
    f32 unk8;
};
struct func_80241604_S2 {
    char pad0[0x8];
    f32 unk8;
};

s32 func_80241604(void *arg0, void *arg1, f32 arg2, void *arg3) {
    f32 dx = *(f32 *)arg1 - *(f32 *)arg3;
    f32 dz = ((func_80241604_S1 *)(arg1))->unk8 - ((func_80241604_S2 *)(arg3))->unk8;
    s32 result = 1;
    if (!((dx * dx + dz * dz) <= (arg2 * arg2))) {
        result = 0;
    }
    return result;
}
