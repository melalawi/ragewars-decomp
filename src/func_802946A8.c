#include "basetypes.h"

/* Prepares a session for a new round: clears the round flag, resets the round state, records the round seed when func_80264B8C allows, resets the scoreboard and player slot, restarts the arena with the session's arena setting, resets the camera timers and reloads the session's sound bank and music. */

typedef struct Session {
    char pad0[0x3C4];
    s32 soundBank;
    char pad3C8[0x26826 - 0x3C8];
    unsigned char arena;
    char pad26827[0x26DD8 - 0x26827];
    s32 music;
} Session;

typedef struct Board {
    char pad0[0x20];
    s32 field20;
    char pad24[0x40];
    s32 field64;
} Board;

typedef struct Slot {
    char pad0[0x1D];
    unsigned char field1D;
    unsigned char field1E;
} Slot;

extern s32 D_800D2980;
extern s32 D_800D2970;
extern f32 D_800CA5C4;
extern f32 D_800D2988[];
extern f32 D_800D2990;
extern f32 D_800D2994;
extern Board D_801468A0;
extern char D_8011FE88;
extern void func_8029324C(void);
extern s32 func_80264B8C(void);
extern s32 func_80264B7C(void);
extern void func_80264BAC(void);
extern void func_80293318(Session *session, s32 arena, s32 arg2);
extern void func_8023EDF0(void);
extern void func_802954E0(void);
extern void func_8044DC48(void *player, s32 bank);
extern void func_8044E178(void *player, s32 music, s32 arg2);

void func_802946A8(Session *session) {
    Board *board;
    Slot *slot;
    s32 bank;

    D_800D2980 = 0;
    func_8029324C();
    if (func_80264B8C() != 0) {
        session->music = func_80264B7C();
    }
    board = &D_801468A0;
    board->field20 = 0;
    board->field64 = 3;
    slot = (Slot *)((char *)board - 0x5D8);
    slot->field1D = 1;
    slot->field1E = 8;
    func_80293318(session, session->arena, 0);
    if (func_80264B8C() != 0) {
        func_80264BAC();
    }
    func_8023EDF0();
    func_802954E0();
    bank = session->soundBank;
    D_800D2970 = 0;
    D_800D2994 = D_800CA5C4;
    D_800D2988[1] = D_800CA5C4;
    D_800D2990 = D_800CA5C4;
    func_8044DC48(&D_8011FE88, bank);
    func_8044E178(&D_8011FE88, session->music, 0);
}
