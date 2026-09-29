#include "basetypes.h"

extern f32 D_800C7EFC;
extern void func_80273930(void *arg0, f32 arg1);

typedef struct func_8022E0A0_S1 func_8022E0A0_S1;
typedef struct func_8022E0A0_S2 func_8022E0A0_S2;
typedef struct func_8022E0A0_S3 func_8022E0A0_S3;
typedef struct func_8022E0A0_S4 func_8022E0A0_S4;
struct func_8022E0A0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    void* unk8;
    char pad8[0x1C - 0x8 - sizeof(void*)];
    void* unk1C;
};
struct func_8022E0A0_S2 {
    char pad0[0x18];
    s8 unk18;
    char pad18[0x19 - 0x18 - sizeof(s8)];
    s8 unk19;
    char pad19[0x1A - 0x19 - sizeof(s8)];
    s8 unk1A;
};
struct func_8022E0A0_S3 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_8022E0A0_S4 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x724 - 0x650 - sizeof(s16)];
    f32 unk724;
};

void func_8022E0A0(void *arg0, void *arg1) {
    void *range;
    void *actor;
    s32 value;
    f32 amount;

    range = ((func_8022E0A0_S1 *)(arg1))->unk1C;
    value = ((func_8022E0A0_S1 *)(arg1))->unk4;
    if (value < ((func_8022E0A0_S2 *)(range))->unk18) {
        return;
    }
    if (((func_8022E0A0_S2 *)(range))->unk19 < value) {
        return;
    }

    actor = ((func_8022E0A0_S3 *)(((func_8022E0A0_S1 *)(arg1))->unk8))->unk1D8;
    amount = -((func_8022E0A0_S4 *)(actor))->unk724;
    if (((func_8022E0A0_S4 *)(actor))->unk650 == 0xF) {
        amount += D_800C7EFC;
    }
    func_80273930(arg0, amount / (f32)((func_8022E0A0_S2 *)(range))->unk1A);
}
