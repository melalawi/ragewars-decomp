#include "basetypes.h"

/* Reads the two words of a selected grid cell into caller outputs, after looking up its entry by identifier. Adapted from matched setter func_80412918. */

typedef struct {
    s32 first;
    s32 second;
} Cell;

typedef struct {
    char pad_00[0x44];
    Cell *cells;
    u8 pad_48[3];
    u8 width;
} Entry;

extern s32 func_8029A958();
extern void *func_80411E4C(s32);
extern Entry *func_8040ECB0(void *, unsigned short);

void func_804129C0(s32 identifier, s32 row, s32 column, s32 *first, s32 *second) {
    Entry *entry = func_8040ECB0(func_80411E4C(func_8029A958()), identifier);

    *first = entry->cells[row * entry->width + column].first;
    *second = entry->cells[row * entry->width + column].second;
}
