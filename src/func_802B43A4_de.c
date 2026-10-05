#include "span_1000/code_802B369C.h"
#include "types.h"

typedef s32 (*FuncPtr)(void *);

extern void func_802B53E0_de(void *arg0, void *a, void *b, s32 c);
extern s32 func_802B0340_de(s32, s32, void *, s32, s32);

extern char D_002BE0D0;
extern char D_002BEAA4;




void func_802B43A4_de(void *arg0, FuncPtr arg1, s32 arg2) {
    func_802B53E0_de(arg0, &D_002BE0D0, &D_002BEAA4, 0);
    ((func_802B9474_S1 *)(arg0))->unk14 = func_802B0340_de(0, 0, arg2, 1, 0x20);
    ((func_802B9474_S1 *)(arg0))->unk18 = func_802B0340_de(0, 0, arg2, 1, 0x20);
    ((func_802B9474_S1 *)(arg0))->unk30 = arg1((char *)arg0 + 0x34);
    ((func_802B9474_S1 *)(arg0))->unk3C = 0;
    ((func_802B9474_S1 *)(arg0))->unk40 = 1;
    ((func_802B9474_S1 *)(arg0))->unk44 = 0;
}
