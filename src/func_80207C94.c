#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

typedef struct func_80207C94_S1 func_80207C94_S1;
typedef struct func_80207C94_S2 func_80207C94_S2;
typedef struct func_80207C94_S3 func_80207C94_S3;
typedef struct func_80207C94_S4 func_80207C94_S4;
struct func_80207C94_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x38 - 0x18 - sizeof(void*)];
    s32 unk38;
};
struct func_80207C94_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_80207C94_S3 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x50 - 0x24 - sizeof(s32)];
    f32 unk50;
};
struct func_80207C94_S4 {
    s32 unk0;
    char pad0[0x40 - 0x0 - sizeof(s32)];
    f32 unk40;
};

void func_80207C94(void *arg0, void *arg1) {
    s32 temp_a2;
    void *temp_a3;
    s32 var_v1;
    s32 temp_v0;

    temp_a3 = &((func_80207C94_S2 *)(((func_80207C94_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207C94_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x20) {
        temp_v0 = ((func_80207C94_S4 *)(arg1))->unk0 & 0x20000;
        var_v1 = (u32)0 < (u32)temp_v0;
    }
    if ((temp_a2 & 0x200) && !(((func_80207C94_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if ((((func_80207C94_S3 *)(temp_a3))->unk24 & 0x800) && (((func_80207C94_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (((func_80207C94_S4 *)(arg1))->unk40 >= ((func_80207C94_S3 *)(temp_a3))->unk50) {
            func_80214178(arg0, arg1, 3);
        }
    } else {
        ((func_80207C94_S4 *)(arg1))->unk40 = 0.0f;
    }
}
