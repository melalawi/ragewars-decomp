#include "basetypes.h"

/* Opens the next entry of a packed file: finds the last filled slot before the 0xDEADBEEF end marker in the offset table, records the following slot's offset as that slot's offset plus the given size, optionally hands the slot's data to func_802C2490, and returns a pointer to it. */

typedef struct Pack {
    s32 count;
    s32 offsets[1];
} Pack;

extern void func_802C2490(char *data);

char *func_80261110(Pack *pack, s32 prepare, s32 size)
{
    s32 i;
    char *data;

    for (i = 0; i <= pack->count; i++) {
        if (pack->offsets[i] == 0xDEADBEEF) {
            break;
        }
    }
    i--;
    pack->offsets[i + 1] = pack->offsets[i] + size;
    data = (char *)pack + pack->offsets[i];
    if (prepare) {
        func_802C2490(data);
    }
    return data;
}
