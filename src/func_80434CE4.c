#include "basetypes.h"

/* Copies the records player p owns into p's block record: for each of the four 400-byte records of
   D_80102B00 whose byte 0xE is clear and whose owner byte 0xD is p, when the matching 150-byte
   status record at 0xD0 of D_801462C8 has byte 0x78 equal to one and byte 0x91 clear, copies the whole record
   through func_802A1724 into slot [byte 0xC] of the 400-byte slots at 0x18 of p's 2920-byte
   record at 0x58 of the block D_800E54A4 points to. */

struct Player {
    char pad0[0x18];
    char slots[4][400];
    char pad658[0xB68 - 0x658];
};

struct Block {
    char pad0[0x58];
    struct Player players[4];
};

extern struct Block *D_800E54A4;
extern u8 D_80102B00[];
extern s8 D_80102B0C[];
extern s8 D_80102B0D[];
extern s8 D_80102B0E[];
struct Status {
    char pad0[0x78];
    u8 active;
    char pad79[0x91 - 0x79];
    u8 out;
    char pad92[150 - 0x92];
};

struct Globals {
    char pad0[0xD0];
    struct Status status[8];
};

extern struct Globals D_801462C8;
extern void func_802A1724(void *, void *, s32);

void func_80434CE4(s32 player) {
    struct Globals *globals;
    s32 i;
    s32 size;

    size = 400;
    globals = &D_801462C8;
    for (i = 0; i < 4; i++) {
        if (D_80102B0E[i * 400] == 0 && D_80102B0D[i * 400] == player &&
            globals->status[i].active == 1 && globals->status[i].out == 0) {
            func_802A1724(D_800E54A4->players[player].slots[D_80102B0C[i * 400]],
                          &D_80102B00[i * 400], size);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB0E_1[] = {0xC2};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB0E_1[] = {0xF5};
#endif
