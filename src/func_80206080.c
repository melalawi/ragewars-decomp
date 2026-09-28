#include "basetypes.h"

extern s32 D_801462C8;
extern f32 D_800C6BC0;
extern f64 D_800C6BC8;
extern f32 func_80274B00(f32, f32);

void func_80206080(void *arg0, void *arg1) {
    void *base;
    char *ctx;
    f32 result;
    s32 count;
    s32 temp_v1;
    f64 var_f1;
    f32 scaled;

    base = *(void **) ((char *) arg0 + 0x18);
    base = (char *) base + 0x14;
    result = func_80274B00(*(f32 *) ((char *) base + 0xC), *(f32 *) ((char *) base + 0x10));
    *(f32 *) ((char *) arg1 + 0x64) = result;
    ctx = (char *) &D_801462C8;
    if (*(u8 *) (ctx + 0x1D) != 0) {
        count = *(s32 *) (ctx - 0x1258);
        if ((u32) count >= 3) {
            count -= 2;
            scaled = result * D_800C6BC0;
            temp_v1 = 0x64 - count * 25;
            var_f1 = (f64) temp_v1;
            if (temp_v1 < 0) {
                var_f1 += D_800C6BC8;
            }
            *(f32 *) ((char *) arg1 + 0x64) = scaled * (f32) var_f1;
        }
    }
}
