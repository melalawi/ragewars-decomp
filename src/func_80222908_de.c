#include "span_1000/code_80219480.h"
#include "span_1000/types.h"
#include "types.h"
/* Sets a player's movement speed factor at 0x784: D_800C2848_de[0] in states 0 and 1, otherwise the
   character's speed at 0x1C of its descriptor, which for a computer player (0x1450) is scaled twice by
   its skill byte at 0x93 (D_800C2848_de[1] then D_800C2850_de[1] for skill 0, D_800C2850_de[0] then D_800C2858_de
   for skill 1, unchanged for skill 2, other values reset to 0), then by the game option factor at 0x20
   of D_80142208_de when enabled at 0x1D, and by the ground's factor at 0x30 when state bits 3 at 0x38 are
   clear, there is ground, and func_8024E62C_de reports true or the ground is flagged 0x800. */

extern f32 D_800C2848_de[];
extern f32 D_800C2850_de[];
extern f32 D_800C2858_de;
extern u8 D_80142208_de[];
extern s32 func_8024E62C_de(void *);













void func_80222908_de(void *arg0, void *arg1, void *ground) {
    u8 *options;

    if (((ObjectLinks1454 *)(arg0))->unk_650 < 2) {
        ((ObjectLinks1454 *)(arg0))->unk_784 = D_800C2848_de[0];
        return;
    }
    ((ObjectLinks1454 *)(arg0))->unk_784 = ((MovementDescriptor *)(((ObjectLinks3C *)arg1)->unk_18))->speed;
    if (((ObjectLinks1454 *)(arg0))->unk_1450 != 0) {
        switch (((func_80209B64_S2 *)(((ObjectLinks1454 *)arg0)->unk_5D8))->unk93) {
        default:
            ((func_80209B64_S2 *)(((ObjectLinks1454 *)arg0)->unk_5D8))->unk93 = 0;
        case 0:
            ((ObjectLinks1454 *)(arg0))->unk_784 *= D_800C2848_de[1];
            break;
        case 1:
            ((ObjectLinks1454 *)(arg0))->unk_784 *= D_800C2850_de[0];
            break;
        case 2:
            break;
        }
        if (((ObjectLinks1454 *)(arg0))->unk_1450 != 0) {
            switch (((func_80209B64_S2 *)(((ObjectLinks1454 *)arg0)->unk_5D8))->unk93) {
            default:
                ((func_80209B64_S2 *)(((ObjectLinks1454 *)arg0)->unk_5D8))->unk93 = 0;
            case 0:
                ((ObjectLinks1454 *)(arg0))->unk_784 *= D_800C2850_de[1];
                break;
            case 1:
                ((ObjectLinks1454 *)(arg0))->unk_784 *= D_800C2858_de;
                break;
            case 2:
                break;
            }
        }
    }
    options = D_80142208_de;
    if (options[0x1D] != 0) {
        ((ObjectLinks1454 *)(arg0))->unk_784 *= ((func_8022CA04_S3 *)(options))->unk20;
    }
    if (!(((ObjectLinks3C *)(arg1))->unk_38 & 3) && ground != 0
        && (func_8024E62C_de(arg1) != 0 || (((ObjectState54 *)(ground))->unk_52 & 0x800))) {
        ((ObjectLinks1454 *)(arg0))->unk_784 *= ((ObjectState54 *)(ground))->unk_30;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2778_4 = 1.0f;
const float unbake_rodata_800C277C_4 = 0.833000004f;
const float unbake_rodata_800C2780_4 = 0.916999996f;
const float unbake_rodata_800C2784_4 = 0.833000004f;
const float unbake_rodata_800C2788_4 = 0.916999996f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7938_4 = 1.0f;
const float unbake_rodata_800C793C_4 = 0.833000004f;
const float unbake_rodata_800C7940_4 = 0.916999996f;
const float unbake_rodata_800C7944_4 = 0.833000004f;
const float unbake_rodata_800C7948_4 = 0.916999996f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2AE8_4 = 1.0f;
const float unbake_rodata_800C2AEC_4 = 0.833000004f;
const float unbake_rodata_800C2AF0_4 = 0.916999996f;
const float unbake_rodata_800C2AF4_4 = 0.833000004f;
const float unbake_rodata_800C2AF8_4 = 0.916999996f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2B28_4 = 1.0f;
const float unbake_rodata_800C2B2C_4 = 0.833000004f;
const float unbake_rodata_800C2B30_4 = 0.916999996f;
const float unbake_rodata_800C2B34_4 = 0.833000004f;
const float unbake_rodata_800C2B38_4 = 0.916999996f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2848_4 = 1.0f;
const float unbake_rodata_800C284C_4 = 0.833000004f;
const float unbake_rodata_800C2850_4 = 0.916999996f;
const float unbake_rodata_800C2854_4 = 0.833000004f;
const float unbake_rodata_800C2858_4 = 0.916999996f;
#endif
