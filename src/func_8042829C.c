#include "basetypes.h"

/* Formats the name of entry D_800E4690's word at 0xA44 into a local 0x40-byte buffer through
   func_8028D35C from D_8011FE88, passes the length func_802A1494 measures to func_802A125C for the
   text object at offset 0xA04, and points word 0x38 of the object at 0x998 to that text object. */
struct Owner {
    char pad[0x38];
    void *text;
};

struct State {
    char pad0[0x998];
    struct Owner *owner;
    char pad99C[0xA04 - 0x99C];
    char text[0x40];
    s32 name;
};

extern struct State *D_800E4690;
extern char D_8011FE88[];
extern void func_8028D35C(void *, s32, char *, s32);
extern s32 func_802A1494(char *);
extern void func_802A125C(void *, s32);

void func_8042829C(void) {
    char buffer[0x40];

    func_8028D35C(D_8011FE88, D_800E4690->name, buffer, 0x3F);
    func_802A125C(D_800E4690->text, func_802A1494(buffer));
    D_800E4690->owner->text = D_800E4690->text;
}
