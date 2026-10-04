#include "span_1000/code_802B7C50.h"
#include "span_1000/types.h"
#include "types.h"





extern s32 func_802B00D4_de(void *, s16 *, s32);




void func_802B2F60_de(Obj_func_802B2F60_de *arg0) {
    s32 new_var;
    Buf16 sp10;

    new_var = arg0->field40;
    sp10.count = 1;
    sp10.value = new_var + (arg0->field3C * 0x30);
    func_802B00D4_de(&((func_80203908_S2 *)(arg0))->unk14, &sp10, 0);
}
