#include "basetypes.h"

/* Draws the parts of a model resource tinted by an RGBA colour through the shared material D_8013B2D8: sets the tint mode D_800D15E0 to 3, clears the material's fog colour and sets its flags, records the colour as floats and its alpha on the material, advances the pass modulo 18, and when the frame's command buffer still has 3000 commands free and func_80269A80 accepts the material sets the render mode, selects blend 1, registers the resource, loads the matrix (or sets it as segment 1), sets segment 2 to the given texture base or the model's own, sets the lighting on the first part and emits each part whose material blend bits are all set and accepted for the pass, clearing the tint mode afterwards. Adapted from func_8026DD50 with the tint setup, the render mode and blend commands and the trailing clear added. */

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

typedef struct Material {
    s32 flags;
    char pad4[0xC];
    u8 color[4];
    u8 fog[4];
} Material;

extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern u32 D_800E28A4;
extern Material D_8013B2D8;
extern s32 D_800D15E0;
extern f32 D_800D15E4[4];
extern void func_80253B5C(s32 heap, void **resource);
extern void *func_8028FD94(void *table, s32 index);
extern s32 func_8026B504(s32 matrix, s32 lights, void *material);
extern s32 func_80269A80(void *material, s32 pass);
extern void func_80268CE0(s32 mode);

void func_8026D4F0(void **resource, s32 unused, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass, u8 r, u8 g, u8 b, u8 a) {
    void *header;
    void *base;
    void **parts;
    void *part;
    void *material;
    s32 count;
    s32 i;
    Material *shared;
    f32 *tint;

    shared = &D_8013B2D8;
    D_800D15E0 = 3;
    shared->fog[0] = 0;
    shared->fog[1] = 0;
    shared->fog[2] = 0;
    shared->flags |= 0x1402;
    tint = D_800D15E4;
    tint[0] = r;
    tint[1] = g;
    tint[2] = b;
    tint[3] = a;
    shared->fog[3] = a;
    pass = (pass + 1) % 18;
    if (D_800E28A4 - ((u32)D_80110634 - (u32)D_8011FE80->commands) / sizeof(Gfx) < 3000) {
        return;
    }
    if (func_80269A80(shared, pass) != 0) {
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xE200001C;
            cmd->words.w1 = 0x0C184DD8;
        }
        func_80268CE0(1);
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
    D_800D15E0 = 0;
}
