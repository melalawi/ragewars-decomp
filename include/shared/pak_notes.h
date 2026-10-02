#ifndef RAGEWARS_SHARED_PAK_NOTES_H
#define RAGEWARS_SHARED_PAK_NOTES_H
#include "basetypes.h"
typedef struct Note {
    char label[0x28];
    char name[0x14];
    char size[0xA];
} Note;
typedef struct PakSlot {
    s32 state;
    char pad4[8];
    void *menu;
    char pad10[0x648];
    Note notes[16];
    char pad0AB8[0xA];
    char used[0xA];
    char free[0xA];
    char pad0AD6[2];
    s32 cursor;
    s32 scroll;
    void *items[3];
    char pad0AEC[0x7C];
} PakSlot;
typedef struct PakState {
    char pad0[0x58];
    PakSlot slots[4];
} PakState;
#endif
