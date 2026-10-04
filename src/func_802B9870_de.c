#include "span_1000/code_802BDDB8.h"
#include "span_1000/types.h"
#include "types.h"



extern DeviceState D_80148740;
extern char *D_801487B4;
extern DeviceState *D_800D437C;

extern void *func_802A001C_de(void *, s32, u32);
extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);




DeviceState *func_802B9870_de(void) {
    DeviceState *state;
    u32 lock;
    DeviceState *previous;
    DeviceState **slot;

    state = &D_80148740;
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
    func_802A001C_de(&((func_80203908_S2 *)(state))->unk14, 0, 0x60);
    lock = func_802BCF30_de();
    slot = &D_800D437C;
    previous = *slot;
    *slot = state;
    D_801487B4 = state;
    state->previous = previous;
    func_802BCF50_de(lock);
    return state;
}
