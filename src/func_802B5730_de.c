#include "span_1000/code_802B53FC.h"
#include "types.h"

extern void *jtbl_800C7750[];




/** Apply a control message to this node and forward handled messages. */
s32 func_802B5730_de(void *arg0, s32 arg1, s32 arg2) {
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
        goto *jtbl_800C7750[sw_message_value];
    }
    do {
    sw_message_1:
        *(s32 *)arg0 = arg2;
        break;
    sw_message_4:
        ((IntegerState34 *)(node))->unk_20 = 0;
        ((IntegerState34 *)(node))->unk_24 = 1;
        ((IntegerState34 *)(node))->unk_30 = 0;
        ((IntegerState34 *)(node))->unk_1C = 0;
        target = *(void **)arg0;
        if (target != 0) {
            callback = ((struct CallbackStateC *) ((char *) target))->callback;
            callback(target, 4, 0);
        }
        break;
    sw_message_9:
        ((IntegerState34 *)(node))->unk_30 = 1;
        target = *(void **)arg0;
        if (target != 0) {
            callback = ((struct CallbackStateC *) ((char *) target))->callback;
            callback(target, 9, 0);
        }
        break;
    sw_message_7:
        ((IntegerState34 *)(node))->unk_18 = arg2;
        break;
    sw_message_8:
        ((IntegerState34 *)(node))->unk_1C = 1;
        break;
    sw_message_default:
        target = *(void **)arg0;
        if (target != 0) {
            callback = ((struct CallbackStateC *) ((char *) target))->callback;
            callback(target, arg1, arg2);
        }
        break;
    
    } while (0);

    return 0;
}
