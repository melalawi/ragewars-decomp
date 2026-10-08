#include "span_1000/code_802B0388.h"
#include "span_C76B0/data.h"
#include "common/unused.h"
#include "types.h"

s16 func_802B2510_de(Pool_func_802B2510_de *pool, void *owner) {
    s32 count = pool->count;
    Slot_func_802B2510_de *slots = pool->slots;

    if (count > 0) {
        s16 i = 0;
        s16 state = 5;
        f32 value = D_800C7510_de;
        u8 flags = 0x40;
        do {
        s16 index = i;
        Slot_func_802B2510_de *slot = (Slot_func_802B2510_de *)(index * sizeof(*slots) + (u32)slots);
        if (slot->owner == 0) {
            slot->owner = owner;
            slot->state = state;
            slot->timer = 0;
            slot->value = value;
            slot->flags = flags;
            slot->extra = 0;
            slot->amount = ((((struct ALSound *)(owner))->sampleVolume * 0x7FFF) / 127);
            return index;
        }
        i++;
        } while ((s16)i < pool->count);
    }
    return -1;
}
