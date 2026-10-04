#include "span_1000/code_8026D4F0.h"
#include "span_1000/code_80286050.h"
#include "span_1000/types.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"



/* Draws a scene's object list inside a func_8026D980_de and func_8026D9D0_de pass: writes four G_MOVEWORD commands setting the words at 4, 0xC, 0x14 and 0x1C to 5, 5, 0xFFFB and 0xFFFB, then draws each object through func_80249E28_de unless its flag 4 is set, in which case it is deferred to the scene's 64-entry late list. */






extern Gfx *D_8010C574;


extern void func_80249E28_de(func_80203C40_S1 *object, void *camera);

void func_8028B028_de(Scene_func_8028B028_de *scene, void *camera) {
    func_80203C40_S1 *object;
    s32 count;
    s32 i;
    s32 late;
    func_80203C40_S1 **objects;

    func_8026D980_de();
    count = scene->count;
    gSPMoveWord(D_8010C574++, G_MW_CLIP, 4, 5);
    gSPMoveWord(D_8010C574++, G_MW_CLIP, 12, 5);
    gSPMoveWord(D_8010C574++, G_MW_CLIP, 20, 0xFFFB);
    gSPMoveWord(D_8010C574++, G_MW_CLIP, 28, 0xFFFB);
    objects = scene->objects;
    for (i = 0; i < count; i++) {
        object = objects[i];
        if (object->unk100 & 4) {
            late = scene->lateCount;
            if (late != 64) {
                scene->late[late] = object;
                scene->lateCount = late + 1;
            }
        } else {
            func_80249E28_de(object, camera);
        }
    }
    func_8026D9D0_de();
}
