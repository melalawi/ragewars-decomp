#ifndef SHARED_SHARED_HUDPLAYER_H
#define SHARED_SHARED_HUDPLAYER_H

#include "basetypes.h"

/* Viewport a player HUD is drawn into. */
typedef struct Shared_HudView Shared_HudView;
struct Shared_HudView {
    char pad0[0x24];
    s32 flags;  /* +0x24: src/func_8021EED8.c */
    char pad28[0x274];
    f32 width;  /* +0x29C: src/func_8021EED8.c */
    f32 height; /* +0x2A0: src/func_8021EED8.c */
    f32 x;      /* +0x2A4: src/func_8021EED8.c */
    f32 y;      /* +0x2A8: src/func_8021EED8.c */
};
typedef char Shared_HudView_size_check[(sizeof(Shared_HudView) == 0x2AC) ? 1 : -1];

/* Player record a HUD reads its name, scores and team from (player + 0x5D8). */
typedef struct Shared_HudOwner Shared_HudOwner;
struct Shared_HudOwner {
    char pad0[0x4];
    s16 score;     /* +0x4: src/func_8021EED8.c */
    s16 count;     /* +0x6: src/func_8021EED8.c */
    char pad8[0x7C];
    char name[11]; /* +0x84: src/func_8021EED8.c */
    u8 active;     /* +0x8F: src/func_8021EED8.c */
    char pad90[0x2];
    u8 team;       /* +0x92: src/func_8021EED8.c, 0xFF = no team */
};
typedef char Shared_HudOwner_size_check[(sizeof(Shared_HudOwner) == 0x94) ? 1 : -1];

/* HUD state of a player: animated counters, fades and the name ticker. */
typedef struct Shared_HudPlayer Shared_HudPlayer;
struct Shared_HudPlayer {
    char pad0[0xE4];
    u16 kind;                         /* +0xE4: src/func_8021EED8.c */
    char padE6[0x4F2];
    Shared_HudOwner *owner;           /* +0x5D8: src/func_8021EED8.c */
    char pad5DC[0x8];
    s32 health;                       /* +0x5E4: src/func_8021EED8.c, 8.8 fixed point */
    char pad5E8[0x2];
    s16 lives;                        /* +0x5EA: src/func_8021EED8.c */
    char pad5EC[0xC];
    s16 ammo;                         /* +0x5F8: src/func_8021EED8.c */
    char pad5FA[0x34];
    s16 weapon;                       /* +0x62E: src/func_8021EED8.c */
    char pad630[0x248];
    char effect[0xC0];                /* +0x878: src/func_8021EED8.c */
    char strokes[0x394];              /* +0x938: src/func_8021EED8.c */
    char trails[0x74];                /* +0xCCC: src/func_8021EED8.c */
    char marks[0xEC];                 /* +0xD40: src/func_8021EED8.c */
    char anim0[0x3C];                 /* +0xE2C: src/func_8021EED8.c */
    char anim1[0x3C];                 /* +0xE68: src/func_8021EED8.c */
    char anim2[0x3C];                 /* +0xEA4: src/func_8021EED8.c */
    char anim3[0x10];                 /* +0xEE0: src/func_8021EED8.c */
    f32 healthX;                      /* +0xEF0: src/func_8021EED8.c */
    f32 healthY;                      /* +0xEF4: src/func_8021EED8.c */
    char padEF8[0x24];
    s32 livesAnim;                    /* +0xF1C: src/func_8021EED8.c */
    char padF20[0x4];
    s32 livesShown;                   /* +0xF24: src/func_8021EED8.c */
    char padF28[0x4];
    f32 livesX;                       /* +0xF2C: src/func_8021EED8.c */
    f32 livesY;                       /* +0xF30: src/func_8021EED8.c */
    char padF34[0x20];
    s32 livesLast;                    /* +0xF54: src/func_8021EED8.c */
    char anim5[0xF0];                 /* +0xF58: src/func_8021EED8.c */
    s32 scoreAnim;                    /* +0x1048: src/func_8021EED8.c */
    char pad104C[0x4];
    u32 scoreState;                   /* +0x1050: src/func_8021EED8.c */
    char pad1054[0x4];
    f32 scoreX;                       /* +0x1058: src/func_8021EED8.c */
    f32 scoreY;                       /* +0x105C: src/func_8021EED8.c */
    char pad1060[0x1C];
    f32 alpha;                        /* +0x107C: src/func_8021EED8.c */
    s32 scoreLast;                    /* +0x1080: src/func_8021EED8.c */
    s32 countAnim;                    /* +0x1084: src/func_8021EED8.c */
    char pad1088[0x4];
    u32 countState;                   /* +0x108C: src/func_8021EED8.c */
    char pad1090[0x4];
    f32 countX;                       /* +0x1094: src/func_8021EED8.c */
    f32 countY;                       /* +0x1098: src/func_8021EED8.c */
    char pad109C[0x20];
    s32 countLast;                    /* +0x10BC: src/func_8021EED8.c */
    s32 squadAnim;                    /* +0x10C0: src/func_8021EED8.c */
    char pad10C4[0x4];
    u32 squadState;                   /* +0x10C8: src/func_8021EED8.c */
    char pad10CC[0x4];
    f32 squadX;                       /* +0x10D0: src/func_8021EED8.c */
    f32 squadY;                       /* +0x10D4: src/func_8021EED8.c */
    char pad10D8[0x20];
    s32 squadLast;                    /* +0x10F8: src/func_8021EED8.c */
    char pad10FC[0x8];
    s32 flashState;                   /* +0x1104: src/func_8021EED8.c */
    char pad1108[0x28];
    f32 flashAlpha;                   /* +0x1130: src/func_8021EED8.c */
    s32 flashHealth;                  /* +0x1134: src/func_8021EED8.c */
    char pad1138[0x8];
    s32 iconState;                    /* +0x1140: src/func_8021EED8.c */
    char pad1144[0x28];
    f32 iconAlpha;                    /* +0x116C: src/func_8021EED8.c */
    s32 iconLast;                     /* +0x1170: src/func_8021EED8.c */
    char pad1174[0x8];
    s32 statusState;                  /* +0x117C: src/func_8021EED8.c */
    char pad1180[0x28];
    f32 statusAlpha;                  /* +0x11A8: src/func_8021EED8.c */
    s32 statusLast;                   /* +0x11AC: src/func_8021EED8.c */
    char pad11B0[0x1C];
    s32 scoreFrame;                   /* +0x11CC: src/func_8021EED8.c */
    s32 squadFrame;                   /* +0x11D0: src/func_8021EED8.c */
    s32 countFrame;                   /* +0x11D4: src/func_8021EED8.c */
    f32 hurt;                         /* +0x11D8: src/func_8021EED8.c */
    char pad11DC[0x8];
    f32 boost;                        /* +0x11E4: src/func_8021EED8.c */
    char pad11E8[0x44];
    s32 fxFlags;                      /* +0x122C: src/func_8021EED8.c */
    f32 fxTime;                       /* +0x1230: src/func_8021EED8.c */
    char pad1234[0x4];
    s32 fxStage;                      /* +0x1238: src/func_8021EED8.c */
    char pad123C[0x84];
    f32 zoom;                         /* +0x12C0: src/func_8021EED8.c */
    char pad12C4[0x8];
    struct Shared_HudPlayer *names[8]; /* +0x12CC: src/func_8021EED8.c */
    char pad12EC[0x8];
    s32 nameFades[8];                 /* +0x12F4: src/func_8021EED8.c */
    s32 nameWidths[8];                /* +0x1314: src/func_8021EED8.c */
    s32 nameTail;                     /* +0x1334: src/func_8021EED8.c */
    s32 nameHead;                     /* +0x1338: src/func_8021EED8.c */
    s32 lifeCount;                    /* +0x133C: src/func_8021EED8.c */
    char pad1340[0x110];
    s32 hideLives;                    /* +0x1450: src/func_8021EED8.c */
};
typedef char Shared_HudPlayer_size_check[(sizeof(Shared_HudPlayer) == 0x1454) ? 1 : -1];

#endif
