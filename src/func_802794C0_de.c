#include "common/types.h"
#include "span_1000/code_80278C80.h"
#include "types.h"

/** Push a node onto the front of a doubly-linked list. */
void func_802794C0_de(void *arg0, void *arg1) {
    if ((((struct ListHeader *) ((s8 *) arg0))->count) == 0) {
        (((struct ListHeader *) ((s8 *) arg0))->head) = arg1;
        (((struct ListHeader *) ((s8 *) arg0))->tail) = arg1;
        (((struct Shape_typemap_3 *) ((s8 *) arg1))->field_0) = 0;
        (((struct func_80203E78_S1 *) ((s8 *) arg1))->unk4) = 0;
    } else {
        (((struct Field_void_4 *) ((s8 *) arg1))->value) = (((struct ListHeader *) ((s8 *) arg0))->head);
        (((struct Shape_typemap_3 *) ((s8 *) arg1))->field_0) = 0;
        (((struct func_80284AF4_G2 *) ((s8 *) ((struct ListHeader *) ((s8 *) arg0))->head))->unk0) = arg1;
        (((struct ListHeader *) ((s8 *) arg0))->head) = arg1;
    }
    (((struct ListHeader *) ((s8 *) arg0))->count) = (((struct ListHeader *) ((s8 *) arg0))->count) + 1;
}
