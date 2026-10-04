#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "span_C76B0/data.h"
#include "types.h"




extern char D_80140FC8;

extern s32 func_802934F8_de(void);
extern void *func_802395A4_de(s32 *arg0, Vec3 *arg1);
extern s32 func_80257DD4_de(void *, s32, Vec3, s32, s32);






void func_80258AE0_de(void *arg0) {
    Vec3 zero;
    void *result;
    Vec3 *vec;

    if (D_800CB720 != 0 &&
        ((func_80258B00_S1 *)(arg0))->unk2BB4 != 0 &&
        func_802934F8_de() != 0 &&
        ((func_80258B00_S1 *)(arg0))->unk134 > 0) {
        {
            register f32 value = 0.0f;

            zero.z = value;
            zero.y = value;
            zero.x = value;
        }
        result = func_802395A4_de(&D_80140FC8, &zero);
        vec = &((func_8023945C_S1 *)(result))->unk128;
        if ((((func_80258B00_S1 *)(arg0))->unk104 & 3) == 0) {
            func_80257DD4_de(arg0, ((func_80258B00_S1 *)(arg0))->unk134, *vec, 0, -1);
        }
    }
}
