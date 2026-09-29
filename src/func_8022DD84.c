#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern f32 D_800C7EE8[2];
extern f32 D_800C7EF0;

typedef struct func_8022DD84_S1 func_8022DD84_S1;
struct func_8022DD84_S1 {
    char pad0[0x650];
    u16 unk650;
    char pad650[0x720 - 0x650 - sizeof(u16)];
    f32 unk720;
};

void func_8022DD84(void *arg0) {
    f32 sp10;
    f32 var_f1;
    f32 var_f2;

    var_f1 = 0.0f;
    if ((u32)(((func_8022DD84_S1 *)(arg0))->unk650 - 9) < 4U) {
        var_f1 = D_800C7EE8[0];
    }
    sp10 = ((func_8022DD84_S1 *)(arg0))->unk720;
    func_802748E0(&sp10, var_f1, 0.25f);
    var_f2 = sp10 - ((func_8022DD84_S1 *)(arg0))->unk720;
    if (var_f2 < 0.0f) {
        if (-var_f2 < D_800C7EE8[1]) {
            goto clamp;
        }
    } else if (var_f2 < D_800C7EF0) {
clamp:
        var_f2 = 0.0f;
    }
    ((func_8022DD84_S1 *)(arg0))->unk720 = ((func_8022DD84_S1 *)(arg0))->unk720 + var_f2;
}
