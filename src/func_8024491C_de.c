#include "common/types.h"
#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"










extern void func_8023E690_de(void *arg0, Vec3 arg1, f32 arg2);
extern void func_8023EBD4_de(void *arg0);
extern void func_8023E838_de(void *arg0);
extern s32 func_8023D158_de(void *arg0);
extern void func_8023E45C_de(void *arg0);
extern s32 func_8023D380_de(void *arg0);






s32 func_8024491C_de(char *arg0, Vec3 arg1, Vec3 arg2, s32 arg3,
                  Vec3 arg4, f32 arg5) {
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

    func_8023E690_de(work.data, arg4, arg5);
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
const float unbake_rodata_800DD164_4 = 0.5f;
const float unbake_rodata_800DD168_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2458_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED2F0_4 = (-10000.0f);
const float unbake_rodata_800ED2F4_4 = (-20000.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E835C_4 = 1.0f;
const float unbake_rodata_800E8360_4 = 1.0f;
const float unbake_rodata_800E8364_4 = 0.166666672f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDA10_20[] = {0x00429090U, 0x00429098U, 0x004290A0U, 0x004290A8U, 0x004290A8U, 0x004297A8U, 0x00429754U, 0x004297A8U};
#endif
