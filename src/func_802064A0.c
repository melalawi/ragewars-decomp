#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vector3i;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vector4f;

extern char D_80121990;
extern s32 func_80280094(void *, void *, void *, void *, s32, s32,
                         Vector3i, Vector4f, Vector3i, s32, s32, s32);

typedef struct func_802064A0_S1 func_802064A0_S1;
typedef struct func_802064A0_S2 func_802064A0_S2;
struct func_802064A0_S1 {
    char pad0[0x124];
    char unk124;
    char pad124[0x128 - 0x124 - sizeof(char)];
    s32 unk128;
};
struct func_802064A0_S2 {
    char pad0[0x1C];
    Vector3i unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Vector3i)];
    Vector4f unk5C;
};

void func_802064A0(void *arg0, void *arg1, Vector3i arg2,
                   s32 unused5, s32 arg6) {
    s32 result;

    result = func_80280094(&D_80121990, arg0, arg0,
                           &((func_802064A0_S1 *)(arg1))->unk124, 0, arg6,
                           ((func_802064A0_S2 *)(arg0))->unk1C,
                           ((func_802064A0_S2 *)(arg0))->unk5C,
                           arg2, 0, -1, 0);
    ((func_802064A0_S1 *)(arg1))->unk128 -= result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2704_4 = 0.25f;
const float unbake_rodata_800C2708_4 = 1.33333337f;
const float unbake_rodata_800C270C_4 = 0.00100000005f;
const float unbake_rodata_800C2710_4 = 1024.0f;
const float unbake_rodata_800C2714_4 = 0.0009765625f;
const float unbake_rodata_800C2718_4 = 1.0f;
const float unbake_rodata_800C271C_4 = 0.0210000016f;
const float unbake_rodata_800C2720_4 = 0.000100000005f;
const float unbake_rodata_800C2724_4 = (-51.1999969f);
const float unbake_rodata_800C2728_4 = 0.785398245f;
const float unbake_rodata_800C272C_4 = 0.699999988f;
const float unbake_rodata_800C2730_4 = 0.00999999978f;
const float unbake_rodata_800C2734_4 = 40.9599991f;
const float unbake_rodata_800C2738_4 = 40.9599991f;
const float unbake_rodata_800C273C_4 = (-10.2399998f);
const float unbake_rodata_800C2740_4 = 10.2399998f;
const float unbake_rodata_800C2744_4 = 66.5599976f;
const float unbake_rodata_800C2748_4 = 0.042857144f;
const float unbake_rodata_800C274C_4 = 5120.0f;
const float unbake_rodata_800C2750_4 = 100.0f;
const float unbake_rodata_800C2754_4 = 0.400000006f;
const float unbake_rodata_800C2758_4 = 1.0f;
const float unbake_rodata_800C275C_4 = 75.0f;
const float unbake_rodata_800C2760_4 = 15.0f;
const float unbake_rodata_800C2764_4 = 30.0f;
const float unbake_rodata_800C2768_4 = 20.0f;
const float unbake_rodata_800C276C_4 = 75.0f;
const float unbake_rodata_800C2770_4 = 150.0f;
const float unbake_rodata_800C2774_4 = 600.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C74E8_194[] = {0x0021E580U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E570U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E580U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E570U, 0x0021E570U, 0x0021E580U, 0x0021E580U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E580U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E590U, 0x0021E580U};
const float unbake_rodata_800C767C_4 = 8.0f;
const float unbake_rodata_800C7680_4 = 32.0f;
const float unbake_rodata_800C7684_4 = 16.0f;
const float unbake_rodata_800C7688_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2654_4 = 0.0800000057f;
const float unbake_rodata_800C2658_4 = 0.519999981f;
const float unbake_rodata_800C265C_4 = (-5120.0f);
const float unbake_rodata_800C2660_4 = (-1024.0f);
const float unbake_rodata_800C2664_4 = 11.25f;
const float unbake_rodata_800C2668_4 = 20.4799995f;
const float unbake_rodata_800C266C_4 = 1.25f;
const float unbake_rodata_800C2670_4 = 0.75f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2684_4 = 0.999998987f;
const float unbake_rodata_800C2688_4 = (-0.999998987f);
const float unbake_rodata_800C268C_4 = 1.0f;
const float unbake_rodata_800C2690_4 = 1.53600001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C259C_4 = 204.799988f;
const float unbake_rodata_800C25A0_4 = 0.5f;
const float unbake_rodata_800C25A4_4 = 1.0f;
const float unbake_rodata_800C25A8_4 = 614.399963f;
const float unbake_rodata_800C25AC_4 = 0.5f;
const float unbake_rodata_800C25B0_4 = 1.0f;
const float unbake_rodata_800C25B4_4 = 70.0f;
const float unbake_rodata_800C25B8_4 = 20.0f;
const float unbake_rodata_800C25BC_4 = 0.5f;
const float unbake_rodata_800C25C0_4 = 1.0f;
#endif
