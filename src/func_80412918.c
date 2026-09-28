#include "basetypes.h"

/* Looks up the entry with the given identifier among the list func_80411E4C returns for what func_8029A958 returns, through func_8040ECB0, and stores two words into the eight-byte cell at the given row and column of its cell table at 0x44, whose row width is the byte at 0x4B.
   Adapted from func_80412AD8 with the three byte stores replaced by the two cell-word stores changed. */

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

void func_80412918(s32 identifier, s32 row, s32 column, s32 first, s32 second) {
    Entry *entry = func_8040ECB0(func_80411E4C(func_8029A958()), identifier);

    entry->cells[row * entry->width + column].first = first;
    entry->cells[row * entry->width + column].second = second;
}
