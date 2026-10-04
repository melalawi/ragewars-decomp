#include "span_1000/code_80208410.h"
#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"


extern f32 func_80216F44_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C_de(void *arg0);









void func_8020A7B0_de(void *arg0, void *arg1) {
    s32 timer;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }
    func_8020A884_de(arg0, arg1);
    timer = ((func_8020A6D8_S1 *)(arg0))->unk2E4;
    if (timer > 0) {
        ((func_8020A6D8_S1 *)(arg0))->unk2E4 = timer - 1;
        return;
    }
    if (timer == 0) {
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 1;
        ((func_8020A6D8_S1 *)(arg0))->unk2E8 -= 1;
    }
    if (((func_8020A6D8_S1 *)(arg0))->unk2E8 != 0) {
        return;
    }
    ((func_8020A6D8_S1 *)(arg0))->unk2E4 = -1;
    record = ((func_8020A028_S3 *)(((func_8020A6D8_S1 *)(arg0))->unk64))->unk1D8;
    distance = func_80216F44_de(*(s32 *)arg0,
                             ((func_8020A028_S4 *)(record))->unk8,
                             ((func_8020A028_S4 *)(record))->unkC,
                             ((func_8020A028_S4 *)(record))->unk10);
    if (func_8020AA0C_de(arg0) < distance) {
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 1;
        return;
    }
    ((func_8020A6D8_S1 *)(arg0))->unk23C = 0;
    func_8020A95C_de(arg0, arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C34D4_4 = 1.0f;
const float unbake_rodata_800C34D8_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C853C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C8540_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C8544_4[] = {0x41, 0xC0, 0x00, 0x00};
const unsigned char unbake_rodata_800C8548_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C854C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C8550_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C8554_3[] = {0x42, 0x40, 0x00};
const unsigned char unbake_rodata_800C8558_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C855C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C8560_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C8564_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C8568_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C856C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C8570_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C8574_4[] = {0x00, 0x00, 0x00, 0xFF};
const unsigned char unbake_rodata_800C8578_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C857C_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C8580_48[] = {0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF};
const float unbake_rodata_800C85C8_4 = 0.25f;
const float unbake_rodata_800C85CC_4 = 1.0f;
const float unbake_rodata_800C85D0_4 = 0.400000006f;
const float unbake_rodata_800C85D4_4 = (-1.0f);
const float unbake_rodata_800C85D8_4 = 1.0f;
const float unbake_rodata_800C85DC_4 = (-1.0f);
const float unbake_rodata_800C85E0_4 = 1.0f;
const float unbake_rodata_800C85E4_4 = 35.2000008f;
const float unbake_rodata_800C85E8_4 = 1.0f;
const float unbake_rodata_800C85EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C85F0_4 = 2.0f;
const float unbake_rodata_800C85F4_4 = 0.03125f;
const float unbake_rodata_800C85F8_4 = 0.550000012f;
const float unbake_rodata_800C85FC_4 = 16.0f;
const float unbake_rodata_800C8600_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C34A8_4 = 0.5f;
const float unbake_rodata_800C34AC_4 = 0.5f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C34C8_8 = 4294967296.0;
const double unbake_rodata_800C34D0_8 = 4294967296.0;
const double unbake_rodata_800C34D8_8 = 4294967296.0;
const float unbake_rodata_800C34E0_4 = 2.14748365e+09f;
const float unbake_rodata_800C34E4_4 = 1024.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C344C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3450_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3454_4[] = {0x41, 0xC0, 0x00, 0x00};
const unsigned char unbake_rodata_800C3458_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C345C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3460_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C3464_3[] = {0x42, 0x40, 0x00};
const unsigned char unbake_rodata_800C3468_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C346C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3470_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3474_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3478_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C347C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3480_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3484_4[] = {0x00, 0x00, 0x00, 0xFF};
const unsigned char unbake_rodata_800C3488_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C348C_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C3490_48[] = {0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF};
const float unbake_rodata_800C34D8_4 = 0.25f;
const float unbake_rodata_800C34DC_4 = 1.0f;
const float unbake_rodata_800C34E0_4 = 0.400000006f;
const float unbake_rodata_800C34E4_4 = (-1.0f);
const float unbake_rodata_800C34E8_4 = 1.0f;
const float unbake_rodata_800C34EC_4 = (-1.0f);
const float unbake_rodata_800C34F0_4 = 1.0f;
const float unbake_rodata_800C34F4_4 = 35.2000008f;
const float unbake_rodata_800C34F8_4 = 1.0f;
const float unbake_rodata_800C34FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C3500_4 = 2.0f;
const float unbake_rodata_800C3504_4 = 0.03125f;
const float unbake_rodata_800C3508_4 = 0.550000012f;
const float unbake_rodata_800C350C_4 = 16.0f;
const float unbake_rodata_800C3510_4 = 255.0f;
#endif
