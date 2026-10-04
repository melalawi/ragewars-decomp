#include "span_1000/code_802B510C.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 func_802BD170_de(s32);
extern void func_802B2450_de(Node_func_80239AF4_de *arg0);
extern void func_802B2480_de(Node_func_80239AF4_de *arg0, void *arg1);




void func_802B01E0_de(void *arg0) {
    Node_func_80239AF4_de *cur;
    Node_func_80239AF4_de *next;
    s32 saved;

    saved = func_802BD170_de(1);
    cur = ((func_802B52B0_S1 *)(arg0))->unk8;
    if (cur != 0) {
        do {
            next = cur->next;
            func_802B2450_de(cur);
            func_802B2480_de(cur, arg0);
            cur = next;
        } while (cur != 0);
    }
    func_802BD170_de(saved);
}
