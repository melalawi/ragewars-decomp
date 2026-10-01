/* Updates every player in a world for one frame unless the game state D_8014687C is 8 or 11: turns
   the world's spin at 0x40 by 5 degrees, then for each player in the list from 0x20 runs its body
   through func_802631D0 (restoring the frame time D_800D2988 it may change), its team logic through
   func_8022C480 when either team rule is set, its controls through func_80220EB0 unless input is
   frozen by D_80146894, and its camera through func_80220A5C; a second pass opens the pause menu
   through func_802456FC for a paused player or one whose controller at 0x698 asks while a menu is
   possible, or otherwise starts the in-game menu for a live player with a view not already showing
   one (unless the match forbids it), before the match end check func_80228394 and the world updates
   func_80227014 and func_80227E68 run and the frame time is restored. */
#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct View {
    char pad0[0x564];
    s32 menu;
} View;



typedef struct {
    char pad0[0x20];
    Player *players;
    char pad24[0x40 - 0x24];
    s32 spin;
} World;

typedef struct {
    char pad0[0x24];
    s32 teams;
    char pad28[0x78 - 0x28];
    s32 teamRule;
} Rules;

typedef struct {
    s32 state;
    char pad4[0x24 - 0x4];
    Rules rules;
} Game;

typedef struct {
    char pad0[0x1C];
    s32 locked;
} MenuRules;

typedef struct {
    char pad0[0xCC9];
    u8 allowed;
    char padCCA[0x1278 - 0xCCA];
    s32 open;
    char pad127C[0x1284 - 0x127C];
    MenuRules rules;
} Menu;

extern f32 D_800D2988;
extern Menu D_8014561C;
extern Game D_8014687C;
extern s32 D_80146894;
extern void func_802631D0(char *, Player *);
extern void func_8022C480(Player *);
extern void func_80220EB0(Player *);
extern void func_80220A5C(Player *, Player *);
extern s32 func_80245774(void);
extern void func_802456FC(void);
extern s32 func_8026437C(void *);
extern s32 func_8024575C(void);
extern s32 func_802A33AC(void);
extern s32 func_80442B98(Menu *);
extern void func_8025E380(void);
extern void func_8025E3C8(void);
extern void func_80218464(char *);
extern void func_80435CF0(void);
extern void func_80228394(World *);
extern void func_80227014(World *);
extern void func_80227E68(World *);

void func_80226A10(World *world) {
    f32 frameTime;
    Player *player;
    Rules *rules;

    if (D_8014687C.state != 0xB && D_8014687C.state != 8) {
        frameTime = D_800D2988;
        world->spin += 5;
        if (world->spin >= 360) {
            world->spin = 0;
        }
        rules = &D_8014687C.rules;
        for (player = world->players; player != 0; player = player->views16E0.view16E0_2.next) {
            func_802631D0(player->views5E8.view688_33.body, player);
            D_800D2988 = frameTime;
            if (rules->teams != 0 || rules->teamRule != 0) {
                func_8022C480(player);
            }
            if (D_80146894 == 0) {
                func_80220EB0(player);
            }
            func_80220A5C(player, player);
        }
        for (player = world->players; player != 0; player = player->views16E0.view16E0_2.next) {
            if (func_80245774() != 0 && (player->views5E8.view6B0_48.state & 0x8000)) {
                func_802456FC();
            } else if (func_8026437C(player->views5E8.view698_36.controller) != 0) {
                if (func_80245774() != 0 || func_8024575C() != 0) {
                    func_802456FC();
                } else if (func_802A33AC() == 0 && func_80442B98(&D_8014561C) == 0 && player->views5E4.view5E4_3.alive != 0
                           && player->views5DC.view5DC_2.view != 0 && player->views5DC.view5DC_2.view->menu == 0
                           && ((&D_8014561C.rules)->locked == 0 || D_8014561C.allowed == 0)) {
                    D_8014561C.open = 1;
                    func_8025E380();
                    func_8025E3C8();
                    func_80218464(player->views5E8.view938_130.strokes);
                    player->views5E8.viewF54_132.selection = -1;
                    player->views5E8.viewF90_134.choice = -1;
                    func_80435CF0();
                }
            }
        }
        func_80228394(world);
        func_80227014(world);
        func_80227E68(world);
        D_800D2988 = frameTime;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C51B4_B[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x00};
const unsigned char unbake_rodata_800C51C0_2B[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x47, 0x65, 0x74, 0x42, 0x4C, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x44, 0x61, 0x74, 0x61, 0x3A, 0x20, 0x62, 0x6C, 0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
const unsigned char unbake_rodata_800C51EC_25[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x47, 0x65, 0x74, 0x42, 0x4C, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x44, 0x61, 0x74, 0x61, 0x3A, 0x20, 0x62, 0x6C, 0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
const unsigned char unbake_rodata_800C5214_3[] = {0x25, 0x73, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA374_B[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x00};
const unsigned char unbake_rodata_800CA380_2B[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x47, 0x65, 0x74, 0x42, 0x4C, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x44, 0x61, 0x74, 0x61, 0x3A, 0x20, 0x62, 0x6C, 0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
const unsigned char unbake_rodata_800CA3AC_25[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x47, 0x65, 0x74, 0x42, 0x4C, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x44, 0x61, 0x74, 0x61, 0x3A, 0x20, 0x62, 0x6C, 0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
const unsigned char unbake_rodata_800CA3D4_3[] = {0x25, 0x73, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C50FC_4 = 0.00392156886f;
const float unbake_rodata_800C5100_4 = 65536.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5068_4 = 128.0f;
const float unbake_rodata_800C506C_4 = 255.0f;
const float unbake_rodata_800C5070_4 = 128.0f;
const float unbake_rodata_800C5074_4 = 255.0f;
const float unbake_rodata_800C5078_4 = 1.0f;
const float unbake_rodata_800C507C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5080_4 = 255.0f;
const float unbake_rodata_800C5084_4 = 2.14748365e+09f;
const float unbake_rodata_800C5088_4 = 255.0f;
const float unbake_rodata_800C508C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5090_4 = 255.0f;
const float unbake_rodata_800C5094_4 = 2.14748365e+09f;
const float unbake_rodata_800C5098_4 = 255.0f;
const float unbake_rodata_800C509C_4 = 2.14748365e+09f;
const float unbake_rodata_800C50A0_4 = 255.0f;
const float unbake_rodata_800C50A4_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C50A8_18[] = {0x0027F510U, 0x0027F53CU, 0x0027F554U, 0x0027F58CU, 0x0027F5E8U, 0x0027F628U};
const float unbake_rodata_800C50C0_4 = 255.0f;
const float unbake_rodata_800C50C4_4 = 1.0f;
const float unbake_rodata_800C50C8_4 = 1.0f;
const float unbake_rodata_800C50CC_4 = (-9.99999975e-05f);
const float unbake_rodata_800C50D0_4 = 9.99999975e-05f;
const float unbake_rodata_800C50D4_4 = 10.0f;
const float unbake_rodata_800C50D8_4 = 1.0f;
const float unbake_rodata_800C50DC_4 = 5.0f;
const float unbake_rodata_800C50E0_4 = 1.0f;
const float unbake_rodata_800C50E4_4 = 0.5f;
const float unbake_rodata_800C50E8_4 = 2.14748365e+09f;
const float unbake_rodata_800C50EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C50F0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C520C_4 = 3000.0f;
#endif
