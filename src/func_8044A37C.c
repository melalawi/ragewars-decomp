#include "basetypes.h"

/* Starts a player's run: in a multiplayer session (D_801462E5) picks the lap count from the chosen track through func_8022F444 in mode 1 or from the loaded course in mode 4 for a human player, sets the run type at 0x5EA (1, or 3 in single player), clears 0x13C8 and 0x85C around func_8044A17C, then starts its vehicle through func_8021B1E4 with model 0xC1D for a computer player in state 12 during stage 9 and its own model otherwise, doubled when D_80145048 is two or more. */
typedef struct {
    char pad0[0x80];
    signed char track;
} Record;

typedef struct {
    char pad0[0x28];
    u8 laps;
} Course;

typedef struct {
    char pad0[0x5D4];
    s32 slot;
    Record *record;
    char pad5DC[4];
    s32 state;
    char pad5E4[6];
    s16 runType;
    s32 model;
    char pad5F0[0x26C];
    s32 w85C;
    char pad860[0xADC];
    s32 laps;
    char pad1340[0x88];
    s32 w13C8;
    char pad13CC[0x84];
    s32 computer;
} Player;

extern s32 D_80145048;
extern u8 D_801462E5;
extern u8 D_801462D5;
extern char D_80102B00[];
extern Course *D_800E4680;
extern s32 D_8013B294;

extern s32 func_8022F444(char *, s32);
extern void func_8044A17C(Player *);
extern void func_8021B1E4(Player *, s32, s32, s32);

void func_8044A37C(Player *player) {
    s32 scale;

    scale = (D_80145048 >= 2) * 2;
    if (D_801462E5 != 0) {
        if (D_801462D5 == 1 && player->computer == 0) {
            player->laps = ((u8)func_8022F444(D_80102B00 + player->slot * 0x190, player->record->track) >> 1) + 1;
        }
        if (D_801462D5 == 4 && player->computer == 0 && D_800E4680 != 0) {
            player->laps = D_800E4680->laps;
        }
        player->runType = 1;
    } else {
        player->runType = 3;
    }
    player->w13C8 = 0;
    func_8044A17C(player);
    player->w85C = 0;
    if (player->state == 12 && player->computer != 0 && D_8013B294 == 9) {
        func_8021B1E4(player, 0xC1D, scale, 1);
    } else {
        func_8021B1E4(player, player->model, scale, 1);
    }
}
