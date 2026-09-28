#include "basetypes.h"

/* Returns the halfword at offset 0xC of entry i in the 28-byte record table D_80153C10 points
   to; func_80411B04 and func_80411B28 read offsets 0xA and 0xC. */
struct Record {
    char pad0[0xA];
    s16 a;
    s16 c;
    char padE[28 - 0xE];
};

extern struct Record *D_80153C10;

s16 func_80411B28(s32 index) {
    return D_80153C10[index].c;
}
