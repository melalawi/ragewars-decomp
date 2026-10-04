#include "span_16E000/code_80444260.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points an option field at the text D_800D75E0 when the signed byte at offset 0x7B of the second argument's owner settings (or the defaults D_80146302) is zero and at D_800D75E4 when it is one, returning zero. Adapted from func_80444674_de with the settings byte made the signed byte at 0x7B and the texts changed. */









extern struct Record_func_8043E494_de D_80142242;
extern char *D_800D35B8;
extern char *D_800D35B4;

s32 func_80444424_de(struct Field *field, struct Menu_func_8043E494_de *holder) {
    struct Record_func_8043E494_de *settings = &D_80142242;

    if (holder->owner != 0 && holder->owner->record != 0) {
        settings = holder->owner->record;
    }
    switch (settings->mode) {
    case 0:
        field->text = &D_800D35B4;
        break;
    case 1:
        field->text = &D_800D35B8;
        break;
    }
    return 0;
}
