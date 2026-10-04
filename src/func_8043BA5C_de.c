#include "common/types.h"
#include "span_16E000/code_80439930.h"
#include "span_16E000/types.h"
#include "types.h"

/* Moves the cursor of player p's 0x4D0-byte entry of D_800E59E0 to column c: unless c is 5 it
   hides the item whose id D_800E5A06[p * 19 + c] names in the screen window, shows the item
   D_800E5A1A[p * 19 + c] names with alpha 0x96, stores c as the entry's selection and redraws that
   column through func_8043B49C_de with the entry's value for it. */









extern struct Screen_func_8043BA5C_de *D_800E1990;
extern struct StateFlags D_800E19B6[];
extern struct StateFlags D_800E19CA[][19];
extern struct Resource_func_80419E54_de *func_8040EC30_de(void *, s32);
extern void func_8040E8D8_de(struct Resource_func_80419E54_de *, s32);
extern void func_8040E928_de(struct Resource_func_80419E54_de *, s32);
extern void func_8043B49C_de(s32, s32, s32);

void func_8043BA5C_de(s32 player, s32 column) {
    struct Resource_func_80419E54_de *item;

    if (column != 5) {
        item = func_8040EC30_de(D_800E1990->entries[0].window, D_800E19B6[player * 19 + column].value);
        func_8040E8D8_de(item, 1);
    }
    item = func_8040EC30_de(D_800E1990->entries[0].window, D_800E19CA[player][column].value);
    func_8040E928_de(item, 1);
    item->value = 0x96;
    D_800E1990->entries[player].selection = column;
    func_8043B49C_de(player, column, D_800E1990->entries[player].values[column]);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0666_14[] = {0x01, 0x22, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5A06_14[] = {0x01, 0x22, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F2026_14[] = {0x01, 0x22, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED206_14[] = {0x01, 0x26, 0x00, 0x00, 0x01, 0x25, 0x00, 0x00, 0x01, 0x24, 0x00, 0x00, 0x01, 0x23, 0x00, 0x00, 0x01, 0x22, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E19B6_14[] = {0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00, 0x01, 0x1D, 0x00, 0x00, 0x01, 0x1C, 0x00, 0x00};
#endif
