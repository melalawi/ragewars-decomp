/* Updates the slot-selection dialog after availability and capacity probes, choosing unavailable, empty and confirmation states or entering the requested transition. The negative probe statuses -4, -3 and -1 trigger the error transition. */
#include "basetypes.h"
#include "shared/slot_dialog.h"
#include "shared/label.h"
#include "shared/menu_language.h"
#if defined(VERSION_DE)
enum { SLOT_RESOURCE_962 = 956, SLOT_RESOURCE_966 = 961, SLOT_RESOURCE_968 = 960, SLOT_RESOURCE_971 = 964 };
#elif defined(VERSION_EU_X)
enum { SLOT_RESOURCE_962 = 967, SLOT_RESOURCE_966 = 969, SLOT_RESOURCE_968 = 971, SLOT_RESOURCE_971 = 975 };
#else
enum { SLOT_RESOURCE_962 = 962, SLOT_RESOURCE_966 = 966, SLOT_RESOURCE_968 = 968, SLOT_RESOURCE_971 = 971 };
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)


extern u8 D_80152789;
extern s32 D_800E25A4[], D_800DDEB0[];
#endif
extern s32 func_80264634(s32);
extern void func_80299368(s32), func_8029A1D4(s32), func_8029A73C(void), func_802A3358(void);
extern s32 func_802A1C08(void *, const char *, ...);
extern s32 func_80404BE8(s32, s32, s32 *), func_80404F04(s32), func_80435560(s32,u32 *);
extern void func_80404E28(s32), func_8040E958(s32,s32), func_8041C21C(void),func_8041C2C4(void),func_80435190(s32);
extern Shared_Label *func_8040ECB0(s32,s32);
extern s32 D_800D7700, D_800E28CC, D_800E3510,D_800E3514,D_8010F190,D_80146D60,D_8014AD94;
extern char D_800E1480[];
extern SlotDialog *D_800E3518;
void func_8041BF10(void) {
    s32 sp10;
    u32 sp14;
    s32 var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    Shared_Label *temp_s0;

    func_8029A1D4(SLOT_RESOURCE_962);
    func_8040E958(D_800E3518->absent, 0);
    var_s2 = 0;
    func_8040E958(D_800E3518->unavailable, 0);
    var_s1 = 1;
    func_8040E958(D_800E3518->prompt, 0);
    temp_v0 = func_80264634(0);
    if (temp_v0 == 1) {
        func_8041C21C();
        if (D_800E3518->ready == 1) {
            func_80404E28(D_800E3510);
            temp_v0_2 = func_80404F04(D_800E3510);
            switch (temp_v0_2) {                    /* irregular */
            case 0:
                if ((func_80404BE8(RW_LOCALIZED_TEXT(D_800D7700, D_800E25A4, D_800DDEB0, D_80152789), D_800E3510, &sp10) == 0) && (func_80435560(D_800E3510, &sp14) == 0)) {
                    var_s1 = sp14 > 0U;
                }
                break;
            case -4:
            case -3:
            case -1:
                var_s2 = 1;
                break;
            }
        }
    }
    if (temp_v0 == 0) {
        D_800E3518->state = 1;
        D_800E3518->elapsed = 0;
        func_8040E958(D_800E3518->main, 0);
        func_8040E958(D_800E3518->unavailable, 1);
        goto block_25;
    }
    if (D_800E3518->ready == 0) {
        D_800E3518->state = 2;
        D_800E3518->elapsed = 0;
        func_8040E958(D_800E3518->main, 0);
        func_8040E958(D_800E3518->absent, 1);
        var_a0 = SLOT_RESOURCE_971;
        goto block_24;
    }
    if ((var_s2 == 1) || (D_8010F190 & 0x1000)) {
        func_8029A73C();
        D_80146D60 = 1;
        D_800E28CC = 1;
        D_8014AD94 = 0;
        if (var_s2 == 0) {
            D_800E3514 = 0;
        } else {
            D_800E3514 = 2;
        }
        func_80435190(6);
        func_80299368(0x13);
        return;
    }
    if (var_s1 == 1) {
        func_8041C2C4();
        return;
    }
    temp_s0 = func_8040ECB0(D_800E3518->root, SLOT_RESOURCE_968);
    func_802A1C08(D_800E3518->text, D_800E1480, D_800E3510 + 1);
    temp_s0->text = D_800E3518->text;
    D_800E3518->state = 3;
    D_800E3518->elapsed = 0;
    func_8040E958(D_800E3518->main, 0);
    func_8040E958(D_800E3518->prompt, 1);
    var_a0 = SLOT_RESOURCE_966;
block_24:
    func_8029A1D4(var_a0);
block_25:
    func_802A3358();
}
