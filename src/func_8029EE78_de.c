#include "span_1000/code_8029F304.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"


extern void func_8029BBB0_de(f32 arg0, f32 *arg1, f32 *arg2);
extern void func_802A0748_de(s32, s32, s32);
extern void func_8029CE3C_de(s32, s32, s32);




void func_8029EE78_de(s32 arg0, f32 arg1) {
    u8 sp10[0x40];
    f32 sp50;
    f32 sp54;
    u8 *p;

    if (arg1 != 0.0f) {
        func_8029BBB0_de(arg1, &sp50, &sp54);
        p = sp10;
        func_802A0748_de((s32) p, 0, 0x40);
        ((func_8029FB14_S1 *)(p))->unk0 = D_800C5CC4_de;
        {
            f32 t54 = sp54;
            f32 t50 = sp50;
            f32 t50n;
            ((func_8029FB14_S1 *)(p))->unk14 = D_800C5CC4_de;
            ((func_8029FB14_S1 *)(p))->unk28 = D_800C5CC4_de;
            ((func_8029FB14_S1 *)(p))->unk3C = D_800C5CC4_de;
            t50n = -t50;
            ((struct FloatState2C_2 *) sp10)->unk_20 = t50;
            ((struct FloatState2C_2 *) sp10)->unk_0 = t54;
            ((struct FloatState2C_2 *) sp10)->unk_8 = t50n;
            ((struct FloatState2C_2 *) sp10)->unk_28 = t54;
        }
        func_8029CE3C_de(arg0, (s32) p, arg0);
    }
}
