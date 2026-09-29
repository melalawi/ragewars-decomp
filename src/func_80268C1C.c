#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_80268C1C_S1 func_80268C1C_S1;
typedef struct func_80268C1C_S2 func_80268C1C_S2;
typedef union func_80268C1C_S1_U14 { void* v0; char v1; } func_80268C1C_S1_U14;
struct func_80268C1C_S1 {
    char pad0[0x14];
    func_80268C1C_S1_U14 unk14;
};
struct func_80268C1C_S2 {
    char pad0[0x8];
    void* unk8;
    char pad8[0x16 - 0x8 - sizeof(void*)];
    s16 unk16;
};

void *func_80268C1C(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = ((func_80268C1C_S1 *)(arg0))->unk14.v0;
    if (temp_s0 != 0) {
        func_80255E78(&((func_80268C1C_S1 *)(arg0))->unk14.v1, (s32)temp_s0);
        func_80255C58(arg0, (s32)temp_s0);
        ((func_80268C1C_S2 *)(temp_s0))->unk8 = arg1;
        ((func_80268C1C_S2 *)(temp_s0))->unk16 = 0;
    }
    return temp_s0;
}
