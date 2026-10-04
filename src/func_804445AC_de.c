#include "span_16E000/code_80444260.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points an option field at the text D_800D75F8 when the byte at offset 0x7D of the second argument's owner settings (or the defaults D_80146302) is zero and at D_800D75F4 when it is one, returning zero. */









extern struct Settings_func_80444548_de D_80142242;
extern char *D_800D35C8;
extern char *D_800D35CC;

s32 func_804445AC_de(struct Field *field, struct Holder_func_80444548_de *holder) {
    struct Settings_func_80444548_de *settings = &D_80142242;

    if (holder->owner != 0 && holder->owner->settings != 0) {
        settings = holder->owner->settings;
    }
    switch (settings->value) {
    case 0:
        field->text = &D_800D35CC;
        break;
    case 1:
        field->text = &D_800D35C8;
        break;
    }
    return 0;
}
