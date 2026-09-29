/* Gives a player an amount of one ammunition type and announces it: the count at 0x5F4 of that type
   rises by the amount up to the type's maximum (none for type -1, the character's table at 0x108 in
   multiplayer, otherwise D_800CE3E8 plus the profile's bonus bytes in D_80102B00 unless ammunition is
   unlimited at 0x1450), and the message "<amount> <type name>" with a plural suffix for more than one
   is built and shown through func_8022B74C. */
#include "basetypes.h"

#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef struct {
    char pad0[0x108];
    s32 maxAmmo[4];
} Character;

#define MATCHKIT_KNOWN_Character 1
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

typedef struct {
    char pad0[0x14];
    u8 bonus2;
    u8 bonus0;
    u8 bonus1;
    char pad17[0x190 - 0x17];
} Profile;

extern s32 D_800CE3E8[];
extern Profile D_80102B00[];
extern u8 D_801462D5;
extern char D_800C7D40[];
extern char D_800C7D44[];
extern void func_802A166C(s32, char *);
extern void func_802A125C(char *, char *);
extern void func_802A12E8(char *, char *);
extern char *func_80232754(s32);
extern void func_8022B74C(Player *, char *, f32);

static inline s32 max_ammo(Player *player, s32 type) {
    s32 max;

    if (type == -1) {
        return 0;
    }
    if (D_801462D5 != 1) {
        max = player->views18.view18_4.character->maxAmmo[type];
    } else {
        max = D_800CE3E8[type];
        if (player->views1450.view1450_3.unlimited == 0) {
            if (type == 0) {
                max += D_80102B00[player->views1C.view5D4_47.profile].bonus0;
            } else if (type == 1) {
                max += D_80102B00[player->views1C.view5D4_47.profile].bonus1;
            } else if (type == 2) {
                max += D_80102B00[player->views1C.view5D4_47.profile].bonus2;
            }
        }
    }
    return max;
}

void func_80229530(Player *player, s32 type, s32 amount) {
    char number[8];
    char message[32];

    if (amount != 0) {
        player->views5E8.view5F4_12.ammo[type] = MIN(player->views5E8.view5F4_12.ammo[type] + amount, max_ammo(player, type));
        func_802A166C(amount, number);
        func_802A125C(message, number);
        func_802A12E8(message, D_800C7D40);
        func_802A12E8(message, func_80232754(type));
        if (amount >= 2) {
            func_802A12E8(message, D_800C7D44);
        }
        func_8022B74C(player, message, 1.0f);
    }
}
