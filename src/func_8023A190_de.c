#include "span_1000/code_8023940C.h"
void *func_8025343C_de(int a, int b, int c, void *d);
void func_802A001C_de(int a, int b, int c);

extern int D_800C32DC_de;




void func_8023A190_de(void *arg0, int arg1) {
    void *ret;
    int scaled;
    int first;
    scaled = arg1 << 6;
    ((func_8023A180_S1 *)(arg0))->unkF20 = arg1;
    ret = func_8025343C_de(0, scaled, 0x23, &D_800C32DC_de);
    ((func_8023A180_S1 *)(arg0))->unkF18 = ret;
    first = *(int *)ret;
    ((func_8023A180_S1 *)(arg0))->unkF1C = first;
    func_802A001C_de(first, 0, scaled);
}
