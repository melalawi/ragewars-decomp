#include "basetypes.h"

/* Loads a scene's light into the global light D_800D0EE0: copies the ambient and directional colours from the scene's light settings (bytes 0xD and 0xA) into both colour copies and the direction bytes from 0x11, then scales the direction to D_800CA1F0 in length through func_802BC380 and func_8027200C and stores it as shorts at 0x1B2B4 of the scene. */
typedef struct {
    char pad0[0xA];
    u8 color[3];
    u8 ambient[3];
    char pad10;
    signed char dir[3];
} LightSettings;

typedef struct {
    char pad0[0x1B2B0];
    LightSettings *light;
    s16 dir[3];
} Scene;

extern u8 D_800D0EE0[];
extern u8 D_800D0EE4[];
extern u8 D_800D0EEC[];
extern u8 D_800D0EF0[];
extern f32 D_800CA1F0;

extern f32 func_802BC380(f32);
extern void func_8027200C(f32 *, f32 *, f32);

void func_8044CA54(Scene *scene) {
    s32 i;
    u8 c;
    f32 v[3];
    f32 length;
    u8 *light;

    for (i = 0; i < 3; i++) {
        c = scene->light->ambient[i];
        light = D_800D0EE0;
        light[i] = c;
        D_800D0EE4[i] = c;
        c = scene->light->color[i];
        light[i + 8] = c;
        D_800D0EEC[i] = c;
        D_800D0EF0[i] = scene->light->dir[i];
    }
    v[0] = scene->light->dir[0];
    v[1] = scene->light->dir[1];
    v[2] = scene->light->dir[2];
    length = func_802BC380(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    if (length != 0.0f) {
        func_8027200C(v, v, D_800CA1F0 / length);
        scene->dir[0] = v[0];
        scene->dir[1] = v[1];
        scene->dir[2] = v[2];
    }
}
