#include "span_1000/code_8028CCB8.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80253838_de(void *, void *);




void func_8028DA74_de(void *arg0) {
    s32 temp;

    temp = ((func_8028DA50_S1 *)(arg0))->unk14;
    if (temp != 0) {
        func_80253838_de(0, temp);
        ((func_8028DA50_S1 *)(arg0))->unk14 = 0;
        ((func_8028DA50_S1 *)(arg0))->unk18 = -1;
    }
}
