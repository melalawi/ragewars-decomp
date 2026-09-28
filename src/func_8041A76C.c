#include "basetypes.h"

/* Positions a scroll bar: records the current item at offset 0x50 and stores in the halfword at
   0x18 of the bar object at 0x44 the item scaled from the item count at 0x4C to the track
   length at 0x48. */
struct Bar {
    char pad[0x18];
    s16 position;
};

struct Scroll {
    char pad[0x44];
    struct Bar *bar;
    s32 length;
    s32 count;
    s32 item;
};

void func_8041A76C(struct Scroll *scroll, s32 item) {
    scroll->item = item;
    scroll->bar->position = (f32) item / (f32) scroll->count * (f32) scroll->length;
}
