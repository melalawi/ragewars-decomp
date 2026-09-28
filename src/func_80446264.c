/* Sets a player state to 2, then in multiplayer (D_801462E5) clears and otherwise sets bit 0x800000 in both of its actor's visibility masks at 0x80 and 0xA8, and refreshes the audio state through func_8025CC8C and func_8025CAD0 with that mask. */
#include "basetypes.h"

typedef struct {
    char pad0[0x80];
    s32 mask80;
    char pad84[0xA8 - 0x84];
    s32 maskA8;
} Actor;

typedef struct {
    s16 state;
    char pad2[0xA];
    Actor *actor;
} Player;

extern u8 D_801462E5;
extern void func_802648E8(void);
extern s32 func_8025CC8C(s32 mask);
extern void func_8025CAD0(s32 value);

void func_80446264(Player *player) {
    s32 mask;

    player->state = 2;
    func_802648E8();
    mask = 0x800000;
    if (D_801462E5 != 0) {
        mask = 0xFF7FFFFF;
        player->actor->mask80 &= mask;
        player->actor->maskA8 &= mask;
    } else {
        player->actor->mask80 |= mask;
        player->actor->maskA8 |= mask;
    }
    func_8025CAD0(func_8025CC8C(mask));
}
