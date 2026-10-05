#include "span_1000/code_802393F4.h"
#include "types.h"

extern void func_8025E3F0_de(s32 arg0);
extern void func_80253908_de(s32 a);
extern void func_80253838_de(void *, void *);




void func_8023A1F4_de(void *arg0) {
    s32 temp_a1;

    ((func_8023A1E4_S1 *)(arg0))->unk1200 = 1;
    func_8025E3F0_de((s32)((char *)arg0 + 0x40));
    func_80253908_de(0);
    temp_a1 = ((func_8023A1E4_S1 *)(arg0))->unk0;
    if (temp_a1 != 0) {
        func_80253838_de(0, temp_a1);
        ((func_8023A1E4_S1 *)(arg0))->unk0 = 0;
        ((func_8023A1E4_S1 *)(arg0))->unk4 = 0;
        ((func_8023A1E4_S1 *)(arg0))->unk8 = 0;
    }
}
