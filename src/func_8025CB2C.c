#include "basetypes.h"

extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern s32 D_800D0D5C;

typedef struct func_8025CB2C_S1 func_8025CB2C_S1;
typedef struct func_8025CB2C_S2 func_8025CB2C_S2;
struct func_8025CB2C_S1 {
    char pad0[0x14];
    void* unk14;
    char pad14[0x28 - 0x14 - sizeof(void*)];
    s32 unk28;
};
struct func_8025CB2C_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
    char pad8[0xE - 0x8 - sizeof(s32)];
    s16 unkE;
    char padE[0x10 - 0xE - sizeof(s16)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
};

void func_8025CB2C(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = ((func_8025CB2C_S1 *)(arg0))->unk14;
    if (var_s0 != 0) {
        do {
            temp_v0 = func_8025DE74(((func_8025CB2C_S2 *)(var_s0))->unkE,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk10,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk14,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk18,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk1C,
                                     -1);
            ((func_8025CB2C_S2 *)(var_s0))->unk8 = temp_v0;
            var_s0 = ((func_8025CB2C_S2 *)(var_s0))->unk4;
            D_800D0D5C = temp_v0;
        } while (var_s0 != 0);
    }
    ((func_8025CB2C_S1 *)(arg0))->unk28 = 0;
}
