/* Applies the chosen character when the active player panel is ready. */
#include "shared/character_selection.h"

void func_8029A73C();                                  /* extern */
s32 func_8040EC50(s32);                             /* extern */
s32 func_8041B87C(s32, s32);                        /* extern */
s32 func_8041B890(s32, s32);                        /* extern */
void func_80420688(s32, s32);                          /* extern */
extern CharacterSelectionRoot *D_800E42D0;

#if defined(VERSION_DE)
enum { SPECIAL_CHAR = 127 };
#elif defined(VERSION_EU_X)
enum { SPECIAL_CHAR = 133 };
#else
enum { SPECIAL_CHAR = 129 };
#endif

s32 func_80420D4C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    CharacterSelectionRoot *temp_a0;

    temp_s0 = arg2 & 0xFFFF;
    temp_s1 = func_8041B890(D_800E42D0->panel, temp_s0);
    func_8029A73C();
    temp_a0 = (CharacterSelectionRoot *)((char *)D_800E42D0 + (temp_s0 * 0x4C8));
    if (temp_a0->phase == 1) {
        if (temp_s1 == SPECIAL_CHAR) func_80420688(temp_s0,temp_a0->choice);
        else if (func_8040EC50(func_8041B87C(D_800E42D0->panel,temp_s0)) == 0) func_80420688(temp_s0,temp_s1);
    }
    return 0;
}
