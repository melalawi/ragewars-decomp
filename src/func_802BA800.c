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
