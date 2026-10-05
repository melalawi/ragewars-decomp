#include "span_1000/code_802022E0.h"
#include "types.h"

extern void func_80202CA0_de(s32, f32 *);
extern void func_80274244_de(void *, void *);




void func_80203CFC_de(void *unused0, void *arg1, s32 arg2) {
    s32 sp10[4];
    f32 sp20[3];

    sp20[0] = ((func_80203848_S1 *)(arg1))->unk130;
    sp20[1] = ((func_80203848_S1 *)(arg1))->unk134;
    sp20[2] = ((func_80203848_S1 *)(arg1))->unk138;
    func_80202CA0_de(sp10, sp20);
    func_80274244_de(sp10, arg2);
}
