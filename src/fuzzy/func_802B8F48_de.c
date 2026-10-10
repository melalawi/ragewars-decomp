#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "resident_event_handler.h"
#include "shared/func_802BB8B0_de_closed.h"
#include "shared/func_80404D84_de_closed.h"
#include "span_1000/code_802B8DD0.h"
#include "types.h"
s32 func_802B9B20_de(s32 arg0, s32 *arg1);
extern DeviceState D_801486C0;

DeviceState *func_802B8F48_de(void) {
    u32 sp10;
    DeviceState *temp_a1;
    u32 temp_a0;

    sp10 = 0;
    if (D_801486C0.address != 0xB0000000) {
        D_801486C0.type = 0;
        D_801486C0.address = 0xB0000000;
        func_802B9B20_de(0, &sp10);
        D_801486C0.domain = 0;
        D_801486C0.queue = 0;
        D_801486C0.latency = sp10 & 0xFF;
        D_801486C0.pulse = (sp10 >> 8) & 0xFF;
        D_801486C0.page_size = (sp10 >> 0x10) & 0xF;
        D_801486C0.release = (sp10 >> 0x14) & 0xF;
        func_802A001C_de(&D_801486C0 + 0x14, 0, 0x60U);
        temp_a1 = D_800D437C;
        temp_a0 = func_802BCF30_de();
        D_800D437C = &D_801486C0;
        D_801486C0.previous = temp_a1;
        func_802BCF50_de(temp_a0);
    }
    return &D_801486C0;
}
