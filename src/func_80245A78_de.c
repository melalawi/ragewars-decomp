#include "span_1000/code_80245804.h"
extern void *D_800DE7E0;
extern void func_802A025C_de(void *arg0, int arg1);




void func_80245A78_de(int arg0) {
    void *record = D_800DE7E0;
    int idx = ((func_80245A68_S1 *)(record))->unk1E0;
    func_802A025C_de((char *)record + ((idx * 0x28) + 0x118), arg0);
    record = D_800DE7E0;
    ((func_80245A68_S1 *)(record))->unk1E0 = ((func_80245A68_S1 *)(record))->unk1E0 + 1;
}
