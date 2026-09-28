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
