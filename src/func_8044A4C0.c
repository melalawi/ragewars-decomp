/* Handles a player falling out: in the life-counting trial kinds 1 and 4 a counted player loses a life
   and, on the last one, clears humanWon and tells the session (func_8022A738); a player with lives left
   respawns (func_8021B1E4, func_8044A17C), and any other is finished with event 0x12 (func_802227D0)
   unless the replay setting holds it back. */
#include "basetypes.h"
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

#define SETTING_REPLAY_MENU 2
#define TRIAL_LIVES 1
#define TRIAL_LIVES_TIMED 4
#define EVENT_FELL_OUT 0x12
#define SOLO_PLAYERS 2

typedef struct Controls {
    char pad0[0x8F];
    u8 replayed;
} Controls;

typedef struct {
    s32 flags;
    char pad4[0xD - 0x4];
    u8 trialKind;
    char padE[0x1D - 0xE];
    u8 replay;
} Settings;

typedef struct {
    char pad0[0xA8];
    s32 humanWon;
} Rules;

/* The match setup: the settings, and the rules 0x5D8 bytes on. */
typedef struct {
    Settings settings;
    char padSettings[0x5D8 - sizeof(Settings)];
    Rules rules;
} Match;

typedef struct {
    char pad0[0x1288];
    Match match;
} Globals;

extern Globals D_80145040;
extern s32 D_80145048;
extern void func_8022A738(Globals *world);
extern void func_8021B1E4(Player *player, s32 spawnPoint, s32 mode, s32 flag);
extern void func_8044A17C(Player *player);
extern void func_802227D0(Player *player, Player *source, s32 event);

void func_8044A4C0(Player *player) {
    Match *match;
    s32 mode;

    mode = (D_80145048 >= SOLO_PLAYERS) << 1;
    match = &D_80145040.match;
    if (!(match->settings.flags & SETTING_REPLAY_MENU) || match->settings.replay != 0) {
        if (match->settings.trialKind == TRIAL_LIVES || match->settings.trialKind == TRIAL_LIVES_TIMED) {
            if (player->views1450.view1450_4.uncounted == 0) {
                if (player->views133C.view133C_2.lives > 0) {
                    player->views133C.view133C_2.lives--;
                }
                if (player->views133C.view133C_2.lives == 0) {
                    match->rules.humanWon = 0;
                    func_8022A738(&D_80145040);
                }
            }
        }
    }
    match = &D_80145040.match;
    if ((match->settings.trialKind == TRIAL_LIVES || match->settings.trialKind == TRIAL_LIVES_TIMED)
        && player->views1450.view1450_4.uncounted == 0) {
        if (player->views133C.view133C_2.lives <= 0) {
            if (match->settings.replay == 0 || player->views1C.view10E_14.replaying != 0 || player->views5D8.view5D8_2.controls->replayed != 0) {
                func_802227D0(player, player, EVENT_FELL_OUT);
                goto done;
            }
            return;
        }
        func_8021B1E4(player, player->views5E8.view5EC_7.spawnPoint, mode, 1);
        func_8044A17C(player);
        goto done;
    }
    func_802227D0(player, player, EVENT_FELL_OUT);
done:
    player->views1340.view1340_3.respawnTimer = 0;
}
