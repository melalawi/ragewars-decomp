#include "basetypes.h"

typedef struct func_8023EBEC_S1 func_8023EBEC_S1;
typedef struct func_8023EBEC_S2 func_8023EBEC_S2;
struct func_8023EBEC_S1 {
    char pad0[0x3C];
    s32 unk3C;
};
struct func_8023EBEC_S2 {
    char pad0[0x10];
    s32 unk10;
};

void func_8023EBEC(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = ((func_8023EBEC_S1 *)(arg0))->unk3C & ~0xE00;
    ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1;
    temp_a1 = ((func_8023EBEC_S2 *)(arg1))->unk10;
    if (temp_a1 & 0x20000000) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 | 0x200;
        return;
    }
    if (temp_a1 & 0x40000000) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 | 0x400;
        return;
    }
    if (temp_a1 < 0) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 | 0x800;
    }
}
