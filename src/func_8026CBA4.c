#include "unbake_gbi.h"
#include "basetypes.h"

/* Draws every part of a model resource with the shared material D_8013B348 when the frame's command buffer still has 3000 commands free and func_80269A80 accepts the material: prepares through func_802A11E8, flags the material 0x20 and sets D_800D15E0, sets the render mode, loads the model matrix (or sets it as segment 1), loads an optional two-light block, registers the resource, sets segment 2 to the given texture base or the model's own and emits each part's display list, skipping parts whose material blend bits are all set unless the owner's 0x122C flag 0x400 is set. Adapted from func_8026C978 with the preparation and flag stores added, the blend call removed and the per-part owner test added. */

#include "basetypes.h"
#include "n64sdk.h"

typedef struct Frame {
    char pad0[0x114];
    Gfx *commands;
} Frame;

extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern u32 D_800E28A4;
extern s32 D_8013B348;
extern s32 D_800D15E0;
extern void func_802A11E8(void);
extern void func_80253B5C(s32 heap, void **resource);
extern void *func_8028FD94(void *table, s32 index);
extern s32 func_80269A80(void *material, s32 pass);

typedef struct { u8 pad[6]; u8 flags; } Material;

typedef struct func_8026CBA4_S1 func_8026CBA4_S1;
struct func_8026CBA4_S1 {
    char pad0[0x122C];
    s32 unk122C;
};

void func_8026CBA4(void **resource, void *owner, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass) {
    void *header;
    void *base;
    void **parts;
    void *part;
    void *material;
    s32 count;
    s32 i;
    s32 *shared;
    Gfx **start;
    u32 used;

    func_802A11E8();
    start = &D_8011FE80->commands;
    shared = &D_8013B348;
    *shared |= 0x20;
    used = (u32)D_80110634 - (u32)*start;
    D_800D15E0 = 1;
    if (D_800E28A4 - used / sizeof(Gfx) < 3000) {
        return;
    }
    if (func_80269A80(shared, pass) == 0) {
        return;
    }
    gDPSetRenderMode(D_80110634++, 0x0C184DD8, 0);
    if (segment != 0) gSPSegment(D_80110634++, 1, matrix) else gSPMatrix(D_80110634++, matrix, G_MTX_LOAD);
    if (lights != 0) {
        Gfx *cmd = D_80110634++;
        gSPMoveWord(cmd, G_MW_NUMLIGHT, 0, 0x18);
        cmd = D_80110634++;
        gSPMoveMem(cmd, G_MV_LIGHT, 48, 16, lights + 8);
        cmd = D_80110634++;
        gSPMoveMem(cmd, G_MV_LIGHT, 72, 16, lights);
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
        if ((((Material *)material)->flags & 0x38) != 0x38 || (((func_8026CBA4_S1 *)(owner))->unk122C & 0x400)) {
            Gfx *cmd;
            void *list = func_8028FD94(part, 1);

            cmd = D_80110634++;
            gSPDisplayList(cmd, (unsigned int)list);
        }
    }
}
