#include "basetypes.h"

typedef struct Node {
    u8 pad0[0xC];
    s16 unkC;
} Node;

typedef struct Menu {
    u8 pad0[0xEC];
    Node *unkEC;
    u8 pad_F0[0x10C - 0xF0];
    s32 unk10C;
} Menu;

typedef struct TextEntry {
    s32 id;
    char **text;
} TextEntry;

typedef struct PlayerRecord {
    u8 data[0x190];
} PlayerRecord;

extern Menu *D_800E3590;
extern TextEntry D_800E3594[];
extern PlayerRecord D_80102B4A[];

extern void func_8025470C(s32 arg0);
extern s32 func_8025471C(void);
extern s32 func_80265670(PlayerRecord *bits, s32 bit);
extern void func_80439E60(void *record, s32 count);
extern void func_80439EB4(void *object, s32 value);

/** Looks up the id table entry for the current menu's focused node; on a match, checks the current player's unlock bit, picks a message via a 14-way switch or a default, and shows it, closing the menu on a further condition. Falls back to clearing the message when there is no focus, no unlock, or the loop runs out. */
void func_8041D550(void) {
    s32 i;
    s32 a1;
    s32 s2;

    if (D_800E3590->unkEC == 0) {
        func_80439E60((u8 *) D_800E3590 + 8, 0);
        return;
    }

    i = 0;
    do {
        if (D_800E3594[i].id == D_800E3590->unkEC->unkC) {
            if (func_80265670(&D_80102B4A[D_800E3590->unk10C], i) == 1) {
                s2 = 0;
                if ((u32) (i - 0x24) < 0xEU) {
                    switch (i - 0x24) {
                    case 0:
                        a1 = 0xE75;
                        break;
                    case 1:
                        a1 = 0xE76;
                        break;
                    case 2:
                        a1 = 0xE77;
                        break;
                    case 3:
                        a1 = 0xE78;
                        break;
                    case 4:
                        a1 = 0xE79;
                        break;
                    case 5:
                        a1 = 0xE7A;
                        break;
                    case 6:
                        a1 = 0xE7B;
                        break;
                    case 7:
                        a1 = 0xE7C;
                        break;
                    case 8:
                        a1 = 0xE7D;
                        break;
                    case 9:
                        a1 = 0xE7E;
                        break;
                    case 10:
                        a1 = 0xE7F;
                        break;
                    case 11:
                        a1 = 0xE80;
                        break;
                    case 12:
                        a1 = 0xE81;
                        break;
                    case 13:
                        a1 = 0xE82;
                        break;
                    }
                } else {
                    a1 = 0xE74;
                    s2 = i;
                }
                func_80439E60((u8 *) D_800E3590 + 8, a1);
                func_80439EB4((u8 *) D_800E3590 + 8, s2);
                if (func_8025471C() == 0) {
                    func_8025470C(1);
                }
                return;
            }

            func_80439E60((u8 *) D_800E3590 + 8, 0);
            return;
        }
        i += 1;
    } while (i < 0x32);
}
