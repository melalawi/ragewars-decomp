#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80290980.h"
#include "types.h"

void func_80290A00_de(void *arg0) {
    ((func_8028DA50_S1 *)(arg0))->unk14 = 0;
    ((func_8028DA50_S1 *)(arg0))->unk18 = 0;
}

/** Perform the no-op hook at VRAM 0x802909EC. */
void func_80290A0C_de(void) {
}

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
