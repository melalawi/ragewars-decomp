#include "basetypes.h"

typedef struct DeviceState {
    struct DeviceState *previous;
    u8 type;
    u8 latency;
    u8 page_size;
    u8 release;
    u8 pulse;
    u8 domain;
    u8 pad_A[2];
    u32 address;
    u32 queue;
} DeviceState;

extern DeviceState D_8014E9D0;
extern char *D_8014EA44;
extern DeviceState *D_800D83AC;

extern void *func_802A101C(void *, s32, u32);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);

typedef struct func_802BE960_S1 func_802BE960_S1;
struct func_802BE960_S1 {
    char pad0[0x14];
    char unk14;
};

DeviceState *func_802BE960(void) {
    DeviceState *state;
    u32 lock;
    DeviceState *previous;
    DeviceState **slot;

    state = &D_8014E9D0;
    state->type = 2;
    state->address = 0xA5000000;
    state->latency = 3;
    state->pulse = 6;
    state->page_size = 6;
    state->release = 2;
    state->domain = 1;
    *(volatile u32 *)0xA4600024 = 3;
    *(volatile u32 *)0xA4600028 = 6;
    *(volatile u32 *)0xA460002C = 6;
    *(volatile u32 *)0xA4600030 = 2;
    state->queue = 0;
    func_802A101C(&((func_802BE960_S1 *)(state))->unk14, 0, 0x60);
    lock = func_802C2020();
    slot = &D_800D83AC;
    previous = *slot;
    *slot = state;
    D_8014EA44 = state;
    state->previous = previous;
    func_802C2040(lock);
    return state;
}
