#include "unbake_gbi.h"
#include "basetypes.h"

/* Draws a scene through cached display lists: loads the scene if needed (returning if that fails), calls the model's base list, and on first use records two lists in the frame's command stream, one for objects without flag 4 and one for objects with it, each drawn through func_80250458 inside a func_8026D980 pass and preceded by a branch past its end; finally calls the first cached list. */

#include "basetypes.h"
#include "n64sdk.h"

typedef struct Object {
    char pad0[0xD8];
    u16 flags;
} Object;

typedef struct Scene {
    char pad0[0x88];
    void *model;
    char pad8C[0xF8 - 0x8C];
    s32 loaded;
    char padFC[0x120 - 0xFC];
    Gfx *lists[2];
} Scene;

extern Gfx *D_80110634;
extern void func_802538A8(s32 heap);
extern void func_80288908(Scene *scene);
extern void *func_8028FD94(void *table, s32 index);
extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern void func_80250458(Object *object, void *camera);

void func_80288E78(Scene *scene, void *camera) {
    Object **objects;
    Object *object;
    Gfx *branch;
    s32 pass;

    if (scene->loaded == 0) {
        func_802538A8(0);
        func_80288908(scene);
        if (scene->loaded == 0) {
            return;
        }
    }
    gSPDisplayList(D_80110634++, (unsigned int)func_8028FD94(scene->model, 2));
    if (scene->lists[0] == 0) {
        for (pass = 0; pass < 2; pass++) {
            scene->lists[pass] = D_80110634;
            gSPBranchList(D_80110634++, 0);
            func_8026D980();
            objects = func_8028FD94(scene->model, 1);
            while (*objects != 0) {
                object = *objects++;
                switch (pass) {
                case 0:
                    if (!(object->flags & 4)) {
                        func_80250458(object, camera);
                    }
                    break;
                case 1:
                    if (object->flags & 4) {
                        func_80250458(object, camera);
                    }
                    break;
                }
            }
            func_8026D9D0();
            gSPEndDisplayList(D_80110634++);
            gSPBranchList(scene->lists[pass]++, (unsigned int)D_80110634);
        }
    }
    gSPDisplayList(D_80110634++, (unsigned int)scene->lists[0]);
}
