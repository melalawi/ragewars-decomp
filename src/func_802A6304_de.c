#include "span_1000/code_802A6488.h"
#include "types.h"

extern void func_802A354C_de(void *arg0);
extern void func_802A339C_de(void *, void *);
extern void func_802A3718_de(s32, void *, s32);
extern void func_802A3DD4_de(s32, void *, s32);




void func_802A6304_de(s32 arg0, void *arg1, s32 arg2) {
    if (((func_802A72F4_S1 *)(arg1))->unk3C & 8) {
        func_802A354C_de(arg1);
    }
    if (((func_802A72F4_S1 *)(arg1))->unk3C & 4) {
        func_802A339C_de(arg1, arg2);
    }
    if (((func_802A72F4_S1 *)(arg1))->unk48 >= 2) {
        if (((func_802A72F4_S1 *)(arg1))->unk34 >= 0) {
            func_802A3718_de(arg0, arg1, arg2);
            return;
        }
        func_802A3DD4_de(arg0, arg1, arg2);
    }
}
