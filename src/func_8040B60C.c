/* Confirms the pak menu's channel: picks the team/channel override or the record's own channel byte, marks D_80153784, and if func_80406178 accepts it opens the pak prompt keyed by the player's storage buffer (or the default buffer if there is no player), otherwise opens the prompt on the default buffer. */
#include "basetypes.h"
#define NULL ((void *)0)

typedef struct Inner {
    char pad[4];
    s8 value;
} Inner;

typedef struct Player {
    char pad[0x5DC];
    char *storage;
} Player;

typedef struct Record {
    char pad0[0x1C];
    Player *player;
    Inner *inner;
    void *unk24;
} Record;

extern s32 func_80406178(Record *, s32, s32);
extern void func_804426E4(void *, void *, Player *, void *, s32);
extern char D_8014561C[];
extern s32 D_8015375C;
extern s32 D_80153784;
extern s32 D_800E28C8;

s32 func_8040B60C(void *arg0, Record *arg1) {
    void *buffer;
    Player *player;
    s32 channel;

    if (D_8015375C != 0) {
        channel = D_800E28C8;
    } else {
        channel = arg1->inner->value;
    }
    D_80153784 = 1;
    if (func_80406178(arg1, channel, 1) != 0) {
        player = arg1->player;
        if (player != NULL) {
            buffer = player->storage + 0x554;
        } else {
            buffer = D_8014561C;
        }
        func_804426E4(buffer, arg1->unk24, arg1->player, arg1->inner, 0);
        return 1;
    }
    func_804426E4(D_8014561C, arg1->unk24, arg1->player, arg1->inner, 0);
    return 1;
}
