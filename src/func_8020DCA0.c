#include "basetypes.h"
typedef s32 M2C_UNK;

s32 func_80274544(void);
s32 func_8020DD04(s32);
M2C_UNK func_80209874(void *, s32);

typedef struct func_8020DCA0_S1 func_8020DCA0_S1;
typedef struct func_8020DCA0_S2 func_8020DCA0_S2;
struct func_8020DCA0_S1 {
    void* unk0;
    char pad0[0x230 - 0x0 - sizeof(void*)];
    s32 unk230;
};
struct func_8020DCA0_S2 {
    char pad0[0x18];
    s32 unk18;
};

void func_8020DCA0(void *arg0) {
    s32 temp_v0;
    if ((func_80274544() % 4) == 1) {
        temp_v0 = func_8020DD04((((func_8020DCA0_S2 *)(((((func_8020DCA0_S1 *)(arg0))->unk0))))->unk18) + 0x14);
        (((func_8020DCA0_S1 *)(arg0))->unk230) = temp_v0;
        func_80209874(arg0, temp_v0);
    }
}
