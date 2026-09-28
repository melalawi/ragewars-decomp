#include "basetypes.h"

/* Marks a menu's state word at offset 0x54 as 2 when func_8029EB58's value for the fifth argument
   is below func_8029AB4C's; then, when the fourth argument is one, clears the state and scrolls up through func_8041A968. Returns zero. */
struct Menu {
    char pad[0x54];
    s32 state;
};

extern s32 func_8029EB58(s32);
extern s32 func_8029AB4C();
extern void func_8041A968(struct Menu *);

s32 func_8041AB00(struct Menu *menu, void *second, void *third, s32 active, s32 fifth) {
    if (func_8029EB58(fifth) < func_8029AB4C()) {
        menu->state = 2;
    }
    if (active == 1) {
        menu->state = 0;
        func_8041A968(menu);
        return 0;
    }
    return 0;
}
