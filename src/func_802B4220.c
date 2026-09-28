#include "basetypes.h"

typedef struct {
    s16 type;
    char pad[14];
} Message;

extern void func_802B378C(s32 arg0, Message *arg1);
extern void func_802B43B0(void *arg0, Message *arg1);
extern s32 func_802B3A80(s32 arg0, s32 *arg1);
extern void func_802B4C3C(void *arg0, Message *arg1);
extern s32 func_802B51A4(void *, s16 *, s32);
extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);
extern char D_800CC5A0[];
extern char D_800CC5A4[];

extern void *jtbl_800CC620[];

/** Dispatch the current object message and forward any resulting value. */
void func_802B4220(void *arg0) {
    Message message;
    Message output;
    s32 value1;
    s32 value2;
    s32 value3;
    s32 field18;
    s32 value;

    field18 = *(s32 *)((char *)arg0 + 0x18);
    if (field18 != 0) {
        func_802B378C(field18, &message);
        {
        static void *sw_message_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_message_0, &&sw_message_2, &&sw_message_3, &&sw_message_17, &&sw_message_18, &&sw_message_19, &&sw_message_default
        };
        s32 sw_message_value = (s16)((u16)message.type - 1);
        if ((unsigned int)sw_message_value > 19) {
            goto sw_message_default;
        }
        goto *jtbl_800CC620[sw_message_value];
    }
    do {
        sw_message_0:
            func_802B43B0(arg0, &message);
            if (*(s32 *)((char *)arg0 + 0x2C) == 1) {
                field18 = *(s32 *)((char *)arg0 + 0x18);
                if (field18 != 0 && (func_802B3A80(field18, &value1) & 0xFF)) {
                    output.type = 0;
                    value = value1;
                    goto send_value;
                }
            }
            break;
        sw_message_2:
            func_802B4C3C(arg0, &message);
            if (*(s32 *)((char *)arg0 + 0x2C) == 1) {
                field18 = *(s32 *)((char *)arg0 + 0x18);
                if (field18 != 0 && (func_802B3A80(field18, &value2) & 0xFF)) {
                    output.type = 0;
                    value = value2;
                    goto send_value;
                }
            }
            break;
        sw_message_3:
            *(s32 *)((char *)arg0 + 0x2C) = 2;
            message.type = 0x10;
            func_802B51A4((char *)arg0 + 0x48, &message, 0x7FFFFFFF);
            break;
        sw_message_17:
        sw_message_18:
        sw_message_19:
            if (*(s32 *)((char *)arg0 + 0x2C) == 1) {
                field18 = *(s32 *)((char *)arg0 + 0x18);
                if (field18 != 0 && (func_802B3A80(field18, &value3) & 0xFF)) {
                    output.type = 0;
                    value = value3;
send_value:
                    func_802B51A4((char *)arg0 + 0x48, &output,
                                  value * *(s32 *)((char *)arg0 + 0x24));
                }
            }
            break;
        sw_message_default:
            func_802BFD40(D_800CC5A0, D_800CC5A4, 0x190);
            break;
        
    } while (0);
    }
}
