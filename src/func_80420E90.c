/* Opens the options screen: allocates its 0x3C-byte state into D_800E4400 for window arg0, builds
   its title, heading and the four toggle buttons 0x3B4, 0x3B1, 0x3AD and 0x3AF set from bits of
   D_801462C8, creates the item list and refreshes the limit markers through func_804212A4. */
#include "basetypes.h"

struct Item {
    char pad0[0x1A];
    s16 color;
};

struct Screen {
    void *title;
    void *list;
    void *window;
    void *buttons[4];
    char pad1C[0x20 - 0x1C];
    struct Item *cursor;
    char pad24[0x28 - 0x24];
    s32 unk28;
    s32 unk2C;
    char pad30[0x34 - 0x30];
    s32 unk34;
    s32 full;
};

extern struct Screen *D_800E4400;
extern s32 D_801462C8;
extern void *D_800D749C[];
extern void *D_800D74A0[];

extern struct Screen *func_80252FFC(s32);
extern struct Item *func_8040ECB0(void *, s32);
extern void *func_8041A300(s32, s32);
extern void func_8041B190(s32);
extern void *func_8041AC40(s32, s32);
extern void func_8041ADB4(void *, void *);
extern void func_8041AD90(void *, s32);
extern void *func_80419ED4(s32, s32);
extern void func_804212A4(void);

s32 func_80420E90(void *window) {
    struct Screen *screen;
    void *button;

    screen = func_80252FFC(0x3C);
    D_800E4400 = screen;
    screen->window = window;
    screen->full = 0;
    func_8040ECB0(window, 0x3A8)->color = 0x88;
    D_800E4400->title = func_8041A300(0x3A8, 0x3A9);
    func_8041B190(0x3B6);

    button = func_8041AC40(0x3B4, 0x3B5);
    D_800E4400->buttons[0] = button;
    func_8041ADB4(button, D_800D749C[0]);
    func_8041ADB4(D_800E4400->buttons[0], D_800D74A0[0]);
    if (D_801462C8 & 0x8000000) {
        func_8041AD90(D_800E4400->buttons[0], 1);
    } else {
        func_8041AD90(D_800E4400->buttons[0], 0);
    }

    button = func_8041AC40(0x3B1, 0x3B2);
    D_800E4400->buttons[1] = button;
    func_8041ADB4(button, D_800D749C[0]);
    func_8041ADB4(D_800E4400->buttons[1], D_800D74A0[0]);
    if (D_801462C8 & 0x10000000) {
        func_8041AD90(D_800E4400->buttons[1], 1);
    } else {
        func_8041AD90(D_800E4400->buttons[1], 0);
    }

    button = func_8041AC40(0x3AD, 0x3AE);
    D_800E4400->buttons[2] = button;
    func_8041ADB4(button, D_800D749C[0]);
    func_8041ADB4(D_800E4400->buttons[2], D_800D74A0[0]);
    if (D_801462C8 & 0x8) {
        func_8041AD90(D_800E4400->buttons[2], 1);
    } else {
        func_8041AD90(D_800E4400->buttons[2], 0);
    }

    button = func_8041AC40(0x3AF, 0x3B0);
    D_800E4400->buttons[3] = button;
    func_8041ADB4(button, D_800D749C[0]);
    func_8041ADB4(D_800E4400->buttons[3], D_800D74A0[0]);
    if (D_801462C8 & 0x20000000) {
        func_8041AD90(D_800E4400->buttons[3], 1);
    } else {
        func_8041AD90(D_800E4400->buttons[3], 0);
    }

    func_8041B190(0x3AC);
    D_800E4400->cursor = func_8040ECB0(window, 0x3B7);
    D_800E4400->unk28 = 0;
    D_800E4400->unk2C = 0;
    D_800E4400->unk34 = 1;
    D_800E4400->list = func_80419ED4(0x3AA, 0x6E);
    func_804212A4();
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D211C_4[] = {0x80, 0x0C, 0xF4, 0x5C};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D749C_4[] = {0x80, 0x0D, 0x47, 0xDC};
#endif
