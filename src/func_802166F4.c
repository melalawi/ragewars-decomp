/* Picks a random entry from a table of mask and id records ending in -1: every id whose mask shares
   a bit with flags and that func_802469F8 finds for the owner is added to a weighted picker with
   weight 10, a zero mask ends the search once something was added, the first id is added when the
   picker is still empty, and the pick is returned when func_802469F8 finds it, otherwise the first
   id. */
#include "basetypes.h"

typedef struct {
    s32 mask;
    s32 id;
} Choice;

typedef struct {
    s16 count;
    char pad[0x66];
} Picker;

extern void func_802798CC(Picker *);
extern void func_802798D4(Picker *, s32, s32);
extern s16 func_80279918(Picker *);
extern s32 func_802469F8(s32, s32, s32);

s32 func_802166F4(s32 owner, s32 unused, Choice *table, s32 flags) {
    Picker picker;
    s32 first;
    s16 pick;

    func_802798CC(&picker);
    first = table->id;
    while (table->mask != -1) {
        if (table->mask == 0 && picker.count != 0) {
            goto choose;
        }
        if ((flags & table->mask) && func_802469F8(owner, table->id, -1) != -1) {
            func_802798D4(&picker, (s16) table->id, 10);
        }
        table++;
    }
    if (picker.count == 0) {
        func_802798D4(&picker, (s16) first, 10);
    }
choose:
    pick = func_80279918(&picker);
    if (func_802469F8(owner, pick, -1) == -1) {
        return first;
    }
    return pick;
}
