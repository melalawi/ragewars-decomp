#include "basetypes.h"

extern char *D_8014EA44;
extern s32 D_800D9288;

typedef struct func_802C1D80_S1 func_802C1D80_S1;
struct func_802C1D80_S1 {
    char pad0[0x10];
    s32 unk10;
};

void func_802C1D80(void) {
    char *temp_a2;
    u32 status;

    status = *(volatile u32 *)0xA4600010;
    temp_a2 = D_8014EA44 + 0x14;
    while (status & 3) {
        status = *(volatile u32 *)0xA4600010;
    }
    *(volatile u32 *)0xA5000510 = ((func_802C1D80_S1 *)(temp_a2))->unk10 | 0x10000000;
    status = *(volatile u32 *)0xA4600010;
    while (status & 3) {
        status = *(volatile u32 *)0xA4600010;
    }
    *(volatile u32 *)0xA5000510 = ((func_802C1D80_S1 *)(temp_a2))->unk10;
    func_802C1E54();
    {
        volatile u32 *statusAddr = (volatile u32 *)0xA4600010;
        s32 mask = 0x100401;
        s32 *flagsAddr = &D_800D9288;
        s32 flags = *flagsAddr;

        *statusAddr = 2;
        *flagsAddr = flags | mask;
    }
}
