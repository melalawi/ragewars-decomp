#include "span_1000/code_8025C67C.h"
#include "types.h"
/* Sets the sound fade state and derives its step from the clamped duration. */

void func_8025DACC_de(State_func_8025DACC_de *arg0) {
    f32 var_f2;

    var_f2 = arg0->unk30;
    arg0->unk1C = 2;
    arg0->unk18 = 0x20;
    arg0->unk20 = (s32) (arg0->unk2C * 32767.0f);
    if (!(var_f2 >= 0.1f)) {
        var_f2 = 0.1f;
    }
    arg0->unk30 = var_f2;
    arg0->unk28 = 0;
    arg0->unk34 = (f32) ((f32) arg0->unk20 / (var_f2 * 60.0f));
}
