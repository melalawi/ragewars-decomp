#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80245980.h"
extern void *D_800E2830;
extern void func_80253838_de(void *, void *);




void func_80245B28_de(void) {
    int temp_a1 = *(int *)D_800E2830;
    void *record;
    if (temp_a1 != 0) {
        func_80253838_de(0, temp_a1);
    }
    record = D_800E2830;
    ((func_80245690_S1 *)(record))->unk0 = 0;
    ((func_80245690_S1 *)(record))->unk4 = 0;
    ((func_80245690_S1 *)(record))->unk38 = 0;
    ((func_80245690_S1 *)(record))->unk3C = 0;
    ((func_80245690_S1 *)(record))->unk60 = 0;
}
