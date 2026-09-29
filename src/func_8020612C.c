#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

typedef struct func_8020612C_S1 func_8020612C_S1;
typedef struct func_8020612C_S2 func_8020612C_S2;
typedef struct func_8020612C_S3 func_8020612C_S3;
typedef struct func_8020612C_S4 func_8020612C_S4;
struct func_8020612C_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_8020612C_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_8020612C_S3 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0xA - 0x4 - sizeof(s32)];
    s16 unkA;
    char padA[0x14 - 0xA - sizeof(s16)];
    s16 unk14;
    char pad14[0x16 - 0x14 - sizeof(s16)];
    s16 unk16;
};
struct func_8020612C_S4 {
    char pad0[0x40];
    f32 unk40;
    char pad40[0x64 - 0x40 - sizeof(f32)];
    f32 unk64;
    char pad64[0x124 - 0x64 - sizeof(f32)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
};

void func_8020612C(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_a2;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = ((func_8020612C_S1 *)(arg0))->unk18;
    temp_a2 = &((func_8020612C_S2 *)(temp_v0))->unk14;
    if (((func_8020612C_S3 *)(temp_a2))->unk4 == 0) {
        if (((func_8020612C_S3 *)(temp_a2))->unk14 == -1) {
            ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
            return;
        }
        if (((func_8020612C_S3 *)(temp_a2))->unk16 == -1) {
            ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
            return;
        }
    }
    if (((func_8020612C_S4 *)(arg1))->unk124 == ((func_8020612C_S3 *)(temp_a2))->unkA) {
        ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
        return;
    }
    temp_v1 = ((func_8020612C_S3 *)(temp_a2))->unk0;
    if (!(temp_v1 & 1)) {
        if (((func_8020612C_S4 *)(arg1))->unk128 <= 0) {
            return;
        }
    }
    var_v0 = temp_v1 & 2;
    if (var_v0 != 0) {
        if (((func_8020612C_S1 *)(arg0))->unk100 & 0x200) {
            ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
            return;
        }
    }
    if (((func_8020612C_S4 *)(arg1))->unk40 >= ((func_8020612C_S4 *)(arg1))->unk64) {
        func_80214178(arg0, arg1, 1);
    }
}
