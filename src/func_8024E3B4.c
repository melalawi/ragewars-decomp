#include "basetypes.h"

typedef struct func_8024E3B4_S1 func_8024E3B4_S1;
typedef struct func_8024E3B4_S2 func_8024E3B4_S2;
struct func_8024E3B4_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E3B4_S2 {
    char pad0[0x34];
    f32 unk34;
    char pad34[0xF8 - 0x34 - sizeof(f32)];
    f32 unkF8;
};

f32 func_8024E3B4(void *arg0) {
    void *temp_a0 = ((func_8024E3B4_S1 *)(arg0))->unk18;
    s32 temp_v1 = *(s32 *)temp_a0;

    switch (temp_v1) {
    case 11:
        return ((func_8024E3B4_S2 *)(temp_a0))->unkF8;
    case 4:
    case 1:
        return ((func_8024E3B4_S2 *)(temp_a0))->unk34;
    default:
        return 0.0f;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FDCD0_38[] = {0x16, 0x2C, 0x04, 0x01, 0x00, 0x00, 0xAC, 0x03, 0x00, 0x00, 0x0A, 0x5C, 0x24, 0x16, 0x02, 0x78, 0x01, 0x34, 0x38, 0x16, 0x02, 0x0A, 0x60, 0x62, 0x16, 0x2C, 0x04, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0A, 0x62, 0x66, 0x16, 0x2C, 0x04, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x32, 0x74, 0x16, 0x0A, 0x60, 0x76, 0x16, 0x2C, 0x04};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EED18_24[] = {0x00443E5CU, 0x00443E90U, 0x00443E90U, 0x00443E68U, 0x00443E7CU, 0x00443E90U, 0x00443EA0U, 0x00443EB4U, 0x00443EC8U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9BB0_4 = 255.0f;
const float unbake_rodata_800E9BB4_4 = 255.0f;
const float unbake_rodata_800E9BB8_4 = 255.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E028E_4[] = {0x00, 0xC4, 0x00, 0x00};
#endif
