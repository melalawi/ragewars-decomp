#include "common/types.h"
#include "span_1000/code_8024E6C8.h"
#include "span_1000/code_8026D4F0.h"
#include "span_1000/code_802953FC.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Draws a static object through its cached display list, building the cache on first use: emits a branch placeholder, loads the object's model, builds its rotation (the shared D_8013B190 angle for type 8), scale and position raised by its height offset into the current matrix slot, draws the model with its material through func_8026DA4C_de and func_8024ED90_de unless the type is 12, ends the list, patches the placeholder to skip past it and calls the cached list. The display list writes match only as block-scoped initialisers taking D_80110634++. */








extern Gfx *D_8010C574;

extern s32 D_800CD72C;



extern void **func_8024F6EC_de(Object_func_8024EB90_de *, s32);
extern void func_802736D4_de(Matrix_func_80213CF8_de *, s32);
extern void func_8027347C_de(Matrix_func_80213CF8_de *, f32, f32, f32);
extern s32 func_8027254C_de(Vec3 *, f32);
extern void func_80273448_de(Matrix_func_80213CF8_de *, f32, f32, f32);
extern void func_80273D6C_de(Matrix_func_80213CF8_de *);
extern void func_8027027C_de(Matrix_func_80213CF8_de *, char *);
extern void func_8026DA4C_de(void **, char *, s32, char *, void *, s32);
extern void func_8024ED90_de(Object_func_8024EB90_de *, void **);
extern void func_80253754_de(s32, void **);

void func_8024EB90_de(Object_func_8024EB90_de *obj) {
    Matrix_func_80213CF8_de matrix;
    void **resource;
    Gfx *branch;
    s32 angle;

    func_8026D8F8_de();
    func_80295FF4_de();
    if (obj->cached != 0) {
        gSPDisplayList(D_8010C574++, (unsigned int)obj->cached);
        return;
    }
    resource = func_8024F6EC_de(obj, obj->model);
    if (resource == 0) {
        return;
    }
    obj->cached = D_8010C574;
    gSPBranchList(D_8010C574++, 0);
    if (*obj->type == 8) {
        angle = D_801370D0;
    } else {
        angle = obj->angle;
    }
    func_802736D4_de(&matrix, angle);
    func_8027347C_de(&matrix, obj->scale, obj->scale, obj->scale);
    func_8027254C_de(&obj->position, 20000.0f);
    func_80273448_de(&matrix, obj->position.x, obj->position.y + obj->height, obj->position.z);
    func_80273D6C_de(&matrix);
    func_8027027C_de(&matrix, obj->matrices[D_800CD72C]);
    if (*obj->type != 12) {
        func_8026DA4C_de(resource, obj->matrices[D_800CD72C], 0, obj->lights, 0, obj->material);
        func_8024ED90_de(obj, resource);
    }
    gSPEndDisplayList(D_8010C574++);
    gSPBranchList(obj->cached++, (unsigned int)D_8010C574);
    gSPDisplayList(D_8010C574++, (unsigned int)obj->cached);
    func_80253754_de(0, resource);
}
