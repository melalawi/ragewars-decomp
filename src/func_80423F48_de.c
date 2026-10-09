/* Main menu choice handler: after func_8029973C_de it acts on the entry func_80299A08_de reports
   (0x45 to 0x4C), setting the next state of screen D_800E05B0_de, the player count D_80142215 and the
   player status records in D_801422D8 (joining players and resetting unsaved records through
   func_8022F204_de), then closes the menu through func_8041A430_de. Returns zero. */
#include "types.h"
#include "types.h"
#include "shared/func_80425674_de_layout.h"
#include "shared/gameplay_transition.h"

#include "types.h"
struct CompactOptionsScreen {
    s32 slider;
    s32 first_list;
    s32 second_list;
    s32 state;
};
struct ArenaChoiceState {
    void *menu;
    u32 unknown4[5];
    s32 next;
};

#include "common/unused.h"

extern struct ArenaChoiceState *D_800E05B0_de;
extern s32 D_800E0630;
extern Shared_Game D_80142208_de;
/* Symbol 80146398, Game+0xD0, is the existing 0x96-byte settings-record array. */
extern Shared_PlayerSettingsRecord D_801422D8[];
extern Record_func_80433914_de D_800FEB00[];

extern void func_8029973C_de(void);
extern s32 func_80299A08_de(void);
extern void func_8022F204_de(s32);
extern void func_8022EF30_de(char *);
extern void func_80434FB4_de(s32);
extern void func_8022F5A4_de(char *, s32);
extern void func_8041A430_de(void *, s32);

s32 func_80423F48_de(void) {
    Shared_PlayerSettingsRecord *status;
    Shared_Game *settings;

    s32 i;

    func_8029973C_de();
    switch (func_80299A08_de()) {
    case 0x45:
        D_800E05B0_de->next = 0x1A;
        D_80142208_de.controllerMode = 0;
        break;
    case 0x49:
        settings = &D_80142208_de;
        status = settings->playerSettings;
        D_800E05B0_de->next = 7;
        settings->controllerMode = 2;
        for (i = 0; i < 2; i++) {
            status[i].enabled = 1;
            status[i].slot = i;
            if (D_800FEB00[i].player < 0) {
                func_8022F204_de(i);
            }
        }
        break;
    case 0x46:
        status = D_80142208_de.playerSettings;
        status->enabled = 1;
        status[0].slot = 0;
        func_8022EF30_de((char *)D_800FEB00);
        func_80434FB4_de(7);
        D_800E05B0_de->next = 0x13;
        D_80142208_de.controllerMode = 1;
        break;
    case 0x4B:
        D_800E05B0_de->next = 0x1B;
        break;
    case 0x47:
        D_800E05B0_de->next = 4;
        break;
    case 0x4C:
        D_800E05B0_de->next = 0x10;
        break;
    case 0x48:
        status = D_80142208_de.playerSettings;
        D_800E05B0_de->next = 7;
        status->enabled = 1;
        status[0].slot = 0;
        if (D_800FEB00[0].player < 0) {
            func_8022F204_de(0);
            for (i = 0; i < 20; i++) {
                func_8022F5A4_de((char *)D_800FEB00, i);
            }
        }
        D_80142208_de.controllerMode = 3;
        break;
    case 0x4A:
        status = D_80142208_de.playerSettings;
        D_800E05B0_de->next = 0xA;
        status->enabled = 1;
        status[0].slot = 0;
        if (D_800FEB00[0].player < 0) {
            func_8022F204_de(0);
        }
        D_80142208_de.controllerMode = 4;
        D_800E0630 = 0;
        break;
    default:
        return 0;
    }
    func_8041A430_de(D_800E05B0_de->menu, 2);
    return 0;
}
