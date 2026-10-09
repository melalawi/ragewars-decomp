#include "span_16E000/code_80443868.h"
#include "shared/func_80443B3C_de_closed.h"

s32 func_80443B3C_de(Shared_DebugWidget *field, Shared_MenuHandle *holder) {
    s32 player = func_8022A5A0_de(&D_80145040, holder->owner);
    s32 value = D_80146398[player * 75];
    char *text;

#if defined(VERSION_EU) || defined(VERSION_EU_X)
    text = field->inner->text[D_80145040.object.language];
    func_802658E4_de(text + (func_80441FE8_de(field) - 4), D_800EED80, value);
#else
    text = *field->inner->text;
    func_802658E4_de(text + (func_80441FE8_de(field) - 4), D_800DE700, value);
#endif
    return 0;
}

/* Does nothing. Nothing in the cartridge image calls it or stores its address as a word. */
void func_80443BCC_de(void) {
}
