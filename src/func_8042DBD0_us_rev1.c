#include "span_16E000/code_8042BD40.h"
#include "common/types_1dc8418c21db.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "common/unused.h"
#include "types.h"
/* Builds screen state D_800E13E0_de: allocates 0x24 bytes, sets up the handle for resources
   0x398/0x399, loads resource 0x39C, wires up windows 0x39A and 0x39D, the 0x39B button and
   the delay, and formats D_800DDB30 into the state's text buffer through func_802A0C08_de. */





extern struct State_func_8042D9E8_de *D_800E13E0_de;



extern void *func_8025305C_de(s32 size);
extern void func_802A2360_de(void);
extern s32 func_8041A280_de(s32, s32);
extern void func_8041A47C_de(s32);
extern void func_8041B110_de(s32);
extern struct MenuWidget *func_8040EC30_de(s32, s32);
extern s32 func_80419E54_de(s32, s32);
extern void func_802A0C08_de(void *, void *, s32);

s32 func_8042DBD0_us_rev1(s32 arg0) {
    struct State_func_8042D9E8_de *state;
    s32 handle;
    struct MenuWidget *node;
    void *text;

    D_800E13E0_de = func_8025305C_de(0x24);
    func_802A2360_de();
    handle = func_8041A280_de(0x398, 0x399);
    state = D_800E13E0_de;
    state->menu = handle;
    func_8041A47C_de(handle);
    func_8041B110_de(0x39C);
    node = func_8040EC30_de(arg0, 0x39A);
    state = D_800E13E0_de;
    state->window = node;
    node->alpha = 0xF;
    handle = func_80419E54_de(0x39B, 0x6E);
    state = D_800E13E0_de;
    state->button = handle;
    state->delay = 3;
    node = func_8040EC30_de(arg0, 0x39D);
    state = D_800E13E0_de;
    text = &state->text;
    node->text = text;
    state->value = 1;
    func_802A0C08_de(text, D_800DDB30, 1);
    return 0;
}
