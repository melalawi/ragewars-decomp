#include "span_16E000/code_80403BCC.h"
#include "types.h"
/* Refreshes the cached directory of the Controller Pak on channel ch: when the directory buffer
   exists it reads the state of each of the 16 notes through osPfsFileState (func_80446A20_de),
   retrying a failure once and clearing the cached note when it does not exist (5), then reads the
   free space through func_80446C60_de into the buffer on success and returns that result. */







extern OSPfs_func_80403E90_de D_8014D280[];
extern PakDirectory *D_800DE804;

extern s32 func_80446A20_de(OSPfs_func_80403E90_de *pfs, s32 file_no, NoteState *state);
extern s32 func_80446C60_de(OSPfs_func_80403E90_de *pfs, s32 *free);

s32 func_80403E90_de(s32 ch) {
    s32 i;
    s32 result;
    s32 free;

    if (D_800DE804 != 0) {
        for (i = 0; i < 16; i++) {
            result = func_80446A20_de(&D_8014D280[ch], i, &D_800DE804[ch].notes[i]);
            if (result != 0 && result != 5) {
                result = func_80446A20_de(&D_8014D280[ch], i, &D_800DE804[ch].notes[i]);
            }
            if (result == 5) {
                D_800DE804[ch].notes[i].file_size = 0;
                D_800DE804[ch].notes[i].game_code = 0;
                D_800DE804[ch].notes[i].company_code = 0;
                D_800DE804[ch].notes[i].ext_name[0] = 0;
                D_800DE804[ch].notes[i].game_name[0] = 0;
            }
        }
    }
    result = func_80446C60_de(&D_8014D280[ch], &free);
    if (result == 0) {
        D_800DE804[ch].free = free;
    }
    return result;
}
