#include "basetypes.h"

/* Points a field's text at D_800E6090 when the owner at offset 0x1C of the second argument has its
   word at 0x5D0 equal to one, and at D_800E60AC otherwise; returns zero, doing nothing without an
   owner. */
struct Owner {
    char pad[0x5D0];
    s32 state;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
};

struct Field {
    char pad[0x14];
    char *text;
};

extern char D_800E6090[];
extern char D_800E60AC[];

s32 func_80446000(struct Field *field, struct Holder *holder) {
    if (holder->owner == 0) {
        return 0;
    }
    if (holder->owner->state == 1) {
        field->text = D_800E6090;
    } else {
        field->text = D_800E60AC;
    }
    return 0;
}
