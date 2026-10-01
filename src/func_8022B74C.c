#include "basetypes.h"

extern u8 *func_802A125C(u8 *, u8 *);
extern void func_80239760(void *, s32, void *, f32);
extern char D_80145088;

typedef struct func_8022B74C_S1 func_8022B74C_S1;
struct func_8022B74C_S1 {
    char pad0[0x5DC];
    s32 unk5DC;
    char pad5DC[0x13B0 - 0x5DC - sizeof(s32)];
    s32 unk13B0;
};

void func_8022B74C(void *arg0, u8 *arg1, f32 arg2) {
    s32 count;
    s32 temp;

    count = ((func_8022B74C_S1 *)(arg0))->unk13B0 + 1;
    ((func_8022B74C_S1 *)(arg0))->unk13B0 = count;
    if (count == 5) {
        ((func_8022B74C_S1 *)(arg0))->unk13B0 = 0;
    }
    func_802A125C((u8 *)((((func_8022B74C_S1 *)(arg0))->unk13B0 * 0x15) + 0x1344 + (char *)arg0), arg1);
    temp = ((func_8022B74C_S1 *)(arg0))->unk5DC;
    if (temp != 0) {
        func_80239760(&D_80145088, temp,
                      (((func_8022B74C_S1 *)(arg0))->unk13B0 * 0x15) + 0x1344 + (char *)arg0,
                      arg2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5F08_1C[] = {0x002A8A94U, 0x002A8BC0U, 0x002A8BF8U, 0x002A8C30U, 0x002A8C68U, 0x002A8C9CU, 0x002A8CD0U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB188_1C[] = {0x002A9B8CU, 0x002A9B9CU, 0x002A9BCCU, 0x002A9BACU, 0x002A9BBCU, 0x002A9BBCU, 0x002A9BCCU};
const float unbake_rodata_800CB1A4_4 = 24.0f;
const float unbake_rodata_800CB1A8_4 = 12.0f;
const float unbake_rodata_800CB1AC_4 = 6.0f;
const float unbake_rodata_800CB1B0_4 = 16.0f;
const float unbake_rodata_800CB1B4_4 = 8.0f;
const float unbake_rodata_800CB1B8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6010_4 = (-100000000.0f);
const float unbake_rodata_800C6014_4 = 100000000.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5DE4_4 = 1.0f;
const float unbake_rodata_800C5DE8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5F20_4 = 1.0f;
const float unbake_rodata_800C5F24_4 = 0.75f;
const float unbake_rodata_800C5F28_4 = 9.0f;
const float unbake_rodata_800C5F2C_4 = 15.0f;
const float unbake_rodata_800C5F30_4 = 27.0f;
const float unbake_rodata_800C5F34_4 = 1.5f;
const float unbake_rodata_800C5F38_4 = 1.0f;
const float unbake_rodata_800C5F3C_4 = 0.400000006f;
const float unbake_rodata_800C5F40_4 = 0.400000006f;
const float unbake_rodata_800C5F44_4 = 1.0f;
#endif
