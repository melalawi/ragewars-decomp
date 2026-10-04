#include "span_1000/code_8020F2A8.h"
#include "types.h"

extern s32 func_802744D4_de(void);
extern s32 func_80232ABC_de(void *arg0);






void func_802100E0_de(void *arg0) {
    s32 temp_v0;

    if ((func_802744D4_de() % 100) < 0x15) {
        do {
            temp_v0 = func_80232ABC_de(*(void **)arg0);
        } while (temp_v0 >= 0x10);
        ((func_802100E0_S1 *)(*(void **)arg0))->unk770 = temp_v0;
        if (temp_v0 != ((func_802100E0_S1 *)(*(void **)arg0))->unk62E) {
            ((func_802100E0_S2 *)(arg0))->unk2E4 = 0;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F3C_4 = 32767.0f;
const float unbake_rodata_800C3F40_4 = 0.100000001f;
const float unbake_rodata_800C3F44_4 = 60.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9028_4 = 3072.0f;
const float unbake_rodata_800C902C_4 = 0.5f;
const float unbake_rodata_800C9030_4 = 0.25f;
const float unbake_rodata_800C9034_4 = 0.5f;
const float unbake_rodata_800C9038_4 = 1.0f;
const float unbake_rodata_800C903C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3F34_4 = 1.0f;
const float unbake_rodata_800C3F38_4 = 1.0f;
const float unbake_rodata_800C3F3C_4 = 1.0f;
const float unbake_rodata_800C3F40_4 = 0.75f;
const float unbake_rodata_800C3F44_4 = 0.5f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C3EE8_3C[] = {0x0024D3B8U, 0x0024D360U, 0x0024D3C8U, 0x0024D3C8U, 0x0024D360U, 0x0024D3B8U, 0x0024D3A8U, 0x0024D398U, 0x0024D370U, 0x0024D3C8U, 0x0024D3B8U, 0x0024D320U, 0x0024D3B8U, 0x0024D3B8U, 0x0024D3B8U};
const float unbake_rodata_800C3F24_4 = 122.879997f;
const float unbake_rodata_800C3F28_4 = 102.399994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F20_4 = 1.0f;
const float unbake_rodata_800C3F24_4 = 0.800000012f;
const float unbake_rodata_800C3F28_4 = 0.00999999978f;
const float unbake_rodata_800C3F2C_4 = 1.0f;
const float unbake_rodata_800C3F30_4 = 1.0f;
const float unbake_rodata_800C3F34_4 = 1.0f;
#endif
