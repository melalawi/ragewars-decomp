#include "unbake_gbi.h"
#include "basetypes.h"

/* Draws every part of a model resource with one material when the frame's command buffer still has 3000 commands free and func_80269A80 accepts the material: loads the model matrix (or sets it as segment 1), applies the render mode unless it is -1, registers the resource, sets segment 2 to the given texture base or the model's own, sets the lighting on the first part and emits each part's display list. Adapted from func_8026DA4C with the material test moved ahead of the setup, the render mode added and the per-part test removed. */

#include "basetypes.h"
#include "n64sdk.h"

typedef struct Frame {
    char pad0[0x114];
    Gfx *commands;
} Frame;

extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern u32 D_800E28A4;
extern void func_80253B5C(s32 heap, void **resource);
extern void *func_8028FD94(void *table, s32 index);
extern s32 func_8026B504(s32 matrix, s32 lights, void *material);
extern s32 func_80269A80(void *material, s32 pass);
extern void func_8026925C(s32 mode);

void func_8026DF7C(void *shared, s32 mode, void **resource, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass) {
    void *header;
    void *base;
    void **parts;
    void *part;
    void *material;
    s32 count;
    s32 i;

    if (D_800E28A4 - ((u32)D_80110634 - (u32)D_8011FE80->commands) / sizeof(Gfx) < 3000) {
        return;
    }
    if (func_80269A80(shared, pass) == 0) {
        return;
    }
    if (segment != 0) gSPSegment(D_80110634++, 1, matrix) else gSPMatrix(D_80110634++, matrix, G_MTX_LOAD);
    if (mode != -1) {
        func_8026925C(mode);
    }
    func_80253B5C(0, resource);
    header = *resource;
    base = textures;
    if (base == 0) {
        base = func_8028FD94(header, 0);
    }
    gSPSegment(D_80110634++, 2, (unsigned int)base);
    parts = func_8028FD94(header, 2);
    count = *(s32 *)parts;
    for (i = 0; i < count; i++) {
        part = func_8028FD94(parts, i);
        material = func_8028FD94(part, 0);
        if (i == 0) {
            func_8026B504(matrix, lights, material);
        }
        {
            Gfx *cmd;
            void *list = func_8028FD94(part, 1);

            cmd = D_80110634++;
            gSPDisplayList(cmd, (unsigned int)list);
        }
    }
}
