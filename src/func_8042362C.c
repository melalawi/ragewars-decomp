#include "basetypes.h"

/* Builds screen state D_800E4514: allocates its 0x10 bytes, registers resources 0x1BD and 0x1C2,
   creates list 0x1BB/0x1BC at 0x4 with the three texts D_800D749C, D_800D74A4 and D_800D74A8 and
   selects byte 0x1B of the settings D_801462C8, creates list 0x1BE/0x1BF at 0x8 with D_800D74B4,
   plus D_800D74B8 and D_800D74BC unless func_80265370 reports 0x400000, and selects settings byte
   0x580, creates the 0x80-step slider 0x1C0/0x1C1 at 0x0 set to the settings word at 0x10,
   registers 0x1C3 and 0x1C4, clears the word at 0xC, resets through func_802A338C and returns
   zero. */
struct Screen {
    s32 slider;
    s32 first_list;
    s32 second_list;
    s32 state;
};

extern struct Screen *D_800E4514;
extern u8 D_801462C8[];
extern char *D_800D749C;
extern char *D_800D74A4;
extern char *D_800D74A8;
extern char *D_800D74B4;
extern char *D_800D74B8;
extern char *D_800D74BC;
extern struct Screen *func_80252FFC(s32);
extern void func_8041B190(s32);
extern s32 func_8041AC40(s32, s32);
extern void func_8041ADB4(s32, char *);
extern void func_8041AD90(s32, s32);
extern s32 func_80265370(void);
extern s32 func_8041A600(s32, s32, s32);
extern void func_8041A76C(s32, s32);
extern void func_802A338C(void);

typedef struct func_8042362C_S1 func_8042362C_S1;
struct func_8042362C_S1 {
    char pad0[0x10];
    s32 unk10;
};

s32 func_8042362C(void) {
    u8 *settings;
    s32 list;
    s32 slider;

    D_800E4514 = func_80252FFC(0x10);
    func_8041B190(0x1BD);
    func_8041B190(0x1C2);
    list = func_8041AC40(0x1BB, 0x1BC);
    D_800E4514->first_list = list;
    /* FAKEMATCH: preserve instruction scheduling between the menu-widget store and its initialization call. */
    do {
    } while (0);
    func_8041ADB4(list, D_800D749C);
    func_8041ADB4(D_800E4514->first_list, D_800D74A4);
    func_8041ADB4(D_800E4514->first_list, D_800D74A8);
    settings = D_801462C8;
    func_8041AD90(D_800E4514->first_list, settings[0x1B]);
    list = func_8041AC40(0x1BE, 0x1BF);
    D_800E4514->second_list = list;
    /* FAKEMATCH: preserve instruction scheduling between the menu-widget store and its initialization call. */
    do {
    } while (0);
    func_8041ADB4(list, D_800D74B4);
    if (func_80265370() != 0x400000) {
        func_8041ADB4(D_800E4514->second_list, D_800D74B8);
        func_8041ADB4(D_800E4514->second_list, D_800D74BC);
    }
    func_8041AD90(D_800E4514->second_list, settings[0x580]);
    slider = func_8041A600(0x1C0, 0x1C1, 0x80);
    D_800E4514->slider = slider;

    func_8041A76C(slider, ((func_8042362C_S1 *)(settings))->unk10);
    func_8041B190(0x1C3);
    func_8041B190(0x1C4);
    D_800E4514->state = 0;
    func_802A338C();
    return 0;
}
