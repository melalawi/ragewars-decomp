#include "basetypes.h"

extern s32 D_800D0D58;
extern void func_8025E194(s32 arg0);

typedef struct func_8025CAD0_S1 func_8025CAD0_S1;
typedef struct func_8025CAD0_S2 func_8025CAD0_S2;
struct func_8025CAD0_S1 {
    char pad0[0x14];
    void* unk14;
    char pad14[0x28 - 0x14 - sizeof(void*)];
    s32 unk28;
};
struct func_8025CAD0_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
};

void func_8025CAD0(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = ((func_8025CAD0_S1 *)(arg0))->unk14;
    if (var_s0 != 0) {
        do {
            func_8025E194(((func_8025CAD0_S2 *)(var_s0))->unk8);
            temp_v0 = ((func_8025CAD0_S2 *)(var_s0))->unk8;
            var_s0 = ((func_8025CAD0_S2 *)(var_s0))->unk4;
            D_800D0D58 = temp_v0;
        } while (var_s0 != 0);
    }
    ((func_8025CAD0_S1 *)(arg0))->unk28 = 1;
}
