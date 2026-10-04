#include "span_1000/code_8028DF6C.h"
#include "types.h"

extern s32 func_802BD170_de(s32);




void func_8028F8BC_de(void *arg0, void *arg1) {
    s32 saved;
    char *cur;
    char *prev;

    prev = 0;
    cur = ((func_8028F89C_S1 *)(arg0))->unk2E0;
    saved = func_802BD170_de(1);
    while (cur != 0) {
        if (cur == arg1) {
            if (prev != 0) {
                *(char **)prev = *(char **)cur;
            } else {
                ((func_8028F89C_S1 *)(arg0))->unk2E0 = *(char **)cur;
            }
            break;
        }
        prev = cur;
        cur = *(char **)cur;
    }
    func_802BD170_de(saved);
}
