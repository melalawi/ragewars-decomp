/* Scrolls a menu one step in the direction its state word at offset 0x54 records: up through
   func_8041A968 for state 0, down through func_8041A990 for state 1, and returns zero. */
#include "basetypes.h"

struct Menu {
    char pad[0x54];
    s32 state;
};

extern void func_8041A968(struct Menu *menu);
extern void func_8041A990(struct Menu *menu);

s32 func_8041AB9C(struct Menu *menu)
{
    struct Menu *target = menu;

    switch (menu->state) {
    case 0:
        func_8041A968(menu);
        break;
    case 1:
        func_8041A990(target);
        break;
    case 2:
        break;
    }
    return 0;
}
