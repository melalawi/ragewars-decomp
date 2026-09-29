#include "basetypes.h"

extern f32 D_800D2988;

typedef struct func_8021846C_S1 func_8021846C_S1;
typedef struct func_8021846C_S2 func_8021846C_S2;
typedef struct func_8021846C_S3 func_8021846C_S3;
struct func_8021846C_S1 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x37C - 0x4 - sizeof(f32)];
    s32 unk37C;
};
struct func_8021846C_S2 {
    char pad0[0x698];
    void* unk698;
};
struct func_8021846C_S3 {
    char pad0[0xB0];
    s32 unkB0;
};

s32 func_8021846C(void *arg0, void *arg1) {
    f32 temp_f1;

    temp_f1 = ((func_8021846C_S1 *)(arg0))->unk4;
    if (temp_f1 > 0.0f) {
        ((func_8021846C_S1 *)(arg0))->unk4 = temp_f1 - D_800D2988;
        return 0;
    }
    if (((func_8021846C_S3 *)((((func_8021846C_S2 *)(arg1))->unk698)))->unkB0 & 0x8000) {
        return 0;
    }
    ((func_8021846C_S1 *)(arg0))->unk37C = -1;
    return 1;
}
