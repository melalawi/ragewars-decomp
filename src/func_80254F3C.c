#include "basetypes.h"

extern s32 D_801045A0[];
extern char D_80105160;
extern u32 D_800D0920;
extern s32 D_80104560;
extern s32 D_80105134[];

extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

void func_80254F3C(s32 unused, s32 arg1) {
    s32 mask;
    u32 count;
    s32 new_var;
    u32 new_var2;
    s32 offset;
    u32 limit;

    if (D_801045A0[arg1] != 0) {
        D_801045A0[arg1] = 0;
        func_802C0510(&D_80105160, 0, 1);
    }
    mask = -0x201;
    if (arg1 != 0) {
        mask = -0x401;
    }
    do { count = 0; limit = D_800D0920; } while (0);
    new_var2 = limit;
    if (limit != 0) {
        offset = count;
        do {
            new_var = offset + D_80104560;
            count += 1;
            *((s32 *) (new_var + 0xC)) &= mask;
            offset += 0x28;
        } while (count < new_var2);
    }
    do { D_80105134[arg1] = 0; } while (0);
}
