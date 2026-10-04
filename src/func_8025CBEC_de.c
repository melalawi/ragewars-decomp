#include "span_1000/code_8025C67C.h"
#include "span_1000/code_8025DB64.h"
#include "types.h"




extern void func_80255ED8_de(void *, s32);
extern s32 func_80255D14_de(void *, s32);





void func_8025CBEC_de(void *arg0) {
    Node_func_8025CBEC_de *cur;
    Node_func_8025CBEC_de *next;
    s32 value;

    cur = ((func_8025CC0C_S1 *)(arg0))->unk14.v0;
    if (cur != 0) {
        do {
            value = cur->value;
            next = cur->next;
            func_8025E174_de(value);
            cur->state = -1;
            cur->value = -1;
            func_80255ED8_de(&((func_8025CC0C_S1 *)(arg0))->unk14.v1, cur);
            func_80255D14_de(arg0, (s32)cur);
            cur = next;
        } while (cur != 0);
    }
}
