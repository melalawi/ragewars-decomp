#include "span_1000/code_80299DB4.h"
#include "types.h"

extern s32 func_8025305C_de(s32 arg0);
extern s32 func_802A0724_de(s32 arg0, s32 unused1, s32 arg2);




void func_80299B74_de(void *arg0, s32 arg1, s32 arg2) {
    if ((((func_8029AB74_S1 *)(arg0))->unk0) == 0) {
        ((func_8029AB74_S1 *)(arg0))->unk0 = func_8025305C_de(arg2);
        ((func_8029AB74_S1 *)(arg0))->unkC = 0;
        ((func_8029AB74_S1 *)(arg0))->unk4 = arg2;
    }
    {
        s32 t_c = ((func_8029AB74_S1 *)(arg0))->unkC;
        s32 t_0 = ((func_8029AB74_S1 *)(arg0))->unk0;
        func_802A0724_de(t_0 + t_c, arg1, arg2);
    }
    ((func_8029AB74_S1 *)(arg0))->unkC = (((func_8029AB74_S1 *)(arg0))->unkC) + arg2;
}
