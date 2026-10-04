#include "span_1000/code_8020570C.h"
#include "types.h"

extern void func_8024B6A0_de(void *a, s32 c, s32 flag);
extern void func_802472F0_de(void *arg0);




void func_802065C0_de(void *a, void *b, s32 c) {
    ((func_802065C0_S1 *)(b))->unk35 = -1;
    ((func_802065C0_S1 *)(b))->unkCB = 0;
    ((func_802065C0_S1 *)(b))->unk124 = c;
    func_8024B6A0_de(a, c, 1);
    func_802472F0_de(a);
}
