#include "basetypes.h"

extern void func_802B5030(s32 arg0, s16 arg1);

extern f32 D_800C9110;
extern f32 D_800C9118;
extern f32 D_800C911C;
extern f32 D_800C9120;

void func_8025DCA8(void *arg0) {
    char *o = (char *) arg0;
    f32 var_f20;
    void *temp_v0;

    if (*(s32 *) (o + 0x38) != 0) {
        f32 prod = *(f32 *) (*(char **) (o + 0) + 0x2BA4);
        prod = prod * *(f32 *) ((char *) &D_800C9110 + 4);
        var_f20 = (f32) (*(s32 *) (o + 0x24));
        var_f20 = var_f20 * prod;
        var_f20 = var_f20 * *(f32 *) (o + 0x3C);
        goto do_update;
    }
    temp_v0 = *(void **) (o + 0);
    var_f20 = (f32) (*(s32 *) (o + 0x24)) * (*(f32 *) ((char *) temp_v0 + 0x2BA4) * D_800C9118);
    if (*(s32 *) ((char *) temp_v0 + 0x2BB8) != 0) {
        var_f20 = var_f20 * D_800C911C;
    }
    if (var_f20 != *(f32 *) (o + 0x2C)) {
do_update:
        func_802B5030(*(s32 *) (o + 0x14), (s16) (s32) (var_f20 * D_800C9120));
        *(f32 *) (o + 0x2C) = var_f20;
    }
}
