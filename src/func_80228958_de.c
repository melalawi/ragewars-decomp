#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_1000/code_8026D4F0.h"
#include "span_1000/types.h"
#include "types.h"
/* Draws the per-player overlays for one view between func_8026D980_de and func_8026D9D0_de: for each player
   in the list from 0x20 it draws the scope model 0xC84 or 0xC85 (by the zoom mode at 0x120C) at the
   player's view matrix while zoomed in at 0x11FC, the player's display through func_8022F770_de when it
   belongs to this view and is enabled at 0x1210, and in team games (0x24 or 0x78 of D_801468A0) a
   teammate marker through func_80229D28_de for every other player on the viewing player's team. */



extern s32 D_801427E0[];
extern char D_8011BDC8;
extern char D_800CBCA8;
extern void *func_802392EC_de(s32);


extern s32 func_8028B21C_de(char *, s32);
extern void *func_8028C198_de(char *, s32);
extern void func_8026DF30_de(void *, void *, char *, s32, s32);
extern void func_8022F770_de(void *, void *);
extern void func_80229D28_de(void *);








void func_80228958_de(void *game, s32 view) {
    char *player;
    s32 *match;
    s32 team;
    s32 zoomed;
    s32 model;

    match = D_801427E0;
    team = -1;
    if (match[0x24 / 4] != 0 || match[0x78 / 4] != 0) {
        team = ((struct Record *) ((struct Owner_func_804441F4_de *) func_802392EC_de(view))->name)->team;
    }
    func_8026D980_de();
    for (player = ((func_802285C4_S1 *)(game))->unk20; player != 0; player = ((ObjectLinks16E4 *)(player))->unk_16E0) {
        zoomed = 0;
        if (((ObjectLinks16E4 *)(player))->unk_11FC > 0.0f) {
            zoomed = 1;
        }
        if (zoomed) {
            if (((ObjectLinks16E4 *)(player))->unk_120C != 0) {
                model = func_8028B21C_de(&D_8011BDC8, 0xC84);
            } else {
                model = func_8028B21C_de(&D_8011BDC8, 0xC85);
            }
            if (model != -1) {
                func_8026DF30_de(func_8028C198_de(&D_8011BDC8, model), player + 0x1600, &D_800CBCA8, 0, -1);
            }
        }
        if (((ObjectLinks16E4 *)(player))->unk_5DC != 0 && ((ObjectLinks16E4 *)(player))->unk_1210 != 0 && ((ObjectLinks16E4 *)(player))->unk_5DC == view) {
            func_8022F770_de(player + 0x2E8, (char *)player + 0x458);
        }
        if ((((Rules *) D_801427E0)->teams != 0 || ((Rules *) D_801427E0)->teamRule != 0)
            && ((struct Record *) ((ObjectLinks16E4 *) player)->unk_5D8)->team == team && func_802392EC_de(view) != player) {
            func_80229D28_de(player);
        }
    }
    func_8026D9D0_de();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C52D4_4 = 81.9199982f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA494_4 = 81.9199982f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C5498_B[] = {0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x65, 0x74, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C51B0_4 = 1.0f;
const float unbake_rodata_800C51B4_4 = 1.0f;
const float unbake_rodata_800C51B8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5304_4 = 1.0f;
#endif
