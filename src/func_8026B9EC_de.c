#include "span_1000/code_8026AC38.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "abi.h"
#include "common/unused.h"
#include "gfx.h"
#include "span_1000/code_8026AC38.h"
#include "types.h"
#include "gbi.h"
/* Draws the parts of a model resource that the owner has enabled, when the frame command buffer still has 3000 commands free: each part material's low two bits of byte 6 pick an owner flag at 0x102 (0x100, 0x8 or 0x2, 0x80 or 0x20 by bit 4) that must be set before func_80269A80_de accepts the material and its display list is emitted. Adapted from func_8026DA4C_de with the owner argument and the per-material flag switch added. */

#include "n64sdk.h"



extern Gfx *D_8010C574;
extern struct Frame118 *D_8011BDC0;
extern u32 D_800DE854_de;
extern void func_80253BBC_de(s32 heap, void **resource);
extern void *func_8028FDB4_de(void *table, s32 index);
extern s32 func_8026B504_de(s32 matrix, s32 lights, void *material);
extern s32 func_80269A80_de(void *material, s32 pass);



void func_8026B9EC_de(void **resource, struct Owner104 *owner, s32 matrix, s32 segment, s32 lights, void *textures, s32 pass) {
    void *header;
    void *base;
    void **parts;
    void *part;
    void *material;
    s32 count;
    s32 i;
    s32 visible;

    if (D_800DE854_de - ((u32)D_8010C574 - (u32)D_8011BDC0->commands) / sizeof(Gfx) < 3000) {
        return;
    }
    header = *resource;
    func_80253BBC_de(0, resource);
    if (segment != 0) { gSPSegment(D_8010C574++, 1, matrix); }
    else { gSPMatrix(D_8010C574++, matrix, G_MTX_LOAD); }
    base = textures;
    if (base == 0) {
        base = func_8028FDB4_de(header, 0);
    }
    gSPSegment(D_8010C574++, 2, (unsigned int)base);
    parts = func_8028FDB4_de(header, 2);
    count = *(s32 *)parts;
    for (i = 0; i < count; i++) {
        part = func_8028FDB4_de(parts, i);
        material = func_8028FDB4_de(part, 0);
        if (i == 0) {
            func_8026B504_de(matrix, lights, material);
        }
        visible = 1;
        switch (((struct Material *)material)->flags & 3) {
        case 2:
            if (!(((struct Material *)material)->flags & 4)) {
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
            if (!(((struct Material *)material)->flags & 4)) {
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
        if (visible && func_80269A80_de(material, pass) != 0) {
            Gfx *cmd;
            void *list = func_8028FDB4_de(part, 1);

            cmd = D_8010C574++;
            gSPDisplayList(cmd, (unsigned int)list);
        }
    }
}

