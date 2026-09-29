#include "basetypes.h"

extern void func_80202CA0(s32, f32 *);
extern void func_802742B4(void *, void *);

typedef struct func_80203CFC_S1 func_80203CFC_S1;
struct func_80203CFC_S1 {
    char pad0[0x130];
    f32 unk130;
    char pad130[0x134 - 0x130 - sizeof(f32)];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};

void func_80203CFC(void *unused0, void *arg1, s32 arg2) {
    s32 sp10[4];
    f32 sp20[3];

    sp20[0] = ((func_80203CFC_S1 *)(arg1))->unk130;
    sp20[1] = ((func_80203CFC_S1 *)(arg1))->unk134;
    sp20[2] = ((func_80203CFC_S1 *)(arg1))->unk138;
    func_80202CA0(sp10, sp20);
    func_802742B4(sp10, arg2);
}
