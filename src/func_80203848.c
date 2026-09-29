#include "basetypes.h"

extern void func_80202CA0(s32, f32 *);

typedef struct func_80203848_S1 func_80203848_S1;
struct func_80203848_S1 {
    char pad0[0x130];
    f32 unk130;
    char pad130[0x134 - 0x130 - sizeof(f32)];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};

s32 func_80203848(s32 arg0, s32 arg1, void *arg2) {
    f32 sp10[3];

    sp10[0] = ((func_80203848_S1 *)(arg2))->unk130;
    sp10[1] = ((func_80203848_S1 *)(arg2))->unk134;
    sp10[2] = ((func_80203848_S1 *)(arg2))->unk138;
    func_80202CA0(arg0, sp10);
    return arg0;
}
