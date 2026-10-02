/* NON_MATCHING: exact owner draft; PAL asm retained because EU-X format symbols are unplaced at link. */
#include "shared/pak_notes.h"
#include "shared/label.h"
#include "shared/settings.h"
#include "shared/menu_language.h"









extern PakState *D_800E54A4;
extern char *D_800D7784;
extern char *D_800D727C;
extern char D_800E1EE0[];
#if defined(VERSION_EU)
extern char D_800EE530[], D_800EE534[], D_800EE540[];
#endif
extern char D_800E1EE4[];
extern char D_800E1EF0[];
extern s32 func_8040458C(s32, s32, s32 *, char *, u8 *, s32 *, char *, char *);
extern s32 func_804057BC(char *, s32);
extern void func_802A125C(char *, char *);
extern void func_802A1C08(char *, char *, ...);
extern Shared_Label *func_8040ECB0(void *, s32);
extern s32 func_80405160(s32, s32 *);
extern s32 func_80435600(void);
extern s32 func_804057EC(s32);
extern void func_80432488(s32, s32);
extern void func_8043442C(s32, s32);

/* Builds a player's controller pak note list: each of the sixteen notes gets its name (a default when unnamed), its size and a numbered label with the extension when it has one, or empty entries once the pak cannot be read; then the free and used page counts are formatted into their menu items, and on any read failure the slot is marked failed instead of opening the note menu. */
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_801462C8[];
#endif
#if defined(VERSION_EU)
extern char *D_800E27B4[], *D_800E1394[];
#elif defined(VERSION_EU_X)
extern char *D_800DE03C[], *D_800DD124[];
#endif
#if defined(VERSION_DE)
enum { PAK_RESOURCE_2D7 = 750, PAK_RESOURCE_2D8 = 749, PAK_RESOURCE_2DB = 746, PAK_RESOURCE_2DC = 745, PAK_RESOURCE_2DD = 747 };
#elif defined(VERSION_EU_X)
enum { PAK_RESOURCE_2D7 = 753, PAK_RESOURCE_2D8 = 751, PAK_RESOURCE_2DB = 754, PAK_RESOURCE_2DC = 755, PAK_RESOURCE_2DD = 756 };
#else
enum { PAK_RESOURCE_2D7 = 727, PAK_RESOURCE_2D8 = 728, PAK_RESOURCE_2DB = 731, PAK_RESOURCE_2DC = 732, PAK_RESOURCE_2DD = 733 };
#endif
void func_8043407C(s32 player)
{
    char name[0x18];
    u8 ext[8];
    char extra1[8];
    char extra2[8];
    s32 status;
    s32 size;
    s32 failed;
    s32 i;
    Shared_Label *item;
    s32 note_status;

#if defined(VERSION_EU) || defined(VERSION_EU_X)
    Shared_Settings *settings;
#endif

    failed = 0;
    for (i = 0; i < 16 && failed == 0; i++) {
        note_status = func_8040458C(player, i, &status, name, ext, &size, extra1, extra2);
#if defined(VERSION_EU) || defined(VERSION_EU_X)
        settings = (Shared_Settings *)D_801462C8;
#endif
        if (note_status == 0) {
            if (status == 1) {
                if (func_804057BC(name, 16) == 1) {
                    func_802A125C(name, RW_LOCALIZED_TEXT(D_800D7784, D_800E27B4, D_800DE03C, settings->language));
                }
                func_802A125C(D_800E54A4->slots[player].notes[i].name, name);
                func_802A1C08(D_800E54A4->slots[player].notes[i].size,
#if defined(VERSION_EU)
 D_800EE530,
#else
 D_800E1EE0,
#endif
 size);
                if (ext[0] != 0) {
                    func_802A1C08(D_800E54A4->slots[player].notes[i].label,
#if defined(VERSION_EU)
 D_800EE534,
#else
 D_800E1EE4,
#endif
 i + 1,
                                  D_800E54A4->slots[player].notes[i].name, ext);
                    continue;
                }
                goto numbered;
            }
        } else {
            failed = 1;
        }
        func_802A125C(D_800E54A4->slots[player].notes[i].name, RW_LOCALIZED_TEXT(D_800D727C, D_800E1394, D_800DD124, settings->language));
        func_802A1C08(D_800E54A4->slots[player].notes[i].size,
#if defined(VERSION_EU)
 D_800EE530,
#else
 D_800E1EE0,
#endif
 0);
    numbered:
        func_802A1C08(D_800E54A4->slots[player].notes[i].label,
#if defined(VERSION_EU)
 D_800EE540,
#else
 D_800E1EF0,
#endif
 i + 1,
                      D_800E54A4->slots[player].notes[i].name);
    }
    if (failed == 0) {
        item = func_8040ECB0(D_800E54A4->slots[player].menu, PAK_RESOURCE_2D8);
        if (func_80405160(player, &size) == 0) {
            func_802A1C08(D_800E54A4->slots[player].free,
#if defined(VERSION_EU)
 D_800EE530,
#else
 D_800E1EE0,
#endif
 size);
            item->text = D_800E54A4->slots[player].free;
            item = func_8040ECB0(D_800E54A4->slots[player].menu, PAK_RESOURCE_2D7);
            size = func_80435600();
            func_802A1C08(D_800E54A4->slots[player].used,
#if defined(VERSION_EU)
 D_800EE530,
#else
 D_800E1EE0,
#endif
 func_804057EC(size));
            item->text = D_800E54A4->slots[player].used;
        } else {
            failed = 1;
        }
    }
    if (failed == 1) {
        D_800E54A4->slots[player].state = failed;
        func_80432488(player, PAK_RESOURCE_2DB);
        return;
    }
    D_800E54A4->slots[player].cursor = -1;
    D_800E54A4->slots[player].scroll = 0;
    D_800E54A4->slots[player].items[0] = func_8040ECB0(D_800E54A4->slots[player].menu, PAK_RESOURCE_2DB);
    D_800E54A4->slots[player].items[1] = func_8040ECB0(D_800E54A4->slots[player].menu, PAK_RESOURCE_2DC);
    D_800E54A4->slots[player].items[2] = func_8040ECB0(D_800E54A4->slots[player].menu, PAK_RESOURCE_2DD);
    func_8043442C(player, 1);
}
