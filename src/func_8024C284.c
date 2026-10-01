#include "basetypes.h"

extern char D_800C8920;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);

typedef struct func_8024C284_S1 func_8024C284_S1;
typedef struct func_8024C284_S2 func_8024C284_S2;
struct func_8024C284_S1 {
    char pad0[0xC4];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
};
struct func_8024C284_S2 {
    char pad0[0x8];
    s32 unk8;
};

s32 func_8024C284(void *arg0, s32 arg1) {
    void *temp_v0;
    char *temp_v1;
    s32 temp_s0;

    if (((func_8024C284_S1 *)(arg0))->unk100 & 0x40000) {
        temp_v0 = func_802518DC(0, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C8920, 1);
        if (temp_v0 != 0) {
            temp_v1 = (char *) func_8028FD94(*(void **) temp_v0, 1);
            temp_v1 += arg1 * 4;
            temp_s0 = ((func_8024C284_S2 *)(temp_v1))->unk8;
            func_802536F4(0, (s32) temp_v0);
            return temp_s0;
        }
    }
    return -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E064A_4[] = {0x01, 0x32, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5630_60[] = {0x00, 0x43, 0x64, 0x68, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x43, 0x65, 0x74, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x20, 0x00, 0x43, 0x64, 0x88, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x43, 0x63, 0x9C, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x43, 0x64, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x43, 0x65, 0x9C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x43, 0x65, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x75, 0x04, 0x2E, 0x65, 0x6F, 0x73, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE558_14[] = {0x00436508U, 0x00436528U, 0x00436518U, 0x00436538U, 0x00436548U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E9380_14[] = {0x0042F05CU, 0x0042F0A0U, 0x0042F0FCU, 0x0042F154U, 0x0042F0CCU};
#elif defined(VERSION_DE)
const double unbake_rodata_800DE4C0_8 = 4294967296.0;
const float unbake_rodata_800DE4C8_4 = 0.0174532942f;
const float unbake_rodata_800DE4CC_4 = 1.0f;
const float unbake_rodata_800DE4D0_4 = 50.0f;
#endif
