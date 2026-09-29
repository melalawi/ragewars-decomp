#include "basetypes.h"

extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

typedef struct func_80207D34_S1 func_80207D34_S1;
typedef struct func_80207D34_S2 func_80207D34_S2;
struct func_80207D34_S1 {
    char pad0[0x18];
    char* unk18;
};
struct func_80207D34_S2 {
    char pad0[0x24];
    s32 unk24;
};

void func_80207D34(void *arg0, u32 *arg1) {
    void *temp_s0;

    temp_s0 = ((func_80207D34_S1 *)(arg0))->unk18 + 0x14;
    func_80278DE8(arg0, 0x20000, arg0);
    if (!(((func_80207D34_S2 *)(temp_s0))->unk24 & 0x80)) {
        *arg1 &= 0xFFFDFFFF;
    }
}
