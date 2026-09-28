#include "basetypes.h"

/* Refreshes the entry list of screen D_800E4EF0: reads the selection of its cursor at 0x20 through
   func_8041AD84 and the entry count of its list at 0x34 through func_802A2B18. With no entries it
   clears the list through func_8041EAE0; otherwise, when the count differs from what
   func_8041EBC0 shows or force is 1, it clears the list and rebuilds it for the count and
   selection through func_8041E88C. */
struct Screen {
    char pad0[0x20];
    s32 cursor;
    char pad24[0x34 - 0x24];
    s32 list;
};

extern struct Screen *D_800E4EF0;
extern s32 func_8041AD84(s32);
extern s32 func_802A2B18(s32);
extern void func_8041EAE0(void);
extern s32 func_8041EBC0(void);
extern void func_8041E88C(s32, s32);

void func_80429834(s32 force) {
    s32 selection;
    s32 count;

    selection = func_8041AD84(D_800E4EF0->cursor);
    count = func_802A2B18(D_800E4EF0->list);
    if (count <= 0) {
        func_8041EAE0();
        return;
    }
    if (count != func_8041EBC0() || force == 1) {
        func_8041EAE0();
        func_8041E88C(count, selection);
    }
}
