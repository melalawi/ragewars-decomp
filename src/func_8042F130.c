#include "basetypes.h"

/* Creates the match setup block D_800E54A4 for screen arg0: allocates and clears it, loads its sprites and centres the two banner rows, links every player slot, shows the header for the game mode, resets each player's menu state, records and name entries, then starts each player in the state the mode needs (team handoff for mode 5, memory-card check for mode 6, the host for mode 7) and starts the menu music. Returns zero. */
typedef struct Sprite {
    char pad0[0x10];
    u8 alpha;
    char pad11[0x14 - 0x11];
    u16 x;
    char pad16[0x18 - 0x16];
    s16 width;
} Sprite;

typedef struct Record {
    char pad0[0x190];
} Record;

typedef struct Name {
    char pad0[0x28];
    u8 code[0x14];
    u8 text[0xA];
} Name;

typedef struct Player {
    s32 state;
    s32 sub;
    s32 next;
    s32 menu;
    Sprite *sprite;
    s32 back;
    Record records[4];
    Name names[16];
    u8 codes[3][0xA];
    char padAD6[0xAD8 - 0xAD6];
    s32 slot;
    char padADC[0xAEC - 0xADC];
    s32 choice;
    s32 used[4];
    s32 notes[4];
    char padB10[0xB28 - 0xB10];
    s32 port;
    s32 record;
    s32 host;
    char padB34[0xB64 - 0xB34];
    s32 profile;
} Player;

typedef struct Link {
    s32 player;
    s32 slot;
    s32 state;
} Link;

typedef struct Block {
    s32 screen;
    s32 menu;
    char setup[0x24 - 0x8];
    s32 music;
    Sprite *title;
    s32 counts[4];
    Sprite *top;
    s32 topStep;
    Sprite *bottom;
    s32 bottomStep;
    s32 ready;
    s32 slots;
    s32 mode;
    Player players[4];
    Link links[4];
    char pad2E28[0x3470 - 0x2E28];
    s32 focus;
} Block;

typedef struct Profile {
    char pad0[0xD];
    s8 owner;
    s8 dropped;
    char padF[0x190 - 0xF];
} Profile;

typedef struct Status {
    char pad0[0x78];
    u8 active;
    char pad79[0x91 - 0x79];
    u8 out;
    char pad92[0x96 - 0x92];
} Status;

typedef struct Globals {
    char pad0[0xD0];
    Status status[8];
} Globals;

extern Block *D_800E54A4;
extern s32 D_800E54A0;
extern s32 D_800E3510;
extern s32 D_800E3514;
extern Profile D_80102B00[];
extern Globals D_801462C8;

extern Block *func_80252FFC(s32);
extern void func_8043C3F0(void *, s32, s32, s32, s32);
extern s32 func_8041B690(s32, s32);
extern void func_8041B768(s32, s32, s32);
extern Sprite *func_8040ECB0(s32, s32);
extern void func_8040E958(Sprite *, s32);
extern s32 func_80419ED4(s32, s32);
extern void func_80433DA8(s32);
extern void func_80432488(s32);
extern void func_80264790(s32);
extern void func_8022EF20(Record *);
extern void func_802A101C(u8 *, s32, s32);
extern void func_80404E28(s32);
extern s32 func_80404F04(s32);
extern void func_8040C4A8(s32);
extern void func_802A338C(void);
extern void func_802A3410(s32);
extern void func_8025DF54(s32);

s32 func_8042F130(s32 screen) {
    Block *block;
    Globals *globals;
    Sprite *sprite;
    Sprite *row;
    s32 rest;
    s32 i;
    s32 j;

    block = func_80252FFC(sizeof(Block));
    D_800E54A4 = block;
    block->screen = screen;
    func_8043C3F0(block->setup, 0x67, 0, 0, 0);
    D_800E54A4->menu = func_8041B690(screen, 4);
    func_8041B768(screen, 0, 0x285);
    func_8041B768(screen, 1, 0x285);
    func_8041B768(screen, 2, 0x285);
    func_8041B768(screen, 3, 0x285);
    for (i = 0; i < 4; i++) {
        D_800E54A4->counts[i] = 0;
    }
    D_800E54A4->ready = 1;
    D_800E54A4->slots = 4;
    D_800E54A4->top = func_8040ECB0(screen, 0x2FB);
    D_800E54A4->top->x -= D_800E54A4->top->width;
    D_800E54A4->topStep = D_800E54A4->top->width / 4;
    rest = D_800E54A4->top->width - D_800E54A4->topStep * 4;
    D_800E54A4->top->x += rest;
    D_800E54A4->bottom = func_8040ECB0(screen, 0x2A2);
    D_800E54A4->bottom->x += D_800E54A4->bottom->width;
    D_800E54A4->bottomStep = D_800E54A4->bottom->width / 4;
    rest = D_800E54A4->bottom->width - D_800E54A4->bottomStep * 4;
    D_800E54A4->bottom->x -= rest;
    func_8040ECB0(screen, 0x286)->alpha = 0x6E;
    D_800E54A4->music = func_80419ED4(0x287, 0xFF);
    D_800E54A4->title = func_8040ECB0(screen, 0x287);
    func_8040E958(D_800E54A4->title, 0);
    D_800E54A4->players[0].sprite = func_8040ECB0(screen, 0x2FC);
    D_800E54A4->players[1].sprite = func_8040ECB0(screen, 0x2A3);
    D_800E54A4->players[2].sprite = func_8040ECB0(screen, 0x2FD);
    D_800E54A4->players[3].sprite = func_8040ECB0(screen, 0x2FA);
    D_800E54A4->mode = D_800E54A0;
    for (i = 0; i < 4; i++) {
        D_800E54A4->links[i].player = -1;
        D_800E54A4->links[i].slot = 0;
        D_800E54A4->links[i].state = 2;
    }
    switch (D_800E54A4->mode) {
    case 5:
        sprite = func_8040ECB0(screen, 0x293);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        break;
    case 6:
        sprite = func_8040ECB0(screen, 0x296);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        break;
    case 4:
        sprite = func_8040ECB0(screen, 0x288);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        break;
    case 0:
        sprite = func_8040ECB0(screen, 0x2A1);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        break;
    case 3:
        sprite = func_8040ECB0(screen, 0x295);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        break;
    case 1:
        sprite = func_8040ECB0(screen, 0x289);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        for (i = 0; i < 4; i++) {
            if (D_80102B00[i].owner >= 0) {
                if (D_80102B00[i].dropped == 1) {
                    D_80102B00[i].owner = -1;
                    D_80102B00[i].dropped = 0;
                }
                if (D_80102B00[i].owner >= 0) {
                    D_800E54A4->links[i].player = 0;
                    D_800E54A4->links[i].slot = i;
                    D_800E54A4->links[i].state = 1;
                }
            }
        }
        func_80433DA8(-1);
        break;
    case 7:
        break;
    case 2:
        sprite = func_8040ECB0(screen, 0x297);
        func_8040E958(sprite, 1);
        sprite->alpha = 0xFF;
        break;
    }
    for (i = 0; i < 4; i++) {
        D_800E54A4->players[i].state = 0;
        D_800E54A4->players[i].menu = 0;
        D_800E54A4->players[i].back = -1;
        func_80432488(i);
        func_80264790(i);
        for (j = 0; j < 4; j++) {
            func_8022EF20(&D_800E54A4->players[i].records[j]);
        }
        for (j = 0; j < 16; j++) {
            func_802A101C(D_800E54A4->players[i].names[j].code, 0, 0x14);
            func_802A101C(D_800E54A4->players[i].names[j].text, 0, 0xA);
        }
        func_802A101C(D_800E54A4->players[i].codes[2], 0, 0xA);
        func_802A101C(D_800E54A4->players[i].codes[1], 0, 0xA);
        func_802A101C(D_800E54A4->players[i].codes[0], 0, 0xA);
        D_800E54A4->players[i].slot = 0;
        D_800E54A4->players[i].choice = 0;
        for (j = 0; j < 4; j++) {
            D_800E54A4->players[i].used[j] = 2;
            D_800E54A4->players[i].notes[j] = 0;
        }
        D_800E54A4->players[i].record = 0;
        D_800E54A4->players[i].host = 0;
        D_800E54A4->players[i].profile = 0;
        D_800E54A4->players[i].sub = 0;
        D_800E54A4->players[i].next = -1;
        D_800E54A4->players[i].port = -1;
    }
    D_800E54A4->focus = -1;
    switch (D_800E54A4->mode) {
    case 5:
        for (i = 0; i < 4; i++) {
            D_800E54A4->players[i].state = 0xE;
        }
        for (i = 0; i < 4; i++) {
            globals = &D_801462C8;
            if (D_80102B00[i].dropped == 0 && D_80102B00[i].owner >= 0 && globals->status[i].active == 1 &&
                globals->status[i].out == 0) {
                D_800E54A4->players[D_80102B00[i].owner].back = 2;
                D_800E54A4->players[D_80102B00[i].owner].state = 2;
                D_800E54A4->players[D_80102B00[i].owner].next = 6;
            }
        }
        for (i = 0; i < 4; i++) {
            func_80432488(i);
        }
        break;
    case 6:
        if (D_800E3514 == 0) {
            for (i = 0; i < 4; i++) {
                func_80404E28(i);
                switch (func_80404F04(i)) {
                case -4:
                case -3:
                case -1:
                case 0:
                    D_800E54A4->players[i].back = 2;
                    D_800E54A4->players[i].state = 2;
                    D_800E54A4->players[i].next = 4;
                    func_80432488(i);
                    break;
                }
            }
        } else {
            func_80404E28(D_800E3510);
            switch (func_80404F04(D_800E3510)) {
            case -4:
            case -3:
            case -1:
            case 0:
                D_800E54A4->players[D_800E3510].back = 2;
                D_800E54A4->players[D_800E3510].state = 2;
                D_800E54A4->players[D_800E3510].next = 4;
                func_80432488(D_800E3510);
                break;
            }
        }
        break;
    case 7:
        D_800E54A4->players[0].back = 2;
        D_800E54A4->players[0].state = 2;
        D_800E54A4->players[0].next = 0xD;
        D_800E54A4->players[0].sub = 6;
        func_80432488(0);
        break;
    }
    func_8040C4A8(0);
    func_802A338C();
    func_802A3410(0);
    func_8025DF54(0xE78);
    return 0;
}
