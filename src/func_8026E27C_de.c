#include "span_1000/code_8026D4F0.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void **func_80295EAC_de(void *arg0, s32 arg1);





s32 *func_8026E27C_de(void **arg0, s32 arg1, s32 *arg2) {
    void *temp_v0;
    s32 count;
    s32 i;
    s32 *out;
    void *rec;
    s32 result;

    out = arg2;
    temp_v0 = func_8028FDB4_de(*arg0, 2);
    count = *(s32 *)temp_v0;
    for (i = 0; i < count; i++) {
        rec = func_8028FDB4_de(func_8028FDB4_de(temp_v0, i), 0);
        if (((func_8026E158_S1 *)(rec))->unk8.v0 == 0) {
            continue;
        }
        result = func_80295EAC_de(&((func_8026E158_S1 *)(rec))->unk8.v1, arg1);
        if (result != 0) {
            *out = result;
            out += 1;
        }
    }
    return out;
}
