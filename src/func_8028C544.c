#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern void func_80278C80(void *);
extern f32 func_802B2350(s32 arg0);
extern f32 D_800CA3D8;

typedef struct func_8028C544_S1 func_8028C544_S1;
typedef struct func_8028C544_S2 func_8028C544_S2;
typedef struct func_8028C544_S3 func_8028C544_S3;
typedef union func_8028C544_S1_U11EC { void* v0; char v1; } func_8028C544_S1_U11EC;
struct func_8028C544_S1 {
    char pad0[0x11D8];
    char unk11D8;
    char pad11D8[0x11DC - 0x11D8 - sizeof(char)];
    void* unk11DC;
    char pad11DC[0x11EC - 0x11DC - sizeof(void*)];
    func_8028C544_S1_U11EC unk11EC;
};
struct func_8028C544_S2 {
    char pad0[0x8];
    void* unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    f32 unkC;
};
struct func_8028C544_S3 {
    char pad0[0xC];
    unsigned short unkC;
    char padC[0xE - 0xC - sizeof(unsigned short)];
    u8 unkE;
};

s32 func_8028C544(void *arg0, void *arg1) {
    void *rec;
    f32 val;
    s32 flag;

    rec = ((func_8028C544_S1 *)(arg0))->unk11EC.v0;
    if (rec != 0) {
        func_80255E78(&((func_8028C544_S1 *)(arg0))->unk11EC.v1, rec);
        func_80255C58(&((func_8028C544_S1 *)(arg0))->unk11D8, (s32) rec);
        ((func_8028C544_S2 *)(rec))->unk8 = arg1;
    } else {
        rec = ((func_8028C544_S1 *)(arg0))->unk11DC;
        func_80278C80(((func_8028C544_S2 *)(rec))->unk8);
        ((func_8028C544_S2 *)(rec))->unk8 = arg1;
    }
    val = func_802B2350((s32) ((func_8028C544_S3 *)(arg1))->unkC);
    ((func_8028C544_S2 *)(rec))->unkC = val;
    flag = ((func_8028C544_S3 *)(arg1))->unkE & 2;
    if (flag != 0) {
        ((func_8028C544_S2 *)(rec))->unkC = val * D_800CA3D8;
    }
    return flag;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5218_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA3D8_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5598_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55D8_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C52E8_4 = 15.0f;
#endif
