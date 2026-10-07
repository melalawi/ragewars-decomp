#include "span_1000/code_80286050.h"
#include "shared/func_80286080_de_closed.h"

void func_80286080_de(void *arg0) {
    Shared_World *state;
    Shared_Game *input;
    s32 old_flags;

    state = arg0;
    input = &D_80142208_de;
    old_flags = D_800CD3F0;
    D_800CD3F0 = input->buttons;
    if (input->flags & 0x4000) {
        D_800CD3F0 |= 0x100;
    }
    if (input->flags & 0x8000) {
        D_800CD3F0 |= 0x200;
    }
    if (old_flags != D_800CD3F0) {
        D_800CD3F4 = 1;
        func_8025476C_de(8);
    } else {
        D_800CD3F4 = 0;
    }

    func_8028A698_de(state);
    func_8028D64C_de(state);
    state->counter120 = 0;
    state->counter124 = 0;
    func_80279990_de(state->system128);
    func_80253BBC_de(0, state->resource);
    {
        void *manager;

        manager = &D_801379C0;
        func_802A56FC_de(manager);
        func_8022A170_de(&D_80140F80);
        func_80287F18_de(state);
        func_80288470_de(state);
        func_8028D61C_de(state);

        if ((state->frozen == 0) && (D_801427D4 == 0)) {
            func_802A5680_de(manager);
            func_80286284_de(state);
            func_80290238_de(&state->system11778);
            state->elapsed += D_800CD738 * D_800C50E4_de;
            func_8028C60C_de(state);
        }
    }

    func_80281CA0_de(state->system1B08);
    if (state->frozen == 0) {
        func_802285E8_de(&D_80140F80);
    }

    func_80236F1C_de(&D_80140FC8, state);
    if ((state->frozen == 0) && (D_80140FC8.state == 0)) {
        func_8028D67C_de(state);
    }
    func_8028D888_de(state);
    func_8028D108_de(state);
}
