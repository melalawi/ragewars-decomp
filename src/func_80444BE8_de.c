#include "span_16E000/code_80444260.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D7634 when the byte at offset 0x82 of the settings the second argument's owner holds, or of the defaults D_80146302 without an owner, is one, and at D_800D7638 otherwise, returning zero. Adapted from func_80446000_us_rev1 with the settings lookup of func_80444C34_de and the texts D_800D7634 and D_800D7638 changed, and a zero result local declared first to give the owner and settings pointers the cartridge's registers. */








extern struct Settings_func_80444BE8_de D_80142242;
extern char D_800D3608[];
extern char D_800D360C[];

s32 func_80444BE8_de(struct Field_func_8040A4A0_de *field, struct Holder_func_80444BE8_de *holder) {
    s32 result = 0;
    struct Settings_func_80444BE8_de *settings = &D_80142242;

    if (holder->owner != 0) {
        settings = holder->owner->settings;
    }
    if (settings->flag == 1) {
        field->text = D_800D3608;
    } else {
        field->text = D_800D360C;
    }
    return result;
}
