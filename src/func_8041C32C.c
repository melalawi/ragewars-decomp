#include "basetypes.h"

/* Builds screen state D_800E3518 under a parent window: allocates its 0x2C bytes, keeps the parent,
   opens windows 0x3C3 (shown), 0x3C9, 0x3C4 and 0x3C5 (hidden) at 0x4 to 0x10, clears the words at
   0x14 and 0x18, resets through func_8040C4A8(0) and func_802A338C, sets D_800E28C8 to -1 and
   D_80146D70 to 0, releases the resources of D_8011FAC0 and of its block at 0x3C8, clears the
   word at 0x1C and returns zero. */

#if defined(VERSION_DE)
#define VALUE_3C3 0x3BE
#define VALUE_3C9 0x3C3
#define VALUE_3C4 0x3BD
#define VALUE_3C5 0x3BF
#elif defined(VERSION_EU_X)
#define VALUE_3C3 0x3CC
#define VALUE_3C9 0x3CD
#define VALUE_3C4 0x3C6
#define VALUE_3C5 0x3C8
#else
#define VALUE_3C3 0x3C3
#define VALUE_3C9 0x3C9
#define VALUE_3C4 0x3C4
#define VALUE_3C5 0x3C5
#endif

struct Screen {
    void *parent;
    void *windows[4];
    s32 selection;
    s32 scroll;
    s32 state;
};

extern struct Screen *D_800E3518;
extern s32 D_800E28C8;
extern s32 D_80146D70;
extern char D_8011FAC0[];
extern struct Screen *func_80252FFC(s32);
extern void *func_8040ECB0(void *, s32);
extern void func_8040E958(void *, s32);
extern void func_8040C4A8(s32);
extern void func_802A338C(void);
extern void func_80293318(void *, s32, s32);
extern void func_80286A78(void *, s32, s32);

s32 func_8041C32C(void *parent) {
    void *window;
    char *resources;

    D_800E3518 = func_80252FFC(0x2C);
    D_800E3518->parent = parent;
    window = func_8040ECB0(parent, VALUE_3C3);
    D_800E3518->windows[0] = window;
    func_8040E958(window, 1);
    window = func_8040ECB0(parent, VALUE_3C9);
    D_800E3518->windows[1] = window;
    func_8040E958(window, 0);
    window = func_8040ECB0(parent, VALUE_3C4);
    D_800E3518->windows[2] = window;
    func_8040E958(window, 0);
    window = func_8040ECB0(parent, VALUE_3C5);
    D_800E3518->windows[3] = window;
    func_8040E958(window, 0);
    D_800E3518->selection = 0;
    D_800E3518->scroll = 0;
    func_8040C4A8(0);
    func_802A338C();
    D_800E28C8 = -1;
    D_80146D70 = 0;
    resources = D_8011FAC0;
    func_80293318(resources, 0, 0);
    func_80286A78(resources + 0x3C8, 0, 0);
    D_800E3518->state = 0;
    return 0;
}
