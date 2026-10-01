#include "basetypes.h"

extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern s32 func_802458F8(void);
extern void func_8021C9B4(void *arg0, void *arg1);

typedef struct func_8022A274_S1 func_8022A274_S1;
typedef struct func_8022A274_S2 func_8022A274_S2;
typedef struct func_8022A274_S3 func_8022A274_S3;
struct func_8022A274_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A274_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(void*)];
    void* unk16E0;
};
struct func_8022A274_S3 {
    char pad0[0x24];
    s32 unk24;
};

void func_8022A274(void *arg0, void *arg1) {
    void *cur;

    func_8026D980();
    cur = ((func_8022A274_S1 *)(arg0))->unk20;
    if (cur != 0) {
        do {
            if (((func_8022A274_S2 *)(cur))->unk5DC != arg1 ||
                ((func_8022A274_S3 *)(arg1))->unk24 == 1 ||
                func_802458F8() != 0) {
                func_8021C9B4(cur, arg1);
            }
            cur = ((func_8022A274_S2 *)(cur))->unk16E0;
        } while (cur != 0);
    }
    func_8026D9D0();
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
