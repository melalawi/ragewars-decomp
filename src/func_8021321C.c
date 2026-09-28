#include "basetypes.h"

extern f32 D_800C71E0;

extern void func_80209874(void *arg0, s32 arg1);
extern void func_80211020(void *arg0);
extern s32 func_80274544(void);
extern f32 func_80209948(void *arg0, s32 arg1);
extern void func_80208410(void *);
extern void func_80208AAC(void *arg0);

void func_8021321C(void *arg0)
{
    void *state;
    s32 random;
    s32 actor_state;
    u32 flags;

    state = *(void **)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x1454);
    if (*(u8 *)((char *)*(void **)((char *)*(void **)state + 0x5D8) + 0x8F) == 0) {
        func_80209874(state, 2);
        return;
    }

    func_80211020(state);
    if (--*(s32 *)((char *)state + 0x320) == 0) {
        actor_state = *(s16 *)((char *)*(void **)state + 0x650);
        flags = *(u32 *)((char *)*(void **)state + 0x38);
        actor_state ^= 15;
        flags = (flags & 0x3000) != 0;
        if (actor_state != 0 && !flags) {
            *(u32 *)((char *)*(void **)state + 0x6B0) |= 0x10;
        }
    }

    if (*(s32 *)((char *)state + 0x320) < 0) {
        random = func_80274544();
        *(s32 *)((char *)state + 0x320) = ((random % 5) + 3) * 15;
    }

    if (func_80209948(state, *(s32 *)((char *)state + 0xC)) < D_800C71E0) {
        *(u32 *)((char *)*(void **)state + 0x6B0) |= 0x10;
    }
    func_80208410(state);
    func_80208AAC(state);
}
