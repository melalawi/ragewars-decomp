#include "basetypes.h"

extern f32 D_800CA560[];
extern f32 D_800CA568;
extern s32 D_800E28D0;

extern void func_80293100(void *arg0, s8 *arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);

typedef struct func_80293378_S1 func_80293378_S1;
struct func_80293378_S1 {
    char pad0[0x26DC4];
    f32 unk26DC4;
};

void func_80293378(void *arg0) {
    s8 color[4];
    f32 value;
    s32 alpha;

    color[0] = 0;
    color[1] = 0;
    color[2] = 0;
    value = ((func_80293378_S1 *)(arg0))->unk26DC4;
    alpha = 0xFF;
    if (!(value < 0)) {
        alpha = 0;
        if (!(D_800CA560[1] < value)) {
            alpha = 0xFF;
            if (!(value < 0)) {
                alpha = ~(s32)(value * D_800CA568);
            }
        }
    }
    color[3] = alpha;
    func_80293100(arg0, color, 0, 0, D_800E28D0, *((&D_800E28D0) + 1));
}
