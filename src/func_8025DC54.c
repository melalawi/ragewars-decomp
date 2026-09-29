#include "basetypes.h"

extern f32 D_800C9110;
extern void func_802B5030(s32 arg0, s16 arg1);

typedef struct func_8025DC54_S1 func_8025DC54_S1;
struct func_8025DC54_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x2C - 0x14 - sizeof(s32)];
    f32 unk2C;
};

void func_8025DC54(void *arg0, f32 arg1) {
    f32 f20 = arg1;
    f32 f0 = f20 * D_800C9110;
    func_802B5030(((func_8025DC54_S1 *)(arg0))->unk14, (s16)(s32) f0);
    ((func_8025DC54_S1 *)(arg0))->unk2C = f20;
}
