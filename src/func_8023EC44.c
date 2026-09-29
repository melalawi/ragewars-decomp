#include "basetypes.h"

typedef struct func_8023EC44_S1 func_8023EC44_S1;
typedef struct func_8023EC44_S2 func_8023EC44_S2;
struct func_8023EC44_S1 {
    char pad0[0x3C];
    s32 unk3C;
};
struct func_8023EC44_S2 {
    char pad0[0xC];
    s32 unkC;
};

void func_8023EC44(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = ((func_8023EC44_S1 *)(arg0))->unk3C;
    if (temp_v1 & 0x1000) {
        ((func_8023EC44_S1 *)(arg0))->unk3C = temp_v1 & ~0x2000;
    }
    temp_v0 = ((func_8023EC44_S1 *)(arg0))->unk3C;
    temp_v1_2 = temp_v0 & 0xFFFC7FFF;
    ((func_8023EC44_S1 *)(arg0))->unk3C = temp_v1_2;
    if (temp_v0 & 0x7000) {
        temp_a1 = ((func_8023EC44_S2 *)(arg1))->unkC;
        switch (temp_a1) {
        case 8:
            ((func_8023EC44_S1 *)(arg0))->unk3C = temp_v1_2 | 0x10000;
            return;
        case 7:
            ((func_8023EC44_S1 *)(arg0))->unk3C = temp_v1_2 | 0x8000;
            break;
        }
    }
}
