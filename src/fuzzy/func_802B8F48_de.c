#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "resident_event_handler.h"
#include "shared/func_802BB8B0_de_closed.h"
#include "shared/func_80404D84_de_closed.h"
#include "span_1000/code_802B8DD0.h"
#include "types.h"
s32 func_802B9B20_de(s32 arg0, s32 *arg1);
typedef struct PiDevice {
    DeviceState state;
    u8 transfer[0x60];
} PiDevice;
extern PiDevice D_801486C0;

DeviceState *func_802B8F48_de(void) {
    u32 sp10;
    DeviceState *dev;
    DeviceState *head;
    u32 mask;
    DeviceState **list;

    dev = &D_801486C0.state;
    sp10 = 0;
    if (dev->address != 0xB0000000) {
        dev->type = 0;
        dev->address = 0xB0000000;
        func_802B9B20_de(0, &sp10);
        dev->latency = sp10 & 0xFF;
        dev->pulse = (sp10 >> 8) & 0xFF;
        dev->page_size = (sp10 >> 0x10) & 0xF;
        dev->release = (sp10 >> 0x14) & 0xF;
        dev->domain = 0;
        dev->queue = 0;
        func_802A001C_de(D_801486C0.transfer, 0, 0x60U);
        mask = func_802BCF30_de();
        list = &D_800D437C;
        head = *list;
        *list = dev;
        dev->previous = head;
        func_802BCF50_de(mask);
    }
    return dev;
}
