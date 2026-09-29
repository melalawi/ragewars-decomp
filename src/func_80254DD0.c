#include "basetypes.h"

extern s32 D_801050F8;
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_80254DD0_S1 func_80254DD0_S1;
typedef struct func_80254DD0_S2 func_80254DD0_S2;
struct func_80254DD0_S1 {
    char pad0[0x10];
    s32 unk10;
};
struct func_80254DD0_S2 {
    char pad0[0x14];
    char unk14;
};

void *func_80254DD0(void) {
    void **p = &D_801050F8;
    void *temp_s0 = *p;
    if (temp_s0 != 0) {
        func_80255E78(p, (s32) temp_s0);
        ((func_80254DD0_S1 *)(temp_s0))->unk10 = 1;
        func_80255C58(&((func_80254DD0_S2 *)(p))->unk14, (s32) temp_s0);
    }
    return temp_s0;
}
