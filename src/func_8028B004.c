#include "unbake_gbi.h"
#include "basetypes.h"

/* Draws a scene's object list inside a func_8026D980 and func_8026D9D0 pass: writes four G_MOVEWORD commands setting the words at 4, 0xC, 0x14 and 0x1C to 5, 5, 0xFFFB and 0xFFFB, then draws each object through func_80249E18 unless its flag 4 is set, in which case it is deferred to the scene's 64-entry late list. */

#include "basetypes.h"
#include "n64sdk.h"

typedef struct Object {
    char pad0[0x100];
    s32 flags;
} Object;

typedef struct Scene {
    char pad0[0xC50];
    Object *objects[128];
    s32 count;
    char padE54[0x10BC - 0xE54];
    s32 lateCount;
    Object *late[64];
} Scene;

extern Gfx *D_80110634;
extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern void func_80249E18(Object *object, void *camera);

void func_8028B004(Scene *scene, void *camera) {
    Object *object;
    s32 count;
    s32 i;
    s32 late;
    Object **objects;

    func_8026D980();
    count = scene->count;
    gSPMoveWord(D_80110634++, G_MW_CLIP, 4, 5);
    gSPMoveWord(D_80110634++, G_MW_CLIP, 12, 5);
    gSPMoveWord(D_80110634++, G_MW_CLIP, 20, 0xFFFB);
    gSPMoveWord(D_80110634++, G_MW_CLIP, 28, 0xFFFB);
    objects = scene->objects;
    for (i = 0; i < count; i++) {
        object = objects[i];
        if (object->flags & 4) {
            late = scene->lateCount;
            if (late != 64) {
                scene->late[late] = object;
                scene->lateCount = late + 1;
            }
        } else {
            func_80249E18(object, camera);
        }
    }
    func_8026D9D0();
}
