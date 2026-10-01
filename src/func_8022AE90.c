#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);
extern s32 D_8013B29C;
extern s32 D_80146894;

typedef struct func_8022AE90_S1 func_8022AE90_S1;
struct func_8022AE90_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5DC - 0x8 - sizeof(char)];
    s32 unk5DC;
    char pad5DC[0x11BC - 0x5DC - sizeof(s32)];
    s32 unk11BC;
};

void func_8022AE90(void *arg0, s32 arg1) {
    s32 field5DC;
    void *var_s1;

    field5DC = ((func_8022AE90_S1 *)(arg0))->unk5DC;
    if (field5DC != 0) {
        var_s1 = (void *)(field5DC + 0x128);
    } else {
        var_s1 = &((func_8022AE90_S1 *)(arg0))->unk8;
    }
    if (D_8013B29C == 0 && D_80146894 == 0) {
        func_8025CA44(func_8025CC8C(), ((func_8022AE90_S1 *)(arg0))->unk11BC);
        ((func_8022AE90_S1 *)(arg0))->unk11BC = (s32)func_8025C97C((void *)func_8025CC8C(), arg1, var_s1, var_s1, (s32)arg0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5A34_4 = 1.0f;
const float unbake_rodata_800C5A38_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE38_4 = 0.00999999978f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C5840_40[] = {0x002976A8U, 0x002976E0U, 0x00297734U, 0x00297734U, 0x00297688U, 0x00297688U, 0x00297688U, 0x00297688U, 0x00297734U, 0x00297734U, 0x00297734U, 0x00297734U, 0x00297734U, 0x00297734U, 0x00297704U, 0x0029771CU};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C57D0_8[] = {0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C5A84_4 = 0.00100000005f;
const float unbake_rodata_800C5A88_4 = (-0.00100000005f);
const float unbake_rodata_800C5A8C_4 = 0.5f;
#endif
