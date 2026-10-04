#include "common/types.h"
#include "span_1000/code_802A31F4.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"





extern f32 D_800CD738;



extern f32 D_800C5DE0_de[];
extern f32 D_800C5DE8_de[];

extern void func_802A5780_de(s32, State_func_802A2FA4_de *, Node_func_802A2FA4_de *);
extern void func_802A5FF0_de(State_func_802A2FA4_de *);




s32 func_802A2FA4_de(s32 arg0, State_func_802A2FA4_de *state) {
    Node_func_802A2FA4_de *node;
    Node_func_802A2FA4_de *next;
    f32 saved_step;
    f32 zero;
    f32 decay;
    f32 cutoff;
    f32 value;
    f32 updated;

    saved_step = D_800CD738;
    if (state->flags & 2) {
        D_800CD738 = saved_step * D_800CD740_de;
    }
    if (state->flags & 1) {
        D_800CD738 *= ((D_800C7470_Pair *)&D_800CD738)->second;
    }
    if (state->flags & 8) {
        state->retries++;
        if (state->retries >= 3) {
            state->object = 0;
        }
    }

    if (state->count_up >= 0.0f) {
        state->total += D_800CD738;
    }
    state->timer -= D_800CD738;
    if (state->timer < 0.0f) {
        state->timer = 0.0f;
    }

    node = state->nodes;
    if (node != 0) {
        zero = 0.0f;
        decay = D_800C5DE0_de[1];
        cutoff = D_800C5DE8_de[0];
        do {
            next = node->next;
            if (state->timer <= zero && node->value > zero) {
                node->value = zero;
            }
            value = node->value;
            if (value <= zero) {
                updated = value - decay;
                node->value = updated;
                if (updated < cutoff) {
                    func_802A5780_de(arg0, state, node);
                }
            } else {
                updated = value - D_800CD738;
                node->value = updated;
                if (updated < zero) {
                    node->value = zero;
                }
            }
            node = next;
        } while (node != 0);
    }

    if (state->object != 0 && (state->flags & 1) &&
        !(((func_80207F90_S1 *)(state->object))->unk100 & 0x200)) {
        func_802A5FF0_de(state);
    }
    D_800CD738 = saved_step;

    if (state->active == 0) {
        if (state->timer != 0.0f) {
            if (state->object == 0) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D14_4 = 1.0f;
const float unbake_rodata_800C5D18_4 = (-3.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF74_4 = 1.0f;
const float unbake_rodata_800CAF78_4 = (-3.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C6084_4 = 1.0f;
const float unbake_rodata_800C6088_4 = (-3.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C60C4_4 = 1.0f;
const float unbake_rodata_800C60C8_4 = (-3.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C5DE4_4 = 1.0f;
const float unbake_rodata_800C5DE8_4 = (-3.0f);
#endif
