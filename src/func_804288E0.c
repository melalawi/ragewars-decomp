#include "basetypes.h"

/* Opens the five option windows of screen D_800E4690: for each of options 0 to 4 it picks window
   0x149, 0x14C, 0x14D, 0x14E or 0x14F through jtbl_800E1A20, opens it under the screen's parent at
   0x970, opens its 0x14B child and shows that through func_8040E958. The loop walks the table with
   its own pointer, as the cartridge's strength-reduced dispatch does. */
struct Screen {
    char pad0[0x970];
    void *parent;
};

extern struct Screen *D_800E4690;
extern void *jtbl_800E1A20[];
extern void *func_8040ECB0(void *, s32);
extern void func_8040E958(void *, s32);

void func_804288E0(void) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&option_0, &&option_1, &&option_2, &&option_3, &&option_4, &&open
    };
    s32 id = 0;
    s32 option;
    void **entry;

    for (option = 0, entry = jtbl_800E1A20; option < 5; entry++, option++) {
        if ((u32)option >= 5) {
            goto open;
        }
        goto **entry;
    option_0:
        id = 0x149;
        goto open;
    option_1:
        id = 0x14C;
        goto open;
    option_2:
        id = 0x14D;
        goto open;
    option_3:
        id = 0x14E;
        goto open;
    option_4:
        id = 0x14F;
    open:
        func_8040E958(func_8040ECB0(func_8040ECB0(D_800E4690->parent, id), 0x14B), 1);
    }
}
