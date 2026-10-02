/* Enables character choices unlocked by active players and highlights the selected profile's unlocked characters. */
#include "shared/character_selection.h"
#include "shared/settings.h"
#if defined(VERSION_DE)
enum { UNLOCK_MARK = 129 };
#elif defined(VERSION_EU_X)
enum { UNLOCK_MARK = 135 };
#else
enum { UNLOCK_MARK = 131 };
#endif

extern Shared_Settings D_801462C8[];
extern CharacterSelectionRoot *D_800E42D0;
extern char D_80102B00[][0x190];
extern signed char D_80102B0D[];
extern u8 D_80102B54[];
extern s32 D_800E3A54[][28];
extern u16 D_800E3A52[][56];
extern s32 func_8022F5B4(void *profile, s32 character);
extern s32 func_80265670(u8 *bits, s32 index);
extern void func_802656A8(u8 *bits, s32 index, s32 value);
extern void func_8040E9D0(MenuWidget *widget, s32 hidden);
extern void func_8040E958(MenuWidget *widget, s32 visible);
extern MenuWidget *func_8040ECB0(void *parent, s32 id);

void func_8041FF9C(void) {
    u8 bits[4];
    s32 i;
    s32 j;
    s32 found;
    MenuWidget *widget;
    MenuWidget *mark;

    for (i = 0; i < 17; i++) {
        found = 0;
        for (j = 0; j < 4 && !found; j++) {
            if (D_80102B0D[j * 0x190] >= 0) {
                found = found || func_8022F5B4(D_80102B00[j], D_800E3A54[i][0]);
            }
        }
        if (D_801462C8->trialKind == 0 || D_801462C8->trialKind == 2) {
            if (D_801462C8->flags & 0x8000000) {
                found = 1;
            }
        }
        func_802656A8(bits, i, found);
    }
    if (D_801462C8->trialKind == 1) {
        func_802656A8(bits, 11, 0);
        func_802656A8(bits, 12, 0);
        func_802656A8(bits, 13, 0);
        func_802656A8(bits, 14, 0);
    }
    if (D_801462C8->trialKind == 0 || D_801462C8->trialKind == 2) {
        func_802656A8(bits, 1, 1);
    }
    for (i = 0; i < 17; i++) {
        widget = func_8040ECB0(D_800E42D0->screen, D_800E3A52[i][0]);
        func_8040E9D0(widget, 0);
        if (!func_80265670(bits, i)) {
            if (widget) {
                func_8040E9D0(widget, 1);
                func_8040E958(widget, 0);
            }
        } else if (D_801462C8->trialKind == 1 && func_80265670(D_80102B54, D_800E3A54[i][0]) == 1) {
            mark = func_8040ECB0(widget, UNLOCK_MARK);
            func_8040E958(mark, 1);
            mark->alpha = 50;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE6B2_2[] = {0x00, 0x92};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E3A52_2[] = {0x00, 0x92};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0072_2[] = {0x00, 0x92};
#endif
