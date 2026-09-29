#include "basetypes.h"

extern void func_802B5030(s32 arg0, s16 arg1);

extern f32 D_800C9110;
extern f32 D_800C9118;
extern f32 D_800C911C;
extern f32 D_800C9120;

typedef struct func_8025DCA8_S1 func_8025DCA8_S1;
typedef struct func_8025DCA8_S2 func_8025DCA8_S2;
typedef struct func_8025DCA8_S3 func_8025DCA8_S3;
typedef union func_8025DCA8_S1_U0 { char* v0; void* v1; } func_8025DCA8_S1_U0;
struct func_8025DCA8_S1 {
    func_8025DCA8_S1_U0 unk0;
    char pad0[0x14 - 0x0 - sizeof(func_8025DCA8_S1_U0)];
    s32 unk14;
    char pad14[0x24 - 0x14 - sizeof(s32)];
    s32 unk24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    f32 unk2C;
    char pad2C[0x38 - 0x2C - sizeof(f32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    f32 unk3C;
};
struct func_8025DCA8_S2 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8025DCA8_S3 {
    char pad0[0x2BA4];
    f32 unk2BA4;
    char pad2BA4[0x2BB8 - 0x2BA4 - sizeof(f32)];
    s32 unk2BB8;
};

void func_8025DCA8(void *arg0) {
    char *o = (char *) arg0;
    f32 var_f20;
    void *temp_v0;

    if (((func_8025DCA8_S1 *)(o))->unk38 != 0) {
        f32 prod = *(f32 *) (((func_8025DCA8_S1 *)(o))->unk0.v0 + 0x2BA4);
        prod = prod * ((func_8025DCA8_S2 *)(&D_800C9110))->unk4;
        var_f20 = (f32) (((func_8025DCA8_S1 *)(o))->unk24);
        var_f20 = var_f20 * prod;
        var_f20 = var_f20 * ((func_8025DCA8_S1 *)(o))->unk3C;
        goto do_update;
    }
    temp_v0 = ((func_8025DCA8_S1 *)(o))->unk0.v1;
    var_f20 = (f32) (((func_8025DCA8_S1 *)(o))->unk24) * (((func_8025DCA8_S3 *)(temp_v0))->unk2BA4 * D_800C9118);
    if (((func_8025DCA8_S3 *)(temp_v0))->unk2BB8 != 0) {
        var_f20 = var_f20 * D_800C911C;
    }
    if (var_f20 != ((func_8025DCA8_S1 *)(o))->unk2C) {
do_update:
        func_802B5030(((func_8025DCA8_S1 *)(o))->unk14, (s16) (s32) (var_f20 * D_800C9120));
        ((func_8025DCA8_S1 *)(o))->unk2C = var_f20;
    }
}
