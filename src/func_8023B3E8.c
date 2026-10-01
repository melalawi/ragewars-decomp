/* Sorts and draws scene translucent objects in two groups around the view depth. */
#include "basetypes.h"

typedef struct {
    struct {
        u32 w0;
        u32 w1;
    } words;
} Gfx;

typedef struct Object {char gap0[4];struct Object *next;char gap8[0x208];f32 depth;} Object;
typedef struct Scene {char gap0[0x8B4];Object *objects;char gap8B8[12];s32 count;} Scene;
typedef struct View {char gap0[0x120];s32 hidden;char gap124[8];f32 depth;} View;
extern Gfx *D_80110634;

#define GFX(a, b)                            {                                            Gfx *_g = (Gfx *)(D_80110634++);         _g->words.w0 = (a);                      _g->words.w1 = (u32)(b);             }
extern char D_80146D20;
extern void D_23B928();
extern void D_23B93C();
extern void D_23B968();
extern void func_8026925C(s32);
extern void func_80285290(char *, u32, u32, void *, void *);
extern void func_8023A4D0(Object *, View *);

void func_8023B3E8(Scene *scene, View *view) {
    Object *near[4];
    Object *far[4];
    Object *object;
    s32 nearCount;
    s32 farCount;
    s32 i;

    if (scene->count == 0 || view->hidden != 0) {
        return;
    }
    GFX(0xE7000000, 0);
    GFX(0xDA380003, (u32)&D_80146D20);
    GFX(0xDB040004, 2);
    GFX(0xDB04000C, 2);
    GFX(0xDB040014, 0xFFFE);
    GFX(0xDB04001C, 0xFFFE);
    GFX(0xD9FEFFFF, 0);
    GFX(0xE3000A01, 0);
    func_8026925C(0xD);
    GFX(0xD9F9FBFF, 0);
    GFX(0xD9FFFFFF, 0x200004);
    GFX(0xE3000C00, 0x80000);
    GFX(0xE3001201, 0x2000);
    nearCount = 0;
    farCount = 0;
    for (object = scene->objects; object != 0; object = object->next) {
        if (object->depth > view->depth) {
            near[nearCount++] = object;
        } else {
            far[farCount++] = object;
        }
    }
    func_80285290((char *)near, nearCount, 4, D_23B93C, D_23B928);
    func_80285290((char *)far, farCount, 4, D_23B968, D_23B928);
    for (i = 0; i < nearCount; i++) {
        func_8023A4D0(near[i], view);
    }
    for (i = 0; i < farCount; i++) {
        func_8023A4D0(far[i], view);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC010_4 = 1.0f;
const float unbake_rodata_800DC014_4 = 2.14748365e+09f;
const float unbake_rodata_800DC018_4 = 2.14748365e+09f;
const float unbake_rodata_800DC01C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC020_4 = 2.14748365e+09f;
const float unbake_rodata_800DC024_4 = 2.14748365e+09f;
const float unbake_rodata_800DC028_4 = 2.14748365e+09f;
const float unbake_rodata_800DC02C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC030_4 = 2.14748365e+09f;
const float unbake_rodata_800DC034_4 = 2.14748365e+09f;
const float unbake_rodata_800DC038_4 = 2.14748365e+09f;
const float unbake_rodata_800DC03C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC040_4 = 2.14748365e+09f;
const float unbake_rodata_800DC044_4 = 2.14748365e+09f;
const float unbake_rodata_800DC048_4 = 2.14748365e+09f;
const float unbake_rodata_800DC04C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC050_4 = 2.14748365e+09f;
const float unbake_rodata_800DC054_4 = 2.14748365e+09f;
const float unbake_rodata_800DC058_4 = 2.14748365e+09f;
const float unbake_rodata_800DC05C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC060_4 = 2.14748365e+09f;
const float unbake_rodata_800DC064_4 = 2.14748365e+09f;
const float unbake_rodata_800DC068_4 = 2.14748365e+09f;
const float unbake_rodata_800DC06C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC070_4 = 2.14748365e+09f;
const float unbake_rodata_800DC074_4 = 2.14748365e+09f;
const float unbake_rodata_800DC078_4 = 2.14748365e+09f;
const float unbake_rodata_800DC07C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC080_4 = 2.14748365e+09f;
const float unbake_rodata_800DC084_4 = 2.14748365e+09f;
const float unbake_rodata_800DC088_4 = 2.14748365e+09f;
const float unbake_rodata_800DC08C_4 = 2.14748365e+09f;
const float unbake_rodata_800DC090_4 = 2.14748365e+09f;
const float unbake_rodata_800DC094_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E10D0_4 = 1.0f;
const float unbake_rodata_800E10D4_4 = 0.5f;
const float unbake_rodata_800E10D8_4 = 1.0f;
const float unbake_rodata_800E10DC_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E1DE4_10[] = {0x80, 0x0D, 0x02, 0x10, 0x80, 0x0D, 0x4A, 0x7C, 0x80, 0x0D, 0xA3, 0x58, 0x80, 0x0D, 0xE1, 0x38};
const unsigned char unbake_rodata_800E1DF4_10[] = {0x80, 0x0D, 0x02, 0x30, 0x80, 0x0D, 0x4A, 0x98, 0x80, 0x0D, 0xA3, 0xA0, 0x80, 0x0D, 0xE1, 0x84};
const unsigned char unbake_rodata_800E1E04_10[] = {0x80, 0x0D, 0x02, 0x64, 0x80, 0x0D, 0x4A, 0xD0, 0x80, 0x0D, 0xA3, 0xFC, 0x80, 0x0D, 0xE1, 0xD0};
const unsigned char unbake_rodata_800E1E14_10[] = {0x80, 0x0D, 0x02, 0x94, 0x80, 0x0D, 0x4A, 0xFC, 0x80, 0x0D, 0xA4, 0x38, 0x80, 0x0D, 0xE2, 0x00};
const unsigned char unbake_rodata_800E1E24_10[] = {0x80, 0x0D, 0x02, 0xC0, 0x80, 0x0D, 0x4B, 0x20, 0x80, 0x0D, 0xA4, 0x88, 0x80, 0x0D, 0xE2, 0x54};
const unsigned char unbake_rodata_800E1E34_10[] = {0x80, 0x0D, 0x02, 0xEC, 0x80, 0x0D, 0x4B, 0x44, 0x80, 0x0D, 0xA4, 0xD4, 0x80, 0x0D, 0xE2, 0xAC};
const unsigned char unbake_rodata_800E1E44_10[] = {0x80, 0x0D, 0x03, 0x18, 0x80, 0x0D, 0x4B, 0x68, 0x80, 0x0D, 0xA5, 0x28, 0x80, 0x0D, 0xE2, 0xF8};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DD82C_C[] = {0x80, 0x0D, 0x0B, 0x64, 0x80, 0x0D, 0x53, 0xF8, 0x80, 0x0D, 0xA0, 0x10};
const unsigned char unbake_rodata_800DD838_C[] = {0x80, 0x0D, 0x0B, 0x6C, 0x80, 0x0D, 0x54, 0x00, 0x80, 0x0D, 0xA0, 0x1C};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D41EB_1[] = {0x00};
const unsigned char unbake_rodata_800D41EC_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#endif
