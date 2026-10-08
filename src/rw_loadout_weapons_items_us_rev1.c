#include "types.h"
/* Native loadout selection records. func_8043B6E8_de scans3/8/4
 * records and tests profile[ownedIndex+0x4C]. func_8043B49C_de
 * copies captionResource into a UI child, passes modelResource to
 * the preview loader, and dereferences labelSlots for the name.
 * func_8042863C_de maps ownedIndex back to captionResource. */
extern const char *D_800D7070[103];
typedef struct RwLoadoutItem {
    s32 captionResource;
    s32 modelResource;
    s32 ownedIndex;
    const char **labelSlots;
} RwLoadoutItem;
RwLoadoutItem rw_loadout_weapons_items_us_rev1[8] = {
    {179, 5033, 1, &D_800D7070[34]},
    {162, 5019, 15, &D_800D7070[48]},
    {154, 5025, 13, &D_800D7070[46]},
    {155, 5026, 9, &D_800D7070[42]},
    {153, 5018, 8, &D_800D7070[41]},
    {170, 5005, 14, &D_800D7070[47]},
    {174, 5007, 7, &D_800D7070[40]},
    {176, 5004, 2, &D_800D7070[35]},
};
