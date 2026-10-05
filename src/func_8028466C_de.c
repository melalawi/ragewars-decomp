#include "span_1000/code_8028308C.h"
/* Passes the first non-null handle among entries 0 to count of the object's twenty-byte table at
   0xFC28 to func_80284570_de together with the object. */


extern void func_80284570_de(char *obj, void *handle);

void func_8028466C_de(char *obj, unsigned char count) {
    int i;

    for (i = 0; i <= count; i++) {
        Entry_func_8028466C_de *e = (Entry_func_8028466C_de *)(obj + i * sizeof(Entry_func_8028466C_de) + 0xFC28);
        if (e->handle != 0) {
            func_80284570_de(obj, e->handle);
            return;
        }
    }
}
