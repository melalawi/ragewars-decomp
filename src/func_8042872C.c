/* Picks a menu element id from arg0 and whether arg2 is set, hides the 0x14B child of that element and stores 0x64 and the value func_8042881C reports for arg1 into its 0x14A child; on eu-x every element id in this menu is renumbered 4 higher. */

#include "shared/results_options_screen.h"

extern ResultsOptionsScreen *D_800E4690;
extern MenuWidget *func_8040ECB0(MenuWidget *element, s32 id);
extern void func_8040E958(MenuWidget *element, s32 arg1);
extern s32 func_8042881C(s32 arg0);

#if defined(VERSION_DE)
enum { ID_SHIFT = -4, OPTION_SHIFT = -2 };
#elif defined(VERSION_EU_X)
enum { ID_SHIFT = 4, OPTION_SHIFT = 4 };
#else
enum { ID_SHIFT = 0, OPTION_SHIFT = 0 };
#endif

void func_8042872C(u32 arg0, s32 arg1, s32 arg2) {
    s32 id;
    MenuWidget *element;
    MenuWidget *field;
    s32 value;

    switch (arg0) {
    case 0:
        id = 0x1DF + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x149 + OPTION_SHIFT;
        }
        break;
    case 1:
        id = 0x1E0 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14C + OPTION_SHIFT;
        }
        break;
    case 2:
        id = 0x1E1 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14D + OPTION_SHIFT;
        }
        break;
    case 3:
        id = 0x1E2 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14E + OPTION_SHIFT;
        }
        break;
    case 4:
        id = 0x1E3 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14F + OPTION_SHIFT;
        }
        break;
    default:
        id = 0x149 + OPTION_SHIFT;
        break;
    }
    element = func_8040ECB0(D_800E4690->root, id);
    func_8040E958(func_8040ECB0(element, 0x14B + OPTION_SHIFT), 0);
    value = func_8042881C(arg1);
    field = func_8040ECB0(element, 0x14A + OPTION_SHIFT);
    field->alpha = 0x64;
    field->value = value;
}
