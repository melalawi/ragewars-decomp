#include "basetypes.h"

extern s32 D_800CE47C;
extern s32 D_80146910;

extern void *jtbl_800C7D70[];

typedef struct func_80229BE0_S1 func_80229BE0_S1;
typedef struct func_80229BE0_S2 func_80229BE0_S2;
struct func_80229BE0_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x5D8 - 0xE4 - sizeof(u16)];
    char* unk5D8;
};
struct func_80229BE0_S2 {
    char pad0[0x80];
    s8 unk80;
};

/** Return the animation-table offset selected by the actor state. */
s32 func_80229BE0(void *arg0, s32 arg1) {
    s32 *types = &D_800CE47C;
    u16 type = ((func_80229BE0_S1 *)(arg0))->unkE4;
    char *state;
    s32 offset;

    if (type == types[0]) {
        switch (D_80146910) {
        case 0:
            offset = 0x514;
            break;
        case 1:
            offset = 0x5DC;
            break;
        case 2:
            offset = 0x578;
            break;
        default:
            D_80146910 = 0;
            offset = 0x514;
            break;
        }
    } else if (type == types[-2]) {
        offset = 0x190;
    } else if (type == types[-1]) {
        offset = 0x3E8;
    } else {
        state = ((func_80229BE0_S1 *)(arg0))->unk5D8;
        {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_1, &&sw_state_2, &&sw_state_3,
            &&sw_state_4, &&sw_state_5, &&sw_state_6, &&sw_state_7,
            &&sw_state_8, &&sw_state_9, &&sw_state_15, &&sw_state_10,
            &&sw_state_11, &&sw_state_12, &&sw_state_13,
            &&sw_state_16, &&sw_state_14
        };
        s32 sw_state_value = ((func_80229BE0_S2 *)(state))->unk80;
        if ((unsigned int)sw_state_value > 16) {
            goto sw_state_invalid;
        }
        goto *jtbl_800C7D70[sw_state_value];
    }
    do {
        sw_state_invalid:
            ((func_80229BE0_S2 *)(state))->unk80 = 0;
            offset = 0;
            break;
        sw_state_1:
            offset = 0x44C;
            break;
        sw_state_2:
            offset = 0xC8;
            break;
        sw_state_3:
            offset = 0x12C;
            break;
        sw_state_4:
            offset = 0x4B0;
            break;
        sw_state_5:
            offset = 0x64;
            break;
        sw_state_6:
            offset = 0x258;
            break;
        sw_state_7:
            offset = 0x384;
            break;
        sw_state_8:
            offset = 0x320;
            break;
        sw_state_9:
        sw_state_15:
            offset = 0x2BC;
            break;
        sw_state_10:
            offset = 0x1F4;
            break;
        sw_state_11:
            offset = 0x640;
            break;
        sw_state_12:
            offset = 0x6A4;
            break;
        sw_state_13:
        sw_state_16:
            offset = 0x708;
            break;
        sw_state_14:
            offset = 0x76C;
            break;
    
    } while (0);
    }
    return arg1 + offset;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C2BB0_44[] = {0x00229C80U, 0x00229C88U, 0x00229C90U, 0x00229C98U, 0x00229CA0U, 0x00229CA8U, 0x00229CB0U, 0x00229CB8U, 0x00229CC0U, 0x00229CC8U, 0x00229CD0U, 0x00229CD8U, 0x00229CE0U, 0x00229CE8U, 0x00229CF0U, 0x00229CC8U, 0x00229CE8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C7D70_44[] = {0x00229C80U, 0x00229C88U, 0x00229C90U, 0x00229C98U, 0x00229CA0U, 0x00229CA8U, 0x00229CB0U, 0x00229CB8U, 0x00229CC0U, 0x00229CC8U, 0x00229CD0U, 0x00229CD8U, 0x00229CE0U, 0x00229CE8U, 0x00229CF0U, 0x00229CC8U, 0x00229CE8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C2F28_44[] = {0x00229EC0U, 0x00229EC8U, 0x00229ED0U, 0x00229ED8U, 0x00229EE0U, 0x00229EE8U, 0x00229EF0U, 0x00229EF8U, 0x00229F00U, 0x00229F08U, 0x00229F10U, 0x00229F18U, 0x00229F20U, 0x00229F28U, 0x00229F30U, 0x00229F08U, 0x00229F28U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C2F68_44[] = {0x00229EECU, 0x00229EF4U, 0x00229EFCU, 0x00229F04U, 0x00229F0CU, 0x00229F14U, 0x00229F1CU, 0x00229F24U, 0x00229F2CU, 0x00229F34U, 0x00229F3CU, 0x00229F44U, 0x00229F4CU, 0x00229F54U, 0x00229F5CU, 0x00229F34U, 0x00229F54U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C2C80_44[] = {0x00229CACU, 0x00229CB4U, 0x00229CBCU, 0x00229CC4U, 0x00229CCCU, 0x00229CD4U, 0x00229CDCU, 0x00229CE4U, 0x00229CECU, 0x00229CF4U, 0x00229CFCU, 0x00229D04U, 0x00229D0CU, 0x00229D14U, 0x00229D1CU, 0x00229CF4U, 0x00229D14U};
#endif
