#include "common/types.h"
#include "span_1000/code_802A6488.h"
#include "span_C76B0/data.h"
#include "types.h"
typedef struct Image Image;

/* Fills a sprite descriptor from an image: its pixel data and format, its two palette or data words, its scaled width and height, and when a second image is given the texture extents from its size shifts and the derived scale and step. */










void func_802A6068_de(Image *image, Image *texture, Sprite *sprite) {
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
    scale = *(&D_800C5EA8_de + 1);
    sprite->width = image->header->width * scale;
    sprite->height = image->header->height * scale;
    if (texture != 0) {
        sprite->extentX = 1 << (texture->header->widthShift + 5);
        sprite->extentX = sprite->extentX * image->header->scale - D_800C5EB0_de;
        height = 1 << (texture->header->heightShift + 5);
        unit = &D_800C5EB0_de + 1;
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
