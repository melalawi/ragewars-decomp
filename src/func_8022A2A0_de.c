#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_1000/code_8026D4F0.h"
#include "types.h"



extern s32 func_80245908_de(void);
extern void func_8021C9D8_de(void *arg0, void *arg1);








void func_8022A2A0_de(void *arg0, void *arg1) {
    void *cur;

    func_8026D980_de();
    cur = ((func_80228774_S1 *)(arg0))->unk20;
    if (cur != 0) {
        do {
            if (((func_8022A274_S2 *)(cur))->unk5DC != arg1 ||
                ((func_80207B5C_S2 *)(arg1))->unk24 == 1 ||
                func_80245908_de() != 0) {
                func_8021C9D8_de(cur, arg1);
            }
            cur = ((func_8022A274_S2 *)(cur))->unk16E0;
        } while (cur != 0);
    }
    func_8026D9D0_de();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5378_4 = 1.0f;
const float unbake_rodata_800C537C_4 = 255.0f;
const float unbake_rodata_800C5380_4 = 9.99999997e-07f;
const float unbake_rodata_800C5384_4 = 0.100000001f;
const float unbake_rodata_800C5388_4 = 0.5f;
const float unbake_rodata_800C538C_4 = 1.0f;
const float unbake_rodata_800C5390_4 = (-4.0f);
const float unbake_rodata_800C5394_4 = 0.5f;
const float unbake_rodata_800C5398_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA538_4 = 1.0f;
const float unbake_rodata_800CA53C_4 = 255.0f;
const float unbake_rodata_800CA540_4 = 9.99999997e-07f;
const float unbake_rodata_800CA544_4 = 0.100000001f;
const float unbake_rodata_800CA548_4 = 0.5f;
const float unbake_rodata_800CA54C_4 = 1.0f;
const float unbake_rodata_800CA550_4 = (-4.0f);
const float unbake_rodata_800CA554_4 = 0.5f;
const float unbake_rodata_800CA558_4 = 1.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C54F0_8 = 4294967296.0;
const float unbake_rodata_800C54F8_4 = 0.00392156886f;
const float unbake_rodata_800C54FC_4 = 0.5f;
const float unbake_rodata_800C5500_4 = 1.0f;
const float unbake_rodata_800C5504_4 = 1.0f;
const float unbake_rodata_800C5508_4 = 0.5f;
const float unbake_rodata_800C550C_4 = 255.0f;
const float unbake_rodata_800C5510_4 = 5.0f;
const float unbake_rodata_800C5514_4 = 1.0f;
const float unbake_rodata_800C5518_4 = 2.14748365e+09f;
const float unbake_rodata_800C551C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5520_4 = 2.14748365e+09f;
const float unbake_rodata_800C5524_4 = 2.14748365e+09f;
const float unbake_rodata_800C5528_4 = 2.14748365e+09f;
const float unbake_rodata_800C552C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5530_4 = 127.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C5500_D[] = {0x67, 0x72, 0x69, 0x64, 0x20, 0x73, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C53B4_4 = 0.953462005f;
const float unbake_rodata_800C53B8_4 = (-0.57207799f);
#endif
