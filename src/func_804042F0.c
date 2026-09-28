/* Writes a note to the Controller Pak on channel ch: refuses with -2 unless the pak is ready,
   takes the controller lock and, when the pak has no pending error, converts the extension and
   game name to pak font codes, allocates the note rounded up to whole 256-byte blocks through
   osPfsAllocateFile (func_80446BD0), writes the data through osPfsReadWriteFile (func_80448740),
   deletes the note again if the write fails, refreshes the pak state through func_80404018 and
   returns 0 or -1. */
#include "basetypes.h"

typedef struct {
    char pad[0x68];
} OSPfs;

extern s32 D_801534F0[];
extern s32 D_80153500[];
extern OSPfs D_80153510[];
extern u8 D_8010FBB8;
extern u8 D_800E285C[];

extern void func_8026451C(s32);
extern void func_80263760(void);
extern void func_8026456C(void);
extern s32 func_802A15A0(s32 c);
extern void *func_802C2490(void *destination, const void *source, int count);
extern s32 func_80446BD0(OSPfs *pfs, u16 company_code, u32 game_code, u8 *game_name, u8 *ext_name,
                         s32 size, s32 *file_no);
extern s32 func_80448740(OSPfs *pfs, s32 file_no, s32 flag, s32 offset, s32 size, void *data);
extern s32 func_804471D0(OSPfs *pfs, u16 company_code, u32 game_code, u8 *game_name, u8 *ext_name);
extern s32 func_80404018(s32 ch);

static inline void func_804042F0_encode(u8 *dst, u8 *src, s32 n) {
    s32 i;
    s32 j;

    for (i = 0; i < n; i++) {
        src[i] = func_802A15A0(src[i]);
        for (j = 0; j < 0x42; j++) {
            if (src[i] == D_800E285C[j]) {
                dst[i] = j;
                break;
            }
        }
        if (j == 0x42) {
            dst[i] = 0;
        }
    }
}

s32 func_804042F0(s32 ch, s32 size, void *data, u8 *game_name, s32 *file_no, u8 *ext_name,
                  u8 *company, u8 *code) {
    s32 result;
    u8 name[16];
    u8 ext[4];
    u16 company_code;
    u32 game_code;
    OSPfs *pfs;
    s32 offset;

    if (D_801534F0[ch] != 3) {
        return -2;
    }
    func_8026451C(1);
    func_80263760();
    result = D_80153500[ch];
    D_8010FBB8 = 2;
    if (result == 0) {
        func_804042F0_encode(ext, ext_name, 4);
        size = (size + 0xFF) & ~0xFF;
        func_802C2490(name, game_name, 16);
        func_804042F0_encode(name, game_name, 16);
        pfs = &D_80153510[ch];
        company_code = (company[0] << 8) | company[1];
        game_code = (code[0] << 24) | (code[1] << 16) | (code[2] << 8) | code[3];
        result = func_80446BD0(pfs, company_code, game_code, name, ext, size, file_no);
        if (result != 0) {
            result = -1;
        }
        offset = 0;
        if (result == 0) {
            result = func_80448740(pfs, *file_no, 1, offset, size, data);
            if (result != 0) {
                func_804471D0(pfs, company_code, game_code, name, ext);
                result = -1;
            }
        }
        func_80404018(ch);
    }
    func_8026456C();
    return result;
}
