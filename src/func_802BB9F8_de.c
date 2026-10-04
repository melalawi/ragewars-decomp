#include "span_1000/code_802C0384.h"
#include "types.h"

extern void *D_800D5280;
extern u64 D_80149B98;
extern s32 D_80149B90;
extern s32 D_80149B94;



void func_802BB9F8_de(void) {
    Node_func_802BB9F8_de *node = (Node_func_802BB9F8_de *)D_800D5280;

    D_80149B98 = 0;
    D_80149B90 = 0;
    D_80149B94 = 0;
    node->field10 = 0;
    node->field8 = 0;
    node->prev = node;
    node->next = node;
    node->field18 = 0;
    node->field1C = 0;
}
