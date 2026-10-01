/* Calls cleanup functions on a game state and optionally transitions control state when conditions change. */
#include "basetypes.h"

extern f32 D_800CA590;
extern f32 D_800CA594;
extern s32 D_8010F190;
extern s32 D_8014694C;

extern void func_802A3224(void);
extern void func_80299368(s32 arg0);
extern void func_8040C4A8(s32 arg0);
extern void func_80293774(void *arg0, s32 arg1);
extern void func_80286050(void *arg0);
extern void func_802394A4(void *arg0);
extern void func_802AB794(void *arg0);
extern void func_80294F1C(void);
extern void func_80293378(void *arg0);

typedef struct func_80293B0C_S1 func_80293B0C_S1;
typedef union func_80293B0C_S1_U26DB0 { f32 v0; s32 v1; } func_80293B0C_S1_U26DB0;
struct func_80293B0C_S1 {
    char pad0[0x26DB0];
    func_80293B0C_S1_U26DB0 unk26DB0;
};

void func_80293B0C(void *arg0) {
    void *state;
    f32 value;

    state = arg0;
    if (D_8014694C == 1) {
        value = ((func_80293B0C_S1 *)(state))->unk26DB0.v0;
        if (D_800CA590 < value) {
            if (D_800CA594 < value) {
                D_8014694C = 0;
                func_802A3224();
                func_80299368(2);
                func_8040C4A8(0);
                func_80293774(state, 1);
                ((func_80293B0C_S1 *)(state))->unk26DB0.v1 = 0;
            } else if (D_8010F190 != 0) {
                D_8014694C = 0;
                func_802A3224();
                func_80299368(2);
                func_80293774(state, 8);
                ((func_80293B0C_S1 *)(state))->unk26DB0.v1 = 0;
            }
        }
    }
    func_80286050((char *)state + 0x3C8);
    func_802394A4((char *)state + 0x255C8);
    func_802AB794((char *)state + 0x1BCF8);
    /* Only us-rev1 makes this call: us, eu, eu-x and de go straight on to func_80293378, two
       instructions shorter, as each cartridge's own bytes show. */
#ifdef VERSION_US_REV1
    func_80294F1C();
#endif
    func_80293378(state);
}
