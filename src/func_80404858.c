/* Deletes note index of the Controller Pak on channel ch: refuses with -2 unless the pak state is
   ready (3), takes the pak lock, and when the pak has no pending error deletes the note named by
   the cached directory entry's company code, game code, game name and extension through
   osPfsDeleteFile (func_804471D0), mapping any failure to -1 and refreshing the directory through
   func_80404018; releases the lock and returns the result. */
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

extern s32 D_801534F0[];
extern s32 D_80153500[];
extern OSPfs D_80153510[];
extern PakDirectory *D_800E2854;
extern u8 D_8010FBB8;

extern void func_8026451C(s32);
extern void func_80263760(void);
extern void func_8026456C(void);
extern s32 func_804471D0(OSPfs *pfs, u16 company_code, u32 game_code, char *game_name, char *ext_name);
extern void func_80404018(s32 ch);

s32 func_80404858(s32 ch, s32 index) {
    s32 result;

    if (D_801534F0[ch] != 3) {
        return -2;
    }
    func_8026451C(1);
    func_80263760();
    result = D_80153500[ch];
    D_8010FBB8 = 2;
    if (result == 0) {
        result = func_804471D0(&D_80153510[ch], D_800E2854[ch].notes[index].company_code,
                               D_800E2854[ch].notes[index].game_code,
                               D_800E2854[ch].notes[index].game_name,
                               D_800E2854[ch].notes[index].ext_name);
        if (result != 0) {
            result = -1;
        }
        func_80404018(ch);
    }
    func_8026456C();
    return result;
}
