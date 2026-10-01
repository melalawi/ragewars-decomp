typedef int s32;
typedef signed char s8;

/* Relabels the four slot rows of the block D_800E54A4 points to: for each row item (0x28B, 0x28D,
   0x28F, then 0x291) of the block's window it calls func_8040E9D0(0) and points the text at 0x38
   of the item's label at 0x8 at player p's chosen slot (the index at 0xAEC of p's 2920-byte record
   at 0x58, slots of 400 bytes from 0x18) when p is not -1 and func_8041B87C reports
   this row as p's focus in the list at 0x4, otherwise at the row's 400-byte record in D_80102B00
   when its owner byte 0xD is not negative, or at nothing. */

/* The first row item's id: eu-x numbers its items 9 higher and de 1 higher, as each cartridge's
   own bytes show; us, us-rev1 and eu share 0x28B. */
#if defined(VERSION_EU_X)
#define FIRST_ROW_ITEM 0x294
#elif defined(VERSION_DE)
#define FIRST_ROW_ITEM 0x28C
#else
#define FIRST_ROW_ITEM 0x28B
#endif

struct Label {
    char pad[0x38];
    void *text;
};

struct Item {
    char pad[0x8];
    struct Label *label;
};

struct Player {
    char pad0[0x18];
    char slots[4][400];
    char pad658[0xAEC - 0x658];
    s32 chosen;
    char padAF0[0xB68 - 0xAF0];
};

struct Block {
    void *window;
    void *list;
    char pad8[0x58 - 0x8];
    struct Player players[4];
};

extern struct Block *D_800E54A4;
extern char D_80102B00[];
extern s8 D_80102B0D[];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E9D0(struct Item *, s32);
extern struct Item *func_8041B87C(void *, s32);

void func_80433DA8(s32 player) {
    struct Item *item;
    struct Label *label;
    s32 id;
    s32 i;

    for (i = 0; i < 4; i++) {
        switch (i) {
        case 0:
            id = FIRST_ROW_ITEM;
            break;
        case 1:
            id = FIRST_ROW_ITEM + 2;
            break;
        case 2:
            id = FIRST_ROW_ITEM + 4;
            break;
        default:
            id = FIRST_ROW_ITEM + 6;
            break;
        }
        item = func_8040ECB0(D_800E54A4->window, id);
        func_8040E9D0(item, 0);
        label = item->label;
        if (player != -1 && item == func_8041B87C(D_800E54A4->list, player)) {
            label->text = D_800E54A4->players[player].slots[D_800E54A4->players[player].chosen];
        } else if (D_80102B0D[i * 400] >= 0) {
            label->text = &D_80102B00[i * 400];
        } else {
            label->text = 0;
        }
    }
}
