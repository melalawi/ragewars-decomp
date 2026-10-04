#include "common/types.h"
#include "span_1000/code_8023CBB0.h"
#include "span_1000/code_802406DC.h"
#include "span_C76B0/data.h"
#include "types.h"





extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_802B72B0_de(f32);
extern void func_80271F9C_de(void *, void *, f32);
extern void func_8023F43C_de(void *arg0);
extern void func_80240260_de(void *arg0);
extern void func_80242BF0_de(void *arg0);
extern void func_80243920_de(void *arg0);









s32 func_8023D158_de(char *object) {
    s32 *flags = ((func_8023D148_S1 *)(object))->unk40;
    f32 magnitude;
    f32 var_f0;
    f32 var_f1;
    f32 var_f0_2;
    f32 var_f1_2;
    f32 var_f2;
    f32 var_f0_3;

    func_80240C8C_de((char *)object + 0xB0);
    func_80271F68_de(&((func_8023D148_S1 *)(object))->unk5C.v0,
                  &((func_8023D148_S1 *)(object))->unk50.v0,
                  &((func_8023D148_S1 *)(object))->unk44.v0);
    magnitude = func_802B72B0_de(
        (((func_8023D148_S1 *)(object))->unk5C.v1 * ((func_8023D148_S1 *)(object))->unk5C.v1) +
        (((func_8023D148_S2 *)(object))->unk60 * ((func_8023D148_S2 *)(object))->unk60) +
        (((func_8023D148_S2 *)(object))->unk64 * ((func_8023D148_S2 *)(object))->unk64));
    ((func_8023D148_S1 *)(object))->unk80 = magnitude;
    if ((magnitude == 0.0f) && (((func_8023D148_S1 *)(object))->unk4 == 0)) {
        return 0;
    }

    if (((func_8023D148_S1 *)(object))->unk80 != 0.0f) {
        func_80271F9C_de(&((func_8023D148_S1 *)(object))->unk68,
                      &((func_8023D148_S1 *)(object))->unk5C.v0,
                      D_800C3630_de / ((func_8023D148_S1 *)(object))->unk80);
    } else {
        ((func_8023D148_S1 *)(object))->unk68 = ((func_8023D148_S1 *)(object))->unk5C.v0;
    }

    var_f0 = ((func_8023D148_S1 *)(object))->unk50.v1;
    if (!(var_f0 <= ((func_8023D148_S1 *)(object))->unk44.v1)) {
        var_f0 = ((func_8023D148_S1 *)(object))->unk44.v1;
    }
    ((func_8023D148_S1 *)(object))->unk84 = var_f0;
    var_f1 = ((func_8023D148_S1 *)(object))->unk50.v1;
    if (!(((func_8023D148_S1 *)(object))->unk44.v1 <= var_f1)) {
        var_f1 = ((func_8023D148_S1 *)(object))->unk44.v1;
    }
    ((func_8023D148_S1 *)(object))->unk90 = var_f1;

    var_f0_2 = ((func_8023D148_S2 *)(object))->unk54;
    if (!(var_f0_2 <= ((func_8023D148_S2 *)(object))->unk48)) {
        var_f0_2 = ((func_8023D148_S2 *)(object))->unk48;
    }
    ((func_8023D148_S1 *)(object))->unk88 = var_f0_2;
    var_f1_2 = ((func_8023D148_S2 *)(object))->unk54;
    if (!(((func_8023D148_S2 *)(object))->unk48 <= var_f1_2)) {
        var_f1_2 = ((func_8023D148_S2 *)(object))->unk48;
    }
    ((func_8023D148_S1 *)(object))->unk94 = var_f1_2;

    var_f2 = ((func_8023D148_S2 *)(object))->unk58;
    if (!(var_f2 <= ((func_8023D148_S2 *)(object))->unk4C)) {
        var_f2 = ((func_8023D148_S2 *)(object))->unk4C;
    }
    ((func_8023D148_S1 *)(object))->unk8C = var_f2;
    var_f0_3 = ((func_8023D148_S2 *)(object))->unk58;
    if (!(((func_8023D148_S2 *)(object))->unk4C <= var_f0_3)) {
        var_f0_3 = ((func_8023D148_S2 *)(object))->unk4C;
    }
    ((func_8023D148_S1 *)(object))->unk98 = var_f0_3;

    ((func_8023D148_S1 *)(object))->unk9C = ((func_8023D148_S1 *)(object))->unk84;
    ((func_8023D148_S1 *)(object))->unkA4 = ((func_8023D148_S1 *)(object))->unk90;
    ((func_8023D148_S1 *)(object))->unkA8 = ((func_8023D148_S1 *)(object))->unk98;
    ((func_8023D148_S1 *)(object))->unkA0 = ((func_8023D148_S1 *)(object))->unk8C;

    if (*flags & 0x200000) {
        func_8023F43C_de(object);
    }
    if (((func_8023D148_S1 *)(object))->unk80 != 0.0f) {
        if (*flags & 0x10000) {
            func_80240260_de(object);
        }
        if (*flags & 0x4000) {
            func_80242BF0_de(object);
        }
        if (*flags & 0x80000) {
            func_80243920_de(object);
        }
    }
    return ((func_8023D148_S1 *)(object))->unkB0 != 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3560_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8720_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C38E0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3920_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3630_4 = 1.0f;
#endif
