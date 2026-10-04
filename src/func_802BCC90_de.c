#include "common/types.h"
#include "span_1000/code_802C1358.h"
#include "span_C76B0/data.h"
#include "types.h"

extern char *D_801487B4;





void func_802BCC90_de(void) {
    char *temp_a2;
    u32 status;

    status = *(volatile u32 *)0xA4600010;
    temp_a2 = D_801487B4 + 0x14;
    while (status & 3) {
        status = *(volatile u32 *)0xA4600010;
    }
    *(volatile u32 *)0xA5000510 = ((func_8022BC04_S3 *)(temp_a2))->unk10 | 0x10000000;
    status = *(volatile u32 *)0xA4600010;
    while (status & 3) {
        status = *(volatile u32 *)0xA4600010;
    }
    *(volatile u32 *)0xA5000510 = ((func_8022BC04_S3 *)(temp_a2))->unk10;
    func_802BCD64_de();
    {
        volatile u32 *statusAddr = (volatile u32 *)0xA4600010;
        s32 mask = 0x100401;
        s32 *flagsAddr = &D_800D5258;
        s32 flags = *flagsAddr;

        *statusAddr = 2;
        *flagsAddr = flags | mask;
    }
}
