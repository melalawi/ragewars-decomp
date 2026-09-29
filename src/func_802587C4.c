#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

typedef struct func_802587C4_S1 func_802587C4_S1;
typedef struct func_802587C4_S2 func_802587C4_S2;
struct func_802587C4_S1 {
    char pad0[0x110];
    s32 unk110;
};
struct func_802587C4_S2 {
    char pad0[0x1C];
    s32 unk1C;
};

void func_802587C4(s32 *arg0) {
    s32 *temp_s0;
    s32 temp_v1;
    u32 temp_v0;

    temp_s0 = &((func_802587C4_S1 *)(arg0))->unk110;
    temp_v0 = func_802C2020();
    temp_v1 = ((func_802587C4_S2 *)(temp_s0))->unk1C - 1;
    ((func_802587C4_S2 *)(temp_s0))->unk1C = temp_v1;
    if (temp_v1 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(temp_s0, 0, 1);
        return;
    }
    func_802C2040(temp_v0);
}
