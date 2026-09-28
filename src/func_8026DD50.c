#include "basetypes.h"

/* Draws the parts of a model resource whose material has all of bits 0x38 set in its sixth byte, when the frame's command buffer still has 3000 commands free: registers the resource, loads the model matrix (or sets it as segment 1 when asked), sets segment 2 to the given texture base or the model's own, sets the lighting on the first part, and emits each qualifying part's display list when func_80269A80 accepts its material. Adapted from func_8026DA4C with an unused leading argument and the material bit test added. */

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
extern void func_80253B5C(s32 heap, void **resource);
extern void *func_8028FD94(void *table, s32 index);
extern s32 func_8026B504(s32 matrix, s32 lights, void *material);
extern s32 func_80269A80(void *material, s32 pass);

void func_8026DD50(void **resource, s32 unused, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass) {
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
    header = *resource;
    func_80253B5C(0, resource);
    if (segment != 0) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDB060004;
        cmd->words.w1 = matrix;
    } else {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDA380003;
        cmd->words.w1 = matrix;
    }
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
        material = func_8028FD94(part, 0);
        if (i == 0) {
            func_8026B504(matrix, lights, material);
        }
        if ((((unsigned char *)material)[6] & 0x38) == 0x38 && func_80269A80(material, pass) != 0) {
            Gfx *cmd;
            void *list = func_8028FD94(part, 1);

            cmd = D_80110634++;
            cmd->words.w0 = 0xDE000000;
            cmd->words.w1 = (unsigned int)list;
        }
    }
}
