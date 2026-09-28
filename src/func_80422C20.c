/* Event callback for the match setup screen D_800E4518: on event 1 with the screen in state 1 it
   advances it, and once it reaches state 2 either goes back (choice 0: resets the mode, shows the
   item and queues sound 0x259 past D_8015402C) or starts the match (choice 1: picks the arena,
   clears the pause word, then either sets the mode from the settings and active human players or
   stops the match objects and calls func_8042E080). Returns zero. */
#include "basetypes.h"

struct Screen {
    char pad0[0x1C];
    s32 choice;
    char pad20[0x60 - 0x20];
    s32 mode;
    s32 arena;
};

struct Game {
    char pad0[0x3C];
    s32 next;
    char pad40[0xD8 - 0x40];
    s32 selection;
};

extern struct Screen *D_800E4518;
extern struct Game *D_800E2830;
extern s32 D_8015402C;
extern char D_80145088[];
extern char D_8011FE88[];
extern u8 D_801462C8[];

extern s32 func_8043C4E8(struct Screen *);
extern void func_8043C260(struct Screen *);
extern void func_8043C484(struct Screen *);
extern void func_8040C4A8(s32);
extern void func_8040E958(void *, s32);
extern void func_804030E0(s32);
extern void func_8029A73C(void);
extern s32 func_8025E2E4(void);
extern s32 func_80274544(void);
extern void func_8025E2F4(s32);
extern void func_802A3304(void);
extern void func_8044AFC0(void *, s32);
extern void func_8044A600(void *, s32, s32);
extern void func_80286A78(void *, s32, s32);
extern void func_8042E080(void);

s32 func_80422C20(void *item, s32 arg1, s32 event) {
    s32 state;
    s32 humans;
    s32 i;
    u8 *settings;
    u8 *player;

    if (event == 1) {
        state = func_8043C4E8(D_800E4518);
        if (state != event) {
            return 0;
        }
        func_8043C260(D_800E4518);
        func_8043C484(D_800E4518);
        if (func_8043C4E8(D_800E4518) != 2) {
            return 0;
        }
        if (D_800E4518->choice != 0 && D_800E4518->choice != state) {
            return 0;
        }
        if (D_800E4518->choice == 0) {
            func_8040C4A8(0);
            func_8040E958(item, 1);
            func_804030E0(D_8015402C + 0x259);
            D_800E2830->selection = -1;
            D_800E2830->next = state;
        } else {
            func_8029A73C();
            if (D_800E4518->arena == 0 && func_8025E2E4() != 0) {
                func_8025E2F4(func_80274544() % 4 + 0x38);
            } else {
                func_8025E2F4(D_800E4518->arena);
            }
            *(s32 *)(D_80145088 + 0x180C) = 0;
            if (D_800E4518->mode == -1) {
                humans = 0;
                i = 0;
                player = (u8 *)D_80145088 + 0x1240;
                do {
                    if (player[i * 0x96 + 0x161] == 0 && player[i * 0x96 + 0x148] == 1) {
                        humans++;
                    }
                    i++;
                } while (i < 4);
                settings = D_801462C8;
                if (settings[0x580] == 2 && humans >= 2) {
                    func_8040C4A8(1);
                } else {
                    func_8040C4A8(settings[0x580]);
                }
                func_802A3304();
                return 0;
            }
            func_8044AFC0(D_80145088, 0);
            func_8044A600(D_80145088 - 0x48, 0, 0);
            func_80286A78(D_8011FE88, 0, 0);
            func_8042E080();
        }
    }
    return 0;
}
