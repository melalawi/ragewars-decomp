#ifndef SHARED_MENU_TRANSITION_H
#define SHARED_MENU_TRANSITION_H
#include "basetypes.h"
typedef struct { s32 selection; s32 trigger; } MenuTransitionSignal;
extern MenuTransitionSignal D_80154020;
typedef struct func_8042A490_S2 func_8042A490_S2;
typedef struct func_8042A490_S3 func_8042A490_S3;
typedef struct func_8042A490_S4 func_8042A490_S4;
typedef struct func_8042A490_S5 func_8042A490_S5;
typedef struct func_8042A490_S6 func_8042A490_S6;
typedef struct func_8042A490_S7 func_8042A490_S7;
typedef struct func_8042A490_S8 func_8042A490_S8;
typedef struct func_8042A490_S9 func_8042A490_S9;
struct func_8042A490_S2 {
    char pad0[0x3CC];
    void* unk3CC;
    char pad3CC[0x2];
    u16 unk3D2;
    void* unk3D4;
    char pad3D4[0x2];
    u16 unk3DA;
    s32 unk3DC;
    s32 unk3E0;
    void* unk3E4;
    void* unk3E8;
    void* unk3EC;
    void* unk3F0;
    char pad3F0[0x44];
    s32 unk438;
    void* unk43C;
    void* unk440;
    void* unk444;
    void* unk448;
    func_8042A490_S3 * unk44C;
    char pad44C[0x8];
    void* unk458;
    s32 unk45C;
    s32 unk460;
};
struct func_8042A490_S3 {
    char pad0[0x10];
    u8 unk10;
};
struct func_8042A490_S4 {
    char pad0[0x14];
    u16 unk14;
};
struct func_8042A490_S5 {
    char pad0[0x14];
    u16 unk14;
};
struct func_8042A490_S6 {
    char pad0[0x10];
    s8 unk10;
};
struct func_8042A490_S7 {
    char pad0[0x14];
    u16 unk14;
};
struct func_8042A490_S8 {
    char pad0[0x14];
    u16 unk14;
};
struct func_8042A490_S9 {
    char pad0[0x10];
    u8 unk10;
};

typedef struct MenuTransitionTimer { char pad0[0x1C]; s32 timer; } MenuTransitionTimer;
typedef struct MenuSelectionMessage { void *first; s32 pad4[3]; s32 value; } MenuSelectionMessage;
typedef struct MatchMenuObjects { char pad0[0x17F0]; s32 transition; } MatchMenuObjects;

#endif
