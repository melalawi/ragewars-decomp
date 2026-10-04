#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Tears down every node of one list: walks it from the head, saving the successor at 0x1D4 first,
   skips nodes of kind 2 while the list is not the global one at D_8014561C and that list's flag at
   0x10 is set, and for each remaining node asks func_80441214_de whether it may go; when it may, calls
   the node's optional handler at 0xC of its table at 0x14, clears the three words at 0xB0, 0xB4 and
   0xBC of the state it owns at 0x20, unlinks it with func_80255ED8_de and releases its handle at 0x8
   through func_80253838_de. */














extern List_func_804428F8_de D_8014155C;
extern s32 func_80441214_de(Node_func_804428F8_de *, List_func_804428F8_de *);
extern void func_80255ED8_de(List_func_804428F8_de *, Node_func_804428F8_de *);
extern void func_80253838_de(s32, s32);

void func_804428F8_de(List_func_804428F8_de *list) {
    Node_func_804428F8_de *node;
    Node_func_804428F8_de *next;
    State_func_804428F8_de *state;

    node = list->head;
    while (node != 0) {
        next = node->next;
        if (!((node->kind == 2) && (list != &D_8014155C) && (D_8014155C.flag != 0))) {
            if (func_80441214_de(node, list) != 0) {
                if (node->table->handler != 0) {
                    node->table->handler(node, list);
                }
                state = node->state;
                state->field_B0 = 0;
                state->field_B4 = 0;
                state->field_BC = 0;
                func_80255ED8_de(list, node);
                func_80253838_de(0, node->handle);
            }
        }
        node = next;
    }
}
