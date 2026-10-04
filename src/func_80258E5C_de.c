#include "span_1000/code_80258760.h"
#include "span_C76B0/data.h"
/* Clamps a level to between zero and D_800C8FE0, scales it by D_800C8FE4 and stores it as an integer
   at 0x2B9C of the object. */





void func_80258E5C_de(Obj_func_80258E5C_de *obj, float value) {
    float v;
    float max = D_800C3EF0_de;
    if (value > max || !(value < 0.0f)) {
        v = value;
        if (v > max) {
            v = max;
        }
    } else {
        v = 0.0f;
    }
    obj->level = v * D_800C3EF4_de;
}
