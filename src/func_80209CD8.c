/* Revives a player whose down timer at 0x1340 has run past its limit (30 ticks, or 900 in
   control modes 12 and 15 while D_80146938 asks): clears the timer and calls func_8044A37C
   unless the session at 0x98 is running and the player's team membership at 0x94 and control
   mode disagree, or it is teamless and active outside session mode 3. */
#include "basetypes.h"

typedef struct {
    char pad0[0x80];
    s8 mode;
    char pad81[0x94 - 0x81];
    u8 team;
    u8 active;
} Controls;

typedef struct {
    char pad0[0x5D8];
    Controls *controls;
    char pad5DC[0x1340 - 0x5DC];
    s32 timer;
} Player;

typedef struct {
    char pad0[0x98];
    s32 running;
    s32 mode;
} Session;

extern Session D_801468A0;
extern s32 D_80146938;
extern void func_8044A37C(Player *);

void func_80209CD8(Player **arg0) {
    s32 limit;
    Controls *controls;
    Session *session;
    s8 mode;

    if (D_80146938 != 0) {
        mode = (*arg0)->controls->mode;
        if (mode == 0xC || mode == 0xF) {
            limit = 0x384;
        } else {
            limit = 0x1E;
        }
    } else {
        limit = 0x1E;
    }
    if (limit < (*arg0)->timer) {
        session = &D_801468A0;
        do {
            (*arg0)->timer = 0;
        } while (0);
        if (session->running != 0) {
            controls = (*arg0)->controls;
            if (controls->team == 0) {
                if (controls->active == 0 || session->mode == 3) {
                    func_8044A37C(*arg0);
                }
            } else {
                mode = controls->mode;
                if (mode == 0xC || mode == 0xF) {
                    func_8044A37C(*arg0);
                }
            }
        } else {
            func_8044A37C(*arg0);
        }
    }
}
