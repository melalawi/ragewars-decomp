#include "basetypes.h"

extern void func_80273930(void *arg0, f32 arg1);
extern void func_80273CD8(void *arg0, f32 arg1);

typedef struct func_80203DF0_S1 func_80203DF0_S1;
typedef struct func_80203DF0_S2 func_80203DF0_S2;
typedef struct func_80203DF0_S3 func_80203DF0_S3;
typedef struct func_80203DF0_S4 func_80203DF0_S4;
struct func_80203DF0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    void* unk8;
};
struct func_80203DF0_S2 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x294 - 0x18 - sizeof(char*)];
    f32 unk294;
};
struct func_80203DF0_S3 {
    char pad0[0x3C];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
};
struct func_80203DF0_S4 {
    char pad0[0x6C];
    f32 unk6C;
    char pad6C[0x20C - 0x6C - sizeof(f32)];
    f32 unk20C;
};

void func_80203DF0(void *arg0, void *arg1) {
    void *temp_a0;
    char *temp_s1;
    void *temp_v0;

    temp_a0 = ((func_80203DF0_S1 *)(arg1))->unk8;
    temp_s1 = ((func_80203DF0_S2 *)(temp_a0))->unk18 + 0x14;
    if (((func_80203DF0_S1 *)(arg1))->unk4 == ((func_80203DF0_S3 *)(temp_s1))->unk3C) {
        func_80273930(arg0, ((func_80203DF0_S2 *)(temp_a0))->unk294);
    }
    if (((func_80203DF0_S1 *)(arg1))->unk4 == ((func_80203DF0_S3 *)(temp_s1))->unk40) {
        temp_v0 = ((func_80203DF0_S1 *)(arg1))->unk8;
        func_80273CD8(arg0,
                      ((func_80203DF0_S4 *)(temp_v0))->unk20C -
                          ((func_80203DF0_S4 *)(temp_v0))->unk6C);
    }
}
