#include "shared/item_func_8042BD40.h"
#include "shared/screen.h"
#include "shared/rosterentry.h"
#include "shared/settings.h"
#include "shared/profile_func_8042BD40.h"
#include "shared/profileflag.h"
/* Opens the results screen, records trial rewards, and initializes its controls and labels. */
#include "basetypes.h"

#define SLOT_COUNT 8
#define HUMAN_SLOTS 4
#define SLOT_ACTIVE 1
#define TRIAL_NONE 0
#define TRIAL_HUMAN_MUST_WIN 2
#define RESULT_PASSED 0
#define RESULT_FAILED 1
#define NO_PICK -1
#define SCREEN_SIZE 0x330
#define SCREEN_KIND 0x67
#define COLOR_TITLE 0x6E
#define COLOR_HEADING 0x14
#define COLOR_FAILED 0x73
#define NAME_LENGTH 0x3F
#define PROFILE_COUNT 4
#define RULE_SET_POINT_TARGET 0
#define RULE_SET_FRAG_TAG 1
#define RULE_SET_TEAM_DEATHMATCH 3

#if defined(VERSION_DE)
#define ITEM_TITLE 0x230
#define ITEM_STAGE_NAME 0x231
#define ITEM_HEADING_LEFT 0x232
#define ITEM_CONTINUE 0x233
#define ITEM_START 0x234
#define ITEM_HEADING_RIGHT 0x235
#define ITEM_RULE_LABEL 0x237
#define ITEM_RULE_MEASURE 0x236
#define ITEM_RETRY 0x238
#define ITEM_CURSOR 0x239
#define ITEM_FAILED_BANNER 0x262
#define ITEM_FAILED_PROMPT 0x26A
#elif defined(VERSION_EU_X)
#define ITEM_TITLE 0x239
#define ITEM_STAGE_NAME 0x23A
#define ITEM_HEADING_LEFT 0x23B
#define ITEM_CONTINUE 0x23C
#define ITEM_START 0x23D
#define ITEM_HEADING_RIGHT 0x23E
#define ITEM_RULE_LABEL 0x23F
#define ITEM_RULE_MEASURE 0x240
#define ITEM_RETRY 0x241
#define ITEM_CURSOR 0x242
#define ITEM_FAILED_BANNER 0x26B
#define ITEM_FAILED_PROMPT 0x273
#else
#define ITEM_TITLE 0x234
#define ITEM_STAGE_NAME 0x235
#define ITEM_HEADING_LEFT 0x236
#define ITEM_CONTINUE 0x237
#define ITEM_START 0x238
#define ITEM_HEADING_RIGHT 0x239
#define ITEM_RULE_LABEL 0x23A
#define ITEM_RULE_MEASURE 0x23B
#define ITEM_RETRY 0x23C
#define ITEM_CURSOR 0x23D
#define ITEM_FAILED_BANNER 0x266
#define ITEM_FAILED_PROMPT 0x267
#endif

typedef Shared_Item_func_8042BD40 Item;

typedef Shared_Screen Screen;

typedef Shared_RosterEntry RosterEntry;

typedef Shared_Settings Settings;

typedef Shared_Profile_func_8042BD40 Profile;

extern Screen *D_800E53C0;
extern Settings D_801462C8;

/* FAKEMATCH: volatile preserves the final menu activation store order. */
extern volatile s32 D_80146894;
extern u8 D_801462D5;
typedef Shared_ProfileFlag ProfileFlag;
extern ProfileFlag D_80102B0D[];
extern ProfileFlag D_80102B0E[];
extern s32 D_80154028;
extern s32 D_8015402C;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#if defined(VERSION_EU)
extern s32 D_800E2044[];
extern s32 D_800E2064[];
extern s32 D_800E2074[];
extern s32 D_800E2084[];
extern s32 D_800E2094[];
#define FAILED_TEXT D_800E2044[textSettings->language]
#define POINT_TEXT D_800E2064[D_80152789]
#define OTHER_TEXT D_800E2074[D_80152789]
#define FRAG_TEXT D_800E2084[D_80152789]
#define MEASURE_TEXT D_800E2094[D_80152789]
#else
extern s32 D_800DDAA8[];
extern s32 D_800DDAC0[];
extern s32 D_800DDACC[];
extern s32 D_800DDAD8[];
extern s32 D_800DDAE4[];
#define FAILED_TEXT D_800DDAA8[textSettings->language]
#define POINT_TEXT D_800DDAC0[D_80152789]
#define OTHER_TEXT D_800DDACC[D_80152789]
#define FRAG_TEXT D_800DDAD8[D_80152789]
#define MEASURE_TEXT D_800DDAE4[D_80152789]
#endif
#elif defined(VERSION_DE)
extern s32 D_800D357C;
extern s32 D_800D3584;
extern s32 D_800D3588;
extern s32 D_800D358C;
extern s32 D_800D3590;
#define FAILED_TEXT D_800D357C
#define POINT_TEXT D_800D3584
#define OTHER_TEXT D_800D3588
#define FRAG_TEXT D_800D358C
#define MEASURE_TEXT D_800D3590
#elif defined(VERSION_US)
extern s32 D_800D2228;
extern s32 D_800D2230;
extern s32 D_800D2234;
extern s32 D_800D2238;
extern s32 D_800D223C;
#define FAILED_TEXT D_800D2228
#define POINT_TEXT D_800D2230
#define OTHER_TEXT D_800D2234
#define FRAG_TEXT D_800D2238
#define MEASURE_TEXT D_800D223C
#else
extern s32 D_800D75A8;
extern s32 D_800D75B0;
extern s32 D_800D75B4;
extern s32 D_800D75B8;
extern s32 D_800D75BC;
#define FAILED_TEXT D_800D75A8
#define POINT_TEXT D_800D75B0
#define OTHER_TEXT D_800D75B4
#define FRAG_TEXT D_800D75B8
#define MEASURE_TEXT D_800D75BC
#endif
extern char D_8011FE88[];
extern Screen *func_80252FFC(s32 size);
extern void func_8040E958(void *item, s32 shown);
extern void func_8040E9D0(void *item, s32 enabled);
extern s32 func_8040EC50(void *item);
extern Item *func_8040ECB0(void *menu, s32 id);
extern void func_8043C3F0(Screen *screen, s32 kind, s32 a, s32 b, s32 c);
extern void func_8043C458(Screen *screen);
extern void func_80424D70(void);
extern void func_8042C8AC(void);
#if defined(VERSION_EU) || defined(VERSION_EU_X) || defined(VERSION_DE)
extern void func_804253F0(s32 first, s32 stage);
#define RECORD_RESULT func_804253F0
#else
extern void func_80424E30(s32 first, s32 stage);
#define RECORD_RESULT func_80424E30
#endif
extern void func_8042D2F8(void);
extern void func_8042D3A8(void);
extern void func_80425EF4(s32 slot);
extern void func_8042CE54(void);
extern void func_8042D054(void);
extern void func_8042C1F8(void);
extern void func_8041B190(s32 id);
extern s32 func_8042B108(void);
extern s32 func_8042B198(void);
extern void func_8028D35C(void *table, s32 key, char *out, s32 length);
extern char *func_802A1494(char *name);
extern void func_802A125C(char *destination, char *source);
extern void func_802A338C(void);

s32 func_8042BD40(void *menu) {
    char name[0x40];
    Settings *settings;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    Settings *textSettings;
#endif
    RosterEntry *entry;
    Item *item;
    s32 i;
    u8 kind;
    s32 humanActive; /* FAKEMATCH: carries the active marker across reward setup to control scheduling. */

    D_800E53C0 = func_80252FFC(SCREEN_SIZE);
    D_800E53C0->menu = menu;
    func_8040E958(menu, 0);
    func_8043C3F0(D_800E53C0, SCREEN_KIND, 0, 0, 0);
    func_8043C458(D_800E53C0);
    i = 0;
    D_800E53C0->state = 1;
    item = func_8040ECB0(menu, ITEM_TITLE);
    item->color = COLOR_TITLE;
    item = func_8040ECB0(menu, ITEM_HEADING_RIGHT);
    item->color = COLOR_HEADING;
    item = func_8040ECB0(menu, ITEM_HEADING_LEFT);
    item->color = COLOR_HEADING;
    func_80424D70();
    for (; i < SLOT_COUNT; i++) {
        D_800E53C0->picks[i][0] = NO_PICK;
        D_800E53C0->picks[i][1] = NO_PICK;
    }
    D_800E53C0->lastPick = NO_PICK;
    func_8042C8AC();
    settings = &D_801462C8;
    switch (settings->trialKind) {
    case TRIAL_NONE:
        RECORD_RESULT(D_800E53C0->order[0], D_8015402C);
        func_8042D2F8();
        D_800E53C0->result = RESULT_PASSED;
        break;
    case TRIAL_HUMAN_MUST_WIN:
        /* FAKEMATCH: a single-pass wrapper restores the reward flag allocation without changing behavior. */
        do {
            if (settings->humanWon == 1) {
                i = 0;
                humanActive = SLOT_ACTIVE;
                D_800E53C0->result = RESULT_PASSED;
                func_8042D3A8();
                entry = settings->roster;
                for (; i < HUMAN_SLOTS; i++) {
                    if (entry->active != humanActive || entry->computer != 0) {
                        entry++;
                    } else {
                        func_80425EF4(i);
                        entry++;
                    }
                }
            } else {
                D_800E53C0->result = RESULT_FAILED;
            }
        } while (0);
        break;
    }
    #if defined(VERSION_EU) || defined(VERSION_EU_X)
    textSettings = &D_801462C8;
    kind = textSettings->trialKind;
#else
    kind = D_801462D5;
#endif
    if (kind == TRIAL_NONE) {
        func_8042C1F8();
    } else if (kind == TRIAL_HUMAN_MUST_WIN) {
        if (D_800E53C0->result == RESULT_FAILED) {
            D_800E53C0->unkE8 = 0;
            D_800E53C0->count = 0;
            func_8042CE54();
            item = func_8040ECB0(menu, ITEM_FAILED_BANNER);
            func_8040E958(item, 1);
            item->color = COLOR_FAILED;
            item->text = FAILED_TEXT;
            func_8040E958(func_8040ECB0(menu, ITEM_FAILED_PROMPT), 0);
        } else if (D_800E53C0->lastPick != NO_PICK) {
            D_800E53C0->unkE8 = 0;
            D_800E53C0->count = 0;
            func_8042CE54();
            func_8040E958(func_8040ECB0(menu, ITEM_FAILED_PROMPT), 0);
            func_8042D054();
        } else {
            func_8042C1F8();
        }
    }
    func_8041B190(ITEM_CONTINUE);
    func_8041B190(ITEM_START);
    func_8041B190(ITEM_RETRY);
    func_8040E9D0(func_8040ECB0(menu, ITEM_START), 1);
    for (i = 0; i < PROFILE_COUNT; i++) {
        if (D_80102B0D[i].value >= 0 && D_80102B0E[i].value == 0) {
            func_8040E9D0(func_8040ECB0(menu, ITEM_START), 0);
            break;
        }
    }
    if (func_8040EC50(func_8040ECB0(menu, ITEM_START)) == 0 && func_8042B108() == 1 && func_8042B198() == 0) {
        func_8040E9D0(func_8040ECB0(menu, ITEM_START), 1);
    }
    item = func_8040ECB0(D_800E53C0->menu, ITEM_RULE_LABEL);
    if (D_80154028 == RULE_SET_POINT_TARGET) {
        item->text = POINT_TEXT;
    } else {
        item->text = OTHER_TEXT;
    }
    item = func_8040ECB0(D_800E53C0->menu, ITEM_RULE_MEASURE);
    switch (D_80154028) {
    case RULE_SET_TEAM_DEATHMATCH:
        item->text = POINT_TEXT;
        break;
    case RULE_SET_POINT_TARGET:
        item->text = MEASURE_TEXT;
        break;
    case RULE_SET_FRAG_TAG:
    default:
        item->text = FRAG_TEXT;
        break;
    }
    item = func_8040ECB0(menu, ITEM_STAGE_NAME);
    func_8028D35C(D_8011FE88, D_8015402C, name, NAME_LENGTH);
    func_802A125C(D_800E53C0->stageName, func_802A1494(name));
    item->text = (s32)D_800E53C0->stageName;
    /* FAKEMATCH: volatile keeps cursor initialization before screen activation. */
    ((volatile Screen *)D_800E53C0)->cursor = func_8040ECB0(menu, ITEM_CURSOR);
    ((volatile Screen *)D_800E53C0)->active = 1;
    D_80146894 = 1;
    D_800E53C0->unk320 = 0;
    func_802A338C();
    return 0;
}
