#include "basetypes.h"

/* Remaps every 4-bit pixel of every image in each of the 256 entries of a resource through the nibble table D_800D2910, once the resource has been loaded by func_80285150. */

typedef struct {
    u16 columns;
    u16 rows;
    char pad[4];
} ImageSet;

typedef struct {
    s32 width;
    s32 height;
} Image;

extern u8 D_800D2910[];
extern s32 func_80285150(void *resource, s32 flags);
extern void func_802AB8DC(void *table, s32 index, void **out, u8 *tag);

void func_8028E480(void *arg0, void **resource) {
    s32 i;
    void *data;
    u8 tag;
    void *table;
    u8 *remap;
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

    end = func_80285150(resource, 0) == 0;
    if (end) {
        return;
    }
    table = *resource;
    remap = D_800D2910;
    do {
        for (i = 0; i < 256; i++) {
            end = -1;
            func_802AB8DC(table, i, &data, &tag);
            if (data == 0) {
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
    } while (0);
}
