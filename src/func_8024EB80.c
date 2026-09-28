/* Draws a static object through its cached display list, building the cache on first use: emits a branch placeholder, loads the object's model, builds its rotation (the shared D_8013B190 angle for type 8), scale and position raised by its height offset into the current matrix slot, draws the model with its material through func_8026DA4C and func_8024ED80 unless the type is 12, ends the list, patches the placeholder to skip past it and calls the cached list. The display list writes match only as block-scoped initialisers taking D_80110634++. */
#include "basetypes.h"

typedef struct Gfx {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Object {
    char pad0;
    s8 model;
    char pad2;
    s8 material;
    char pad4[4];
    Vec3f position;
    char pad14[4];
    s32 *type;
    char pad1C[0x68 - 0x1C];
    char matrices[4][0x40];
    char pad168[0x174 - 0x168];
    s32 angle;
    char pad178[0x194 - 0x178];
    f32 scale;
    f32 height;
    char pad19C[0x1A8 - 0x19C];
    char lights[0x1C];
    Gfx *cached;
} Object;

typedef struct Matrix {
    f32 m[4][4];
} Matrix;

extern Gfx *D_80110634;
extern s32 D_8013B190;
extern s32 D_800D297C;

extern void func_8026D8F8(void);
extern void func_80296FF8(void);
extern void **func_8024F6DC(Object *, s32);
extern void func_80273744(Matrix *, s32);
extern void func_802734EC(Matrix *, f32, f32, f32);
extern s32 func_802725BC(Vec3f *, f32);
extern void func_802734B8(Matrix *, f32, f32, f32);
extern void func_80273DDC(Matrix *);
extern void func_802702EC(Matrix *, char *);
extern void func_8026DA4C(void **, char *, s32, char *, void *, s32);
extern void func_8024ED80(Object *, void **);
extern void func_802536F4(s32, void **);

void func_8024EB80(Object *obj) {
    Matrix matrix;
    void **resource;
    Gfx *branch;
    s32 angle;

    func_8026D8F8();
    func_80296FF8();
    if (obj->cached != 0) {
        {
            Gfx *g = D_80110634++;
            g->words.w0 = 0xDE000000;
            g->words.w1 = (unsigned int)obj->cached;
        }
        return;
    }
    resource = func_8024F6DC(obj, obj->model);
    if (resource == 0) {
        return;
    }
    obj->cached = D_80110634;
    {
        Gfx *g = D_80110634++;
        g->words.w0 = 0xDE010000;
        g->words.w1 = 0;
    }
    if (*obj->type == 8) {
        angle = D_8013B190;
    } else {
        angle = obj->angle;
    }
    func_80273744(&matrix, angle);
    func_802734EC(&matrix, obj->scale, obj->scale, obj->scale);
    func_802725BC(&obj->position, 20000.0f);
    func_802734B8(&matrix, obj->position.x, obj->position.y + obj->height, obj->position.z);
    func_80273DDC(&matrix);
    func_802702EC(&matrix, obj->matrices[D_800D297C]);
    if (*obj->type != 12) {
        func_8026DA4C(resource, obj->matrices[D_800D297C], 0, obj->lights, 0, obj->material);
        func_8024ED80(obj, resource);
    }
    {
        Gfx *g = D_80110634++;
        g->words.w0 = 0xDF000000;
        g->words.w1 = 0;
    }
    branch = obj->cached++;
    branch->words.w0 = 0xDE010000;
    branch->words.w1 = (unsigned int)D_80110634;
    {
        Gfx *g = D_80110634++;
        g->words.w0 = 0xDE000000;
        g->words.w1 = (unsigned int)obj->cached;
    }
    func_802536F4(0, resource);
}
