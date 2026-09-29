#include "basetypes.h"

extern void func_80276580(void *arg0, s32 arg1, void *arg2);

typedef struct func_80276544_S1 func_80276544_S1;
typedef struct func_80276544_S2 func_80276544_S2;
struct func_80276544_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
};
struct func_80276544_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};

void func_80276544(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;

    if (arg1 != 0) {
        temp_f0 = ((func_80276544_S1 *)(arg2))->unk0;
        ((func_80276544_S2 *)(arg0))->unk8 = temp_f0;
        ((func_80276544_S2 *)(arg0))->unk0 = temp_f0;
        temp_f0_2 = ((func_80276544_S1 *)(arg2))->unk8;
        ((func_80276544_S2 *)(arg0))->unkC = temp_f0_2;
        ((func_80276544_S2 *)(arg0))->unk4 = temp_f0_2;
        func_80276580(arg0, arg1 - 1, (char *)arg2 + 0xC);
    }
}
