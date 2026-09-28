#include "basetypes.h"

/* Sets the lighting for a model: when lighting toward the player is enabled and the model is flagged 0x8000, it aims the static light's direction D_800D1610 from the model's position at the current player and emits one light with it, returning 1; otherwise it emits the given light block, if any, and returns 0. */

typedef struct Gfx {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

extern Gfx *D_80110634;
extern s32 D_80110620;
extern f32 D_800C9758;
extern signed char D_800D1610[3];
extern char D_80145040;
extern void func_80270770(f32 *matrix, void *model);
extern void func_80273340(f32 *matrix, Vec3f *position);
extern char *func_8022A404(void *players);
extern void func_80271FD8(Vec3f *out, void *a, Vec3f *b);
extern void func_802720EC(Vec3f *v);

s32 func_8026B504(void *model, void *lights, s32 *flags) {
    Vec3f direction;
    Vec3f position;
    f32 matrix[4][4];

    if (D_80110620 != 0 && (*flags & 0x8000)) {
        func_80270770((f32 *)matrix, model);
        func_80273340((f32 *)matrix, &position);
        func_80271FD8(&direction, func_8022A404(&D_80145040) + 0x6E8, &position);
        func_802720EC(&direction);
        {
            Gfx *cmd;
            Gfx *light;
            Gfx *ambient;

            D_800D1610[0] = direction.x * D_800C9758;
            D_800D1610[1] = direction.y * D_800C9758;
            D_800D1610[2] = direction.z * D_800C9758;
            cmd = D_80110634++;
            cmd->words.w0 = 0xDB020000;
            cmd->words.w1 = 0x18;
            light = D_80110634++;
            light->words.w0 = 0xDC08060A;
            light->words.w1 = (unsigned int)(D_800D1610 - 8);
            ambient = D_80110634++;
            ambient->words.w0 = 0xDC08090A;
            ambient->words.w1 = (unsigned int)(D_800D1610 - 0x10);
        }
        return 1;
    }
    if (lights != 0) {
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB020000;
            cmd->words.w1 = 0x18;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDC08060A;
            cmd->words.w1 = (unsigned int)((char *)lights + 8);
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDC08090A;
            cmd->words.w1 = (unsigned int)lights;
        }
    }
    return 0;
}
