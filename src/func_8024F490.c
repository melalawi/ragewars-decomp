#include "basetypes.h"

typedef struct {
    s32 field0;
    u8 pad4[0x18];
    s32 field1C;
} GlobalState;

extern s32 func_8024F848(void *arg0);

extern f32 D_800C8EE0;
typedef struct { f32 first; f32 second; } D_800C8EE0_Pair;
typedef struct { f32 unk0; } func_8024F490_G2;
extern func_8024F490_G2 D_800C8EE8;
typedef struct { f32 unk0; } func_8024F490_G3;
extern func_8024F490_G3 D_800C8EEC;
typedef struct { f32 unk0; } func_8024F490_G4;
extern f32 D_800D2988;
typedef struct { s32 unk0; } func_8024F490_G5;
extern func_8024F490_G5 D_800D2B40;
extern GlobalState D_80146894;

typedef struct { char pad[0x12]; u8 value; } func_8024F490_Inner;
typedef struct func_8024F490_S1 func_8024F490_S1;
typedef struct func_8024F490_S2 func_8024F490_S2;
typedef struct func_8024F490_S3 func_8024F490_S3;
struct func_8024F490_S1 {
    char pad0[0x1];
    u8 unk1;
    char pad1[0x3 - 0x1 - sizeof(u8)];
    u8 unk3;
    char pad3[0x14 - 0x3 - sizeof(u8)];
    void* unk14;
    char pad14[0x18 - 0x14 - sizeof(void*)];
    char* unk18;
    char pad18[0x194 - 0x18 - sizeof(char*)];
    f32 unk194;
    char pad194[0x19C - 0x194 - sizeof(f32)];
    u16 unk19C;
    char pad19C[0x1A0 - 0x19C - sizeof(u16)];
    f32 unk1A0;
    char pad1A0[0x1A4 - 0x1A0 - sizeof(f32)];
    f32 unk1A4;
    char pad1A4[0x1C0 - 0x1A4 - sizeof(f32)];
    s32 unk1C0;
};
struct func_8024F490_S2 {
    char pad0[0x20];
    f32 unk20;
};
struct func_8024F490_S3 {
    char pad0[0x1C];
    s32 unk1C;
};

void func_8024F490(void *arg0) {
    char *o = (char *) arg0;
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    ((func_8024F490_S1 *)(o))->unk1 = func_8024F848(arg0);
    ((func_8024F490_S1 *)(o))->unk3 = ((func_8024F490_Inner *)(((func_8024F490_S1 *)(o))->unk18))->value;

    if (D_80146894.field0 == 0) {
        char *state = ((func_8024F490_S1 *)(o))->unk18;
        if (*(s32 *)state == 0xC) {
            ((func_8024F490_S1 *)(o))->unk1A4 = D_800D2988 * ((func_8024F490_S2 *)(state))->unk20;
        } else if (((func_8024F490_S1 *)(o))->unk19C & 0x10) {
            temp_f1 = ((func_8024F490_S1 *)(o))->unk1A0 + D_800D2988 * D_800C8EE0;
            threshold = (&D_800C8EE0)[1];
            ((func_8024F490_S1 *)(o))->unk1A0 = temp_f1;
            if (temp_f1 < threshold) {
                ((func_8024F490_S1 *)(o))->unk194 = temp_f1 * D_800C8EE8.unk0;
            } else {
                final_value = D_800C8EEC.unk0;
                ((func_8024F490_S1 *)(o))->unk19C &= 0xFFEF;
                ((func_8024F490_S1 *)(o))->unk194 = final_value;
            }
        }

        if (((func_8024F490_S1 *)(o))->unk14 != 0) {
            ((func_8024F490_S1 *)(o))->unk1C0 = ((func_8024F490_S3 *)(((func_8024F490_S1 *)(o))->unk14))->unk1C;
        } else {
            ((func_8024F490_S1 *)(o))->unk1C0 = D_800D2B40.unk0;
        }
    }
}
