#ifdef NON_MATCHING
#include "shared/direction_state.h"

/* FAKEMATCH: constant names and the vector overlay follow us-rev1;
 * other owning versions retain measured relocation differences. */
extern const f32 D_800CA4A0;
extern const Vec3f D_800CA4A0_auto;
extern const f32 D_800CA4A8;

void func_802720EC(f32 *direction);

void func_8044E8B0(SharedDirectionState *state) {
    state->direction.x = D_800CA4A0;
    state->direction.y = D_800CA4A0_auto.y;
    state->direction.z = D_800CA4A8;
    func_802720EC(&state->direction.x);
    state->ready = 1;
}
#endif
