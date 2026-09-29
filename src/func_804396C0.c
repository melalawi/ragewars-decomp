#include "basetypes.h"

typedef struct {
    char pad0[0x78];
    s8 unk78;
    char pad79[0x96 - 0x79];
} Record;

typedef struct {
    char pad0[0x190];
} PlayerSlot;

typedef struct {
    char pad0[0x24];
    s8 unk24;
    s8 unk25;
} Settings;

extern s32 func_8022EF20();
extern void *func_80252FFC();
extern s32 func_8025470C();
extern s32 func_8025471C();
extern s32 func_80286A78();
extern s32 func_802A338C();
extern s32 func_802A33F8(f32);
extern s32 func_8040C4A8();
extern s32 func_8040ECB0();
extern s32 func_8044A600();
extern s32 func_8044AFC0();
extern PlayerSlot D_80102B00[];
extern char D_8011FE88[];
typedef struct {
    char pad0[0x48];
    char unk48[0x1310];
    Record records[8];
} GameRecords;

extern GameRecords D_80145040;
extern Settings D_801462C8;
typedef struct {
    s32 window;
    s32 unk4;
} PulseScreen;

extern PulseScreen *D_800E5950;

/* Opens screen D_800E5950: resets the game objects and course state, clears byte 0x78 of the eight player records, opens window 0x397, sets settings bytes 0x24/0x25 to 10 and resets the four player slots. */
s32 func_804396C0(s32 arg0) {
    s32 i;
    Settings *settings;
    Record *rec;

    D_800E5950 = func_80252FFC(8);
    func_8044AFC0(D_80145040.unk48, 0);
    func_8044A600(&D_80145040, 0, 0);
    func_80286A78(D_8011FE88, 0, 0);
    if (func_8025471C() == 0) {
        func_8025470C(1);
    }
    func_8040C4A8(0);
    i = 7;
    func_802A338C();
    rec = &D_80145040.records[7];
    do {
        rec->unk78 = 0;
        i--;
        rec--;
    } while (i >= 0);
    D_800E5950->window = func_8040ECB0(arg0, 0x397);
    D_800E5950->unk4 = 0;
    settings = &D_801462C8;
    settings->unk24 = 10;
    settings->unk25 = 10;
    for (i = 0; i < 4; i++) {
        func_8022EF20(&D_80102B00[i]);
    }
    func_802A33F8(0.0f);
    return 0;
}
