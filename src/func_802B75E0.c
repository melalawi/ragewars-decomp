#include "basetypes.h"

typedef struct {
    char pad0[0x1C];
    void *owner;
    s16 state;
    char pad22[2];
    f32 value;
    s32 timer;
    s16 amount;
    u8 flags;
    u8 extra;
} Slot;

typedef struct {
    char pad0[0x40];
    Slot *slots;
    s32 count;
} Pool;

extern f32 D_800CC760;

typedef struct func_802B75E0_S1 func_802B75E0_S1;
struct func_802B75E0_S1 {
    char pad0[0xD];
    u8 unkD;
};

s16 func_802B75E0(Pool *pool, void *owner) {
    s32 count = pool->count;
    Slot *slots = pool->slots;

    if (count > 0) {
        s16 i = 0;
        s16 state = 5;
        f32 value = D_800CC760;
        u8 flags = 0x40;
        do {
        s16 index = i;
        Slot *slot = (Slot *)((s32)(index * (s32)sizeof(Slot)) + (s32)slots);
        if (slot->owner == 0) {
            slot->owner = owner;
            slot->state = state;
            slot->timer = 0;
            slot->value = value;
            slot->flags = flags;
            slot->extra = 0;
            slot->amount = ((((func_802B75E0_S1 *)(owner))->unkD * 0x7FFF) / 127);
            return index;
        }
        i++;
        } while ((s16)i < pool->count);
    }
    return -1;
}
