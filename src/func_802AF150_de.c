#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802AE028.h"
#include "types.h"



extern void func_802AE6BC_de(s32 arg0, Message_func_802AF150_de *arg1);
extern void func_802AF2E0_de(void *arg0, Message_func_802AF150_de *arg1);
extern s32 func_802AE9B0_de(s32 arg0, s32 *arg1);
extern void func_802AFB6C_de(void *arg0, Message_func_802AF150_de *arg1);
extern s32 func_802B00D4_de(void *, s16 *, s32);
extern void func_802BAC50_de(void *arg0, void *arg1, s32 arg2);
extern char D_800C7350_de[];
extern char D_800C7354_de[];

extern void *jtbl_800C73D0[];




/** Dispatch the current object message and forward any resulting value. */
void func_802AF150_de(void *arg0) {
    Message_func_802AF150_de message;
    Message_func_802AF150_de output;
    s32 value1;
    s32 value2;
    s32 value3;
    s32 field18;
    s32 value;

    field18 = ((func_802B4220_S1 *)(arg0))->unk18;
    if (field18 != 0) {
        func_802AE6BC_de(field18, &message);
        {
        static void *sw_message_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_message_0, &&sw_message_2, &&sw_message_3, &&sw_message_17, &&sw_message_18, &&sw_message_19, &&sw_message_default
        };
        s32 sw_message_value = (s16)((u16)message.type - 1);
        if ((unsigned int)sw_message_value > 19) {
            goto sw_message_default;
        }
        goto *jtbl_800C73D0[sw_message_value];
    }
    do {
        sw_message_0:
            func_802AF2E0_de(arg0, &message);
            if (((func_802B4220_S1 *)(arg0))->unk2C == 1) {
                field18 = ((func_802B4220_S1 *)(arg0))->unk18;
                if (field18 != 0 && (func_802AE9B0_de(field18, &value1) & 0xFF)) {
                    output.type = 0;
                    value = value1;
                    goto send_value;
                }
            }
            break;
        sw_message_2:
            func_802AFB6C_de(arg0, &message);
            if (((func_802B4220_S1 *)(arg0))->unk2C == 1) {
                field18 = ((func_802B4220_S1 *)(arg0))->unk18;
                if (field18 != 0 && (func_802AE9B0_de(field18, &value2) & 0xFF)) {
                    output.type = 0;
                    value = value2;
                    goto send_value;
                }
            }
            break;
        sw_message_3:
            ((func_802B4220_S1 *)(arg0))->unk2C = 2;
            message.type = 0x10;
            func_802B00D4_de(&((func_802B4220_S1 *)(arg0))->unk48, &message, 0x7FFFFFFF);
            break;
        sw_message_17:
        sw_message_18:
        sw_message_19:
            if (((func_802B4220_S1 *)(arg0))->unk2C == 1) {
                field18 = ((func_802B4220_S1 *)(arg0))->unk18;
                if (field18 != 0 && (func_802AE9B0_de(field18, &value3) & 0xFF)) {
                    output.type = 0;
                    value = value3;
send_value:
                    func_802B00D4_de(&((func_802B4220_S1 *)(arg0))->unk48, &output,
                                  value * ((func_802B4220_S1 *)(arg0))->unk24);
                }
            }
            break;
        sw_message_default:
            func_802BAC50_de(D_800C7350_de, D_800C7354_de, 0x190);
            break;
        
    } while (0);
    }
}
