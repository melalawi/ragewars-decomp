#include "basetypes.h"

/* Scrolls down: moves a scroll bar to the next item through func_8041A76C while it is below the
   item count. */
struct Scroll {
    char pad[0x48];
    s32 length;
    s32 count;
    s32 item;
};

extern void func_8041A76C(struct Scroll *, s32);

void func_8041A990(struct Scroll *scroll) {
    if (scroll->item < scroll->count) {
        func_8041A76C(scroll, scroll->item + 1);
    }
}
