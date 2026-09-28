/* Draws the parts of a model resource that the owner has enabled, when the frame command buffer still has 3000 commands free: each part material's low two bits of byte 6 pick an owner flag at 0x102 (0x100, 0x8 or 0x2, 0x80 or 0x20 by bit 4) that must be set before func_80269A80 accepts the material and its display list is emitted. Adapted from func_8026DA4C with the owner argument and the per-material flag switch added. */
#include "basetypes.h"

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

typedef struct Owner {
    char pad0[0x102];
    unsigned short flags;
} Owner;

void func_8026B9EC(void **resource, Owner *owner, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass) {
    void *header;
    void *base;
    void **parts;
    void *part;
    void *material;
    s32 count;
    s32 i;
    s32 visible;

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
        visible = 1;
        switch (((unsigned char *)material)[6] & 3) {
        case 2:
            if (!(((unsigned char *)material)[6] & 4)) {
                if (!(owner->flags & 8)) {
                    visible = 0;
                }
            } else {
                if (!(owner->flags & 2)) {
                    visible = 0;
                }
            }
            break;
        case 3:
            if (!(((unsigned char *)material)[6] & 4)) {
                if (!(owner->flags & 0x80)) {
                    visible = 0;
                }
            } else {
                if (!(owner->flags & 0x20)) {
                    visible = 0;
                }
            }
            break;
        case 1:
            if (!(owner->flags & 0x100)) {
                visible = 0;
            }
            break;
        }
        if (visible && func_80269A80(material, pass) != 0) {
            Gfx *cmd;
            void *list = func_8028FD94(part, 1);

            cmd = D_80110634++;
            cmd->words.w0 = 0xDE000000;
            cmd->words.w1 = (unsigned int)list;
        }
    }
}
