#include "basetypes.h"

/* Scrolls up: moves a scroll bar to the previous item through func_8041A76C unless it is already
   at the first. */
struct Scroll {
    char pad[0x48];
    s32 length;
    s32 count;
    s32 item;
};

extern void func_8041A76C(struct Scroll *, s32);

void func_8041A968(struct Scroll *scroll) {
    if (scroll->item > 0) {
        func_8041A76C(scroll, scroll->item - 1);
    }
}
