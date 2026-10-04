#include "span_1000/code_80208410.h"
#include "types.h"
s32 func_802726F8_de(f32 *, f32 *);
extern f32 *func_8020C994_de(void *, s32);
extern s32 D_801372A4;
void func_80209948_de(struct TargetPositionRef *arg0, s32 arg1) {
    func_802726F8_de(arg0->target->position, func_8020C994_de(&D_801372A4, arg1));
}
