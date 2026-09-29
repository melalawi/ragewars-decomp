#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

typedef struct func_80203E78_S1 func_80203E78_S1;
typedef struct func_80203E78_S2 func_80203E78_S2;
struct func_80203E78_S1 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80203E78_S2 {
    char pad0[0x4];
    s32 unk4;
};

void func_80203E78(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = ((func_80203E78_S1 *)(arg1))->unk4 - ((func_80203E78_S2 *)(arg2))->unk4;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    ((func_80203E78_S1 *)(arg1))->unk4 = var_v1;
    if (var_v1 == 0) {
        func_80214178(arg0, arg1, 0x40);
    }
}
