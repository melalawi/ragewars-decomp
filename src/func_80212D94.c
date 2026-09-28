#include "basetypes.h"

extern void func_80211020(void *);
extern void func_80208410(void *);
extern void func_80208AAC(void *arg0);

void func_80212D94(void *arg0)
{
    void *state;
    void *peer;
    void *peer_state;
    s32 value;

    state = *(void **)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x1454);
    peer = *(void **)((char *)state + 0x64);
    if (peer == 0) {
        func_80211020(state);
        return;
    }
    peer_state = *(void **)((char *)*(void **)((char *)peer + 0x1D8) + 0x1454);
    value = *(s32 *)((char *)peer_state + 4);
    if (value != *(s32 *)((char *)state + 0x10)) {
        *(s32 *)((char *)state + 0x10) = value;
    }
    func_80208410(state);
    func_80211020(state);
    func_80208AAC(state);
}
