/* Allocates the character-select screen D_800E59E0 for window arg0, sets up each of the 4 player
   panels (items, and the chosen model for active players through func_8041CB48), scrolls the two
   side panels, picks each active player's column mode from its model kind, and refreshes loadouts. */
#include "basetypes.h"

typedef struct Vec { f32 x, y, z; } Vec;
typedef struct Row { s32 pad; f32 scale[4], distance[4]; Vec position[4]; s32 light[4]; char tail[12]; } Row;

struct Item {
    char pad0[0x10];
    u8 alpha;
    char pad11[3];
    u16 x;
    u16 pad16;
    s16 width;
};

struct Entry {
    char pad0[0x4A8];
    s32 unk4A8;
    s32 column;
    char pad4B0[0x4C8 - 0x4B0];
    struct Item *item;
    s32 mode;
};

struct Screen {
    s32 window;
    s32 unk4;
    struct Entry entries[4];
    struct Item *left;
    s32 leftStep;
    struct Item *right;
    s32 rightStep;
    s32 unk1358;
    s32 unk135C;
    s32 unk1360;
    struct Item *unk1364;
    s32 unk1368;
};

struct Cell {
    u16 id;
    u16 pad;
};

typedef struct Player { char pad0[0x78]; u8 active; char pad79[7]; s8 kind; char pad81[0x15]; } Player;

extern struct Screen *D_800E59E0;
extern struct Cell D_800E59E6[][19];
extern struct Cell D_800E59EA[][19];
extern Row D_800E3A58[];
extern Player D_80146398[];
extern struct Screen *func_80252FFC(s32);
extern s32 func_8041B690(s32, s32);
extern void func_8041B768(s32, s32, s32);
extern struct Item *func_8040ECB0(s32, s32);
extern void func_8040E958(struct Item *, s32);
extern s32 func_8041F1B0(s8);
extern void func_8041CB48(void *, s32, s32, s32, s32, Vec, Vec, f32, s32);
extern s32 func_80419ED4(s32, s32);
extern void func_8043BB4C(void);
extern void func_8043B2AC(s32);
extern void func_802A338C(void);

s32 func_8043A0B0(s32 window) {
    Vec scale;
    struct Item *item;
    Player *player;
    Player *record;
    s32 index;
    s32 rest;
    s32 i;

    D_800E59E0 = func_80252FFC(0x1670);
    D_800E59E0->window = window;
    D_800E59E0->unk4 = func_8041B690(window, 4);
    func_8041B768(window, 0, 0xC8);
    func_8041B768(window, 1, 0xC8);
    func_8041B768(window, 2, 0xC8);
    func_8041B768(window, 3, 0xC8);
    scale.x = 1.0f;
    scale.y = 1.0f;
    scale.z = 1.0f;
    for (i = 0; i < 4; i++) {
        D_800E59E0->entries[i].unk4A8 = 0;
        D_800E59E0->entries[i].column = 5;
        item = func_8040ECB0(D_800E59E0->window, D_800E59EA[i][0].id);
        D_800E59E0->entries[i].item = item;
        item->alpha = 0x64;
        func_8040E958(item, 0);
        func_8040ECB0(D_800E59E0->window, D_800E59E6[i][0].id)->alpha = 0x6E;
        record = &D_80146398[i];
        if (record->active == 1) {
            index = func_8041F1B0(record->kind);
            scale.x = D_800E3A58[index].scale[i];
            scale.y = D_800E3A58[index].scale[i];
            scale.z = D_800E3A58[index].scale[i];
            func_8041CB48(&D_800E59E0->entries[i], 9, record->kind + 0x38F, 0x4B, 0x5DC0, scale,
                          D_800E3A58[index].position[i], D_800E3A58[index].distance[i],
                          D_800E3A58[index].light[i]);
        }
    }
    D_800E59E0->unk1358 = 1;
    D_800E59E0->unk135C = 4;
    D_800E59E0->left = func_8040ECB0(window, 0xCE);
    D_800E59E0->left->x -= D_800E59E0->left->width;
    D_800E59E0->leftStep = D_800E59E0->left->width / 4;
    rest = D_800E59E0->left->width - D_800E59E0->leftStep * 4;
    D_800E59E0->left->x += rest;
    D_800E59E0->right = func_8040ECB0(window, 0xF6);
    D_800E59E0->right->x += D_800E59E0->right->width;
    D_800E59E0->rightStep = D_800E59E0->right->width / 4;
    rest = D_800E59E0->right->width - D_800E59E0->rightStep * 4;
    D_800E59E0->right->x -= rest;
    func_8040ECB0(window, 0xCB)->alpha = 0x6E;
    D_800E59E0->unk1360 = func_80419ED4(0xC9, 0xFF);
    item = func_8040ECB0(window, 0xC9);
    D_800E59E0->unk1364 = item;
    func_8040E958(item, 0);
    for (i = 0; i < 4; i++) {
        player = &D_80146398[i];
        if (player->active == 1) {
            switch (player->kind) {
            case 14:
            case 17:
            case 18:
                D_800E59E0->entries[i].mode = 0;
                break;
            default:
                D_800E59E0->entries[i].mode = 2;
                break;
            }
        }
    }
    func_8043BB4C();
    for (i = 0; i < 4; i++) {
        player = &D_80146398[i];
        if (player->active == 1) {
            func_8043B2AC(i);
        }
    }
    D_800E59E0->unk1368 = -1;
    func_802A338C();
    return 0;
}
