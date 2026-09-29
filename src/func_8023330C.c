#include "basetypes.h"

extern float D_800C8140;
extern s32 func_80214178(void *, void *, s32);

typedef struct func_8023330C_S1 func_8023330C_S1;
struct func_8023330C_S1 {
    char pad0[0x148];
    float unk148;
};

void func_8023330C(void *arg0, void *arg1) {
    ((func_8023330C_S1 *)(arg1))->unk148 = D_800C8140;
    func_80214178(arg0, arg1, 8);
}
