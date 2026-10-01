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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4160_8 = 4294967296.0;
const double unbake_rodata_800C4168_8 = 4294967296.0;
const double unbake_rodata_800C4170_8 = 4294967296.0;
const double unbake_rodata_800C4178_8 = 4294967296.0;
const double unbake_rodata_800C4180_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C92E8_4 = 1.0f;
const float unbake_rodata_800C92EC_4 = 1.0f;
const double unbake_rodata_800C92F0_8 = 4294967296.0;
const double unbake_rodata_800C92F8_8 = 4294967296.0;
const double unbake_rodata_800C9300_8 = 4294967296.0;
const double unbake_rodata_800C9308_8 = 4294967296.0;
const double unbake_rodata_800C9310_8 = 4294967296.0;
const float unbake_rodata_800C9318_4 = 1.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C42F0_8 = 4294967296.0;
const double unbake_rodata_800C42F8_8 = 4294967296.0;
const double unbake_rodata_800C4300_8 = 4294967296.0;
const double unbake_rodata_800C4308_8 = 4294967296.0;
const double unbake_rodata_800C4310_8 = 4294967296.0;
const double unbake_rodata_800C4318_8 = 4294967296.0;
const double unbake_rodata_800C4320_8 = 4294967296.0;
const double unbake_rodata_800C4328_8 = 4294967296.0;
const double unbake_rodata_800C4330_8 = 4294967296.0;
const double unbake_rodata_800C4338_8 = 4294967296.0;
const float unbake_rodata_800C4340_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4290_8 = 4294967296.0;
const float unbake_rodata_800C4298_4 = 0.00999999978f;
const float unbake_rodata_800C429C_4 = 4.53514731e-05f;
const float unbake_rodata_800C42A0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C41BC_4 = 9.58767268e-05f;
const float unbake_rodata_800C41C0_4 = 0.0666666701f;
#endif
