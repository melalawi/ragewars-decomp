#include "common/unused.h"
/* NON_MATCHING: PAL asm rows are retained after match submit refused shared C/.rodata ownership; this draft is exact in all five explicit VERSION trials. */
#include "types.h"

/* When the object D_800E1370 points to has a target at 0x32C and its word at 0x328 set, runs
   func_804399D0 on offset 0x20 of it with D_800CC390 set and D_800CC3A0 raised to D_800DDB08_de[1],
   then clears D_800CC390 and sets D_800CC3A0 to D_800DDB10. */

extern Shared_Screen *D_800E1370;
extern s32 D_800CC390;
extern f32 D_800CC3A0;
extern f32 D_800DDB08_de[];
extern f32 D_800DDB10;
extern void func_804399D0(void *);

void func_8042D28C_de(void) {
    Shared_Screen *state = D_800E1370;
    f32 *level;

    if (state->lastPick != -1 && state->active != 0) {
        level = &D_800CC3A0;
        D_800CC390 = 1;
        *level = D_800DDB08_de[1];
#if defined(VERSION_DE)
        func_804397F0_auto((char *) state + 0x20);
#else
        func_804399D0((char *) state + 0x20);
#endif
        D_800CC390 = 0;
        *level = D_800DDB10;
    }
}
