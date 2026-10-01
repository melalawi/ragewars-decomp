#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);
extern s32 D_8013B29C;
extern s32 D_80146894;

typedef struct func_8022AF64_S1 func_8022AF64_S1;
struct func_8022AF64_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5DC - 0x8 - sizeof(char)];
    s32 unk5DC;
    char pad5DC[0x11C0 - 0x5DC - sizeof(s32)];
    s32 unk11C0;
};

void func_8022AF64(void *arg0, s32 arg1) {
    s32 field5DC;
    void *var_s1;

    if (D_8013B29C == 0 && D_80146894 == 0) {
        field5DC = ((func_8022AF64_S1 *)(arg0))->unk5DC;
        if (field5DC != 0) {
            var_s1 = (void *)(field5DC + 0x128);
        } else {
            var_s1 = &((func_8022AF64_S1 *)(arg0))->unk8;
        }
        func_8025CA44(func_8025CC8C(), ((func_8022AF64_S1 *)(arg0))->unk11C0);
        ((func_8022AF64_S1 *)(arg0))->unk11C0 = (s32)func_8025C97C((void *)func_8025CC8C(), arg1, var_s1, var_s1, (s32)arg0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BD8_4 = 0.00999999978f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CAF30_17[] = {0x2E, 0x2E, 0x5C, 0x44, 0x41, 0x54, 0x41, 0x5C, 0x54, 0x53, 0x63, 0x72, 0x65, 0x64, 0x44, 0x61, 0x74, 0x61, 0x2E, 0x65, 0x78, 0x70, 0x00};
#elif defined(VERSION_EU)
const double unbake_rodata_800C58C0_8 = 1000.0;
const unsigned int unbake_rodata_800C58C8_40[] = {0x00297E14U, 0x00297E4CU, 0x00297EA0U, 0x00297EA0U, 0x00297DF8U, 0x00297DF8U, 0x00297DF8U, 0x00297DF8U, 0x00297EA0U, 0x00297EA0U, 0x00297EA0U, 0x00297EA0U, 0x00297EA0U, 0x00297EA0U, 0x00297E70U, 0x00297E88U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C5800_40[] = {0x00297144U, 0x0029717CU, 0x0029708CU, 0x0029708CU, 0x00297124U, 0x00297124U, 0x00297124U, 0x00297124U, 0x0029708CU, 0x0029708CU, 0x0029708CU, 0x0029708CU, 0x0029708CU, 0x0029708CU, 0x002971A0U, 0x002971B4U};
const unsigned int unbake_rodata_800C5840_40[] = {0x00297398U, 0x002973D0U, 0x00297424U, 0x00297424U, 0x00297378U, 0x00297378U, 0x00297378U, 0x00297378U, 0x00297424U, 0x00297424U, 0x00297424U, 0x00297424U, 0x00297424U, 0x00297424U, 0x002973F4U, 0x0029740CU};
#elif defined(VERSION_DE)
const float unbake_rodata_800C5AA4_4 = 1.0f;
#endif
