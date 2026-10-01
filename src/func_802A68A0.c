#include "basetypes.h"

extern f32 D_800CB028;
extern f32 D_800CB02C;
extern void func_80270980(f32 *, s32);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272898(f32 *arg0);
extern void func_802A35C0(void *arg0, void *arg1, f32 *arg2);

typedef struct func_802A68A0_S1 func_802A68A0_S1;
typedef struct func_802A68A0_S2 func_802A68A0_S2;
typedef struct func_802A68A0_S3 func_802A68A0_S3;
typedef struct func_802A68A0_S4 func_802A68A0_S4;
struct func_802A68A0_S1 {
    char pad0[0x7528];
    void* unk7528;
};
struct func_802A68A0_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x1C - 0x4 - sizeof(void*)];
    void* unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    f32 unk24;
};
struct func_802A68A0_S3 {
    char pad0[0x118];
    void* unk118;
};
struct func_802A68A0_S4 {
    char pad0[0x14];
    s32 unk14;
};

void func_802A68A0(void *arg0, void *arg1, s32 arg2) {
    f32 local[16];
    f32 scale;
    f32 zero;
    void *node;

    node = ((func_802A68A0_S1 *)(arg0))->unk7528;
    if (node != 0) {
        zero = 0.0f;
        do {
            if (((func_802A68A0_S2 *)(node))->unk1C == arg1 &&
                ((func_802A68A0_S2 *)(node))->unk24 > zero &&
                ((func_802A68A0_S2 *)(node))->unk24 > zero) {
                func_80270980(local, arg2);
                scale = D_800CB028;
                if (((func_802A68A0_S4 *)(((func_802A68A0_S3 *)(arg1))->unk118))->unk14 != 0) {
                    scale = D_800CB02C;
                }
                func_802734EC(local, scale, scale, scale);
                func_80272898(local);
                func_802A35C0(arg0, node, local);
            }
            node = ((func_802A68A0_S2 *)(node))->unk4;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DC8_4 = 0.00999999978f;
const float unbake_rodata_800C5DCC_4 = 0.292571425f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB028_4 = 0.00999999978f;
const float unbake_rodata_800CB02C_4 = 0.292571425f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6138_4 = 0.00999999978f;
const float unbake_rodata_800C613C_4 = 0.292571425f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6178_4 = 0.00999999978f;
const float unbake_rodata_800C617C_4 = 0.292571425f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E98_4 = 0.00999999978f;
const float unbake_rodata_800C5E9C_4 = 0.292571425f;
#endif
