#ifndef SHARED_MENU_STATE_RECORDS_H
#define SHARED_MENU_STATE_RECORDS_H

#include "basetypes.h"

typedef struct Record {
    u8 name[8];
    s32 time;
    s8 owner;
    s8 player;
    char padE[0x189 - 0xE];
    u8 setting[5];
    char pad18E[0x190 - 0x18E];
} Record;

typedef struct Name {
    u8 flags[2];
    u8 code[0x14];
    u8 text[0x46 - 0x16];
} Name;

typedef struct Port {
    s32 active;
    s32 pad4;
    s32 pad8;
} Port;

typedef char Record_size_check[(sizeof(Record) == 0x190) ? 1 : -1];
typedef char Name_size_check[(sizeof(Name) == 0x46) ? 1 : -1];
typedef char Port_size_check[(sizeof(Port) == 0xC) ? 1 : -1];

#endif
