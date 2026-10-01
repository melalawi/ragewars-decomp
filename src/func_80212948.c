#include "basetypes.h"

extern f32 D_800C71B8;

extern void func_80211020(void *);
extern void func_80212670(void *arg0);
extern s32 func_80209874(void *, s32);
extern f32 func_8027272C(f32 *arg0, f32 *arg1);
extern void func_80208410(void *);
extern void func_80208EB0(s32 *);

typedef struct func_80212948_S1 func_80212948_S1;
typedef struct func_80212948_S2 func_80212948_S2;
typedef struct func_80212948_S3 func_80212948_S3;
typedef struct func_80212948_S4 func_80212948_S4;
typedef struct func_80212948_S5 func_80212948_S5;
typedef struct func_80212948_S6 func_80212948_S6;
struct func_80212948_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212948_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212948_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x64 - 0xC - sizeof(s32)];
    void* unk64;
    char pad64[0x230 - 0x64 - sizeof(void*)];
    s32 unk230;
};
struct func_80212948_S4 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212948_S5 {
    char pad0[0x8];
    f32 unk8;
};
struct func_80212948_S6 {
    char pad0[0x8];
    f32 unk8;
};

void func_80212948(void *arg0)
{
    void *state;
    s32 old_state;

    state = ((func_80212948_S2 *)(((func_80212948_S1 *)(arg0))->unk1D8))->unk1454;
    if (((func_80212948_S3 *)(state))->unk64 == 0) {
        func_80211020(state);
        return;
    }

    old_state = ((func_80212948_S3 *)(state))->unkC;
    if (old_state == -1) {
        func_80212670(state);
        if (((func_80212948_S3 *)(state))->unkC == old_state ||
            ((func_80212948_S3 *)(state))->unkC == ((func_80212948_S3 *)(state))->unk4) {
            func_80209874(state, 4);
            return;
        }
    }

    if (D_800C71B8 < func_8027272C(
            &((func_80212948_S5 *)(((func_80212948_S4 *)(((func_80212948_S3 *)(state))->unk64))->unk1D8))->unk8,
            &((func_80212948_S6 *)(*(void **)state))->unk8)) {
        func_80209874(state, ((func_80212948_S3 *)(state))->unk230);
        return;
    }

    func_80211020(state);
    func_80208410(state);
    func_80208EB0(state);
    if (((func_80212948_S3 *)(state))->unk4 == ((func_80212948_S3 *)(state))->unkC) {
        ((func_80212948_S3 *)(state))->unkC = -1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1FF8_4 = 849346.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C71B8_4 = 849346.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2368_4 = 849346.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23A8_4 = 849346.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20C8_4 = 849346.5f;
#endif
