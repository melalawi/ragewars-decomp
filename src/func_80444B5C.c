#include "basetypes.h"

/* Points an option field at the settings byte 0x79 of the holder's owner settings (or the defaults D_80146302) as a signed offset from 128 in steps of eight, using the text D_800D7624 for zero and otherwise the text D_800D7628 formatted with D_800E2788 for a positive or D_800E2790 for a negative step four bytes before the length func_80442158 reports, returning zero. */

struct Settings {
    char pad[0x79];
    u8 value;
};

struct Owner {
    char pad[0x5D8];
    struct Settings *settings;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
};

struct Field {
    char pad[0x14];
    char **text;
};

extern struct Settings D_80146302;
extern char *D_800D7624;
extern char *D_800D7628;
extern char D_800E2788[];
extern char D_800E2790[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_80444B5C(struct Field *field, struct Holder *holder) {
    struct Settings *settings = &D_80146302;
    s32 step;
    char *text;

    if (holder->owner != 0 && holder->owner->settings != 0) {
        settings = holder->owner->settings;
    }
    step = (settings->value - 128) / 8;
    if (step == 0) {
        field->text = &D_800D7624;
    } else if (step > 0) {
        field->text = &D_800D7628;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 4), D_800E2788, step);
    } else {
        field->text = &D_800D7628;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 4), D_800E2790, step);
    }
    return 0;
}
