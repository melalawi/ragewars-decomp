#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);

typedef struct func_80258760_S1 func_80258760_S1;
typedef struct func_80258760_S2 func_80258760_S2;
struct func_80258760_S1 {
    char pad0[0x110];
    s32 unk110;
};
struct func_80258760_S2 {
    char pad0[0x1C];
    s32 unk1C;
};

void func_80258760(s32 *arg0) {
    s32 *temp_s0;
    s32 temp_v1;
    u32 temp_a0;

    temp_s0 = &((func_80258760_S1 *)(arg0))->unk110;
    temp_a0 = func_802C2020();
    temp_v1 = ((func_80258760_S2 *)(temp_s0))->unk1C + 1;
    ((func_80258760_S2 *)(temp_s0))->unk1C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32) temp_s0, 0, 1);
        return;
    }
    func_802C2040(temp_a0);
}
