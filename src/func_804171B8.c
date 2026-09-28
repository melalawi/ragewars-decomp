/* Emits the display-list state for the requested flag groups: records which of five two-bit flag pairs are fully set, clears the pending-sync flag and emits one pipe sync through the shared inline helper, then the other-mode and geometry-mode commands (adding the lighting bit for the fifth group) and the render mode chosen by the fourth and fifth groups, then stores the flag record. */
#include "basetypes.h"

typedef struct Gfx {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

typedef struct Groups {
    s32 group0;
    s32 group1;
    s32 group2;
    s32 group3;
    s32 group4;
} Groups;

extern Gfx *D_80110634;
extern s32 D_800E32A0;
extern s32 D_800E32CC;
extern s32 D_800E32E4;
extern Groups D_80153F60;
extern void func_8041900C(void);

static inline void sync(void) {
    Gfx *cmd;

    if (D_800E32E4 == 0) {
        cmd = D_80110634++;
        D_800E32E4 = 1;
        cmd->words.w0 = 0xE7000000;
        cmd->words.w1 = 0;
    }
}

void func_804171B8(s32 flags) {
    s32 plain;
    Groups groups;
    s32 mode;
    u32 cycle1;
    u32 cycle2;

    groups.group0 = (flags & 0x5) == 0x5;
    groups.group1 = (flags & 0x30) == 0x30;
    groups.group2 = (flags & 0x300) == 0x300;
    groups.group3 = (flags & 0x3000) == 0x3000;
    groups.group4 = (flags & 0x30000) == 0x30000;
    func_8041900C();
    D_800E32E4 = 0;
    sync();
    plain = groups.group1 == 0;
    D_800E32CC = plain ? 11 : 12;
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3000A01;
        cmd->words.w1 = 0;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xD9D0F9FA;
        cmd->words.w1 = 0;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xD9FFFFFF;
        cmd->words.w1 = 0x200404;
    }
    if (groups.group4) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xD9FFFFFF;
        cmd->words.w1 = 1;
    }
    cycle1 = 0;
    cycle2 = 0;
    mode = groups.group3 != 0;
    if (groups.group4) {
        mode += 2;
    }
    switch (mode) {
        case 0:
            cycle1 = 0xC084000;
            cycle2 = 0x3024000;
            break;
        case 1:
            cycle1 = 0x404240;
            cycle2 = 0x104240;
            break;
        case 2:
            cycle1 = 0x442230;
            cycle2 = 0x112230;
            break;
        case 3:
            cycle1 = 0x404A50;
            cycle2 = 0x104A50;
            break;
    }
    D_800E32A0 = 1;
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE200001C;
        cmd->words.w1 = cycle1 | cycle2;
    }
    D_80153F60 = groups;
}
