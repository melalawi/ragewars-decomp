#include "basetypes.h"

typedef struct func_80217290_S1 func_80217290_S1;
struct func_80217290_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
};

f32 func_80217290(void *arg0, s32 arg1, volatile s32 arg2, s32 arg3) {
    f32 a1 = *(f32 *)&arg1;
    f32 a3 = *(f32 *)&arg3;
    f32 dx = a1 - ((func_80217290_S1 *)(arg0))->unk8;
    f32 dz = a3 - ((func_80217290_S1 *)(arg0))->unk10;
    return dx * dx + dz * dz;
}
