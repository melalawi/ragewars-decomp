#include "common/types.h"
#include "span_1000/code_8024E6C8.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"



extern s32 func_8024F858_de(void *arg0);




extern func_8020CA10_G1 D_800C3DF8_de;

extern func_8020CA10_G1 D_800C3DFC_de;

extern f32 D_800CD738;

extern struct Shape_func_8021A2D4_de_2 D_800CD8D0;
extern GlobalState_func_8024F4A0_de D_801427D4;









void func_8024F4A0_de(void *arg0) {
    char *o = (char *) arg0;
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    ((func_8024F490_S1 *)(o))->unk1 = func_8024F858_de(arg0);
    ((func_8024F490_S1 *)(o))->unk3 = ((func_8024F490_Inner *)(((func_8024F490_S1 *)(o))->unk18))->value;

    if (D_801427D4.field0 == 0) {
        char *state = ((func_8024F490_S1 *)(o))->unk18;
        if (*(s32 *)state == 0xC) {
            ((func_8024F490_S1 *)(o))->unk1A4 = D_800CD738 * ((func_8022CA04_S3 *)(state))->unk20;
        } else if (((func_8024F490_S1 *)(o))->unk19C & 0x10) {
            temp_f1 = ((func_8024F490_S1 *)(o))->unk1A0 + D_800CD738 * D_800C3DF0_de;
            threshold = (&D_800C3DF0_de)[1];
            ((func_8024F490_S1 *)(o))->unk1A0 = temp_f1;
            if (temp_f1 < threshold) {
                ((func_8024F490_S1 *)(o))->unk194 = temp_f1 * D_800C3DF8_de.unk0;
            } else {
                final_value = D_800C3DFC_de.unk0;
                ((func_8024F490_S1 *)(o))->unk19C &= 0xFFEF;
                ((func_8024F490_S1 *)(o))->unk194 = final_value;
            }
        }

        if (((func_8024F490_S1 *)(o))->unk14 != 0) {
            ((func_8024F490_S1 *)(o))->unk1C0 = ((MenuRules *)(((func_8024F490_S1 *)(o))->unk14))->locked;
        } else {
            ((func_8024F490_S1 *)(o))->unk1C0 = D_800CD8D0.field_0;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3D20_4 = 0.0666666701f;
const float unbake_rodata_800C3D24_4 = 0.75f;
const float unbake_rodata_800C3D28_4 = 0.466666669f;
const float unbake_rodata_800C3D2C_4 = 0.349999994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8EE0_4 = 0.0666666701f;
const float unbake_rodata_800C8EE4_4 = 0.75f;
const float unbake_rodata_800C8EE8_4 = 0.466666669f;
const float unbake_rodata_800C8EEC_4 = 0.349999994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C40A0_4 = 0.0666666701f;
const float unbake_rodata_800C40A4_4 = 0.75f;
const float unbake_rodata_800C40A8_4 = 0.466666669f;
const float unbake_rodata_800C40AC_4 = 0.349999994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C40E0_4 = 0.0666666701f;
const float unbake_rodata_800C40E4_4 = 0.75f;
const float unbake_rodata_800C40E8_4 = 0.466666669f;
const float unbake_rodata_800C40EC_4 = 0.349999994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3DF0_4 = 0.0666666701f;
const float unbake_rodata_800C3DF4_4 = 0.75f;
const float unbake_rodata_800C3DF8_4 = 0.466666669f;
const float unbake_rodata_800C3DFC_4 = 0.349999994f;
#endif
