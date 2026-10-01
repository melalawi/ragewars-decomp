/* Writes the heading of the results screen D_800E4690 into item 0x153: in one-player mode the
   label 0x69 followed by the name of the character in the player's status record; in three-player
   mode the label 0x3D with the stage's best time as minutes and seconds in item 0x156 (the record's
   time when set, else the stage default from func_80425E50) and the heading D_800D7508; in
   four-player mode the heading D_800D7504. */
#include "basetypes.h"

struct Item {
    char pad0[0x38];
    char *text;
};

struct Status {
    char pad0[0x80];
    s8 kind;
    char pad81[0x96 - 0x81];
};

struct Settings {
    char pad0[0xD];
    u8 players;
    char padE[0xD0 - 0xE];
    struct Status status[4];
};

struct Name {
    char *text;
};

struct Character {
    struct Name *name;
    char pad4[0x70 - 4];
};

struct Stage {
    char pad0[0x24];
    u8 time;
};

struct Record {
    char pad0[0x94];
    s32 times[(0x190 - 0x94) / 4];
};

struct Screen {
    char pad0[0x970];
    void *window;
    char pad974[0x9A0 - 0x974];
    char heading[0x32];
    char time[0x32];
    char padA04[0xA44 - 0xA04];
    s32 stage;
    char padA48[0xA5C - 0xA48];
    s32 record;
};

extern struct Screen *D_800E4690;
extern struct Settings D_801462C8;
extern struct Record D_80102B00[];
extern struct Character D_800E3ABC[];
extern char D_800E19EC[];
extern char D_800E19F8[];
extern char D_800E1A00[];
extern char *D_800D7504;
extern char *D_800D7508;

extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);
extern char *func_80411DF8(s32);
extern void func_802A125C(char *, char *);
extern s32 func_8041F1B0(s32);
extern void func_8042EB94(char *, char *, char *);
extern void func_802A1C08(char *, char *, ...);
extern struct Stage *func_80425E50(s32, s32, s32);

void func_80427CE8(void) {
    struct Settings *settings;
    struct Item *item;
    s32 time;
    u8 best;
    char buffer[32];

    func_8040ECB0(D_800E4690->window, 0x153)->text = D_800E4690->heading;
    settings = &D_801462C8;
    switch (settings->players) {
    case 1:
        func_802A125C(D_800E4690->heading, func_80411DF8(0x69));
        func_8042EB94(D_800E4690->heading, D_800E19EC,
                      D_800E3ABC[func_8041F1B0(settings->status[D_800E4690->record].kind)].name->text);
        break;
    case 3:
        func_802A125C(D_800E4690->time, func_80411DF8(0x3D));
        item = func_8040ECB0(D_800E4690->window, 0x156);
        func_8040E958(item, 1);
        item->text = D_800E4690->time;
        time = D_80102B00[D_800E4690->record].times[D_800E4690->stage];
        if (time > 0) {
            func_802A1C08(buffer, D_800E19F8, time / 60, time % 60);
        } else {
            best = func_80425E50(D_800E4690->stage, 3, 0)->time;
            func_802A1C08(buffer, D_800E19F8, (u8)(best / 60), (u8)(best % 60));
        }
        func_8042EB94(D_800E4690->time, D_800E1A00, buffer);
        func_802A125C(D_800E4690->heading, D_800D7508);
        break;
    case 4:
        func_802A125C(D_800E4690->heading, D_800D7504);
        break;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2184_4[] = {0x80, 0x0C, 0xF5, 0x1C};
const unsigned char unbake_rodata_800D2188_4[] = {0x80, 0x0C, 0xF5, 0x28};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7504_4[] = {0x80, 0x0D, 0x48, 0x9C};
const unsigned char unbake_rodata_800D7508_4[] = {0x80, 0x0D, 0x48, 0xA8};
#endif
