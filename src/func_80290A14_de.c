#include "span_1000/code_802909D8.h"
#include "types.h"

extern void func_8027207C_de(void *arg0, void *arg1, s32 arg2);





void func_80290A14_de(void *arg0, void *arg1) {
    s32 *src = (s32 *)arg1;
    s32 a = src[0];
    s32 b = src[1];
    s32 c = src[2];
    ((func_802909F4_S1 *)(arg0))->unk14.v0 = a;
    ((func_802909F4_S1 *)(arg0))->unk18 = b;
    ((func_802909F4_S1 *)(arg0))->unk1C = c;
    func_8027207C_de(&((func_802909F4_S1 *)(arg0))->unk14.v1, arg1, c);
}
