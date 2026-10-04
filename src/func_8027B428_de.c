#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"

/* Reports an actor to the active collision state D_801041F0 when that state is of kind 1: an actor whose owner is a kind 1 object flagged 0x300000 is reported with bit 8, 4 or 0x10 for each of three type groups its type belongs to, and otherwise an actor whose descriptor is of kind 1 or 4 is reported with bit 0x80, 0x40 or 0x100 for the same groups, each through func_80278D78_de. */







extern func_8024E8F0_S1 *D_801001F0;
extern void func_80278D78_de(func_8024E8F0_S1 *state, s32 bits, Actor_func_8027B428_de *actor);

static inline s32 is_group_a(Actor_func_8027B428_de *actor) {
    switch (actor->type) {
        case 2:
        case 0x56:
        case 0x111:
        case 0x126:
            return 1;
    }
    return 0;
}

static inline s32 is_group_b(Actor_func_8027B428_de *actor) {
    switch (actor->type) {
        case 5:
        case 6:
        case 7:
        case 9:
        case 0x11:
        case 0x13:
        case 0x1A:
        case 0x101:
        case 0x110:
            return 1;
    }
    return 0;
}

static inline s32 is_group_c(Actor_func_8027B428_de *actor) {
    switch (actor->type) {
        case 8:
        case 0xD:
        case 0x12:
            return 1;
    }
    return 0;
}

void func_8027B428_de(Actor_func_8027B428_de *actor) {
    func_8024E8F0_S1 *owner;

    if (D_801001F0 == 0 || D_801001F0->unk0 != 1) {
        return;
    }
    owner = actor->owner;
    if (owner != 0 && owner->unk0 == 1 && (owner->unk100 & 0x300000)) {
        if (is_group_a(actor)) {
            func_80278D78_de(D_801001F0, 8, actor);
        }
        if (is_group_b(actor)) {
            func_80278D78_de(D_801001F0, 4, actor);
        }
        if (is_group_c(actor)) {
            func_80278D78_de(D_801001F0, 0x10, actor);
        }
    } else if (actor->descriptor->field_0 == 1 || actor->descriptor->field_0 == 4) {
        if (is_group_a(actor)) {
            func_80278D78_de(D_801001F0, 0x80, actor);
        }
        if (is_group_b(actor)) {
            func_80278D78_de(D_801001F0, 0x40, actor);
        }
        if (is_group_c(actor)) {
            func_80278D78_de(D_801001F0, 0x100, actor);
        }
    }
}
