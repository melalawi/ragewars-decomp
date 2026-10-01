#include "unbake_gbi.h"
/* Loads the scene's point lights into the display list: with no light in D_8013B1A8 it clears geometry mode bit 0x80, otherwise it sets it and fills eight light slots from the light list, transforming each active light's position into the view, storing its negated view direction, its colour scaled by its intensity, its falloff and a fixed range, marking unused slots off, and emits the light-move command for each slot, then advances the light buffer. The first direction component is truncated into a local before negating. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

typedef struct UnitLight {
    s16 dir[3];
    u8 color[4];
    s16 falloff;
    u16 near;
    u16 range;
} UnitLight;

typedef struct LightData {
    u16 falloff;
    u16 near;
    u8 color[4];
} LightData;

typedef struct LightNode {
    char pad0[8];
    LightData *data;
    f32 intensity;
    s16 position[3];
    s16 active;
} LightNode;

extern Gfx *D_80110634;
extern s32 D_80110560;
extern UnitLight D_80110160[];
extern char D_8013B1A8;

extern LightNode *func_80268CBC(void *);
extern LightNode *func_80268CC8(void *, LightNode *);
extern void func_80272908(char *, f32 *, f32 *);

void func_80265A00(char *view) {
    LightNode *node;
    LightData *data;
    f32 position[4];
    f32 out[4];
    s32 i;
    s32 x;

    node = func_80268CBC(&D_8013B1A8);
    if (node == 0) {
        Gfx *g = D_80110634++;
        gSPGeometryMode(g, 0x80, 0);
        D_80110560 += 8;
        return;
    }
    gSPGeometryMode(D_80110634++, 0, 0x80);
    for (i = 0; i < 8; i++) {
        if (node != 0 && node->active != 0) {
            data = node->data;
            position[0] = node->position[0];
            position[1] = node->position[1];
            position[2] = node->position[2];
            func_80272908(view + 0x220, position, out);
            x = out[0];
            D_80110160[i + D_80110560].dir[0] = -x;
            D_80110160[i + D_80110560].dir[1] = out[1];
            D_80110160[i + D_80110560].dir[2] = -(s32)out[2];
            D_80110160[i + D_80110560].color[3] = data->color[3] * node->intensity;
            D_80110160[i + D_80110560].color[2] = data->color[0] * node->intensity;
            D_80110160[i + D_80110560].color[1] = data->color[1] * node->intensity;
            D_80110160[i + D_80110560].color[0] = data->color[2] * node->intensity;
            D_80110160[i + D_80110560].falloff = data->falloff;
            D_80110160[i + D_80110560].near = data->near;
            D_80110160[i + D_80110560].range = 0x7F80;
        } else {
            D_80110160[i + D_80110560].falloff = -0x8000;
        }
        if (node != 0) {
            node = func_80268CC8(&D_8013B1A8, node);
        }
        {
            Gfx *g = D_80110634++;
            g->words.w0 = 0xDC08000A | (((i + 1) * 2 + 10) & 0xFF) << 8;
            g->words.w1 = (unsigned int)&D_80110160[i + D_80110560];
        }
    }
    D_80110560 += 8;
}
