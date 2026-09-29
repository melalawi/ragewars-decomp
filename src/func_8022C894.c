#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

typedef struct func_8022C894_S1 func_8022C894_S1;
struct func_8022C894_S1 {
    char pad0[0x6C0];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
};

void func_8022C894(void *arg0, void *arg1) {
    if ((((func_8022C894_S1 *)(arg0))->unk6C0 != 0.0f) || (((func_8022C894_S1 *)(arg0))->unk6C4 != 0.0f)) {
        func_802227D0(arg0, arg1, 3);
    }
}
