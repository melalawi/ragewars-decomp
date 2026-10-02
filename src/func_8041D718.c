/* Fills the player record screen for the selected record D_80102B00[index]: shows the record's
   name in item 0x1F3 and its rank text from func_80424FC8 in item 0x1F2, and formats into the
   screen's text buffers the record's counters at 0x70, 0x6C and 0x74, the value func_804261E4
   reports and the byte at 0x17 for items 0x1FD, 0x1F4, 0x1F6, 0x1F9 and 0x1FA, making each item
   visible through func_8040E958. */
#include "basetypes.h"
#include "shared/profile_statistics_screen.h"
#include "shared/label.h"
#include "shared/menu_state_records.h"

#if defined(VERSION_DE)
enum { PROFILE_RESOURCE_498 = 494, PROFILE_RESOURCE_499 = 495, PROFILE_RESOURCE_500 = 496, PROFILE_RESOURCE_502 = 498, PROFILE_RESOURCE_505 = 501, PROFILE_RESOURCE_506 = 502, PROFILE_RESOURCE_509 = 505 };
#elif defined(VERSION_EU_X)
enum { PROFILE_RESOURCE_498 = 502, PROFILE_RESOURCE_499 = 503, PROFILE_RESOURCE_500 = 504, PROFILE_RESOURCE_502 = 507, PROFILE_RESOURCE_505 = 509, PROFILE_RESOURCE_506 = 511, PROFILE_RESOURCE_509 = 513 };
#else
enum { PROFILE_RESOURCE_498 = 498, PROFILE_RESOURCE_499 = 499, PROFILE_RESOURCE_500 = 500, PROFILE_RESOURCE_502 = 502, PROFILE_RESOURCE_505 = 505, PROFILE_RESOURCE_506 = 506, PROFILE_RESOURCE_509 = 509 };
#endif

extern ProfileStatisticsScreen *D_800E3590;
extern Record D_80102B00[];
extern char D_800E1538[];
extern char D_800E153C[];

extern Shared_Label *func_8040ECB0(void *, s32);
extern void func_8040E958(Shared_Label *, s32);
extern void func_802A1C08(char *, char *, s32);
extern char *func_80424FC8(s32);
extern s32 func_804261E4(s32);

void func_8041D718(void) {
    Shared_Label *item;
    s32 score;

    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_499);
    func_8040E958(item, 1);
    item->text = D_80102B00[D_800E3590->index].name;
    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_498);
    func_8040E958(item, 1);
    item->text = func_80424FC8(D_800E3590->index);
    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_509);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->kills, D_800E1538, D_80102B00[D_800E3590->index].statistics.kills);
    item->text = D_800E3590->kills;
    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_500);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->wins, D_800E1538, D_80102B00[D_800E3590->index].statistics.wins);
    item->text = D_800E3590->wins;
    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_502);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->deaths, D_800E1538, D_80102B00[D_800E3590->index].statistics.deaths);
    item->text = D_800E3590->deaths;
    score = func_804261E4(D_800E3590->index);
    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_505);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->score, D_800E153C, score);
    item->text = D_800E3590->score;
    item = func_8040ECB0(D_800E3590->handle, PROFILE_RESOURCE_506);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->count, D_800E153C, D_80102B00[D_800E3590->index].count);
    item->text = D_800E3590->count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB17_E[] = {0x00, 0x00, 0x8F, 0xC3, 0x00, 0x20, 0x00, 0x60, 0x10, 0x21, 0x08, 0x00, 0x00, 0x00};
#endif
