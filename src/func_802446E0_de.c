#include "common/types.h"
#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"










extern void func_8023E6D0_de(void *arg0, f32 arg1);
extern void func_8023EBD4_de(void *arg0);
extern void func_8023E838_de(void *arg0);
extern s32 func_8023D158_de(void *arg0);
extern void func_8023E45C_de(void *arg0);
extern s32 func_8023D380_de(void *arg0);






s32 func_802446E0_de(char *arg0, Vec3 arg1, Vec3 arg2, s32 arg3,
                   f32 arg4) {
    Work80244494 work;
    VectorPair vectors;
    char *object = arg0;
    char *out;
    s32 count;
    s32 active;
    s32 result;
    s32 next;
    s32 maximum;
    s32 flags;

    func_8023E6D0_de(work.data, arg4);
    out = work.data;
    vectors.first = arg1;
    vectors.second = arg2;
    func_8023EBD4_de(out);
    if (vectors.first.x == vectors.second.x &&
        vectors.first.y == vectors.second.y &&
        vectors.first.z == vectors.second.z) {
        return 0;
    }

    D_800CB418_de += 1;
    maximum = D_800CB41C_de;
    next = D_800CB418_de;
    if (next < maximum) {
        next = maximum;
    }
    D_800CB41C_de = next;

    ((func_80244494_S1 *)(out))->unk0 = object;
    if (object != 0) {
        s32 value = 0;
        if (*(u8 *)object == 1) {
            flags = ((func_80203C40_S1 *)(object))->unk100;
            flags &= 0x300000;
            value = flags != 0;
        }
        ((func_80244494_S1 *)(out))->unk4 = value;
    } else {
        ((func_80244494_S1 *)(out))->unk4 = 0;
    }

    ((func_80244494_S1 *)(out))->unk44 = vectors.first;
    ((func_80244494_S1 *)(out))->unk50 = vectors.second;
    ((func_80244494_S1 *)(out))->unk24 = 0;
    ((func_80244494_S1 *)(out))->unk20 = 0;
    ((func_80244494_S1 *)(out))->unk28 = 0;
    ((func_80244494_S1 *)(out))->unk2C = 0;
    ((func_80244494_S1 *)(out))->unk1C = 0;
    ((func_80244494_S1 *)(out))->unk40 = arg3;
    ((func_80244494_S1 *)(out))->unkAC = 0;
    ((func_80244494_S1 *)(out))->unk30 = 0;
    ((func_80244494_S1 *)(out))->unk34 = 0;
    func_8023E838_de(out);

    active = 1;
    count = 0;
    do {
        if (func_8023D158_de(out) != 0) {
            func_8023E45C_de(out);
            count += 1;
            result = func_8023D380_de(out);
            ((func_80244494_S1 *)(out))->unk44 = ((func_80244494_S1 *)(out))->unk180;
            ((func_80244494_S1 *)(out))->unk50 = ((func_80244494_S1 *)(out))->unk198;
            ((func_80244494_S1 *)(out))->unk74 = ((func_80244494_S1 *)(out))->unk1A4;
            active -= 1;
        } else {
            result = 0;
            ((func_80244494_S1 *)(out))->unk44 = ((func_80244494_S1 *)(out))->unk50;
            active -= 1;
        }
    } while (result != 0 && active != 0);
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD154_4 = 1.0f;
const float unbake_rodata_800DD158_4 = 0.400000006f;
const float unbake_rodata_800DD15C_4 = 1.0f;
const float unbake_rodata_800DD160_4 = 0.400000006f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800E2420_8 = 4294967296.0;
const unsigned int unbake_rodata_800E2428_24[] = {0x0043F588U, 0x0043F5B0U, 0x0043F5B0U, 0x0043F590U, 0x0043F5A0U, 0x0043F5B0U, 0x0043F5C0U, 0x0043F600U, 0x0043F640U};
const float unbake_rodata_800E244C_4 = 2.14748365e+09f;
const float unbake_rodata_800E2450_4 = 2.14748365e+09f;
const float unbake_rodata_800E2454_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const double unbake_rodata_800ED2C0_8 = 4294967296.0;
const float unbake_rodata_800ED2C8_4 = 2.14748365e+09f;
const float unbake_rodata_800ED2CC_4 = 1.0f;
const float unbake_rodata_800ED2D0_4 = 255.0f;
const float unbake_rodata_800ED2D4_4 = 2.14748365e+09f;
const float unbake_rodata_800ED2D8_4 = 255.0f;
const float unbake_rodata_800ED2DC_4 = 2.14748365e+09f;
const float unbake_rodata_800ED2E0_4 = 255.0f;
const float unbake_rodata_800ED2E4_4 = 2.14748365e+09f;
const float unbake_rodata_800ED2E8_4 = 255.0f;
const float unbake_rodata_800ED2EC_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E833C_11[] = {0x43, 0x69, 0x6E, 0x65, 0x6D, 0x61, 0x20, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x6F, 0x72, 0x79, 0x00};
const unsigned char unbake_rodata_800E8350_7[] = {0x43, 0x69, 0x6E, 0x65, 0x6D, 0x61, 0x00};
const float unbake_rodata_800E8358_4 = 1.57079637f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD9F0_20[] = {0x0042873CU, 0x00428744U, 0x0042874CU, 0x00428754U, 0x0042875CU, 0x00429058U, 0x00429060U, 0x00429068U};
#endif
