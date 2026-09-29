#include "basetypes.h"

/* Sets a field's text from the byte at 0x83 of its holder owner's record: D_800D7680 for zero, D_800D7684 for ten, and otherwise one of D_800D7670 to D_800D767C by the mode byte at 0x4 of the holder's second record, into which the value is then formatted with D_800E2320 two bytes before the length func_80442158 reports. Returns zero. */
struct Field {
    char pad[0x14];
    char **text;
};

struct Record {
    char pad[0x83];
    u8 value;
};

struct Owner {
    char pad[0x5D8];
    struct Record *record;
};

struct Mode {
    char pad[0x4];
    s8 mode;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
    struct Mode *mode;
};

extern char *D_800D7670[];
extern char *D_800D7674[];
extern char *D_800D7678[];
extern char *D_800D767C[];
extern char *D_800D7680[];
extern char *D_800D7684[];
extern char D_800E2320[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8043E364(struct Field *field, struct Holder *holder) {
    s32 value = holder->owner->record->value;
    char *text;

    if (value == 0) {
        field->text = D_800D7680;
    } else if (value == 10) {
        field->text = D_800D7684;
    } else {
        switch (holder->mode->mode) {
        case 0:
        default:
            field->text = D_800D7670;
            break;
        case 1:
            field->text = D_800D7674;
            break;
        case 2:
            field->text = D_800D7678;
            break;
        case 3:
            field->text = D_800D767C;
            break;
        }
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 2), D_800E2320, value);
    }
    return 0;
}
