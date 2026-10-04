#include "span_16E000/code_80405454.h"
#include "types.h"
/* Chooses a free extension letter for a new note on the Controller Pak on channel ch: refuses with
   -2 unless the pak is ready, queries each of the 16 notes through func_8040458C_de (failing with -1
   on error) and marks the letter of every existing note, then writes the first unused letter from
   'A' as the extension, returning 0, or -1 when all 16 letters are taken. */



extern s32 func_8040458C_de(s32 ch, s32 index, s32 *exists, char *gameName, u8 *ext, s32 *size,
                         char *companyCode, char *gameCode);

s32 func_80405454_de(s32 ch, u8 *ext) {
    char companyCode[8];
    char gameCode[8];
    char gameName[16];
    s32 exists;
    s32 size;
    s32 used;
    s32 i;

    used = 0;
    if (D_8014D260[ch] != 3) {
        return -2;
    }
    for (i = 0; i < 16; i++) {
        if (func_8040458C_de(ch, i, &exists, gameName, ext, &size, companyCode, gameCode) != 0) {
            return -1;
        }
        if (exists != 0) {
            used |= 1 << (ext[0] - 'A');
        }
    }
    ext[0] = 'A';
    ext[1] = 0;
    ext[2] = 0;
    ext[3] = 0;
    for (i = 0; i < 16 && (used & (1 << i) & 0xFFFF); i++) {
        ext[0]++;
    }
    if (i >= 16) {
        return -1;
    }
    return 0;
}
