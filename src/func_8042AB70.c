#include "basetypes.h"

/* Refreshes the selection on the screen D_800E4F60: for category 0 to 3 at 0x434 it takes the item
   the selection at 0x438 names in the 4-byte table D_800E5240, D_800E5214, D_800E51F8 or
   D_800E51E4 from the window into 0x43C, copies the selection's name into the text at 0x3F4 (the
   default label for selection 0, otherwise the resource name func_8028D35C reads from
   D_8011FE88 for the entry func_8042B398 finds in the category's list func_8042B474), points the
   label at 0x3EC to that text and calls func_80245B18. */

struct Cell {
    u16 pad;
    u16 id;
};

struct Label {
    char pad[0x38];
    char *text;
};

struct Screen {
    void *window;
    char pad4[0x3EC - 0x4];
    struct Label *label;
    char pad3F0[0x3F4 - 0x3F0];
    char text[0x434 - 0x3F4];
    s32 category;
    s32 selection;
    void *item;
};

extern struct Screen *D_800E4F60;
extern struct Cell D_800E51E4[];
extern struct Cell D_800E51F8[];
extern struct Cell D_800E5214[];
extern struct Cell D_800E5240[];
#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
extern u8 D_80152789;
extern char *D_800E1DA4[];
#define DEFAULT_LABEL D_800E1DA4[D_80152789]
#else
extern char *D_800D7500;
#define DEFAULT_LABEL D_800D7500
#endif
extern char D_8011FE88[];
extern void *func_8040ECB0(void *, s32);
extern void *func_8042B474(s32);
extern s32 func_8042B398(void *, s32);
extern void func_8028D35C(char *, s32, char *, s32);
extern char *func_802A1494(char *);
extern void func_802A125C(char *, char *);
extern void func_80245B18();

void func_8042AB70(void) {
    struct Cell *table;
    char buffer[0x40];

    switch (D_800E4F60->category) {
    case 3:
        table = D_800E51E4;
        break;
    case 2:
        table = D_800E51F8;
        break;
    case 1:
        table = D_800E5214;
        break;
    case 0:
        table = D_800E5240;
        break;
    default:
        return;
    }
    D_800E4F60->item = func_8040ECB0(D_800E4F60->window, table[D_800E4F60->selection].id);
    if (D_800E4F60->selection == 0) {
        func_802A125C(D_800E4F60->text, DEFAULT_LABEL);
    } else {
        func_8028D35C(D_8011FE88,
                      func_8042B398(func_8042B474(D_800E4F60->category), D_800E4F60->selection),
                      buffer, 0x3F);
        func_802A125C(D_800E4F60->text, func_802A1494(buffer));
    }
    D_800E4F60->label->text = D_800E4F60->text;
    func_80245B18();
}
