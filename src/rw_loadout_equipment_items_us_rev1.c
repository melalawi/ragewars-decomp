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
RwLoadoutItem rw_loadout_equipment_items_us_rev1[3] = {
    {152, 5015, 10, &D_800D7070[43]},
    {173, 5014, 12, &D_800D7070[45]},
    {175, 5037, 11, &D_800D7070[44]},
};
