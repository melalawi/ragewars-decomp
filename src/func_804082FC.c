/* Searches controller pak slots for the pak menu: takes the channel (the cycling one D_800E28C8 or the
   menu slot's) and returns 1 (setting D_80153784) when func_80406178 takes over; with a note search pending (D_8015377C)
   it shows the notes through func_80407290; otherwise it looks for the game's note (D_800D7704) among
   the channel's 16 notes and shows the found prompt or the create screen func_80407578; when cycling,
   it advances D_800E28C8 to the next channel whose pak is present (-1 and a failure flag when none)
   and retries it, returning 0 after func_80405F48 when nothing answers. */
#include "basetypes.h"

typedef struct {
    char pad0[0x5D8];
} Player;

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x1C];
    Player *player;
    Slot *slot;
} Menu;

extern s32 D_80153750;
extern s32 D_8015375C;
extern s32 D_8015377C;
extern s32 D_80153784;
extern s32 D_8015378C;
extern s32 D_8014ADA0;
extern s32 D_800E28C8;
extern s32 D_800D7704;
extern char D_8014561C[];
extern char D_44FB44[];
extern char D_44F124[];

extern s32 func_80406178(Menu *menu, s32 ch, s32 mode);
extern void func_80407290(s32 arg0, Menu *menu, s32 arg2);
extern void func_80407578(s32 arg0, Menu *menu, s32 arg2);
extern void func_80405338(s32 ch, s32 note, s32 *state);
extern void func_80405648(s32 state, char *name, s32 size);
extern s32 func_802A137C(char *name, s32 game);
extern void func_804426E4(char *, char *, Player *, Slot *, char *);
extern void func_80404E28(s32 ch);
extern s32 func_80404F04(s32 ch);
extern void func_80405F48(Menu *menu);

static inline void pickChannel(Menu *menu, s32 *ch)
{
    if (D_8015375C != 0) {
        *ch = D_800E28C8;
    } else {
        *ch = menu->slot->channel;
    }
}

static inline s32 findNote(s32 ch, s32 *found)
{
    char name[16];
    s32 state;
    s32 game = D_800D7704;
    s32 i;

    D_8015378C = -1;
    for (i = 0; i < 16; i++) {
        func_80405338(ch, i, &state);
        func_80405648(state, name, 16);
        if (func_802A137C(name, game) == 0) {
            if (found != 0) {
                *found = i;
            }
            return 1;
        }
    }
    return 0;
}

s32 func_804082FC(s32 arg0, Menu *menu, s32 arg2)
{
    s32 ch = 0;
    s32 use;
    s32 next;
    s32 tries;
    s32 hasNote; /* FAKEMATCH: flag local keeps the found result in v0 */
    s32 c;

    if (D_80153750 != 0) {
        pickChannel(menu, &ch);
    }
    if (D_8015375C != 0) {
        use = D_800E28C8;
    } else {
        use = ch;
    }
    if (func_80406178(menu, use, 0) != 0) {
        D_80153784 = 1;
        return 1;
    }
    if (D_8015377C != 0) {
        if (D_80153750 != 0) {
            func_80407290(arg0, menu, arg2);
            return 1;
        }
    } else if (D_80153750 != 0) {
        hasNote = findNote(use, &D_8015378C);
        if (hasNote != 0 && D_8015378C >= 0 && D_8015378C < 16) {
            func_804426E4(D_8014561C, D_44FB44, menu->player, menu->slot, D_44F124);
            return 1;
        }
        func_80407578(arg0, menu, arg2);
        return 1;
    }
    if (D_8015375C != 0) {
        next = 0;
        if (D_800E28C8 != -1) {
            next = D_800E28C8 + 1;
            if (next >= 4) {
                next = 0;
            }
        }
        for (tries = 0; tries < 4; tries++) {
            func_80404E28(next);
            if (func_80404F04(next) != -2) {
                break;
            }
            next++;
            if (next >= 4) {
                next = 0;
            }
        }
        if (tries == 4) {
            next = -1;
        }
        D_800E28C8 = next;
        if (next == -1) {
            D_8014ADA0 = D_80153784 = 1;
            return 1;
        }
        if (D_8015375C != 0) {
            c = D_800E28C8;
        } else {
            c = menu->slot->channel;
        }
        ch = c;
        if (func_80406178(menu, c, 0) != 0) {
            D_80153784 = 1;
            return 1;
        }
        func_80405F48(menu);
    }
    return 0;
}
