#include "span_1000/code_80259014.h"
#include "types.h"







void func_80259A50_de(Lists *arg0, s32 arg1) {
    Node_func_80259A50_de *var_a2;
    Node_func_80259A50_de *temp_a3;
    Node_func_80259A50_de *temp_v0;
    Node_func_80259A50_de *temp_t0;
    Node_func_80259A50_de *temp_t1;

    var_a2 = arg0->first.next;
    temp_v0 = &arg0->first;
    if (var_a2 != temp_v0) {
        temp_t1 = &arg0->second;
        temp_t0 = temp_v0;
        do {
            temp_a3 = var_a2->next;
            if ((var_a2->flags & arg1) != 0) {
                Node_func_80259A50_de *temp_tail;

                var_a2->prev->next = temp_a3;
                var_a2->next->prev = var_a2->prev;
                temp_tail = arg0->second.prev;
                var_a2->next = temp_t1;
                var_a2->prev = temp_tail;
                arg0->second.prev->next = var_a2;
                arg0->second.prev = var_a2;
            }
            var_a2 = temp_a3;
        } while (var_a2 != temp_t0);
    }
}
