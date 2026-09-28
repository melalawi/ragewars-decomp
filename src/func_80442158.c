/* Returns the length of the first line of a text item's string, taken from func_8043F290 for type 5 items and from the string pointer at 0x14 otherwise, counting until a newline, the end of the string or a null pointer. */
#include "basetypes.h"

typedef struct {
    int unk0;
    short type;
    char pad6[0xE];
    u8 **text;
} Item;

extern u8 *func_8043F290(Item *item);

int func_80442158(Item *item) {
    u8 *p;
    int len;

    len = 0;
    if (item->type == 5) {
        p = func_8043F290(item);
    } else {
        p = *item->text;
    }
    while (p != 0 && *p != 0 && *p != '\n') {
        p++;
        len++;
    }
    return len;
}
