typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern s32 D_800E28A4;
extern s32 D_800D29B4;
extern Gfx *D_80110634;
typedef struct func_802ABC18_S1 func_802ABC18_S1;
struct func_802ABC18_S1 {
    char pad0[0x114];
    s32 unk114;
};

extern func_802ABC18_S1 *D_8011FE80;
extern char D_8011FE88;

extern s32 func_8028BE88(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_802AB19C(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);
extern void func_802536F4(s32 arg0, s32 arg1);

s32 func_802ABC18(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6) {
    s32 temp_v0;

    if ((u32)(D_800E28A4 - ((u32)((s32)D_80110634 - D_8011FE80->unk114) >> 3)) < 0x3E8
        || D_800D29B4 == 0
        || (temp_v0 = func_8028BE88(&D_8011FE88, arg0, 0, 1), temp_v0 == 0)) {
        return 0;
    }
    func_802AB19C(temp_v0, arg1, arg2, arg3, arg4, arg5, arg6);
    func_802536F4(0, temp_v0);
    return 1;
}
