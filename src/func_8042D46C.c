/* NON_MATCHING: PAL asm rows are retained after match submit refused shared C/.rodata ownership; this draft is exact in all five explicit VERSION trials. */
#include "basetypes.h"
#include "shared/screen.h"

/* When the object D_800E53C0 points to has a target at 0x32C and its word at 0x328 set, runs
   func_804399D0 on offset 0x20 of it with D_800D15E0 set and D_800D15F0 raised to D_800E1B38[1],
   then clears D_800D15E0 and sets D_800D15F0 to D_800E1B40. */

extern Shared_Screen *D_800E53C0;
extern s32 D_800D15E0;
extern f32 D_800D15F0;
extern f32 D_800E1B38[];
extern f32 D_800E1B40;
extern void func_804399D0(void *);
extern void func_804397F0_auto(void *);

void func_8042D46C(void) {
    Shared_Screen *state = D_800E53C0;
    f32 *level;

    if (state->lastPick != -1 && state->active != 0) {
        level = &D_800D15F0;
        D_800D15E0 = 1;
        *level = D_800E1B38[1];
#if defined(VERSION_DE)
        func_804397F0_auto((char *) state + 0x20);
#else
        func_804399D0((char *) state + 0x20);
#endif
        D_800D15E0 = 0;
        *level = D_800E1B40;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC7BC_4 = 150.0f;
const float unbake_rodata_800DC7C0_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1B3C_4 = 150.0f;
const float unbake_rodata_800E1B40_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE18C_4 = 150.0f;
const float unbake_rodata_800EE190_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E934C_4 = 150.0f;
const float unbake_rodata_800E9350_4 = 255.0f;
#endif
