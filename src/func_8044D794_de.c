#include "span_16E000/code_8044E2B8.h"
#include "shared/func_8044D794_de_closed.h"

void func_8044D794_de(Owner_func_8044D794_de *arg0) {
    Entry_func_8044D794_de *entry;
    Entry_func_8044D794_de *next;

    entry = arg0->active;
    while (entry != 0) {
        next = entry->next;
        func_80278C10_de(entry->handle);
        func_80255ED8_de(&arg0->active, entry);
        func_80255CB8_de(&arg0->spare, entry);
        entry = next;
    }
}

