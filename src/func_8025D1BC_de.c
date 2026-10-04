#include "span_1000/code_8025C67C.h"
#include "types.h"

extern void func_80258740_de(s32 *arg0);
extern void *func_80258D40_de(void *arg0);
extern void func_802B2F00_de(void *arg0, s16 arg1);
extern void func_802B2F60_de(void *arg0);
extern void func_802587A4_de(s32 *arg0);




void func_8025D1BC_de(void *arg0) {
    void *temp_v0_2;
    s32 temp_v0;

    func_80258740_de(*(s32 **)arg0);
    temp_v0 = ((func_8025D1DC_S1 *)(arg0))->unk8;
    if (temp_v0 != 2 && temp_v0 != 0) {
        ((func_8025D1DC_S1 *)(arg0))->unk8 = 2;
        temp_v0_2 = func_80258D40_de(*(void **)arg0);
        func_802B2F00_de(temp_v0_2, ((func_8025D1DC_S1 *)(arg0))->unk1E);
        func_802B2F60_de(temp_v0_2);
    }
    func_802587A4_de(*(s32 **)arg0);
}
