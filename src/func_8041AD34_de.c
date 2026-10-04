#include "common/types.h"
#include "span_16E000/code_8041ADB4.h"
#include "types.h"

/* Appends to a menu: passes the next free 20-byte entry at offset 0x48, selected by the count at
   0x114, to func_802A025C_de and increments the count. func_8041AD10_de selects an entry. */




extern void func_802A025C_de(struct Key *);

void func_8041AD34_de(struct Menu_func_8041AD34_de *menu) {
    func_802A025C_de(&menu->entries[menu->count]);
    menu->count++;
}
