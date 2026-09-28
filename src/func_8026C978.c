#include "basetypes.h"

/* Draws every part of a model resource with the shared material D_8013B2D8 when the frame's command buffer still has 3000 commands free and func_80269A80 accepts the material: sets the render mode, selects blend 2 through func_80268CE0, loads the model matrix (or sets it as segment 1), loads an optional two-light block, registers the resource, sets segment 2 to the given texture base or the model's own and emits each part's display list. Adapted from func_8026DF7C with the render mode, blend and light commands added and the per-part lighting call removed. */

typedef struct Gfx {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

typedef struct Frame {
    char pad0[0x114];
    Gfx *commands;
} Frame;

extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern u32 D_800E28A4;
extern char D_8013B2D8;
extern void func_80253B5C(s32 heap, void **resource);
extern void *func_8028FD94(void *table, s32 index);
extern s32 func_80269A80(void *material, s32 pass);
extern void func_80268CE0(s32 mode);

void func_8026C978(void **resource, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass) {
    void *header;
    void *base;
    void **parts;
    void *part;
    s32 count;
    s32 i;

    if (D_800E28A4 - ((u32)D_80110634 - (u32)D_8011FE80->commands) / sizeof(Gfx) < 3000) {
        return;
    }
    if (func_80269A80(&D_8013B2D8, pass) == 0) {
        return;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE200001C;
        cmd->words.w1 = 0x0C184F50;
    }
    func_80268CE0(2);
    if (segment != 0) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDB060004;
        cmd->words.w1 = matrix;
    } else {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDA380003;
        cmd->words.w1 = matrix;
    }
    if (lights != 0) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDB020000;
        cmd->words.w1 = 0x18;
        cmd = D_80110634++;
        cmd->words.w0 = 0xDC08060A;
        cmd->words.w1 = lights + 8;
        cmd = D_80110634++;
        cmd->words.w0 = 0xDC08090A;
        cmd->words.w1 = lights;
    }
    func_80253B5C(0, resource);
    header = *resource;
    base = textures;
    if (base == 0) {
        base = func_8028FD94(header, 0);
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDB060008;
        cmd->words.w1 = (unsigned int)base;
    }
    parts = func_8028FD94(header, 2);
    count = *(s32 *)parts;
    for (i = 0; i < count; i++) {
        part = func_8028FD94(parts, i);
        func_8028FD94(part, 0);
        {
            Gfx *cmd;
            void *list = func_8028FD94(part, 1);

            cmd = D_80110634++;
            cmd->words.w0 = 0xDE000000;
            cmd->words.w1 = (unsigned int)list;
        }
    }
}
