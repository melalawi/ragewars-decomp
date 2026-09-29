#include "basetypes.h"

extern s32 func_8025E114(s32 arg0);

typedef struct func_8025CBA8_S1 func_8025CBA8_S1;
typedef struct func_8025CBA8_S2 func_8025CBA8_S2;
struct func_8025CBA8_S1 {
    char pad0[0x14];
    void* unk14;
    char pad14[0x28 - 0x14 - sizeof(void*)];
    s32 unk28;
};
struct func_8025CBA8_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
};

void func_8025CBA8(void *arg0) {
    void *var_s0;

    if (((func_8025CBA8_S1 *)(arg0))->unk28 == 0) {
        var_s0 = ((func_8025CBA8_S1 *)(arg0))->unk14;
        if (var_s0 != 0) {
            do {
                if (func_8025E114(((func_8025CBA8_S2 *)(var_s0))->unk8) == 0) {
                    ((func_8025CBA8_S2 *)(var_s0))->unkC = -1;
                    ((func_8025CBA8_S2 *)(var_s0))->unk8 = -1;
                }
                var_s0 = ((func_8025CBA8_S2 *)(var_s0))->unk4;
            } while (var_s0 != 0);
        }
    }
}
