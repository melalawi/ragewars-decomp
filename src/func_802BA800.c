#include "basetypes.h"

extern void *jtbl_800CC9A0[];

typedef struct func_802BA800_S1 func_802BA800_S1;
struct func_802BA800_S1 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    s32 unk30;
};

/** Apply a control message to this node and forward handled messages. */
s32 func_802BA800(void *arg0, s32 arg1, s32 arg2) {
    void *node = arg0;
    void *target;
    void (*callback)(void *, s32, s32);

    {
        static void *sw_message_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_message_1, &&sw_message_4, &&sw_message_9, &&sw_message_7, &&sw_message_8, &&sw_message_default
        };
        s32 sw_message_value = arg1;
        sw_message_value -= (1);
        if ((unsigned int)sw_message_value > 8) {
            goto sw_message_default;
        }
        goto *jtbl_800CC9A0[sw_message_value];
    }
    do {
    sw_message_1:
        *(s32 *)arg0 = arg2;
        break;
    sw_message_4:
        ((func_802BA800_S1 *)(node))->unk20 = 0;
        ((func_802BA800_S1 *)(node))->unk24 = 1;
        ((func_802BA800_S1 *)(node))->unk30 = 0;
        ((func_802BA800_S1 *)(node))->unk1C = 0;
        target = *(void **)arg0;
        if (target != 0) {
            callback = *(void (**)(void *, s32, s32))((char *)target + 8);
            callback(target, 4, 0);
        }
        break;
    sw_message_9:
        ((func_802BA800_S1 *)(node))->unk30 = 1;
        target = *(void **)arg0;
        if (target != 0) {
            callback = *(void (**)(void *, s32, s32))((char *)target + 8);
            callback(target, 9, 0);
        }
        break;
    sw_message_7:
        ((func_802BA800_S1 *)(node))->unk18 = arg2;
        break;
    sw_message_8:
        ((func_802BA800_S1 *)(node))->unk1C = 1;
        break;
    sw_message_default:
        target = *(void **)arg0;
        if (target != 0) {
            callback = *(void (**)(void *, s32, s32))((char *)target + 8);
            callback(target, arg1, arg2);
        }
        break;
    
    } while (0);

    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C7670_24[] = {0x002B5690U, 0x002B56F8U, 0x002B56F8U, 0x002B5698U, 0x002B56F8U, 0x002B56F8U, 0x002B56E4U, 0x002B56ECU, 0x002B56C4U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC9A0_24[] = {0x002BA830U, 0x002BA898U, 0x002BA898U, 0x002BA838U, 0x002BA898U, 0x002BA898U, 0x002BA884U, 0x002BA88CU, 0x002BA864U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C8340_24[] = {0x002B5A00U, 0x002B5A68U, 0x002B5A68U, 0x002B5A08U, 0x002B5A68U, 0x002B5A68U, 0x002B5A54U, 0x002B5A5CU, 0x002B5A34U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C8D10_24[] = {0x002B5A40U, 0x002B5AA8U, 0x002B5AA8U, 0x002B5A48U, 0x002B5AA8U, 0x002B5AA8U, 0x002B5A94U, 0x002B5A9CU, 0x002B5A74U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C7750_24[] = {0x002B5760U, 0x002B57C8U, 0x002B57C8U, 0x002B5768U, 0x002B57C8U, 0x002B57C8U, 0x002B57B4U, 0x002B57BCU, 0x002B5794U};
#endif
