#include "basetypes.h"

extern float D_800C8C48;
extern f32 func_802BC380(f32);

typedef struct func_8024BECC_S1 func_8024BECC_S1;
struct func_8024BECC_S1 {
    char pad0[0x50];
    float unk50;
    char pad50[0x54 - 0x50 - sizeof(float)];
    float unk54;
    char pad54[0x58 - 0x54 - sizeof(float)];
    float unk58;
};

void func_8024BECC(void *arg0) {
    float temp_f12 = ((func_8024BECC_S1 *)(arg0))->unk50;
    float temp_f1 = ((func_8024BECC_S1 *)(arg0))->unk54;
    float temp_f0 = ((func_8024BECC_S1 *)(arg0))->unk58;
    func_802BC380(((temp_f12 * temp_f12) + (temp_f1 * temp_f1) + (temp_f0 * temp_f0)) * D_800C8C48);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3A88_4 = 0.333333343f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C48_4 = 0.333333343f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E08_4 = 0.333333343f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E48_4 = 0.333333343f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B58_4 = 0.333333343f;
#endif
