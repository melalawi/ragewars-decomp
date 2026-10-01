#include "basetypes.h"

extern f32 D_800C71B0[];
extern char D_8013B364[];

extern void func_80211020(void *);
extern s32 func_8020D1CC(void *, s32, s32);
extern void func_80209874(void *, s32);
extern f32 func_8027272C(f32 *, f32 *);
extern void func_80208410(void *);
extern void func_80208EB0(void *);

typedef struct func_80212828_S1 func_80212828_S1;
typedef struct func_80212828_S2 func_80212828_S2;
typedef struct func_80212828_S3 func_80212828_S3;
typedef struct func_80212828_S4 func_80212828_S4;
typedef struct func_80212828_S5 func_80212828_S5;
typedef struct func_80212828_S6 func_80212828_S6;
typedef struct func_80212828_S7 func_80212828_S7;
struct func_80212828_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212828_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212828_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x64 - 0x10 - sizeof(s32)];
    void* unk64;
    char pad64[0x230 - 0x64 - sizeof(void*)];
    s32 unk230;
};
struct func_80212828_S4 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212828_S5 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x1454 - 0x8 - sizeof(f32)];
    void* unk1454;
};
struct func_80212828_S6 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80212828_S7 {
    char pad0[0x8];
    f32 unk8;
};

void func_80212828(void *arg0)
{
    void *state;
    void *peer;
    void *peer_actor;
    void *peer_state;
    s32 value;

    state = ((func_80212828_S2 *)(((func_80212828_S1 *)(arg0))->unk1D8))->unk1454;
    peer = ((func_80212828_S3 *)(state))->unk64;
    if (peer == 0) {
        func_80211020(state);
        return;
    }

    peer_actor = ((func_80212828_S4 *)(peer))->unk1D8;
    peer_state = ((func_80212828_S5 *)(peer_actor))->unk1454;
    value = ((func_80212828_S6 *)(peer_state))->unk4;
    ((func_80212828_S3 *)(state))->unkC = value;
    if (value != ((func_80212828_S3 *)(state))->unk10) {
        ((func_80212828_S3 *)(state))->unk10 = value;
        if (!func_8020D1CC(D_8013B364, ((func_80212828_S3 *)(state))->unk4, value)) {
            func_80209874(state, 1);
            return;
        }
    }

    func_80211020(state);
    func_80208410(state);
    func_80208EB0(state);
    if (func_8027272C(&((func_80212828_S5 *)(peer_actor))->unk8,
                       &((func_80212828_S7 *)(*(void **)state))->unk8) < D_800C71B0[1] ||
        ((func_80212828_S3 *)(state))->unk4 == ((func_80212828_S3 *)(state))->unkC) {
        func_80209874(state, ((func_80212828_S3 *)(state))->unk230);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1FF4_4 = 212336.625f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C71B4_4 = 212336.625f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2364_4 = 212336.625f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23A4_4 = 212336.625f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20C4_4 = 212336.625f;
#endif
