#include "common/types.h"
#include "span_1000/code_80232B44.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 func_802301F4_de(void *, void *);
extern s32 func_8025DE54_de(s16, Vec3, s32, s32);
extern void func_8022B00C_de(void *arg0);
extern s32 func_80214178_de(void *, void *, s32);
extern void func_8022B190_de(s32);








void func_80232CEC_de(void *arg0, void *arg1) {
    void *state;

    state = ((func_8020A028_S3 *)(arg0))->unk1D8;
    if (((func_80232CDC_S2 *)(arg1))->unkCB != 0) {
        if (func_802301F4_de(arg0, arg1) != 0) {
            ((func_80232CDC_S2 *)(arg1))->unkCB = 0;
            ((func_80232CDC_S2 *)(arg1))->unk35 = -1;
        } else {
            switch (((func_80232CDC_S3 *)(state))->unk62E) {
            case 8:
                func_8025DE54_de(0xA3E, ((func_80232CDC_S3 *)(state))->unk8,
                              (s32)((char *)state + 8), -1);
            case 0:
            case 14:
                func_8022B00C_de(state);
                func_80214178_de(arg0, arg1, 2);
                break;
            default:
                func_80214178_de(arg0, arg1, 2);
                break;
            }
        }
        ((func_80232CDC_S3 *)(state))->unk788 = 1;
        ((func_80232CDC_S3 *)(state))->unk78C = 0;
    } else if ((((func_80232CDC_S3 *)(state))->unk62E == 12) &&
               ((((func_80232CDC_S3 *)(state))->unk6AC & 0x4000) != 0)) {
        func_8022B190_de((s32)state);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D26A4_4[] = {0x80, 0x0D, 0x03, 0xB0};
const unsigned char unbake_rodata_800D26A8_14[] = {0x80, 0x0D, 0x03, 0xB4, 0x80, 0x0D, 0x03, 0xB8, 0x80, 0x0D, 0x03, 0xBC, 0x80, 0x0D, 0x03, 0xC0, 0x80, 0x0D, 0x03, 0xC4};
const unsigned char unbake_rodata_800D26BC_8[] = {0x80, 0x0D, 0x03, 0xC8, 0x80, 0x0D, 0x03, 0xCC};
const unsigned char unbake_rodata_800D26C4_4[] = {0x80, 0x0D, 0x03, 0xD0};
const unsigned char unbake_rodata_800D26C8_24[] = {0x80, 0x0D, 0x03, 0xD4, 0x80, 0x0D, 0x03, 0xD8, 0x80, 0x0D, 0x03, 0xE4, 0x80, 0x0D, 0x03, 0xF0, 0x80, 0x0D, 0x03, 0xFC, 0x80, 0x0D, 0x04, 0x08, 0x80, 0x0D, 0x04, 0x10, 0x80, 0x0D, 0x04, 0x14, 0x80, 0x0D, 0x04, 0x18};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D75B4_4[] = {0x80, 0x0D, 0x4D, 0xB8};
const unsigned char unbake_rodata_800D75B8_4[] = {0x80, 0x0D, 0x4D, 0xC0};
const unsigned char unbake_rodata_800D75BC_4[] = {0x80, 0x0D, 0x4D, 0xC8};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE4D0_10[] = {0x00, 0x00, 0x00, 0x00, 0x40, 0x49, 0x0F, 0xDB, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x49, 0x0F, 0xDB};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEBB0_4[] = {0x00, 0x00, 0x00, 0x01};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3128_4[] = {0x80, 0x0C, 0xF5, 0x74};
const unsigned char unbake_rodata_800D312C_4[] = {0x80, 0x0C, 0xF5, 0x88};
const unsigned char unbake_rodata_800D3130_4[] = {0x80, 0x0C, 0xF5, 0x94};
const unsigned char unbake_rodata_800D3134_4[] = {0x80, 0x0C, 0xF5, 0xA8};
const unsigned char unbake_rodata_800D3138_4[] = {0x80, 0x0C, 0xF5, 0xBC};
const unsigned char unbake_rodata_800D313C_4[] = {0x80, 0x0C, 0xF5, 0xD0};
const unsigned char unbake_rodata_800D3140_4[] = {0x80, 0x0C, 0xF5, 0xE4};
const unsigned char unbake_rodata_800D3144_4[] = {0x80, 0x0C, 0xF5, 0xFC};
const unsigned char unbake_rodata_800D3148_8[] = {0x80, 0x0C, 0xF6, 0x10, 0x80, 0x0C, 0xF6, 0x24};
const unsigned char unbake_rodata_800D3150_4[] = {0x80, 0x0C, 0xF6, 0x48};
const unsigned char unbake_rodata_800D3154_4[] = {0x80, 0x0C, 0xF6, 0x60};
const unsigned char unbake_rodata_800D3158_4[] = {0x80, 0x0C, 0xF6, 0x78};
const unsigned char unbake_rodata_800D315C_4[] = {0x80, 0x0C, 0xF6, 0x88};
const unsigned char unbake_rodata_800D3160_4[] = {0x80, 0x0C, 0xF6, 0x9C};
#endif
