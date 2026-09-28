/* Saves data as a Controller Pak note on channel ch and verifies it: refuses with -2 unless the pak
   is ready, then up to four times writes the note through func_804042F0 with the D_800D7708
   company code, reads it back into a temporary buffer through an inlined note read, and stops when
   the bytes compare equal or deletes the note through func_80404858 and retries, returning the
   write result. */
#include "basetypes.h"

typedef struct {
    char pad[0x68];
} OSPfs;

extern s32 D_801534F0[];
extern s32 D_80153500[];
extern OSPfs D_80153510[];
extern u8 D_8010FBB8;
extern u8 *D_800D7708;
extern char D_800E0D00[];
extern char D_800E0D18[];

extern void **func_802533DC(s32, s32, s32, char *);
extern void func_802538A8(s32);
extern void func_802537D8(s32, void *);
extern s32 func_8025471C(void);
extern void func_8025470C(s32);
extern void func_8026451C(s32);
extern void func_80263760(void);
extern void func_8026456C(void);
extern void *func_802C2490(void *destination, const void *source, int count);
extern s32 func_80265464(void *a, void *b, s32 size);
extern s32 func_80448740(OSPfs *pfs, s32 file_no, s32 flag, s32 offset, s32 size, void *data);
extern s32 func_804042F0(s32 ch, s32 size, void *data, u8 *game_name, s32 *file_no, u8 *ext_name,
                         u8 *company, u8 *code);
extern s32 func_80404858(s32 ch, s32 index);

static inline s32 func_80404958_read(s32 ch, s32 file_no, void *dst, s32 size) {
    s32 result;
    s32 blocks;
    void **handle;
    void *buf;

    blocks = (size + 0xFF) & ~0xFF;
    if (D_801534F0[ch] != 3) {
        return -2;
    }
    if (func_8025471C() == 0) {
        func_8025470C(1);
    }
    handle = func_802533DC(0, blocks, 0x23, D_800E0D00);
    buf = *handle;
    func_8026451C(1);
    func_80263760();
    result = D_80153500[ch];
    D_8010FBB8 = 2;
    if (result == 0) {
        if ((result = func_80448740(&D_80153510[ch], file_no, 0, 0, blocks, buf)) != 0) {
            result = -1;
        }
        if (result == 0) {
            func_802C2490(dst, buf, size);
        }
    }
    func_8026456C();
    func_802538A8(0);
    if (handle != 0) {
        func_802537D8(0, handle);
    }
    return result;
}

s32 func_80404958(s32 ch, s32 size, void *data, u8 *name, u8 *ext, u8 *code) {
    s32 result;
    s32 file_no;
    void **handle;
    void *buf;
    s32 blocks;
    s32 tries;

    blocks = (size + 0xFF) & ~0xFF;
    if (D_801534F0[ch] != 3) {
        return -2;
    }
    handle = func_802533DC(0, blocks, 0x23, D_800E0D18);
    buf = *handle;
    for (tries = 0; tries < 4; tries++) {
        result = func_804042F0(ch, size, data, name, &file_no, ext, D_800D7708, code);
        if (result != 0) {
            break;
        }
        if (func_80404958_read(ch, file_no, buf, blocks) == 0 && func_80265464(buf, data, size) == 0) {
            break;
        }
        if (func_80404858(ch, file_no) != 0) {
            break;
        }
    }
    func_802538A8(0);
    if (handle != 0) {
        func_802537D8(0, handle);
    }
    return result;
}
