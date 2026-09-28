/* Picks a menu element id from arg0 and whether arg2 is set, hides the 0x14B child of that element and stores 0x64 and the value func_8042881C reports for arg1 into its 0x14A child; on eu-mul every element id in this menu is renumbered 4 higher. */

#include "basetypes.h"

typedef struct Element {
    char pad0[0x10];
    u8 unk10;
    char pad11[0x1B];
    s32 unk2C;
} Element;

typedef struct Screen {
    char pad0[0x970];
    Element *root;
} Screen;

extern Screen *D_800E4690;
extern Element *func_8040ECB0(Element *element, s32 id);
extern void func_8040E958(Element *element, s32 arg1);
extern s32 func_8042881C(s32 arg0);

#ifdef VERSION_EU_MUL
#define ID_SHIFT 4
#else
#define ID_SHIFT 0
#endif

void func_8042872C(u32 arg0, s32 arg1, s32 arg2) {
    s32 id;
    Element *element;
    Element *field;
    s32 value;

    switch (arg0) {
    case 0:
        id = 0x1DF + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x149 + ID_SHIFT;
        }
        break;
    case 1:
        id = 0x1E0 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14C + ID_SHIFT;
        }
        break;
    case 2:
        id = 0x1E1 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14D + ID_SHIFT;
        }
        break;
    case 3:
        id = 0x1E2 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14E + ID_SHIFT;
        }
        break;
    case 4:
        id = 0x1E3 + ID_SHIFT;
        if (arg2 == 0) {
            id = 0x14F + ID_SHIFT;
        }
        break;
    default:
        id = 0x149 + ID_SHIFT;
        break;
    }
    element = func_8040ECB0(D_800E4690->root, id);
    func_8040E958(func_8040ECB0(element, 0x14B + ID_SHIFT), 0);
    value = func_8042881C(arg1);
    field = func_8040ECB0(element, 0x14A + ID_SHIFT);
    field->unk10 = 0x64;
    field->unk2C = value;
}
