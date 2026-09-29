/* Initializes camera transforms, viewport state, clipping records, and resource lists. */
#include "basetypes.h"
typedef struct { char pad0[12]; f32 unkC; f32 unk10; char pad14[104]; s32 unk7C; char pad80[116]; f32 unkF4; f32 unkF8; char padFC[36]; s32 unk120; s16 unk124; s16 unk126; char pad128[24]; f32 unk140; char pad144[8]; f32 unk14C; char pad150[332]; f32 unk29C; f32 unk2A0; f32 unk2A4; f32 unk2A8; char pad2AC[4]; s16 unk2B0; s16 unk2B2; s16 unk2B4; s16 unk2B6; s16 unk2B8; s16 unk2BA; s16 unk2BC; s16 unk2BE; char pad2C0[600]; s32 unk518; f32 unk51C; u8 unk520; u8 unk521; u8 unk522; u8 unk523; u8 unk524; u8 unk525; u8 unk526; u8 unk527; f32 unk528; f32 unk52C; f32 unk530; f32 unk534; char pad538[4]; s32 unk53C; s32 unk540; s32 unk544; u8 unk548; } State;
typedef struct { f32 unk0,unk4,unk8,unkC,unk10,unk14; } Floats; typedef struct { s32 unk0,unk4; } Pair;
void func_80238EA8(void *);                               /* extern */
void func_802390E4(void *, s32);                         /* extern */
void func_802393C8(void *);                            /* extern */
void func_80239C10(void *);                            /* extern */
void func_80255C40(void *, s32, s32);                      /* extern */
void func_80272848(void *);                            /* extern */
void func_804426B4(void *);                    /* extern */


extern s32 D_800E28D0, D_800E28D4;
extern Pair D_80103220;

typedef struct func_8044ADC0_S1 func_8044ADC0_S1;
typedef struct func_8044ADC0_S2 func_8044ADC0_S2;
struct func_8044ADC0_S1 {
    char pad0[0x24];
    u8 unk24;
    char pad24[0xA0 - 0x24 - sizeof(u8)];
    u8 unkA0;
    char padA0[0xB8 - 0xA0 - sizeof(u8)];
    u8 unkB8;
    char padB8[0xCC - 0xB8 - sizeof(u8)];
    u8 unkCC;
    char padCC[0xE0 - 0xCC - sizeof(u8)];
    u8 unkE0;
    char padE0[0x140 - 0xE0 - sizeof(u8)];
    u8 unk140;
    char pad140[0x160 - 0x140 - sizeof(u8)];
    u8 unk160;
    char pad160[0x1A0 - 0x160 - sizeof(u8)];
    u8 unk1A0;
    char pad1A0[0x1E0 - 0x1A0 - sizeof(u8)];
    u8 unk1E0;
    char pad1E0[0x554 - 0x1E0 - sizeof(u8)];
    u8 unk554;
    char pad554[0xE40 - 0x554 - sizeof(u8)];
    u8 unkE40;
    char padE40[0xE54 - 0xE40 - sizeof(u8)];
    u8 unkE54;
    char padE54[0xE94 - 0xE54 - sizeof(u8)];
    u8 unkE94;
};
struct func_8044ADC0_S2 {
    char pad0[0x10];
    State unk10;
};

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24], gap at: 0x18. */
void func_8044ADC0(State *arg0) {
    f32 temp_f21;
    f32 zero;
    s16 temp_a0;
    s32 var_a1;
    Floats *temp_v0;
    Floats *temp_v0_2;
    Floats *temp_v0_3;
    Floats *temp_v0_4;
    Floats *temp_v0_5;
    State *var_v1;
    State *record;
    typedef struct { u8 bytes[16]; } ClipStride;

    func_80238EA8(((void *)&((func_8044ADC0_S1 *)(arg0))->unk24));
    func_80272848(((void *)&((func_8044ADC0_S1 *)(arg0))->unk160));
    func_80272848(((void *)&((func_8044ADC0_S1 *)(arg0))->unk1E0));
    zero = 0.0f;
    temp_f21 = 1.0f;
    temp_v0 = ((void *)&((func_8044ADC0_S1 *)(arg0))->unk140);
    temp_v0->unk8 = zero;
    temp_v0->unk4 = zero;
    arg0->unk140 = zero;
    arg0->unk14C = temp_f21;
    func_80272848(((void *)&((func_8044ADC0_S1 *)(arg0))->unk1A0));
    arg0->unk29C = (f32) D_800E28D0;
    arg0->unk2A0 = (f32) D_800E28D4;
    arg0->unk518 = -1;
    arg0->unk2A4 = zero;
    arg0->unk2A8 = zero;
    arg0->unk520 = 0;
    arg0->unk524 = 0;
    arg0->unk521 = 0;
    arg0->unk525 = 0;
    arg0->unk522 = 0;
    arg0->unk526 = 0;
    arg0->unk523 = 0;
    arg0->unk527 = 0;
    arg0->unk51C = temp_f21;
    arg0->unk53C = 0x3E3;
    arg0->unk540 = 0x3E3;
    arg0->unk548 = 0;
    arg0->unk7C = 0;
    arg0->unkC = temp_f21;
    arg0->unk10 = temp_f21;
    arg0->unk528 = (f32) 1024.0f;
    arg0->unk52C = (f32) 1024.0f;
    arg0->unk530 = (f32) 47.5f;
    arg0->unk534 = (f32) 47.5f;
    func_802393C8(arg0);
    temp_v0_2 = ((void *)&((func_8044ADC0_S1 *)(arg0))->unkA0);
    arg0->unkF4 = zero;
    arg0->unkF8 = zero;
    temp_v0_2->unk8 = zero;
    temp_v0_2->unkC = zero;
    temp_v0_2->unk10 = zero;
    temp_v0_2->unk14 = temp_f21;
    temp_v0_3 = ((void *)&((func_8044ADC0_S1 *)(arg0))->unkB8);
    temp_v0_3->unk4 = zero;
    temp_v0_3->unk8 = zero;
    temp_v0_3->unkC = zero;
    temp_v0_3->unk10 = zero;
    temp_v0_4 = ((void *)&((func_8044ADC0_S1 *)(arg0))->unkCC);
    temp_v0_4->unk4 = zero;
    temp_v0_4->unk8 = zero;
    temp_v0_4->unkC = zero;
    temp_v0_4->unk10 = zero;
    temp_v0_5 = ((void *)&((func_8044ADC0_S1 *)(arg0))->unkE0);
    temp_v0_5->unk4 = zero;
    temp_v0_5->unk8 = zero;
    temp_v0_5->unkC = zero;
    temp_v0_5->unk10 = zero;
    func_802390E4(arg0, 0);
    var_a1 = 0;
    var_v1 = arg0;

    temp_a0 = D_800E28D0 * 2;
    do {
        record = (State *)&((ClipStride *)arg0)[var_a1];
        record->unk2B0 = temp_a0;
        record->unk2B2 = temp_a0;
        record->unk2B4 = 0x3FF;
        record->unk2B6 = 0;
        record->unk2B8 = temp_a0;
        record->unk2BA = temp_a0;
        record->unk2BC = 0;
        record->unk2BE = 0;
        var_a1 += 1;
        var_v1 = &((func_8044ADC0_S2 *)(var_v1))->unk10;

    } while (var_a1 < 2);
    func_804426B4(((void *)&((func_8044ADC0_S1 *)(arg0))->unk554));
    func_80272848(((void *)&((func_8044ADC0_S1 *)(arg0))->unkE54));
    func_80272848(((void *)&((func_8044ADC0_S1 *)(arg0))->unkE94));
    arg0->unk544 = 0;
    arg0->unk120 = 0;
    arg0->unk124 = 0x32;
    arg0->unk126 = 0;
    D_80103220.unk4 = 0;
    func_80255C40(((void *)&((func_8044ADC0_S1 *)(arg0))->unkE40), 0, 4);
    func_80239C10(arg0);
}
