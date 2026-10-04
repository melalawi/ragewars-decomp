#include "common/types.h"
#include "span_1000/code_80278C80.h"
#include "types.h"

/** Push a node onto the tail of a doubly-linked list; returns new count. */
s32 func_80279508_de(void *arg0, void *arg1) {
    s32 count;

    if ((((struct ListHeader *) ((s8 *) arg0))->count) == 0) {
        (((struct ListHeader *) ((s8 *) arg0))->head) = arg1;
        (((struct ListHeader *) ((s8 *) arg0))->tail) = arg1;
        (((struct Shape_typemap_3 *) ((s8 *) arg1))->field_0) = 0;
        (((struct func_80203E78_S1 *) ((s8 *) arg1))->unk4) = 0;
    } else {
        (((struct func_80284AF4_G2 *) ((s8 *) arg1))->unk0) = (((struct ListHeader *) ((s8 *) arg0))->tail);
        (((struct func_80203E78_S1 *) ((s8 *) arg1))->unk4) = 0;
        (((struct Field_void_4 *) ((s8 *) ((struct ListHeader *) ((s8 *) arg0))->tail))->value) = arg1;
        (((struct ListHeader *) ((s8 *) arg0))->tail) = arg1;
    }
    count = (((struct ListHeader *) ((s8 *) arg0))->count) + 1;
    (((struct ListHeader *) ((s8 *) arg0))->count) = count;
    return count;
}
