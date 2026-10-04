#include "common/types.h"
#include "span_1000/code_8028CCB8.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);






void *func_8028CFA0_de(void *arg0, s32 arg1, s32 arg2) {
    void *descriptor;
    s32 count;
    s32 i;
    void *entry;

    descriptor = ((func_8028CF7C_S1 *)(arg0))->unk78;
    count = *(s32 *)descriptor;
    for (i = 0; i < count; i++) {
        entry = func_8028FDB4_de(((func_8028CF7C_S1 *)(arg0))->unk78, i);
        if (arg1 != -1 && *(s32 *)entry != arg1) {
            continue;
        }
        if (arg2 == -1) {
            return entry;
        }
        if (((func_8021C9B4_S3 *)(entry))->unkC != arg2) {
            continue;
        }
        return entry;
    }
    return 0;
}
