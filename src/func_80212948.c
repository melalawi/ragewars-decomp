#include "basetypes.h"

extern f32 D_800C71B8;

extern void func_80211020(void *);
extern void func_80212670(void *arg0);
extern s32 func_80209874(void *, s32);
extern f32 func_8027272C(f32 *arg0, f32 *arg1);
extern void func_80208410(void *);
extern void func_80208EB0(s32 *);

void func_80212948(void *arg0)
{
    void *state;
    s32 old_state;

    state = *(void **)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x1454);
    if (*(void **)((char *)state + 0x64) == 0) {
        func_80211020(state);
        return;
    }

    old_state = *(s32 *)((char *)state + 0xC);
    if (old_state == -1) {
        func_80212670(state);
        if (*(s32 *)((char *)state + 0xC) == old_state ||
            *(s32 *)((char *)state + 0xC) == *(s32 *)((char *)state + 4)) {
            func_80209874(state, 4);
            return;
        }
    }

    if (D_800C71B8 < func_8027272C(
            (f32 *)((char *)*(void **)((char *)*(void **)((char *)state + 0x64) + 0x1D8) + 8),
            (f32 *)((char *)*(void **)state + 8))) {
        func_80209874(state, *(s32 *)((char *)state + 0x230));
        return;
    }

    func_80211020(state);
    func_80208410(state);
    func_80208EB0(state);
    if (*(s32 *)((char *)state + 4) == *(s32 *)((char *)state + 0xC)) {
        *(s32 *)((char *)state + 0xC) = -1;
    }
}
