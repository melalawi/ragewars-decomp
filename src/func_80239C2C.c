#include "basetypes.h"

extern void func_80239CD0(void *arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct func_80239C2C_S1 func_80239C2C_S1;
typedef struct func_80239C2C_S2 func_80239C2C_S2;
typedef union func_80239C2C_S1_UF24 { void* v0; char v1; } func_80239C2C_S1_UF24;
struct func_80239C2C_S1 {
    char pad0[0xF24];
    func_80239C2C_S1_UF24 unkF24;
};
struct func_80239C2C_S2 {
    char pad0[0xE40];
    char unkE40;
};

void *func_80239C2C(void *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = ((func_80239C2C_S1 *)(arg0))->unkF24.v0;
    if (temp_s0 != 0) {
        func_80239CD0(temp_s0);
        func_80255E78(&((func_80239C2C_S1 *)(arg0))->unkF24.v1, (s32)temp_s0);
        func_80255CB4(&((func_80239C2C_S2 *)(arg1))->unkE40, (s32)temp_s0);
    }
    return temp_s0;
}
