/* Refreshes the cached directory of the Controller Pak on channel ch: when the directory buffer
   exists it reads the state of each of the 16 notes through osPfsFileState (func_80447670),
   retrying a failure once and clearing the cached note when it does not exist (5), then reads the
   free space through func_804478B0 into the buffer on success and returns that result. */
#include "basetypes.h"

typedef struct {
    u32 file_size;
    u32 game_code;
    u16 company_code;
    char ext_name[4];
    char game_name[16];
    char pad[2];
} NoteState;

typedef struct {
    s32 free;
    NoteState notes[16];
} PakDirectory;

typedef struct {
    char pad[0x68];
} OSPfs;

extern OSPfs D_80153510[];
extern PakDirectory *D_800E2854;

extern s32 func_80447670(OSPfs *pfs, s32 file_no, NoteState *state);
extern s32 func_804478B0(OSPfs *pfs, s32 *free);

s32 func_80403E90(s32 ch) {
    s32 i;
    s32 result;
    s32 free;

    if (D_800E2854 != 0) {
        for (i = 0; i < 16; i++) {
            result = func_80447670(&D_80153510[ch], i, &D_800E2854[ch].notes[i]);
            if (result != 0 && result != 5) {
                result = func_80447670(&D_80153510[ch], i, &D_800E2854[ch].notes[i]);
            }
            if (result == 5) {
                D_800E2854[ch].notes[i].file_size = 0;
                D_800E2854[ch].notes[i].game_code = 0;
                D_800E2854[ch].notes[i].company_code = 0;
                D_800E2854[ch].notes[i].ext_name[0] = 0;
                D_800E2854[ch].notes[i].game_name[0] = 0;
            }
        }
    }
    result = func_804478B0(&D_80153510[ch], &free);
    if (result == 0) {
        D_800E2854[ch].free = free;
    }
    return result;
}
