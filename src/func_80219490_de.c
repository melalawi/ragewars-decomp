#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "span_1000/code_8026D4F0.h"
#include "span_C76B0/data.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;
extern s32 D_8011BA00;
extern s32 D_800DE888_de;

extern s32 D_800C94E8_de;
extern s32 D_800CD72C;
extern char D_800CBC90;


extern void func_8026D914_de(s32 arg0);
extern void func_8026E378_de(s32 arg0, s32 arg1);

extern void func_80291BE8_de(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);
extern void func_80272CB0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80273A98_de(void *arg0, f32 arg1);
extern void func_802738C0_de(void *arg0, f32 arg1);
extern void func_80273448_de(char *object, f32 x, f32 y, f32 z);
extern void func_80273D6C_de(void *object);
extern void func_80272FBC_de(f32 *arg0, f32 *arg1);
extern void func_802735A8_de(void *arg0, s32 arg1, f32 arg2, f32 arg3);
extern void func_8027027C_de(void *arg0, void *arg1);
extern void func_80272898_de(void *arg0, void *arg1, void *arg2);
extern void func_8026DF30_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);







void func_80219490_de(char *object, char *camera) {
    f32 first[16];
    f32 second[16];
    s32 output[4];
    Gfx *command;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    char *matrix;

    func_8026D8F8_de();
    if (((func_80219490_S1 *)(object))->unk8 == 0 || ((func_80219490_S1 *)(object))->unkB4 == 0) {
        return;
    }

    func_8026D914_de(0xC0);
    func_8026E378_de(1, 0x20);

    command = D_8010C574++;
    gDPSetTexturePersp(command, G_TP_PERSP);
    command = D_8010C574++;
    gDPSetTextureFilter(command, G_TF_BILERP);
    func_8026D980_de();

    x = ((func_80219490_S2 *)(camera))->unk2A4;
    y = ((func_80219490_S2 *)(camera))->unk2A8;
    z = ((func_80219490_S2 *)(camera))->unk2A0 + y;
    w = ((func_80219490_S2 *)(camera))->unk29C + x;
    func_80291BE8_de(&D_8011BA00, (s32)x, (s32)w, (s32)y, (s32)z, 0);

    func_80272CB0_de(first, ((func_80219490_S1 *)(object))->unk90,
                   ((func_80219490_S1 *)(object))->unk94, ((func_80219490_S1 *)(object))->unk98);
    func_80273A98_de(first, ((func_80219490_S1 *)(object))->unkA0);
    func_802738C0_de(first, ((func_80219490_S1 *)(object))->unk9C);
    func_80273448_de((char *)first, ((func_80219490_S1 *)(object))->unkA8,
                   ((func_80219490_S1 *)(object))->unkAC, ((func_80219490_S1 *)(object))->unkB0);
    func_80273D6C_de(first);

    matrix = (char *)second;
    func_80272FBC_de(second, first);
    if (D_800DE888_de == 2) {
        func_802735A8_de(matrix, D_800C94E8_de, D_800C22D0_de, D_800C22D0_de);
    }
    {
        s32 offset = (D_800CD72C << 6) + 0x10;
        func_8027027C_de(matrix, object + offset);
    }
    func_80272898_de(first, object + 0xA8, output);
    {
        s32 offset = (D_800CD72C << 6) + 0x10;
        func_8026DF30_de(((func_80219490_S1 *)(object))->unk8, (s32)(object + offset),
                       (s32)&D_800CBC90, 0, -1);
    }
    func_8026D9D0_de();
    func_8026D914_de(0);
    func_8026E378_de(0, 0x20);
}
