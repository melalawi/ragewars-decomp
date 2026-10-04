#include "span_1000/code_8027ED40.h"
#include "types.h"

extern char D_801379C0;
extern char D_801370E8;

extern void func_80284178_de(void);
extern void func_802A42F4_de(void *arg0, void *arg1);
extern void func_80268C7C_de(void *arg0, s32 arg1);




void func_80283A1C_de(void *arg0) {
    s32 temp;

    if (((func_802839F0_S1 *)(arg0))->unk1D9 != 0) {
        func_80284178_de();
        func_802A42F4_de(&D_801379C0, arg0);
    }
    temp = ((func_802839F0_S1 *)(arg0))->unk138;
    if (temp != 0) {
        func_80268C7C_de(&D_801370E8, temp);
        ((func_802839F0_S1 *)(arg0))->unk138 = 0;
    }
}
