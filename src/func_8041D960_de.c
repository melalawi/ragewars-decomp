#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8041BEA8.h"
#include "types.h"
/* Sets the label text for the focused node: the text of its entry in the 50-entry id table when the
   current player's unlock bit for that entry is set, otherwise the default text; the European
   cartridges hold each entry's text per language and pick the current language's. */











#if defined(VERSION_EU) || defined(VERSION_EU_X)


extern Game_func_8041D960_de D_80140FC8;
#define LANGUAGE D_80140FC8.language
#else
#define LANGUAGE 0
#endif

extern Menu_func_8041D960_de *D_800DF540;
extern TextEntry D_800DF544[];
extern PlayerRecord D_800FEB4A[];
extern char D_800DD4C8[];
extern s32 func_80265650_de(PlayerRecord *bits, s32 bit);

void func_8041D960_de(void) {
    s32 i;

    if (D_800DF540->focus == 0) {
        D_800DF540->label->text = D_800DD4C8 + 4;
        return;
    }
    for (i = 0; i < 50; i++) {
        if (D_800DF544[i].id == D_800DF540->focus->unkC) {
            if (func_80265650_de(&D_800FEB4A[D_800DF540->player], i) == 1) {
                D_800DF540->label->text = D_800DF544[i].text[LANGUAGE];
            } else {
                D_800DF540->label->text = D_800DD4C8 + 4;
            }
            return;
        }
    }
}
