/* Confirms the pak menu prompt for state D_80153778: in states 4, 3 and 0 it rechecks the selected
   channel's pak through func_80406178 (marking the menu busy and showing the menu prompt when that
   reports a problem), then refreshes the pak and deletes note D_80153754 (state 4, showing the
   D_44F7C0 or D_44F82C result), deletes note D_8015378C and saves through func_80407578 (state 3,
   showing D_44F82C on failure) or repairs the pak through func_804051D4 (state 0, showing D_44F7E4
   or D_44F970); in states 1 and 2 it flags D_80146D6C in the pak manager and shows the menu
   prompt. Returns 1. Written as a plain switch whose jump table the build places. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x1C];
    void *player;
    Slot *slot;
    char *prompt;
} Menu;

extern s32 D_80153778;
extern s32 D_8015375C;
extern s32 D_80153784;
extern s32 D_80153754;
extern s32 D_8015378C;
extern s32 D_80146D6C;
extern s32 D_800E28C8;
extern char D_8014561C[];
extern char D_44F7C0[];
extern char D_44F7E4[];
extern char D_44F82C[];
extern char D_44F970[];

extern s32 func_80406178(Menu *menu, s32 ch, s32 quiet);
extern void func_80404E28(s32 ch);
extern s32 func_80404858(s32 ch, s32 index);
extern s32 func_804051D4(s32 ch);
extern s32 func_80407578(void *owner, Menu *menu, void *arg);
extern void func_804426E4(char *, char *, void *, Slot *, char *);

s32 func_80409170(void *owner, Menu *menu, void *arg) {
    s32 ch;

    switch (D_80153778) {
        case 4:
            if (D_8015375C != 0) {
                ch = D_800E28C8;
            } else {
                ch = menu->slot->channel;
            }
            if (func_80406178(menu, ch, 1) != 0) {
                D_80153784 = 1;
                func_804426E4(D_8014561C, menu->prompt, menu->player, menu->slot, 0);
                break;
            }
            func_80404E28(ch);
            if (func_80404858(ch, D_80153754) == 0) {
                func_804426E4(D_8014561C, D_44F7C0, menu->player, menu->slot, menu->prompt);
            } else {
                func_804426E4(D_8014561C, D_44F82C, menu->player, menu->slot, menu->prompt);
            }
            break;
        case 3:
            if (D_8015375C != 0) {
                ch = D_800E28C8;
            } else {
                ch = menu->slot->channel;
            }
            if (func_80406178(menu, ch, 1) != 0) {
                D_80153784 = 1;
                func_804426E4(D_8014561C, menu->prompt, menu->player, menu->slot, 0);
                break;
            }
            func_80404E28(ch);
            if (func_80404858(ch, D_8015378C) == 0) {
                func_80407578(owner, menu, arg);
                return 1;
            }
            func_804426E4(D_8014561C, D_44F82C, menu->player, menu->slot, menu->prompt);
            break;
        case 0:
            if (D_8015375C != 0) {
                ch = D_800E28C8;
            } else {
                ch = menu->slot->channel;
            }
            if (func_80406178(menu, ch, 1) != 0) {
                D_80153784 = 1;
                func_804426E4(D_8014561C, menu->prompt, menu->player, menu->slot, 0);
                break;
            }
            func_80404E28(ch);
            if (func_804051D4(ch) == 0) {
                func_804426E4(D_8014561C, D_44F7E4, menu->player, menu->slot, menu->prompt);
            } else {
                func_804426E4(D_8014561C, D_44F970, menu->player, menu->slot, menu->prompt);
            }
            break;
        case 1:
        case 2:
            if (D_8015375C != 0) {
                D_80146D6C = 1;
            }
            func_804426E4(D_8014561C, menu->prompt, menu->player, menu->slot, 0);
            break;
    }
    return 1;
}
