/* Opens the Controller Pak on a channel through osPfsInitPak (func_80447BB0), retrying up to four
   times and mapping its error to the channel's pak status (-2 absent, -3 or -4 unusable, 0 ready
   after func_80403E90 finds no problem), and returns whether the pak ended ready or damaged;
   func_804041E8 then probes all four ports under the controller lock and records each port's pak
   state. */
#include "basetypes.h"

typedef struct {
    char pad[0x68];
} OSPfs;

typedef struct {
    u8 present;
    char pad[7];
    char pak[0x68];
} PakRecord;

extern u8 D_8010FBE3[];
extern u8 D_8010FBB8;
extern char D_8010FC00[];
extern s32 D_801534F0[];
extern s32 D_80153500[];
extern OSPfs D_80153510[];
extern PakRecord D_80153330[];

extern s32 func_80447BB0(void *queue, OSPfs *pfs, s32 channel);
extern s32 func_80403E90(s32 channel);
extern s32 func_802BD0A8(void *queue, void *pak, s32 channel);
extern void func_8026451C(s32);
extern void func_80263760(void);
extern void func_8026456C(void);

s32 func_80404018(s32 ch) {
    s32 i;
    s32 result;
    s32 offset;

    if (D_8010FBE3[ch * 4] != 0) {
        D_80153500[ch] = -2;
        return 0;
    }
    for (i = 0; i < 4; i++) {
        offset = ch * sizeof(OSPfs);
        switch (func_80447BB0(D_8010FC00, (OSPfs *)((char *)D_80153510 + offset), ch)) {
            case 0:
            case 2:
                D_80153500[ch] = -5;
                break;
            case 1:
                D_80153500[ch] = -2;
                break;
            case 4:
            case 11:
                D_80153500[ch] = -3;
                break;
            case 10:
                D_80153500[ch] = -4;
                break;
        }
        if (D_80153500[ch] == -5) {
            goto opened;
        }
        if (D_80153500[ch] == -2) {
            break;
        }
    }
    goto done;
opened:
    D_801534F0[ch] = 3;
    if (func_80403E90(ch) != 0) {
        D_80153500[ch] = -4;
    } else {
        D_80153500[ch] = 0;
    }
done:
    result = 0;
    if (D_80153500[ch] == 0 || D_80153500[ch] == -4) {
        result = 1;
    }
    return result;
}

void func_804041E8(void) {
    s32 ch;
    PakRecord *record;
    s32 present;

    func_8026451C(1);
    func_80263760();
    D_8010FBB8 = 2;
    for (ch = 0; ch < 4; ch++) {
        record = &D_80153330[ch];
        if (D_8010FBE3[ch * 4] != 0) {
            record->present = 0;
            present = 0;
        } else {
            record->present = func_802BD0A8(D_8010FC00, record->pak, ch) == 0;
            present = record->present;
        }
        if (present) {
            D_801534F0[ch] = 2;
        } else if (func_80404018(ch) != 0) {
            D_801534F0[ch] = 3;
        } else {
            D_801534F0[ch] = 1;
        }
    }
    func_8026456C();
}
