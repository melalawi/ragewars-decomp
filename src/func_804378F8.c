#include "basetypes.h"

/* Builds a three-item menu: allocates 0x14 bytes into D_800E5784 through func_80252FFC, creates the
   title 0x3CC/0x3CD through func_8041A300 and the button 0x3CF through func_80419ED4 with 0x6E,
   finds entry 0x3CE of the list through func_8040ECB0 and sets its byte at 0x10 to 0xF, and stores
   the three with 3 and -1 in the block. Returns zero. */

#if defined(VERSION_DE)
#define VALUE_3CC 0x3C6
#elif defined(VERSION_EU_MUL)
#define VALUE_3CC 0x3D0
#else
#define VALUE_3CC 0x3CC
#endif

struct Item {
    char pad[0x10];
    u8 alpha;
};

struct Menu {
    void *title;
    void *button;
    struct Item *item;
    s32 count;
    s32 selection;
};

extern struct Menu *D_800E5784;
extern struct Menu *func_80252FFC(s32);
extern void *func_8041A300(s32, s32);
extern void *func_80419ED4(s32, s32);
extern struct Item *func_8040ECB0(void *, s32);

s32 func_804378F8(void *list) {
    struct Item *item;

    D_800E5784 = func_80252FFC(0x14);
    D_800E5784->title = func_8041A300(VALUE_3CC, VALUE_3CC + 1);
    D_800E5784->button = func_80419ED4(VALUE_3CC + 3, 0x6E);
    item = func_8040ECB0(list, VALUE_3CC + 2);
    D_800E5784->item = item;
    item->alpha = 0xF;
    D_800E5784->count = 3;
    D_800E5784->selection = -1;
    return 0;
}
