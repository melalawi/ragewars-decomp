/* Draws a grid of 4-bit image tiles scaled by sx and sy: the header holds the column and row
   counts, each tile holds its width, height and packed nibble data, and every tile goes to
   func_802AAED8 at the running float position, advancing x by the scaled tile width and y by the
   scaled last tile height per row. Scaled counterpart of func_802AC0A0. */
#include "basetypes.h"

extern void func_802AAED8(u32 *data, f32 x, f32 y, u32 w, u32 h, f32 sx, f32 sy);

void func_802AC1A0(u16 *grid, f32 x0, f32 y, f32 sx, f32 sy) {
    u32 *tile;
    f32 rows;
    f32 cols;
    f32 x;
    u32 w;
    u32 h;

    tile = (u32 *)(grid + 4);
    h = 0;
    rows = grid[1];
    while (rows-- != 0.0f) {
        x = x0;
        cols = grid[0];
        while (cols-- != 0.0f) {
            w = tile[0];
            h = tile[1];
            func_802AAED8(tile + 2, x, y, w, h, sx, sy);
            x += w * sx;
            tile = (u32 *)((char *)tile + ((w * h) >> 1));
            tile += 2;
        }
        y += h * sy;
    }
}
