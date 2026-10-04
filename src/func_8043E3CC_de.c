#include "span_16E000/code_8043E364.h"
#include "types.h"







extern s8 func_804423BC_de(Outer8043E458 *arg0, s8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

/** Runs a target's animation/state transition through func_804423BC_de and stores the new state. */
s32 func_8043E3CC_de(void *arg0, Outer8043E458 *arg1) {
    Target8043E458 *temp_s0;

    temp_s0 = arg1->unk1C->unk5D8;
    temp_s0->unk7B = func_804423BC_de(arg1, temp_s0->unk7B, 1, 0, 1, 1);
    return 0;
}
