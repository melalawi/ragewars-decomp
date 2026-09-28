#include "basetypes.h"

extern f32 D_800CA5A4;
extern f32 D_800CA5A8;
extern s32 D_8010F190;
extern s32 D_801468A0;

extern void func_802A3224(void);
extern void func_80299368(s32 arg0);
extern void func_8040C4A8(s32 arg0);
extern void func_80293774(void *arg0, s32 arg1);
extern void func_80286050(void *arg0);
extern void func_802394A4(void *arg0);
extern void func_802AB794(void *arg0);
extern void func_80294F1C(void);
extern void func_80293378(void *arg0);

void func_80293CD0(void *arg0) {
    s32 *global;
    void *state;
    f32 value;

    state = arg0;
    global = &D_801468A0;
    if (global[0x2B] == 1) {
        value = *(f32 *)((char *)state + 0x26DB0);
        if (D_800CA5A4 < value) {
            if (D_800CA5A8 < value) {
                global[0x2B] = 0;
                func_802A3224();
                func_80299368(2);
                func_8040C4A8(0);
                func_80293774(state, 1);
                *(s32 *)((char *)state + 0x26DB0) = 0;
            } else if (D_8010F190 != 0) {
                global[0x2B] = 0;
                func_802A3224();
                func_80299368(2);
                func_80293774(state, 8);
                *(s32 *)((char *)state + 0x26DB0) = 0;
            }
        }
    }
    func_80286050((char *)state + 0x3C8);
    func_802394A4((char *)state + 0x255C8);
    func_802AB794((char *)state + 0x1BCF8);
    func_80294F1C();
    func_80293378(state);
}
