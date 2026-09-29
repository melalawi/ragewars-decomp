#include "basetypes.h"

extern s32 D_801462C8;
extern f32 D_800C6BC0;
extern f64 D_800C6BC8;
extern f32 func_80274B00(f32, f32);

typedef struct func_80206080_S1 func_80206080_S1;
typedef struct func_80206080_S2 func_80206080_S2;
typedef struct func_80206080_S3 func_80206080_S3;
typedef struct func_80206080_S4 func_80206080_S4;
struct func_80206080_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_80206080_S2 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    char unk14;
};
struct func_80206080_S3 {
    char pad0[0x64];
    f32 unk64;
};
struct func_80206080_S4 {
    char pad0[0x1D];
    u8 unk1D;
};

void func_80206080(void *arg0, void *arg1) {
    void *base;
    char *ctx;
    f32 result;
    s32 count;
    s32 temp_v1;
    f64 var_f1;
    f32 scaled;

    base = ((func_80206080_S1 *)(arg0))->unk18;
    base = &((func_80206080_S2 *)(base))->unk14;
    result = func_80274B00(((func_80206080_S2 *)(base))->unkC, ((func_80206080_S2 *)(base))->unk10);
    ((func_80206080_S3 *)(arg1))->unk64 = result;
    ctx = (char *) &D_801462C8;
    if (((func_80206080_S4 *)(ctx))->unk1D != 0) {
        count = *(s32 *) (ctx - 0x1258);
        if ((u32) count >= 3) {
            count -= 2;
            scaled = result * D_800C6BC0;
            temp_v1 = 0x64 - count * 25;
            var_f1 = (f64) temp_v1;
            if (temp_v1 < 0) {
                var_f1 += D_800C6BC8;
            }
            ((func_80206080_S3 *)(arg1))->unk64 = scaled * (f32) var_f1;
        }
    }
}
