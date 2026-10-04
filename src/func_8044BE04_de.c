#include "span_16E000/code_80449968.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Loads a scene's light into the global light D_800D0EE0: copies the ambient and directional colours from the scene's light settings (bytes 0xD and 0xA) into both colour copies and the direction bytes from 0x11, then scales the direction to D_800CA1F0 in length through func_802B72B0_de and func_80271F9C_de and stores it as shorts at 0x1B2B4 of the scene. */




extern u8 D_800CBC90[];
extern u8 D_800CBC94[];
extern u8 D_800CBC9C[];
extern u8 D_800CBCA0[];


extern f32 func_802B72B0_de(f32);
extern void func_80271F9C_de(f32 *, f32 *, f32);

void func_8044BE04_de(Scene_func_8044BE04_de *scene) {
    s32 i;
    u8 c;
    f32 v[3];
    f32 length;
    u8 *light;

    for (i = 0; i < 3; i++) {
        c = scene->light->ambient[i];
        light = D_800CBC90;
        light[i] = c;
        D_800CBC94[i] = c;
        c = scene->light->color[i];
        light[i + 8] = c;
        D_800CBC9C[i] = c;
        D_800CBCA0[i] = scene->light->dir[i];
    }
    v[0] = scene->light->dir[0];
    v[1] = scene->light->dir[1];
    v[2] = scene->light->dir[2];
    length = func_802B72B0_de(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    if (length != 0.0f) {
        func_80271F9C_de(v, v, D_800C5100_de / length);
        scene->dir[0] = v[0];
        scene->dir[1] = v[1];
        scene->dir[2] = v[2];
    }
}
