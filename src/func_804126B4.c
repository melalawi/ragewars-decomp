/* Visits every cell of a list's column-by-row grid, computing each cell's rectangle through func_8041234C and drawing it through func_8040D350 with the given style. */
#include "basetypes.h"

typedef struct {
    char pad0[0x48];
    u8 columns;
    u8 rows;
} List;

typedef struct {
    s32 words[10];
} Style;

typedef struct {
    s32 words[16];
} Cell;

extern void func_8041234C(List *list, Cell *cell, u32 column, u32 row);
extern void func_8040D350(Cell *cell, Style style);

void func_804126B4(List *arg0, Style style) {
    List *list = arg0;
    Cell cell;
    u32 column;
    u32 row;

    for (column = 0; column < list->columns; column++) {
        for (row = 0; row < list->rows; row++) {
            func_8041234C(list, &cell, column, row);
            func_8040D350(&cell, style);
        }
    }
}
