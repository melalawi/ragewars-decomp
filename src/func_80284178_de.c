#include "common/types.h"
#include "span_1000/code_80283D24.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 D_80140FF8[];
extern s32 D_800CD72C;

extern void func_80272898_de(void *, void *, Vec3 *);
extern void func_8027DD48_de(void *, s32, s32, f32);






void func_80284178_de(void *arg0) {
    Vec3 delta;
    void *arg1;
    f32 amount;
    s32 *state;

    state = D_80140FF8;
    if (state[0] == 1) {
        arg1 = (void *)state[-4];
        func_80272898_de(&((func_8028414C_S1 *)(arg1))->unk220, &((func_8028414C_S2 *)(arg0))->unk8, &delta);
        amount = delta.z;
        if (amount < 0.0f) {
            amount = -amount;
        }
        func_8027DD48_de(arg0,
                      (s32)((char *)arg0 + ((D_800CD72C << 6) + 0x60)),
                      (s32)arg1, amount);
    } else {
        func_8027DD48_de(arg0,
                      (s32)((char *)arg0 + ((D_800CD72C << 6) + 0x60)),
                      0, 0.0f);
    }
    ((func_8028414C_S2 *)(arg0))->unk5C |= 0x100000;
}
