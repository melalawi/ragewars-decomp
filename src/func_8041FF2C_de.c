#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8041F1FC.h"
#include "types.h"














/* Enables character choices unlocked by active players and highlights the selected profile's unlocked characters. */
#if defined(VERSION_DE)
enum { UNLOCK_MARK = 129 };
#elif defined(VERSION_EU_X)
enum { UNLOCK_MARK = 135 };
#else
enum { UNLOCK_MARK = 131 };
#endif

extern HudStatusShared_Settings D_80142208_de[];
extern CharacterSelectionRoot *D_800E0280;
extern char D_800FEB00[][0x190];
extern signed char D_800FEB0D[];
extern u8 D_800FEB54[];
extern s32 D_800DFA04[][28];
extern u16 D_800DFA02[][56];
extern s32 func_8022F5C4_de(void *profile, s32 character);
extern s32 func_80265650_de(u8 *bits, s32 index);
extern void func_80265688_de(u8 *bits, s32 index, s32 value);
extern void func_8040E950_de(MenuWidget *widget, s32 hidden);
extern void func_8040E8D8_de(MenuWidget *widget, s32 visible);
extern MenuWidget *func_8040EC30_de(void *parent, s32 id);

void func_8041FF2C_de(void) {
    u8 bits[4];
    s32 i;
    s32 j;
    s32 found;
    MenuWidget *widget;
    MenuWidget *mark;

    for (i = 0; i < 17; i++) {
        found = 0;
        for (j = 0; j < 4 && !found; j++) {
            if (D_800FEB0D[j * 0x190] >= 0) {
                found = found || func_8022F5C4_de(D_800FEB00[j], D_800DFA04[i][0]);
            }
        }
        if (D_80142208_de->trialKind == 0 || D_80142208_de->trialKind == 2) {
            if (D_80142208_de->flags & 0x8000000) {
                found = 1;
            }
        }
        func_80265688_de(bits, i, found);
    }
    if (D_80142208_de->trialKind == 1) {
        func_80265688_de(bits, 11, 0);
        func_80265688_de(bits, 12, 0);
        func_80265688_de(bits, 13, 0);
        func_80265688_de(bits, 14, 0);
    }
    if (D_80142208_de->trialKind == 0 || D_80142208_de->trialKind == 2) {
        func_80265688_de(bits, 1, 1);
    }
    for (i = 0; i < 17; i++) {
        widget = func_8040EC30_de(D_800E0280->screen, D_800DFA02[i][0]);
        func_8040E950_de(widget, 0);
        if (!func_80265650_de(bits, i)) {
            if (widget) {
                func_8040E950_de(widget, 1);
                func_8040E8D8_de(widget, 0);
            }
        } else if (D_80142208_de->trialKind == 1 && func_80265650_de(D_800FEB54, D_800DFA04[i][0]) == 1) {
            mark = func_8040EC30_de(widget, UNLOCK_MARK);
            func_8040E8D8_de(mark, 1);
            mark->alpha = 50;
        }
    }
}
