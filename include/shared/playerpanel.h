#ifndef SHARED_PLAYERPANEL_H
#define SHARED_PLAYERPANEL_H

#include "basetypes.h"
#include "shared/block.h"
#include "shared/label.h"

/* Views of the player setup panel and its linked text controls. */
typedef struct func_80432488_S1 func_80432488_S1;
typedef struct func_80432488_S2 func_80432488_S2;
typedef struct func_80432488_S4 func_80432488_S4;
typedef struct func_80432488_S6 func_80432488_S6;
typedef struct func_80432488_S8 func_80432488_S8;
typedef struct func_80432488_S9 func_80432488_S9;
typedef struct func_80432488_S11 func_80432488_S11;
typedef struct {
    u32 state;
    char pad4[0x8];
    void *panel;
    void *root;
    char pad14[0x4];
    char rosterNames[0x668];
    char rosterDetails[0xB34 - 0x680];
    char chars[0x10];
    s32 valueB44;
    s32 valueB48;
    s32 valueB4C;
    char textB50[0xB68 - 0xB50];
} PanelRecordView;
struct func_80432488_S1 {
    union {
        Shared_Block block;
        struct {
            void* unk0;
            void* unk4;
            s32 unk8;
            u8 unkC;
            char padC[0x47];
            u32 unk54;
            char pad54[0x2DA0];
            s32 unk2DF8;
            s32 unk2DFC;
            s32 unk2E00;
        } f;
        u8 bytes[0x2E04];
        struct {
            char pad0[0x58];
            PanelRecordView players[4];
        } panelView;
    } v;
};
struct func_80432488_S2 {
    char pad0[0x34];
    s32 unk34;
    void* unk38;
};
struct func_80432488_S4 {
    char pad0[0x64];
    void* unk64;
    char pad64[0xADC];
    s32 unkB44;
};
struct func_80432488_S6 {
    char pad0[0x64];
    void* unk64;
    char pad64[0xAC8];
    s32 unkB30;
};
struct func_80432488_S8 {
    char pad0[0xBA0];
    s32 unkBA0;
    s32 unkBA4;
};
struct func_80432488_S9 {
    char pad0[0x8];
    Shared_Label * unk8;
    char pad8[0x4];
    u8 unk10;
    char pad10[0x27];
    void* unk38;
};
struct func_80432488_S11 {
    char pad0[0x64];
    void* unk64;
    char pad64[0xB1C];
    s32 unkB84;
};

typedef struct {
    char pad0[0x58];
    u32 state;
    char pad5C[0x8];
    void *panel;
    void *root;
    char pad6C[0x4];
    char slot70[0x668];
    char slot6D8[0x4B4];
    s8 chars[2];
    char padB8E[0xE];
    s32 valueB9C;
    char padBA0[0x8];
    char textBA8[1];
} PlayerPanel;


#endif
