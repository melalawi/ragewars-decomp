#include "basetypes.h"

extern f32 D_800C71B0[];
extern char D_8013B364[];

extern void func_80211020(void *);
extern s32 func_8020D1CC(void *, s32, s32);
extern void func_80209874(void *, s32);
extern f32 func_8027272C(f32 *, f32 *);
extern void func_80208410(void *);
extern void func_80208EB0(void *);

void func_80212828(void *arg0)
{
    void *state;
    void *peer;
    void *peer_actor;
    void *peer_state;
    s32 value;

    state = *(void **)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x1454);
    peer = *(void **)((char *)state + 0x64);
    if (peer == 0) {
        func_80211020(state);
        return;
    }

    peer_actor = *(void **)((char *)peer + 0x1D8);
    peer_state = *(void **)((char *)peer_actor + 0x1454);
    value = *(s32 *)((char *)peer_state + 4);
    *(s32 *)((char *)state + 0xC) = value;
    if (value != *(s32 *)((char *)state + 0x10)) {
        *(s32 *)((char *)state + 0x10) = value;
        if (!func_8020D1CC(D_8013B364, *(s32 *)((char *)state + 4), value)) {
            func_80209874(state, 1);
            return;
        }
    }

    func_80211020(state);
    func_80208410(state);
    func_80208EB0(state);
    if (func_8027272C((f32 *)((char *)peer_actor + 8),
                       (f32 *)((char *)*(void **)state + 8)) < D_800C71B0[1] ||
        *(s32 *)((char *)state + 4) == *(s32 *)((char *)state + 0xC)) {
        func_80209874(state, *(s32 *)((char *)state + 0x230));
    }
}
