#include "basetypes.h"

/* Refreshes the name label of screen D_800E4F60: with no entry at 0x438 it uses the default text
   D_800D7500; otherwise it formats the entry's name from func_8042B398 on the list func_8042B474
   returns for 0x434 into a 0x40-byte buffer through D_8011FE88 and takes the text func_802A1494
   makes of it. Either text is copied into the screen's label at 0x3F4 through func_802A125C, and the
   widget at 0x3EC is pointed at that label. */
struct Widget {
    char pad0[0x38];
    char *text;
};

struct Screen {
    char pad0[0x3EC];
    struct Widget *widget;
    char pad3F0[0x3F4 - 0x3F0];
    char label[0x40];
    s32 list;
    s32 entry;
};

extern struct Screen *D_800E4F60;
extern char *D_800D7500;
extern char D_8011FE88[];
extern s32 func_8042B474(s32);
extern char *func_8042B398(s32, s32);
extern void func_8028D35C(void *, char *, char *, s32);
extern char *func_802A1494(char *);
extern void func_802A125C(char *, char *);

void func_8042B1C0(void) {
    char buffer[0x40];

    if (D_800E4F60->entry == 0) {
        func_802A125C(D_800E4F60->label, D_800D7500);
    } else {
        func_8028D35C(D_8011FE88, func_8042B398(func_8042B474(D_800E4F60->list), D_800E4F60->entry),
                      buffer, 0x3F);
        func_802A125C(D_800E4F60->label, func_802A1494(buffer));
    }
    D_800E4F60->widget->text = D_800E4F60->label;
}
