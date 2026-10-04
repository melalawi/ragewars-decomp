#include "span_1000/code_8022E120.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80264854_de(s32 a);
extern void func_80253908_de(s32 a);
extern void func_80253838_de(void *, void *);




void func_8022EDA4_de(void *arg0) {
    s32 temp_a1;

    func_80264854_de(0);
    func_80253908_de(0);
    temp_a1 = ((func_8022ED94_S1 *)(arg0))->unk0;
    if (temp_a1 != 0) {
        func_80253838_de(0, temp_a1);
        ((func_8022ED94_S1 *)(arg0))->unk0 = 0;
        ((func_8022ED94_S1 *)(arg0))->unk4 = 0;
        ((func_8022ED94_S1 *)(arg0))->unk8 = 0;
    }
}
