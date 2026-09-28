#include "basetypes.h"

/* Marks entry i of the 150-byte records D_80146410 and sets the words at offsets 0x6C and 0x58
   of entry i of the 2920-byte records D_800E54A4 points to to 2. */
struct Entry {
    char pad0[0x58];
    s32 first;
    char pad5C[0x6C - 0x5C];
    s32 second;
    char pad70[2920 - 0x70];
};

extern u8 D_80146410[];
extern struct Entry *D_800E54A4;

void func_804352A8(s32 index) {
    struct Entry *entry;

    D_80146410[index * 150] = 1;
    entry = &D_800E54A4[index];
    entry->second = 2;
    entry->first = 2;
}
