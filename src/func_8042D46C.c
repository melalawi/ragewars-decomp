#include "basetypes.h"

/* When the object D_800E53C0 points to has a target at 0x32C and its word at 0x328 set, runs
   func_804399D0 on offset 0x20 of it with D_800D15E0 set and D_800D15F0 raised to D_800E1B38[1],
   then clears D_800D15E0 and sets D_800D15F0 to D_800E1B40. */
struct State {
    char pad0[0x328];
    s32 active;
    s32 target;
};

extern struct State *D_800E53C0;
extern s32 D_800D15E0;
extern f32 D_800D15F0;
extern f32 D_800E1B38[];
extern f32 D_800E1B40;
extern void func_804399D0(void *);

void func_8042D46C(void) {
    struct State *state = D_800E53C0;
    f32 *level;

    if (state->target != -1 && state->active != 0) {
        level = &D_800D15F0;
        D_800D15E0 = 1;
        *level = D_800E1B38[1];
        func_804399D0((char *) state + 0x20);
        D_800D15E0 = 0;
        *level = D_800E1B40;
    }
}
