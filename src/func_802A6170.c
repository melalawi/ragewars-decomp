/* Draws the scene's ten particle lists unless the scene is in state 100: sets the render state and the shared particle texture D_800D14B0 (a 16x16 texture drawn in grey at alpha 200 through D_800D2E60), then for every particle inside the view box ending at D_801031F8 + 4 loads its matrix and draws the shared quad D_801469A0, while particles outside it are unlinked (func_80255E78) and returned to the free list (func_80255CB4); finally restores the render state through func_8026D8F8 and func_80296FF8. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

typedef struct {
    char pad0[0x18];
    s16 position[3];
} Transform;

typedef struct Particle {
    char pad0[4];
    struct Particle *next;
    Transform transform;
} Particle;

typedef struct {
    Particle *active;
    char pad4[0x10];
} ParticleList;

typedef struct {
    char pad0[0x94E0];
    ParticleList lists[10];
    char pad95A8[0x95A8 - 0x94E0 - 10 * 0x14];
    Particle *free;
    char pad95AC[0x95B8 - 0x95AC];
    s32 state;
} Scene;

extern Gfx *D_80110634;
extern f32 D_801031F8;
extern char D_800D14B0;
extern char D_800D2E60;
extern char D_801469A0;
extern void func_80255E78(void *list, Particle *particle);
extern void func_80255CB4(void *list, Particle *particle);
extern void func_8026D8F8(void);
extern void func_80296FF8(void);

typedef struct func_802A6170_S1 func_802A6170_S1;
struct func_802A6170_S1 {
    char pad0[0x4];
    f32 unk4;
};

void func_802A6170(Scene *scene) {
    Particle *particle;
    Particle *next;
    f32 *max;
    ParticleList *list;
    f32 pos[3];
    s32 i;

    if (scene->state == 100) {
        return;
    }
    { Gfx *g = D_80110634++; g->w0 = 0xE7000000; g->w1 = 0; }
    { Gfx *g = D_80110634++; g->w0 = 0xE3000A01; g->w1 = 0x100000; }
    { Gfx *g = D_80110634++; g->w0 = 0xFD900000; g->w1 = (u32)&D_800D14B0; }
    { Gfx *g = D_80110634++; g->w0 = 0xF5900000; g->w1 = 0x07080200; }
    { Gfx *g = D_80110634++; g->w0 = 0xE6000000; g->w1 = 0; }
    { Gfx *g = D_80110634++; g->w0 = 0xF3000000; g->w1 = 0x0707F400; }
    { Gfx *g = D_80110634++; g->w0 = 0xE7000000; g->w1 = 0; }
    { Gfx *g = D_80110634++; g->w0 = 0xF5880400; g->w1 = 0x00080200; }
    { Gfx *g = D_80110634++; g->w0 = 0xF2000000; g->w1 = 0x0003C03C; }
    { Gfx *g = D_80110634++; g->w0 = 0xFA000000; g->w1 = 0xFFFFFFC8; }
    { Gfx *g = D_80110634++; g->w0 = 0xDE000000; g->w1 = (u32)&D_800D2E60; }
    for (i = 0; i < 10; i++) {
        max = &((func_802A6170_S1 *)(&D_801031F8))->unk4;
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
                func_80255E78(list, particle);
                func_80255CB4(&scene->free, particle);
            } else {
                { Gfx *g = D_80110634++; g->w0 = 0xDA380003; g->w1 = (u32)transform; }
                { Gfx *g = D_80110634++; g->w0 = 0x01004008; g->w1 = (u32)&D_801469A0; }
                { Gfx *g = D_80110634++; g->w0 = 0x06000204; g->w1 = 0x00040600; }
            }
            particle = next;
        }
    }
    func_8026D8F8();
    func_80296FF8();
}
