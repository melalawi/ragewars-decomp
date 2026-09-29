#include "basetypes.h"

typedef struct {
    u32 file_size;
    u32 game_code;
    u16 company_code;
    u8 ext_name[4];
    u8 game_name[16];
    char pad[2];
} NoteState;

typedef struct {
    s32 free;
    NoteState notes[16];
} PakDirectory;

extern s32 D_801534F0[];
extern s32 D_80153500[];
extern PakDirectory *D_800E2854;

/* Counts empty Controller Pak note slots on channel ch when the pak is ready and returns its error status, or -2 when not ready. */
s32 func_804050CC(s32 ch, s32 *count) {
    s32 i;

    if (D_801534F0[ch] != 3) {
        return -2;
    }
    *count = 0;
    if (D_80153500[ch] == 0) {
        for (i = 0; i < 16; i++) {
            if (D_800E2854[ch].notes[i].file_size == 0) {
                (*count)++;
            }
        }
    }
    return D_80153500[ch];
}
