#include "span_1000/code_8028CCB8.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80285DB0_de(void *, void *, s32);






void func_8028CDF0_de(void *arg0) {
    s32 count;
    s32 i;
    s32 offset;
    void *entry;
    s32 field;
    s32 three;

    count = ((func_8028CD44_S1 *)(arg0))->unk140;
    i = 0;
    if (count > 0) {
        three = 3;
        offset = 0;
        do {
            entry = (char *)(((func_8028CD44_S1 *)(arg0))->unk138) + offset;
            field = *(((func_8024C654_S1 *)(entry))->unk18);
            if (field != three) {
                i += 1;
            } else {
                func_80285DB0_de(arg0, entry, 0);
                i += 1;
            }
            offset += 0x2E8;
        } while (i < count);
    }
}
