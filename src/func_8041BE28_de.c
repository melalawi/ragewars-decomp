#include "span_16E000/code_8041BC50.h"
/* Calls func_8040E928_de with flag 1 on each of the list's items (count at 0x48, items from 0x4C) and
   returns 0. */


extern void func_8040E928_de(void *, int);

int func_8041BE28_de(List_func_8041BE28_de *list) {
    int i;

    for (i = 0; i < list->count; i++) {
        func_8040E928_de(list->items[i], 1);
    }
    return 0;
}
