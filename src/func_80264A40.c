/* Advances the replay mode: when replays are possible (func_802934DC, D_80145070 and the handle table) it
 * cycles the mode 0 -> 1 -> 2 -> 0, snapshots the actors and records the camera target, promoting mode 1
 * to 2 when the player's target changed or the player is in states 0x16 to 0x21 and recording the player's
 * target instead; otherwise the mode is cleared. An active mode arms the 240-frame timer. */
#include "basetypes.h"

typedef struct Snapshot {
    s32 active;
    s32 mode;
    s32 timer;
    s32 target;
} Snapshot;

typedef struct {
    char pad0[0x1D];
    u8 disabled;
} Options;

extern Snapshot D_8010FC40;
extern char D_8011FE88;
extern s32 D_8013B2BC;
extern s32 D_80145070;
extern Options D_801462C8;
extern s32 func_802934DC(void);
extern void func_80264D00(void);
extern void *func_8022A404(void *);

typedef struct func_80264A40_S1 func_80264A40_S1;
struct func_80264A40_S1 {
    char pad0[0x5EC];
    s32 unk5EC;
    char pad5EC[0x650 - 0x5EC - sizeof(s32)];
    u16 unk650;
};

void func_80264A40(void) {
    Snapshot *snapshot;
    void *player;
    s32 enabled;
    Options *options;

    enabled = func_802934DC() != 0;
    snapshot = &D_8010FC40;
    if (D_80145070 == 0) {
        enabled = 0;
    }
    if (&D_8011FE88 == 0) {
        enabled = 0;
    }
    if (enabled) {
        switch (snapshot->mode) {
        case 0:
            snapshot->mode = 1;
            break;
        case 1:
            snapshot->mode = 2;
            break;
        case 2:
        default:
            snapshot->mode = 0;
            break;
        }
        func_80264D00();
        snapshot->target = D_8013B2BC;
        options = &D_801462C8;
        if (options->disabled == 0) {
            player = func_8022A404((char *)options - 0x1288);
            if (player != 0) {
                if (snapshot->mode == 1 &&
                    (D_8013B2BC != ((func_80264A40_S1 *)(player))->unk5EC ||
                     (u16)(((func_80264A40_S1 *)(player))->unk650 - 0x16) < 12)) {
                    snapshot->mode = 2;
                }
                snapshot->target = ((func_80264A40_S1 *)(player))->unk5EC;
            }
        }
    } else {
        snapshot->mode = 0;
    }
    if (snapshot->mode != 0) {
        snapshot->timer = 0xF0;
        snapshot->active = 1;
    } else {
        snapshot->timer = 0;
        snapshot->active = 0;
    }
}
