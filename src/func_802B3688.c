#include "basetypes.h"

typedef struct ResourceTable {
    u32 entries[17];
} ResourceTable;

typedef struct RuntimeState {
    ResourceTable *resources;
    u32 active;
    f32 scale;
    u32 unkC;
    u32 unk10;
    u32 one14;
    void *objects[16];
    u32 unk58[16];
    s8 flags98[16];
    s8 flagsA8[16];
    u32 results[16];
} RuntimeState;

extern u32 func_802B3AFC(RuntimeState *state, u32 index);
extern f64 D_800CC550;
extern f32 D_800CC558;

void func_802B3688(RuntimeState *state, u32 base) {
    f64 converted;
    s32 count;
    u32 entry;
    u32 i;

    i = 0;
    state->resources = (ResourceTable *)base;
    state->active = 0;
    state->unk10 = 0;
    state->unkC = 0;
    state->one14 = 1;
    do {
        state->flagsA8[i] = 0;
        state->unk58[i] = 0;
        state->flags98[i] = 0;
        entry = state->resources->entries[i];
        if (entry != 0) {
            state->active |= 1U << i;
            state->objects[i] = (void *)(base + entry);
            state->results[i] = func_802B3AFC(state, i);
        } else {
            state->objects[i] = 0;
        }
        i++;
    } while (i < 16U);
    count = state->resources->entries[16];
    converted = (f64)count;
    if (count < 0) {
        converted += D_800CC550;
    }
    state->scale = D_800CC558 / (f32)converted;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7220_8 = 4294967296.0;
const float unbake_rodata_800C7228_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC550_8 = 4294967296.0;
const float unbake_rodata_800CC558_4 = 1.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C7EF0_8 = 4294967296.0;
const float unbake_rodata_800C7EF8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C88C0_8 = 4294967296.0;
const float unbake_rodata_800C88C8_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C7300_8 = 4294967296.0;
const float unbake_rodata_800C7308_4 = 1.0f;
#endif
