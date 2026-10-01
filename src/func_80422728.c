/* Builds options screen state D_800E4518 for menu node arg0: allocates its 0x6C bytes, sets up the two
   sliding tabs 0x381/0x388 (centring each by a quarter of its width), the header sprites, the two text
   lists 0x375 and 0x378 and the 0x80-step slider 0x37A like func_8042362C, shows the pak and rumble
   markers according to the settings' controller mode, registers the remaining resources, resets the
   cursor state and returns zero. Uses the same empty do-while after each stored list handle as
   func_8042362C (a compiled-out check that keeps the handle in v0 until the call's delay slot). */
#include "basetypes.h"

typedef struct {
    char pad0[0x10];
    u8 alpha;
    char pad11[3];
    s16 x;
    char pad16[2];
    s16 width;
} Node;

typedef struct {
    char pad0[0x1C];
    s32 cursor;
    Node *leftTab;
    s32 leftStep;
    Node *rightTab;
    s32 rightStep;
    s32 page;
    s32 pages;
    s32 title;
    Node *marker;
    Node *header;
    Node *footer;
    Node *pakIcon;
    Node *rumbleIcon;
    s32 slider;
    s32 firstList;
    s32 secondList;
    s32 state;
    s32 selection;
    s32 sound;
    Node *prompt;
} Screen;

extern Screen *D_800E4518;
extern u8 D_801462C8[];
extern char *D_800D749C;
extern char *D_800D74A4;
extern char *D_800D74A8;
extern char *D_800D74B4;
extern char *D_800D74B8;
extern char *D_800D74BC;
extern s32 D_80146894;
extern s32 D_80154020[2];

extern Screen *func_80252FFC(s32);
extern s32 func_8025E2E4(void);
extern void func_8025E2F4(s32);
extern void func_8025E3A4(void);
extern void func_8025E234(s32);
extern Node *func_8040ECB0(void *, s32);
extern void func_8040E958(void *, s32);
extern void func_8040E9D0(Node *, s32);
extern s32 func_80419ED4(s32, s32);
extern void func_8041B190(s32);
extern s32 func_8041AC40(s32, s32);
extern void func_8041ADB4(s32, char *);
extern void func_8041AD90(s32, s32);
extern s32 func_80265370(void);
extern s32 func_8041A600(s32, s32, s32);
extern void func_8041A76C(s32, s32);
extern s32 func_8042B108(void);
extern void func_802A338C(void);
extern void func_8043C3F0(Screen *, s32, s32, s32, s32);
extern void func_8043C458(Screen *);
extern void func_80422218(void);

typedef struct func_80422728_S1 func_80422728_S1;
struct func_80422728_S1 {
    char pad0[0x10];
    s32 unk10;
};

s32 func_80422728(void *node) {
    u8 *settings;
    Node *handle;
    Node *marker;
    Node *header;
    Node *rumble;
    Node *pak;
    Node *prompt;
    s32 list;
    s32 slider;
    s32 i;
    s32 rem;

    D_800E4518 = func_80252FFC(0x6C);
    D_800E4518->sound = func_8025E2E4();
    func_8025E2F4(0x34);
    func_8025E3A4();
    func_8025E234(-1);
    D_800E4518->page = 1;
    D_800E4518->pages = 4;
    D_800E4518->leftTab = func_8040ECB0(node, 0x381);
    D_800E4518->leftTab->x -= D_800E4518->leftTab->width;
    D_800E4518->leftStep = D_800E4518->leftTab->width / 4;
    rem = D_800E4518->leftTab->width - D_800E4518->leftStep * 4;
    D_800E4518->leftTab->x += rem;
    D_800E4518->rightTab = func_8040ECB0(node, 0x388);
    D_800E4518->rightTab->x += D_800E4518->rightTab->width;
    D_800E4518->rightStep = D_800E4518->rightTab->width / 4;
    rem = D_800E4518->rightTab->width - D_800E4518->rightStep * 4;
    D_800E4518->rightTab->x -= rem;
    D_800E4518->title = func_80419ED4(0x373, 0x6E);
    marker = func_8040ECB0(node, 0x372);
    D_800E4518->marker = marker;
    func_8040E958(marker, 0);
    func_8040ECB0(node, 0x386)->alpha = 0x6E;
    header = func_8040ECB0(node, 0x387);
    D_800E4518->header = header;
    header->alpha = 0x8C;
    D_800E4518->footer = func_8040ECB0(node, 0x370);
    rumble = func_8040ECB0(node, 0x384);
    D_800E4518->rumbleIcon = rumble;
    func_8040E958(rumble, 1);
    func_8040ECB0(node, 0x385)->alpha = 0x6E;
    pak = func_8040ECB0(node, 0x374);
    D_800E4518->pakIcon = pak;
    func_8040E958(pak, 0);
    func_8041B190(0x377);
    func_8041B190(0x37C);
    list = func_8041AC40(0x375, 0x376);
    D_800E4518->firstList = list;
    /* FAKEMATCH: preserve instruction scheduling between the menu-widget store and its initialization call. */
    do {
    } while (0);
    func_8041ADB4(list, D_800D749C);
    func_8041ADB4(D_800E4518->firstList, D_800D74A4);
    func_8041ADB4(D_800E4518->firstList, D_800D74A8);
    settings = D_801462C8;
    func_8041AD90(D_800E4518->firstList, settings[0x1B]);
    list = func_8041AC40(0x378, 0x379);
    D_800E4518->secondList = list;
    /* FAKEMATCH: preserve instruction scheduling between the menu-widget store and its initialization call. */
    do {
    } while (0);
    func_8041ADB4(list, D_800D74B4);
    if (func_80265370() != 0x400000) {
        func_8041ADB4(D_800E4518->secondList, D_800D74B8);
        func_8041ADB4(D_800E4518->secondList, D_800D74BC);
    }
    func_8041AD90(D_800E4518->secondList, settings[0x580]);
    slider = func_8041A600(0x37A, 0x37B, 0x80);
    D_800E4518->slider = slider;

    func_8041A76C(slider, ((func_80422728_S1 *)(settings))->unk10);
    switch (settings[0xD]) {
    case 0:
        if (func_8042B108() == 0) {
            func_8040E9D0(func_8040ECB0(node, 0x37E), 1);
        }
        handle = func_8040ECB0(node, 0x380);
        func_8040E9D0(handle, 1);
        for (i = 0; i < 8; i++) {
            if (settings[i * 0x96 + 0x148] == 1 && settings[i * 0x96 + 0x161] == 1) {
                func_8040E9D0(handle, 0);
                break;
            }
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        func_8040E9D0(func_8040ECB0(node, 0x380), 1);
        func_8040E9D0(func_8040ECB0(node, 0x37E), 1);
        break;
    }
    func_8041B190(0x380);
    func_8041B190(0x37D);
    func_8041B190(0x37E);
    func_8041B190(0x37F);
    D_800E4518->state = 0;
    func_802A338C();
    func_8043C3F0(D_800E4518, 0x67, 0, 0, 0);
    func_8043C458(D_800E4518);
    D_800E4518->cursor = 0;
    D_800E4518->selection = -1;
    func_8040E958(node, 0);
    D_80146894 = 1;
    D_80154020[1] = 0;
    D_80154020[0] = -1;
    func_80422218();
    prompt = func_8040ECB0(node, 0x371);
    D_800E4518->prompt = prompt;
    func_8040E958(prompt, 1);
    return 0;
}
