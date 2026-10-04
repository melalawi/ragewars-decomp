#include "common/types.h"
#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"






extern void func_8023EBD4_de(void *arg0);
extern void func_8023E838_de(void *arg0);
extern s32 func_8023D158_de(void *arg0);
extern void func_8023E45C_de(void *arg0);
extern s32 func_8023D380_de(void *arg0);






s32 func_80244B68_de(char *arg0, char *arg1, Vec3 first, Vec3 second,
                   s32 arg4) {
    char *object = arg0;
    char *out = arg1;
    s32 count;
    s32 active;
    s32 result;
    s32 next;
    s32 maximum;
    s32 flags;

    func_8023EBD4_de(out);
    if (first.x == second.x && first.y == second.y && first.z == second.z) {
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

    ((func_80244494_S1 *)(out))->unk44 = first;
    ((func_80244494_S1 *)(out))->unk50 = second;
    ((func_80244494_S1 *)(out))->unk24 = 0;
    ((func_80244494_S1 *)(out))->unk20 = 0;
    ((func_80244494_S1 *)(out))->unk28 = 0;
    ((func_80244494_S1 *)(out))->unk2C = 0;
    ((func_80244494_S1 *)(out))->unk1C = 0;
    ((func_80244494_S1 *)(out))->unk40 = arg4;
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
const double unbake_rodata_800DD170_8 = 4294967296.0;
const float unbake_rodata_800DD178_4 = 0.0174532942f;
const float unbake_rodata_800DD17C_4 = 1.0f;
const float unbake_rodata_800DD180_4 = 50.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E2460_18[] = {0x0043F704U, 0x0043FAB4U, 0x0043FBC0U, 0x0043FDE4U, 0x0043F988U, 0x0043F704U};
const float unbake_rodata_800E2478_4 = 0.108108111f;
const float unbake_rodata_800E247C_4 = 0.5f;
const float unbake_rodata_800E2480_4 = 0.00450450461f;
const float unbake_rodata_800E2484_4 = 0.00450450461f;
const float unbake_rodata_800E2488_4 = 0.00352112669f;
const float unbake_rodata_800E248C_4 = 0.00450450461f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED2F8_4 = 10.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8380_4 = 10.2399998f;
const float unbake_rodata_800E8384_4 = 1.57079637f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDA30_38[] = {0x004297A8U, 0x004297E8U, 0x00429794U, 0x004297E8U, 0x00429780U, 0x004297E8U, 0x004297BCU, 0x004297E8U, 0x004297E8U, 0x004297E8U, 0x004297E8U, 0x004297E8U, 0x004297E8U, 0x004297D0U};
#endif
