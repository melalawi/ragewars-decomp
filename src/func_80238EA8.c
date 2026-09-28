/* Clears effect state and initializes its scalar, vector and resource defaults. */
#include "basetypes.h"
typedef struct {f32 unk0,unk4,unk8;} Vec;
typedef struct {s32 unk0,unk4,unk8,unkC,unk10,unk14,unk18,unk1C; union {s32 i; f32 f;} unk20; Vec v; f32 unk30; s32 unk34; f32 unk38,unk3C; s32 unk40;} State;
extern s32 D_800D2B40[];
extern f32 D_800C8608[];
void func_80238EA8(State *arg0) {
    f32 temp_f0;
    Vec *temp_v0;

    arg0->unk20.i = 0;
    temp_f0 = arg0->unk20.f;
    arg0->unk0 = 1;
    temp_v0 = &arg0->v;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    temp_v0->unk8 = temp_f0;
    temp_v0->unk4 = temp_f0;
    arg0->v.unk0 = temp_f0;
    arg0->unk30 = 1.0f;
    arg0->unk34 = 0;
    arg0->unk38 = temp_f0;
    arg0->unk3C = 0.174532949924469f;
    arg0->unk40 = (s32) *D_800D2B40;
}
