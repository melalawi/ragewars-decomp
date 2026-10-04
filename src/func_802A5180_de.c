#include "common/types.h"
#include "span_1000/code_8026D4F0.h"
#include "span_1000/code_802953FC.h"
#include "span_1000/code_802A31F4.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Draws the scene's ten particle lists unless the scene is in state 100: sets the render state and the shared particle texture D_800D14B0 (a 16x16 texture drawn in grey at alpha 200 through D_800D2E60), then for every particle inside the view box ending at D_801031F8 + 4 loads its matrix and draws the shared quad D_801469A0, while particles outside it are unlinked (func_80255ED8_de) and returned to the free list (func_80255D14_de); finally restores the render state through func_8026D8F8_de and func_80295FF4_de. */










extern Gfx *D_8010C574;
extern f32 D_800FF1F8;
extern char D_800CC260;
extern char D_800CDBF0_de;
extern char D_801428E0;
extern void func_80255ED8_de(void *list, Particle *particle);
extern void func_80255D14_de(void *list, Particle *particle);






void func_802A5180_de(Scene_func_802A5180_de *scene) {
    Particle *particle;
    Particle *next;
    f32 *max;
    ParticleList *list;
    f32 pos[3];
    s32 i;

    if (scene->state == 100) {
        return;
    }
    gDPPipeSync(D_8010C574++);
    gDPSetCycleType(D_8010C574++, G_CYC_2CYCLE);
    gDPSetTextureImage(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 1, (u32)&D_800CC260);
    gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
    gDPLoadSync(D_8010C574++);
    gDPLoadBlock(D_8010C574++, G_TX_LOADTILE, 0, 0, 127, 1024);
    gDPPipeSync(D_8010C574++);
    gDPSetTile(D_8010C574++, G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 0, 0, G_TX_CLAMP, 0, 0);
    gDPSetTileSize(D_8010C574++, G_TX_RENDERTILE, 0, 0, 60, 60);
    gDPSetPrimColor(D_8010C574++, 0, 0, 255, 255, 255, 200);
    gSPDisplayList(D_8010C574++, (u32)&D_800CDBF0_de);
    for (i = 0; i < 10; i++) {
        max = &((func_802077F4_S2 *)(&D_800FF1F8))->unk4;
        list = &scene->lists[i];
        particle = list->active;
        while (particle != 0) {
            Transform *transform = &particle->transform;

            next = particle->next;
            pos[0] = transform->position[0];
            pos[1] = transform->position[1];
            pos[2] = transform->position[2];
            if (!(pos[0] < max[0] && pos[1] < max[1] && pos[2] < max[2] && max[-3] <= pos[0] &&
                  max[-2] <= pos[1] && max[-1] <= pos[2])) {
                func_80255ED8_de(list, particle);
                func_80255D14_de(&scene->free, particle);
            } else {
                gSPMatrix(D_8010C574++, (u32)transform, G_MTX_LOAD);
                gSPVertex(D_8010C574++, (u32)&D_801428E0, 4, 0);
                gSP2Triangles(D_8010C574++, 0, 1, 2, 0, 2, 3, 0, 0);
            }
            particle = next;
        }
    }
    func_8026D8F8_de();
    func_80295FF4_de();
}
