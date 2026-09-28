#include "basetypes.h"

/* Reads a 28-byte record out of a packed archive entry: finds the entry named by arg2 through func_8028B1F8 in the archive (clearing the record's word at 8 when it is missing), loads it through func_802518DC, decompresses it through func_8028FE08 and func_80254094, loads the unpacked resource, walks its sections 2, 0 and 0 through func_8028FD94 to copy the record into arg1, and releases each allocation through func_802537D8. */
typedef struct {
    s32 w[7];
} Record;

extern char D_800C9FD0[];
extern char D_800C9FF4[];
extern char D_800CA01C[];
extern char D_26D7F4[];

extern s32 func_8028B1F8(s32, s32);
extern s32 func_8028C174(s32, s32);
extern void **func_802518DC(s32, s32, s32, s32, s32, s32, char *, char *, s32);
extern s32 func_8028FE08(void *, s32, s32);
extern void **func_80254094(s32, s32 *, s32, char *, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void *func_8028FD94(void *, s32);
extern void func_802537D8(s32, void **);

void func_8044C250(s32 archive, Record *record, s32 name) {
    s32 index;
    s32 packedSize;
    s32 unpackedSize;
    s32 loadedSize;
    void **packed;
    void **unpacked;
    void **loaded;
    s32 data;
    s32 length;

    index = func_8028B1F8(archive, name);
    if (index == -1) {
        record->w[2] = 0;
        return;
    }
    packedSize = func_8028C174(archive, index);
    packed = func_802518DC(0, packedSize, packedSize, 0x18, 0, 0, 0, D_800C9FD0, 1);
    if (packed != 0) {
        unpackedSize = func_8028FE08(*packed, packedSize, 1);
        unpacked = func_80254094(0, &data, unpackedSize, D_800C9FF4, 1);
        if (unpacked != 0) {
            loadedSize = func_8028FE1C(data, unpackedSize, 0, &length);
            loaded = func_802518DC(0, loadedSize, loadedSize, length, 0, 0, D_26D7F4, D_800CA01C, 1);
            if (loaded != 0) {
                *record = *(Record *)func_8028FD94(func_8028FD94(func_8028FD94(*loaded, 2), 0), 0);
                func_802537D8(0, loaded);
            }
            func_802537D8(0, unpacked);
        }
        func_802537D8(0, packed);
    }
}
