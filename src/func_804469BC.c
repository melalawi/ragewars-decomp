/* Deletes the final character of the selected player's text entry: resets its cursor and, when the entry holds characters, decrements the count and length and clears the character at the new end. */
#include "basetypes.h"

typedef struct {
    s32 length;
    s32 cursor;
    s32 count;
    char text[12];
} TextEntry;

typedef struct {
    char pad0[0x1C];
    s32 player;
} Menu;

extern char D_80145040;
extern TextEntry D_800E63C0[];
extern s32 func_8022A590(void *table, s32 player);

s32 func_804469BC(s32 unused, Menu *menu) {
    s32 i;
    s32 count;

    i = func_8022A590(&D_80145040, menu->player);
    count = D_800E63C0[i].count;
    D_800E63C0[i].cursor = 0;
    if (count == 0) {
        return 0;
    }
    D_800E63C0[i].count = count - 1;
    D_800E63C0[i].length--;
    D_800E63C0[i].text[D_800E63C0[i].length] = 0;
    return 0;
}
