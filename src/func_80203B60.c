#include "basetypes.h"

extern s32 func_802170A0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

extern s32 D_8011FE88;

typedef struct func_80203B60_S1 func_80203B60_S1;
typedef struct func_80203B60_S2 func_80203B60_S2;
typedef struct func_80203B60_S3 func_80203B60_S3;
struct func_80203B60_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    s32 unk100;
};
struct func_80203B60_S2 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};
struct func_80203B60_S3 {
    char pad0[0x110];
    s32 unk110;
};

void func_80203B60(void *arg0, void *arg1) {
    char *o0 = (char *) arg0;
    char *o1 = (char *) arg1;
    char *tmp;
    s32 masked;
    s32 *pFlag;

    tmp = ((func_80203B60_S1 *)(o0))->unk18 + 0x14;
    func_802170A0(arg0, arg1, 4, ((func_80203B60_S2 *)(tmp))->unkC, ((func_80203B60_S2 *)(tmp))->unk10);
    pFlag = &D_8011FE88;
    ((func_80203B60_S3 *)(o1))->unk110 = 0;
    func_80285D80(pFlag, arg0, 1);
    func_80278DE8(arg0, 1, arg0);
    masked = ((func_80203B60_S1 *)(o0))->unk100 & 0xFFFEFFFF;
    ((func_80203B60_S1 *)(o0))->unk100 = masked;
    if (*pFlag != 4) {
        ((func_80203B60_S1 *)(o0))->unk100 = masked | 0x08000000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C1A20_14[] = {0x00206A74U, 0x00206BDCU, 0x00206C9CU, 0x00206B3CU, 0x00206D14U};
const float unbake_rodata_800C1A34_4 = (-0.512000024f);
const float unbake_rodata_800C1A38_4 = 0.512000024f;
const float unbake_rodata_800C1A3C_4 = 45.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C6BC8_8 = 4294967296.0;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1D40_28[] = {0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x0020583CU, 0x00205960U, 0x00205960U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1D80_28[] = {0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x00205960U, 0x0020583CU, 0x00205960U, 0x00205960U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1AA0_28[] = {0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x0020581CU, 0x00205940U, 0x00205940U};
#endif
