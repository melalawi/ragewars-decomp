#include "basetypes.h"

#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} CTriple;

extern s32 D_8011FE88;
extern char D_8013BA80;

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *, s32, void *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80216288(void *, s32, CTriple, s32);
extern s32 func_802170A0(void *, void *, s32, s32, s32);
extern void func_802A6D28(void *, s32);

typedef struct func_80205324_S1 func_80205324_S1;
struct func_80205324_S1 {
    char pad0[0x8];
    CTriple unk8;
};

void func_80205324(void *arg0, void *arg1) {
    s32 temp_s3;
    s32 *flag;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x18) + 0x14;
    flag = &D_8011FE88;
    func_80285D80(flag, arg0, 1);
    func_80278DE8(arg0, 0x40000, arg0);
    if (M2C_FIELD(arg1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) & 0xFFFEFFFF);
    }
    if (M2C_FIELD(temp_s1, s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x2000;
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x100;
    }
    temp_s3 = *flag;
    if (temp_s3 == 4) {
        if (M2C_FIELD(temp_s1, s32 *, 0x20) != -1) {
            func_8025DE74(M2C_FIELD(temp_s1, s16 *, 0x22), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), 0, -1);
        }
        if (M2C_FIELD(temp_s1, s32 *, 0x1C) != -1) {
            func_80216288(arg0, M2C_FIELD(temp_s1, s32 *, 0x1C), ((func_80205324_S1 *)(arg0))->unk8, 0);
        }
        func_802170A0(arg0, arg1, 4, M2C_FIELD(temp_s1, s32 *, 0x24), M2C_FIELD(temp_s1, s32 *, 0x28));
        func_802A6D28(&D_8013BA80, (s32) arg0);
        if (*flag != temp_s3) {
            goto block_10;
        }
    } else {
block_10:
        M2C_FIELD(arg0, s32 *, 0x100) = (s32) ((M2C_FIELD(arg0, s32 *, 0x100) & ~0x100) | 0x08000000);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2150_4 = 0.400000006f;
const float unbake_rodata_800C2154_4 = (-0.600000024f);
const float unbake_rodata_800C2158_4 = 1.29999995f;
const float unbake_rodata_800C215C_4 = 0.100000001f;
const float unbake_rodata_800C2160_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7288_4 = 0.899999976f;
const float unbake_rodata_800C728C_4 = 1.0f;
const float unbake_rodata_800C7290_4 = (-1.0f);
const float unbake_rodata_800C7294_4 = 1.0f;
const float unbake_rodata_800C7298_4 = (-1.0f);
const float unbake_rodata_800C729C_4 = 1.0f;
const float unbake_rodata_800C72A0_4 = (-1.0f);
const float unbake_rodata_800C72A4_4 = 1.22173059f;
const float unbake_rodata_800C72A8_4 = 1.91986239f;
const float unbake_rodata_800C72AC_4 = 1.0f;
const float unbake_rodata_800C72B0_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C23FC_4 = 51.1999969f;
const float unbake_rodata_800C2400_4 = 51.1999969f;
const float unbake_rodata_800C2404_4 = 3.14159274f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2418_4 = 0.899999976f;
const float unbake_rodata_800C241C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2180_4 = 1.0f;
const float unbake_rodata_800C2184_4 = (-1.0f);
const float unbake_rodata_800C2188_4 = 0.52359885f;
const float unbake_rodata_800C218C_4 = 3.14159274f;
const float unbake_rodata_800C2190_4 = 0.261799425f;
const float unbake_rodata_800C2194_4 = (-0.261799425f);
#endif
