/* Draws the per-player overlays for one view between func_8026D980 and func_8026D9D0: for each player
   in the list from 0x20 it draws the scope model 0xC84 or 0xC85 (by the zoom mode at 0x120C) at the
   player's view matrix while zoomed in at 0x11FC, the player's display through func_8022F760 when it
   belongs to this view and is enabled at 0x1210, and in team games (0x24 or 0x78 of D_801468A0) a
   teammate marker through func_80229CFC for every other player on the viewing player's team. */
#include "basetypes.h"

typedef struct {
    char pad0[0x24];
    s32 teams;
    char pad28[0x50];
    s32 squads;
} Match;

extern s32 D_801468A0[];
extern char D_8011FE88;
extern char D_800D0EF8;
extern void *func_802392DC(s32);
extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern s32 func_8028B1F8(char *, s32);
extern void *func_8028C174(char *, s32);
extern void func_8026DF30(void *, void *, char *, s32, s32);
extern void func_8022F760(void *, void *);
extern void func_80229CFC(void *);

void func_80228934(void *game, s32 view) {
    char *player;
    s32 *match;
    s32 team;
    s32 zoomed;
    s32 model;

    match = D_801468A0;
    team = -1;
    if (match[0x24 / 4] != 0 || match[0x78 / 4] != 0) {
        team = *(u8 *) (*(char **) ((char *) func_802392DC(view) + 0x5D8) + 0x92);
    }
    func_8026D980();
    for (player = *(char **) ((char *) game + 0x20); player != 0; player = *(char **) (player + 0x16E0)) {
        zoomed = 0;
        if (*(f32 *) (player + 0x11FC) > 0.0f) {
            zoomed = 1;
        }
        if (zoomed) {
            if (*(s32 *) (player + 0x120C) != 0) {
                model = func_8028B1F8(&D_8011FE88, 0xC84);
            } else {
                model = func_8028B1F8(&D_8011FE88, 0xC85);
            }
            if (model != -1) {
                func_8026DF30(func_8028C174(&D_8011FE88, model), player + 0x1600, &D_800D0EF8, 0, -1);
            }
        }
        if (*(s32 *) (player + 0x5DC) != 0 && *(s32 *) (player + 0x1210) != 0 && *(s32 *) (player + 0x5DC) == view) {
            func_8022F760(player + 0x2E8, player + 0x458);
        }
        if ((((Match *) D_801468A0)->teams != 0 || ((Match *) D_801468A0)->squads != 0)
            && *(u8 *) (*(char **) (player + 0x5D8) + 0x92) == team && func_802392DC(view) != player) {
            func_80229CFC(player);
        }
    }
    func_8026D9D0();
}
