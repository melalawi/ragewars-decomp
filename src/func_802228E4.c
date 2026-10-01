/* Sets a player's movement speed factor at 0x784: D_800C7938[0] in states 0 and 1, otherwise the
   character's speed at 0x1C of its descriptor, which for a computer player (0x1450) is scaled twice by
   its skill byte at 0x93 (D_800C7938[1] then D_800C7940[1] for skill 0, D_800C7940[0] then D_800C7948
   for skill 1, unchanged for skill 2, other values reset to 0), then by the game option factor at 0x20
   of D_801462C8 when enabled at 0x1D, and by the ground's factor at 0x30 when state bits 3 at 0x38 are
   clear, there is ground, and func_8024E61C reports true or the ground is flagged 0x800. */
#include "basetypes.h"

extern f32 D_800C7938[];
extern f32 D_800C7940[];
extern f32 D_800C7948;
extern u8 D_801462C8[];
extern s32 func_8024E61C(void *);

typedef struct func_802228E4_S1 func_802228E4_S1;
typedef struct func_802228E4_S2 func_802228E4_S2;
typedef struct func_802228E4_S3 func_802228E4_S3;
typedef struct func_802228E4_S4 func_802228E4_S4;
struct func_802228E4_S1 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x650 - 0x5D8 - sizeof(char*)];
    u16 unk650;
    char pad650[0x784 - 0x650 - sizeof(u16)];
    f32 unk784;
    char pad784[0x1450 - 0x784 - sizeof(f32)];
    s32 unk1450;
};
struct func_802228E4_S2 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x38 - 0x18 - sizeof(char*)];
    s32 unk38;
};
struct func_802228E4_S3 {
    char pad0[0x20];
    f32 unk20;
};
struct func_802228E4_S4 {
    char pad0[0x30];
    f32 unk30;
    char pad30[0x52 - 0x30 - sizeof(f32)];
    u16 unk52;
};

void func_802228E4(void *arg0, void *arg1, void *ground) {
    u8 *options;

    if (((func_802228E4_S1 *)(arg0))->unk650 < 2) {
        ((func_802228E4_S1 *)(arg0))->unk784 = D_800C7938[0];
        return;
    }
    ((func_802228E4_S1 *)(arg0))->unk784 = *(f32 *) (((func_802228E4_S2 *)(arg1))->unk18 + 0x1C);
    if (((func_802228E4_S1 *)(arg0))->unk1450 != 0) {
        switch (*(u8 *) (((func_802228E4_S1 *)(arg0))->unk5D8 + 0x93)) {
        default:
            *(u8 *) (((func_802228E4_S1 *)(arg0))->unk5D8 + 0x93) = 0;
        case 0:
            ((func_802228E4_S1 *)(arg0))->unk784 *= D_800C7938[1];
            break;
        case 1:
            ((func_802228E4_S1 *)(arg0))->unk784 *= D_800C7940[0];
            break;
        case 2:
            break;
        }
        if (((func_802228E4_S1 *)(arg0))->unk1450 != 0) {
            switch (*(u8 *) (((func_802228E4_S1 *)(arg0))->unk5D8 + 0x93)) {
            default:
                *(u8 *) (((func_802228E4_S1 *)(arg0))->unk5D8 + 0x93) = 0;
            case 0:
                ((func_802228E4_S1 *)(arg0))->unk784 *= D_800C7940[1];
                break;
            case 1:
                ((func_802228E4_S1 *)(arg0))->unk784 *= D_800C7948;
                break;
            case 2:
                break;
            }
        }
    }
    options = D_801462C8;
    if (options[0x1D] != 0) {
        ((func_802228E4_S1 *)(arg0))->unk784 *= ((func_802228E4_S3 *)(options))->unk20;
    }
    if (!(((func_802228E4_S2 *)(arg1))->unk38 & 3) && ground != 0
        && (func_8024E61C(arg1) != 0 || (((func_802228E4_S4 *)(ground))->unk52 & 0x800))) {
        ((func_802228E4_S1 *)(arg0))->unk784 *= ((func_802228E4_S4 *)(ground))->unk30;
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
