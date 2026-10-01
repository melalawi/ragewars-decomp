#ifndef SHARED_MATERIAL_RENDERER_H
#define SHARED_MATERIAL_RENDERER_H

#include "basetypes.h"

/* Model material prefix already used in src/func_8026D4F0.c:17.
 * func_80269A80 additionally reads the texture handle and texture dimensions,
 * and updates the animation tick byte at +7. */
typedef struct Shared_RenderMaterial Shared_RenderMaterial;
struct Shared_RenderMaterial {
    u32 flags; /* +0x0: src/func_8026C020.c:4, src/func_8026D4F0.c:18 */
    u8 pad4[3];
    u8 frame; /* +0x7: src/func_80269A80.c */
    u32 texture; /* +0x8: address of the two-word handle passed to func_80296EC4 */
    u8 padC[4];
    u8 color[4]; /* +0x10: src/func_8026D4F0.c:20 */
    u8 fog[4]; /* +0x14: src/func_8026D4F0.c:21, src/func_8026C020.c:43 */
    u16 width; /* +0x18: src/func_80269A80.c */
    u16 height; /* +0x1A: src/func_80269A80.c */
};
typedef char Shared_RenderMaterial_size_check[(sizeof(Shared_RenderMaterial) == 0x1C) ? 1 : -1];

#endif
