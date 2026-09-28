/* Advances the actor inactivity timer and reports pending menu state. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct Actor { char pad0[4928]; s32 unk1340; char pad1344[268]; s32 unk1450; } Actor;
typedef struct State { char pad0[28]; Actor * unk1C; } State;
typedef struct Global { char pad0[28]; s32 unk1C; s32 unk20; char pad24[4]; s32 unk28; } Global;
s32 func_8022B168(void *);                          /* extern */
void func_8044A37C(void *);                            /* extern */
extern Global D_801468A0[];

s32 func_80443A2C(State *arg0) {
    Global *state;
    s32 temp_v0;
    s32 var_v0;
    Actor *temp_s0;

    temp_s0 = arg0->unk1C;
    if ((temp_s0->unk1450 == 0) && (func_8022B168(temp_s0) != 0)) {
        temp_v0 = temp_s0->unk1340 + 1;
        temp_s0->unk1340 = temp_v0;
        if (temp_v0 >= 0x4C) {
            func_8044A37C(arg0->unk1C);
            return 1;
        }
    }
    var_v0 = 0;
    state = D_801468A0;
    if (state[0].unk28 || state[0].unk1C || state[0].unk20) var_v0 = 1;
    return var_v0;
}
