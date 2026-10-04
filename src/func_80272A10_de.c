#include "common/types.h"
#include "span_1000/code_8027230C.h"
#include "span_1000/types.h"
#include "types.h"



extern f32 D_800C48C8_de[];






void func_80272A10_de(void *arg0, void *arg1, Vec3 *arg2) {
    char *m = (char *)arg0;
    char *v = (char *)arg1;
    f32 w;
    f32 scale;

    arg2->x = (((func_80272848_S1 *)(m))->unk0 * ((func_8024C864_S1 *)(v))->unk0)
                       + (((func_80272848_S1 *)(m))->unk10 * ((func_8024C864_S1 *)(v))->unk4)
                       + (((func_80272848_S1 *)(m))->unk20 * ((func_8024C864_S1 *)(v))->unk8)
                       + ((func_80272848_S1 *)(m))->unk30;
    arg2->y = (((func_80272848_S1 *)(m))->unk4 * ((func_8024C864_S1 *)(v))->unk0)
                       + (((func_80272848_S1 *)(m))->unk14 * ((func_8024C864_S1 *)(v))->unk4)
                       + (((func_80272848_S1 *)(m))->unk24 * ((func_8024C864_S1 *)(v))->unk8)
                       + ((func_80272848_S1 *)(m))->unk34;
    arg2->z = (((func_80272848_S1 *)(m))->unk8 * ((func_8024C864_S1 *)(v))->unk0)
                       + (((func_80272848_S1 *)(m))->unk18 * ((func_8024C864_S1 *)(v))->unk4)
                       + (((func_80272848_S1 *)(m))->unk28 * ((func_8024C864_S1 *)(v))->unk8)
                       + ((func_80272848_S1 *)(m))->unk38;
    w = (((func_80272848_S1 *)(m))->unkC * ((func_8024C864_S1 *)(v))->unk0)
        + (((func_80272848_S1 *)(m))->unk1C * ((func_8024C864_S1 *)(v))->unk4)
        + (((func_80272848_S1 *)(m))->unk2C * ((func_8024C864_S1 *)(v))->unk8)
        + ((func_80272848_S1 *)(m))->unk3C;
    if (w != 0.0f) {
        scale = D_800C48C8_de[1] / w;
        arg2->x = arg2->x * scale;
        arg2->y = arg2->y * scale;
        arg2->z = arg2->z * scale;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47FC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99BC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B7C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BBC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48CC_4 = 1.0f;
#endif
