#include "basetypes.h"

typedef struct func_8024E3B4_S1 func_8024E3B4_S1;
typedef struct func_8024E3B4_S2 func_8024E3B4_S2;
struct func_8024E3B4_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E3B4_S2 {
    char pad0[0x34];
    f32 unk34;
    char pad34[0xF8 - 0x34 - sizeof(f32)];
    f32 unkF8;
};

f32 func_8024E3B4(void *arg0) {
    void *temp_a0 = ((func_8024E3B4_S1 *)(arg0))->unk18;
    s32 temp_v1 = *(s32 *)temp_a0;

    switch (temp_v1) {
    case 11:
        return ((func_8024E3B4_S2 *)(temp_a0))->unkF8;
    case 4:
    case 1:
        return ((func_8024E3B4_S2 *)(temp_a0))->unk34;
    default:
        return 0.0f;
    }
}
