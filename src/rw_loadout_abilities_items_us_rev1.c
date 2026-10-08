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
RwLoadoutItem rw_loadout_abilities_items_us_rev1[4] = {
    {169, 5031, 5, &D_800D7070[38]},
    {171, 5022, 3, &D_800D7070[36]},
    {172, 5011, 6, &D_800D7070[39]},
    {177, 5003, 4, &D_800D7070[37]},
};
