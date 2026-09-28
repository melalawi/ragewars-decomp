#include "basetypes.h"

/* Remaps every 4-bit pixel of every image in each of the 256 entries of a table through the given
   nibble table. */

typedef struct {
    u16 columns;
    u16 rows;
    char pad[4];
} ImageSet;

typedef struct {
    s32 width;
    s32 height;
} Image;

extern void func_802AB8DC(void *table, s32 index, void **out, u8 *tag);

void func_8028E36C(void *arg0, void *table, u8 *remap) {
    s32 i;
    void *data;
    u8 tag;
    ImageSet *set;
    Image *image;
    s32 rows;
    s32 columns;
    u32 count;
    u8 *pixel;
    s32 hi;
    s32 lo;
    s32 end;
    s32 width;
    s32 height;

    i = 0;
    end = -1;
    for (; i < 256; i++) {
        end = -1;
        func_802AB8DC(table, i, &data, &tag);
        rows = data == 0;
        if (rows) {
            continue;
        }
        set = data;
        rows = set->rows;
        rows--;
        image = (Image *)(set + 1);
        while (1) {
            if (rows == end) {
                break;
            }
            columns = set->columns;
            columns--;
            for (; columns != end; columns--) {
                width = image->width;
                height = image->height;
                count = (u32)(width * height) >> 1;
                pixel = (u8 *)(image + 1);
                while (count--) {
                    hi = *pixel >> 4;
                    lo = *pixel & 0xF;
                    hi = remap[hi];
                    lo = remap[lo];
                    *pixel = (hi << 4) | lo;
                    pixel++;
                }
                image = (Image *)((u8 *)image + ((u32)(width * height) >> 1));
                image++;
            }
            rows--;
        }
    }
}
