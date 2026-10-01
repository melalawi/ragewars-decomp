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

typedef struct func_80228934_S1 func_80228934_S1;
typedef struct func_80228934_S2 func_80228934_S2;
typedef struct func_80228934_S3 func_80228934_S3;
struct func_80228934_S1 {
    char pad0[0x5D8];
    char* unk5D8;
};
struct func_80228934_S2 {
    char pad0[0x20];
    char* unk20;
};
struct func_80228934_S3 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x5DC - 0x5D8 - sizeof(char*)];
    s32 unk5DC;
    char pad5DC[0x11FC - 0x5DC - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x120C - 0x11FC - sizeof(f32)];
    s32 unk120C;
    char pad120C[0x1210 - 0x120C - sizeof(s32)];
    s32 unk1210;
    char pad1210[0x16E0 - 0x1210 - sizeof(s32)];
    char* unk16E0;
};

void func_80228934(void *game, s32 view) {
    char *player;
    s32 *match;
    s32 team;
    s32 zoomed;
    s32 model;

    match = D_801468A0;
    team = -1;
    if (match[0x24 / 4] != 0 || match[0x78 / 4] != 0) {
        team = *(u8 *) (((func_80228934_S1 *)(func_802392DC(view)))->unk5D8 + 0x92);
    }
    func_8026D980();
    for (player = ((func_80228934_S2 *)(game))->unk20; player != 0; player = ((func_80228934_S3 *)(player))->unk16E0) {
        zoomed = 0;
        if (((func_80228934_S3 *)(player))->unk11FC > 0.0f) {
            zoomed = 1;
        }
        if (zoomed) {
            if (((func_80228934_S3 *)(player))->unk120C != 0) {
                model = func_8028B1F8(&D_8011FE88, 0xC84);
            } else {
                model = func_8028B1F8(&D_8011FE88, 0xC85);
            }
            if (model != -1) {
                func_8026DF30(func_8028C174(&D_8011FE88, model), player + 0x1600, &D_800D0EF8, 0, -1);
            }
        }
        if (((func_80228934_S3 *)(player))->unk5DC != 0 && ((func_80228934_S3 *)(player))->unk1210 != 0 && ((func_80228934_S3 *)(player))->unk5DC == view) {
            func_8022F760(player + 0x2E8, (char *)player + 0x458);
        }
        if ((((Match *) D_801468A0)->teams != 0 || ((Match *) D_801468A0)->squads != 0)
            && *(u8 *) (((func_80228934_S3 *)(player))->unk5D8 + 0x92) == team && func_802392DC(view) != player) {
            func_80229CFC(player);
        }
    }
    func_8026D9D0();
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
