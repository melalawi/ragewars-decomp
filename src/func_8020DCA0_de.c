#include "span_1000/code_8020D328.h"
#include "span_1000/types.h"
#include "types.h"
typedef s32 M2C_UNK;

s32 func_802744D4_de(void);
s32 func_8020DD04_de(s32);
M2C_UNK func_80209874_de(void *, s32);






void func_8020DCA0_de(void *arg0) {
    s32 temp_v0;
    if ((func_802744D4_de() % 4) == 1) {
        temp_v0 = func_8020DD04_de((((func_802066A4_S3 *)(((((func_8020DCA0_S1 *)(arg0))->unk0))))->unk18) + 0x14);
        (((func_8020DCA0_S1 *)(arg0))->unk230) = temp_v0;
        func_80209874_de(arg0, temp_v0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C3950_2C[] = {0x43, 0x47, 0x61, 0x6D, 0x65, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x49, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x5F, 0x5F, 0x44, 0x72, 0x61, 0x77, 0x3A, 0x20, 0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8A58_4 = 1.0f;
const float unbake_rodata_800C8A5C_4 = 0.00872664712f;
const float unbake_rodata_800C8A60_4 = 0.5f;
const float unbake_rodata_800C8A64_4 = 0.00872664712f;
const float unbake_rodata_800C8A68_4 = 1.0f;
const float unbake_rodata_800C8A6C_4 = 0.5f;
const float unbake_rodata_800C8A70_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3990_4 = (-1.0f);
const float unbake_rodata_800C3994_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C3940_20[] = {0x0023D774U, 0x0023D868U, 0x0023D7B4U, 0x0023D8FCU, 0x0023D970U, 0x0023DAB4U, 0x0023D6D0U, 0x0023D774U};
const float unbake_rodata_800C3960_4 = 1.0f;
const float unbake_rodata_800C3964_4 = 1.0f;
const float unbake_rodata_800C3968_4 = 1.0f;
const float unbake_rodata_800C396C_4 = 1.0f;
const float unbake_rodata_800C3970_4 = 1.0f;
const float unbake_rodata_800C3974_4 = 1.0f;
const float unbake_rodata_800C3978_4 = 1.0f;
const float unbake_rodata_800C397C_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3950_4 = 1.57079637f;
const float unbake_rodata_800C3954_4 = 1.57079637f;
const float unbake_rodata_800C3958_4 = 0.5f;
const float unbake_rodata_800C395C_4 = 3.14159274f;
const float unbake_rodata_800C3960_4 = 3.14159274f;
const float unbake_rodata_800C3964_4 = 0.5f;
#endif
