#include "span_1000/code_8028CCB8.h"
#include "types.h"

extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_80253754_de(s32 arg0, s32 arg1);
extern void func_80253838_de(s32 arg0, s32 arg1);




void func_8028D59C_de(void *arg0) {
    s32 *list;
    s32 val;

    if (((func_8028D578_S1 *)(arg0))->unkF8 != 0) {
        list = (s32 *) func_8028FDB4_de(((func_8028D578_S1 *)(arg0))->unk88, 0);
        if (*list != 0) {
            do {
                val = *list;
                list += 1;
                func_80253754_de(0, val);
            } while (*list != 0);
        }
        func_80253838_de(0, ((func_8028D578_S1 *)(arg0))->unkF8);
        ((func_8028D578_S1 *)(arg0))->unkF8 = 0;
        ((func_8028D578_S1 *)(arg0))->unk88 = 0;
    }
}
