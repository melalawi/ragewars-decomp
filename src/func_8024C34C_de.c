#include "common/types.h"
#include "span_1000/code_8024B644.h"
#include "types.h"





extern void func_8025E5B0_de(s32 *, s32, f32, f32 *);
extern void func_802736D4_de(void *, s32);
extern void func_80272898_de(void *arg0, void *arg1, void *arg2);
extern void func_8024E79C_de(void *arg0, Triple arg1, void *arg2, s32 *arg3,
                          s32 arg4, s32 arg5);





void func_8024C34C_de(void *arg0, s32 *arg1) {
    Scratch scratch;
    f32 zero;

    zero = 0.0f;
    func_8025E5B0_de(arg1, 0, zero, scratch.first);
    func_8025E5B0_de(arg1, 0, *(f32 *)arg1, scratch.second);
    scratch.in[0] = scratch.second[0] - scratch.first[0];
    scratch.in[1] = zero;
    scratch.in[2] = scratch.second[1] - scratch.first[1];
    func_802736D4_de(scratch.matrix, ((func_8024C33C_S1 *)(arg0))->unk6C);
    func_80272898_de(scratch.matrix, scratch.in, scratch.out);
    scratch.position[0] = ((func_8024C33C_S1 *)(arg0))->unk8.v0 +
                          (scratch.out[0] * ((func_8024C33C_S1 *)(arg0))->unk50);
    scratch.position[1] = ((func_8024C33C_S1 *)(arg0))->unkC;
    scratch.position[2] = ((func_8024C33C_S1 *)(arg0))->unk10 +
                          (scratch.out[2] * ((func_8024C33C_S1 *)(arg0))->unk58);
    func_8024E79C_de(arg0, *(Triple *)scratch.position, &((func_8024C33C_S1 *)(arg0))->unk8.v1,
                  &((func_8024C33C_S1 *)(arg0))->unk14, 0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0662_4[] = {0x00, 0xEF, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5718_68[] = {0x00, 0x43, 0x72, 0x2C, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x43, 0x72, 0x34, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x43, 0x70, 0x74, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x43, 0x71, 0xFC, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x43, 0x72, 0xAC, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x43, 0x72, 0x3C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0xC6, 0x00, 0x43, 0x72, 0xF4, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0xC6, 0x00, 0x43, 0x73, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x4C, 0x5F, 0x53};
#elif defined(VERSION_EU)
const float unbake_rodata_800EE5C0_4 = 0.00499999989f;
const float unbake_rodata_800EE5C4_4 = 100.0f;
const float unbake_rodata_800EE5C8_4 = 150.0f;
const float unbake_rodata_800EE5CC_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E93A0_20[] = {0x00430014U, 0x0043002CU, 0x004300D8U, 0x00430020U, 0x00430008U, 0x0042FFF0U, 0x0042FFFCU, 0x00430100U};
#elif defined(VERSION_DE)
const float unbake_rodata_800DE4F8_4 = 1.0f;
#endif
