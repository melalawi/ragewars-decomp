#include "span_1000/code_802AB720.h"
#include "types.h"
/* Draws a grid of 4-bit image tiles: the header holds the column and row counts, each tile holds
   its width, height and packed nibble data, and every tile goes to func_802A9CD0_de at the running
   position, advancing x by the tile width and y by the last tile height per row. */

extern void func_802A9CD0_de(s32 *data, s32 x, s16 y, s32 w, s32 h);

void func_802AB0B0_de(u16 *grid, s16 x0, s32 y) {
    s32 *tile;
    s32 rows;
    s32 cols;
    s32 x;
    s32 w;
    s32 h;

    tile = (s32 *)(grid + 4);
    h = 0;
    rows = grid[1];
    while (--rows != -1) {
        x = x0;
        cols = grid[0];
        while (--cols != -1) {
            w = tile[0];
            h = tile[1];
            func_802A9CD0_de(tile + 2, x, y, w, h);
            x += w;
            tile = (s32 *)((char *)tile + ((u32)(w * h) >> 1));
            tile += 2;
        }
        y += h;
    }
}
