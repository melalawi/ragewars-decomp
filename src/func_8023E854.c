#include "basetypes.h"

typedef struct func_8023E854_S1 func_8023E854_S1;
typedef struct func_8023E854_S2 func_8023E854_S2;
struct func_8023E854_S1 {
    char pad0[0x18C];
    f32 unk18C;
    char pad18C[0x190 - 0x18C - sizeof(f32)];
    f32 unk190;
    char pad190[0x194 - 0x190 - sizeof(f32)];
    f32 unk194;
};
struct func_8023E854_S2 {
    char pad0[0x48];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
};

s32 func_8023E854(void *arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((((func_8023E854_S1 *)(arg0))->unk18C == ((func_8023E854_S2 *)(arg1))->unk48) &&
        (((func_8023E854_S1 *)(arg0))->unk190 == ((func_8023E854_S2 *)(arg1))->unk4C) &&
        (((func_8023E854_S1 *)(arg0))->unk194 == ((func_8023E854_S2 *)(arg1))->unk50)) {
        var_v0 = 1;
    }
    return var_v0;
}
