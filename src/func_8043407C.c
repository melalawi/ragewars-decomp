#include "basetypes.h"

typedef struct Note {
    char label[0x28];
    char name[0x14];
    char size[0xA];
} Note;

typedef struct PakSlot {
    s32 state;
    char pad4[8];
    void *menu;
    char pad10[0x648];
    Note notes[16];
    char pad0AB8[0xA];
    char used[0xA];
    char free[0xA];
    char pad0AD6[2];
    s32 cursor;
    s32 scroll;
    void *items[3];
    char pad0AEC[0x7C];
} PakSlot;

typedef struct PakState {
    char pad0[0x58];
    PakSlot slots[4];
} PakState;

typedef struct Item {
    char pad0[0x38];
    char *text;
} Item;

extern PakState *D_800E54A4;
extern char *D_800D7784;
extern char *D_800D727C;
extern char D_800E1EE0[];
extern char D_800E1EE4[];
extern char D_800E1EF0[];
extern s32 func_8040458C(s32, s32, s32 *, char *, u8 *, s32 *, char *, char *);
extern s32 func_804057BC(char *, s32);
extern void func_802A125C(char *, char *);
extern void func_802A1C08(char *, char *, ...);
extern Item *func_8040ECB0(void *, s32);
extern s32 func_80405160(s32, s32 *);
extern s32 func_80435600(void);
extern s32 func_804057EC(s32);
extern void func_80432488(s32, s32);
extern void func_8043442C(s32, s32);

/* Builds a player's controller pak note list: each of the sixteen notes gets its name (a default when unnamed), its size and a numbered label with the extension when it has one, or empty entries once the pak cannot be read; then the free and used page counts are formatted into their menu items, and on any read failure the slot is marked failed instead of opening the note menu. */
void func_8043407C(s32 player)
{
    char name[0x18];
    u8 ext[8];
    char extra1[8];
    char extra2[8];
    s32 status;
    s32 size;
    s32 failed;
    s32 i;
    Item *item;

    failed = 0;
    for (i = 0; i < 16 && failed == 0; i++) {
        if (func_8040458C(player, i, &status, name, ext, &size, extra1, extra2) == 0) {
            if (status == 1) {
                if (func_804057BC(name, 16) == 1) {
                    func_802A125C(name, D_800D7784);
                }
                func_802A125C(D_800E54A4->slots[player].notes[i].name, name);
                func_802A1C08(D_800E54A4->slots[player].notes[i].size, D_800E1EE0, size);
                if (ext[0] != 0) {
                    func_802A1C08(D_800E54A4->slots[player].notes[i].label, D_800E1EE4, i + 1,
                                  D_800E54A4->slots[player].notes[i].name, ext);
                    continue;
                }
                goto numbered;
            }
        } else {
            failed = 1;
        }
        func_802A125C(D_800E54A4->slots[player].notes[i].name, D_800D727C);
        func_802A1C08(D_800E54A4->slots[player].notes[i].size, D_800E1EE0, 0);
    numbered:
        func_802A1C08(D_800E54A4->slots[player].notes[i].label, D_800E1EF0, i + 1,
                      D_800E54A4->slots[player].notes[i].name);
    }
    if (failed == 0) {
        item = func_8040ECB0(D_800E54A4->slots[player].menu, 0x2D8);
        if (func_80405160(player, &size) == 0) {
            func_802A1C08(D_800E54A4->slots[player].free, D_800E1EE0, size);
            item->text = D_800E54A4->slots[player].free;
            item = func_8040ECB0(D_800E54A4->slots[player].menu, 0x2D7);
            size = func_80435600();
            func_802A1C08(D_800E54A4->slots[player].used, D_800E1EE0, func_804057EC(size));
            item->text = D_800E54A4->slots[player].used;
        } else {
            failed = 1;
        }
    }
    if (failed == 1) {
        D_800E54A4->slots[player].state = failed;
        func_80432488(player, 0x2DB);
        return;
    }
    D_800E54A4->slots[player].cursor = -1;
    D_800E54A4->slots[player].scroll = 0;
    D_800E54A4->slots[player].items[0] = func_8040ECB0(D_800E54A4->slots[player].menu, 0x2DB);
    D_800E54A4->slots[player].items[1] = func_8040ECB0(D_800E54A4->slots[player].menu, 0x2DC);
    D_800E54A4->slots[player].items[2] = func_8040ECB0(D_800E54A4->slots[player].menu, 0x2DD);
    func_8043442C(player, 1);
}
