#include "basetypes.h"

extern void func_80211020(void *);
extern void func_80208410(void *);
extern void func_80208AAC(void *arg0);

typedef struct func_80212D94_S1 func_80212D94_S1;
typedef struct func_80212D94_S2 func_80212D94_S2;
typedef struct func_80212D94_S3 func_80212D94_S3;
typedef struct func_80212D94_S4 func_80212D94_S4;
typedef struct func_80212D94_S5 func_80212D94_S5;
typedef struct func_80212D94_S6 func_80212D94_S6;
struct func_80212D94_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212D94_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212D94_S3 {
    char pad0[0x10];
    s32 unk10;
    char pad10[0x64 - 0x10 - sizeof(s32)];
    void* unk64;
};
struct func_80212D94_S4 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212D94_S5 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212D94_S6 {
    char pad0[0x4];
    s32 unk4;
};

void func_80212D94(void *arg0)
{
    void *state;
    void *peer;
    void *peer_state;
    s32 value;

    state = ((func_80212D94_S2 *)(((func_80212D94_S1 *)(arg0))->unk1D8))->unk1454;
    peer = ((func_80212D94_S3 *)(state))->unk64;
    if (peer == 0) {
        func_80211020(state);
        return;
    }
    peer_state = ((func_80212D94_S5 *)(((func_80212D94_S4 *)(peer))->unk1D8))->unk1454;
    value = ((func_80212D94_S6 *)(peer_state))->unk4;
    if (value != ((func_80212D94_S3 *)(state))->unk10) {
        ((func_80212D94_S3 *)(state))->unk10 = value;
    }
    func_80208410(state);
    func_80211020(state);
    func_80208AAC(state);
}
