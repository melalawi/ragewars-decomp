#include "common/types.h"
#include "span_1000/code_802647BC.h"
#include "types.h"
/* Advances the replay mode: when replays are possible (func_802934F8_de, D_80140FB0 and the handle table) it
 * cycles the mode 0 -> 1 -> 2 -> 0, snapshots the actors and records the camera target, promoting mode 1
 * to 2 when the player's target changed or the player is in states 0x16 to 0x21 and recording the player's
 * target instead; otherwise the mode is cleared. An active mode arms the 240-frame timer. */





extern struct Shape_typemap_6 D_8010BC40;
extern char D_8011BDC8;
extern s32 D_801371FC;

extern ObjectState1E_2 D_80142208_de;
extern s32 func_802934F8_de(void);

extern void *func_8022A414_de(void *);




void func_80264A20_de(void) {
    struct Shape_typemap_6 *snapshot;
    void *player;
    s32 enabled;
    ObjectState1E_2 *options;

    enabled = func_802934F8_de() != 0;
    snapshot = &D_8010BC40;
    if (D_80140FB0 == 0) {
        enabled = 0;
    }
    if (&D_8011BDC8 == 0) {
        enabled = 0;
    }
    if (enabled) {
        switch (snapshot->field_4) {
        case 0:
            snapshot->field_4 = 1;
            break;
        case 1:
            snapshot->field_4 = 2;
            break;
        case 2:
        default:
            snapshot->field_4 = 0;
            break;
        }
        func_80264CE0_de();
        snapshot->field_C = D_801371FC;
        options = &D_80142208_de;
        if (options->unk_1D == 0) {
            player = func_8022A414_de((char *)options - 0x1288);
            if (player != 0) {
                if (snapshot->field_4 == 1 &&
                    (D_801371FC != ((func_80264A40_S1 *)(player))->unk5EC ||
                     (u16)(((func_80264A40_S1 *)(player))->unk650 - 0x16) < 12)) {
                    snapshot->field_4 = 2;
                }
                snapshot->field_C = ((func_80264A40_S1 *)(player))->unk5EC;
            }
        }
    } else {
        snapshot->field_4 = 0;
    }
    if (snapshot->field_4 != 0) {
        snapshot->field_8 = 0xF0;
        snapshot->field_0 = 1;
    } else {
        snapshot->field_8 = 0;
        snapshot->field_0 = 0;
    }
}
