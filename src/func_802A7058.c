#include "basetypes.h"

/* Fills a sprite descriptor from an image: its pixel data and format, its two palette or data words, its scaled width and height, and when a second image is given the texture extents from its size shifts and the derived scale and step. */

typedef struct ImageHeader {
    char pad0[2];
    unsigned char widthShift;
    unsigned char heightShift;
    char pad4[0x1D - 4];
    unsigned char scale;
    char pad1E[0x21 - 0x1E];
    unsigned char width;
    unsigned char height;
    unsigned char format;
    char data[1];
} ImageHeader;

typedef struct Image {
    char pad0[8];
    ImageHeader *header;
    s32 fieldC;
    s32 field10;
    char pad14[0x3C - 0x14];
    s32 flags;
} Image;

typedef struct Sprite {
    s32 format;
    char *data;
    s32 field8;
    s32 fieldC;
    f32 width;
    f32 height;
    f32 extentX;
    f32 extentY;
    f32 step;
} Sprite;

extern f32 D_800CB038;
extern f32 D_800CB040;

void func_802A7058(Image *image, Image *texture, Sprite *sprite) {
    f32 scale;
    s32 height;
    f32 *unit;

    sprite->data = image->header->data;
    sprite->format = image->header->format;
    if (image->flags & 2) {
        sprite->field8 = image->fieldC;
        sprite->fieldC = image->field10;
    } else {
        sprite->field8 = image->fieldC;
        sprite->fieldC = image->fieldC;
    }
    scale = *(&D_800CB038 + 1);
    sprite->width = image->header->width * scale;
    sprite->height = image->header->height * scale;
    if (texture != 0) {
        sprite->extentX = 1 << (texture->header->widthShift + 5);
        sprite->extentX = sprite->extentX * image->header->scale - D_800CB040;
        height = 1 << (texture->header->heightShift + 5);
        unit = &D_800CB040 + 1;
        sprite->step = *unit / ((f32)sprite->format - *unit);
        sprite->extentY = height;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DDC_4 = 3.125f;
const float unbake_rodata_800C5DE0_4 = 32.0f;
const float unbake_rodata_800C5DE4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB03C_4 = 3.125f;
const float unbake_rodata_800CB040_4 = 32.0f;
const float unbake_rodata_800CB044_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C614C_4 = 3.125f;
const float unbake_rodata_800C6150_4 = 32.0f;
const float unbake_rodata_800C6154_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C618C_4 = 3.125f;
const float unbake_rodata_800C6190_4 = 32.0f;
const float unbake_rodata_800C6194_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5EAC_4 = 3.125f;
const float unbake_rodata_800C5EB0_4 = 32.0f;
const float unbake_rodata_800C5EB4_4 = 1.0f;
#endif
