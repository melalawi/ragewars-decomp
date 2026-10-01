#include "basetypes.h"

extern char D_800CD8F0;
extern char D_2079B0;
extern char D_207910;
extern char D_800C6C88;

typedef struct func_802077F4_S1 func_802077F4_S1;
typedef struct func_802077F4_S2 func_802077F4_S2;
typedef struct func_802077F4_S3 func_802077F4_S3;
typedef struct func_802077F4_S4 func_802077F4_S4;
typedef struct func_802077F4_S5 func_802077F4_S5;
struct func_802077F4_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    s32 unk100;
};
struct func_802077F4_S2 {
    char pad0[0x4];
    f32 unk4;
};
struct func_802077F4_S3 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x64 - 0x2C - sizeof(void*)];
    f32 unk64;
    char pad64[0x108 - 0x64 - sizeof(f32)];
    void* unk108;
    char pad108[0x11C - 0x108 - sizeof(void*)];
    void* unk11C;
    char pad11C[0x124 - 0x11C - sizeof(void*)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
    char pad128[0x12C - 0x128 - sizeof(s32)];
    s32 unk12C;
    char pad12C[0x130 - 0x12C - sizeof(s32)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
    char pad134[0x138 - 0x134 - sizeof(s32)];
    s32 unk138;
    char pad138[0x13C - 0x138 - sizeof(s32)];
    f32 unk13C;
    char pad13C[0x140 - 0x13C - sizeof(f32)];
    s32 unk140;
    char pad140[0x144 - 0x140 - sizeof(s32)];
    s32 unk144;
    char pad144[0x148 - 0x144 - sizeof(s32)];
    s32 unk148;
    char pad148[0x14C - 0x148 - sizeof(s32)];
    s32 unk14C;
    char pad14C[0x168 - 0x14C - sizeof(s32)];
    s32 unk168;
    char pad168[0x16C - 0x168 - sizeof(s32)];
    s32 unk16C;
};
struct func_802077F4_S4 {
    char pad0[0x40];
    f32 unk40;
};
struct func_802077F4_S5 {
    char pad0[0x14];
    s32 unk14;
};

void func_802077F4(void *arg0, void *arg1)
{
    f32 k;
    f32 value;
    f32 scaled;
    char *temp_v1;
    char *temp_v0;

    temp_v1 = ((func_802077F4_S1 *)(arg0))->unk18;
    k = ((func_802077F4_S2 *)(&D_800C6C88))->unk4;
    ((func_802077F4_S3 *)(arg1))->unk2C = &D_800CD8F0;
    ((func_802077F4_S3 *)(arg1))->unk108 = &D_2079B0;
    ((func_802077F4_S3 *)(arg1))->unk11C = &D_207910;
    ((func_802077F4_S3 *)(arg1))->unk134 = 0;
    ((func_802077F4_S3 *)(arg1))->unk138 = 0;
    temp_v0 = temp_v1 + 0x14;
    value = ((func_802077F4_S4 *)(temp_v0))->unk40;
    ((func_802077F4_S3 *)(arg1))->unk124 = 0;
    ((func_802077F4_S3 *)(arg1))->unk128 = 0;
    ((func_802077F4_S3 *)(arg1))->unk12C = 0;
    ((func_802077F4_S3 *)(arg1))->unk130 = 0;
    ((func_802077F4_S3 *)(arg1))->unk64 = value;
    scaled = ((func_802077F4_S4 *)(temp_v0))->unk40;
    ((func_802077F4_S3 *)(arg1))->unk140 = 0;
    ((func_802077F4_S3 *)(arg1))->unk144 = 0;
    scaled = scaled * k;
    ((func_802077F4_S3 *)(arg1))->unk148 = 0;
    ((func_802077F4_S3 *)(arg1))->unk14C = 0;
    ((func_802077F4_S3 *)(arg1))->unk168 = 0;
    ((func_802077F4_S3 *)(arg1))->unk16C = 0;
    ((func_802077F4_S3 *)(arg1))->unk13C = scaled;
    if (((func_802077F4_S5 *)(temp_v1))->unk14 & 4) {
        ((func_802077F4_S1 *)(arg0))->unk100 = ((func_802077F4_S1 *)(arg0))->unk100 & ~0x2000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1ACC_4 = 6.28318596f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6C8C_4 = 6.28318596f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1E3C_4 = 6.28318596f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1E7C_4 = 6.28318596f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1B9C_4 = 6.28318596f;
#endif
