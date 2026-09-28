/* osInitialize, drafted from ultralib src/os/initialize.c (before 2.0J, _FINALROM): the clock
   rate comes from the ROM header through osPiRawReadIo. */
#include "basetypes.h"

typedef struct {
    unsigned int inst1;
    unsigned int inst2;
    unsigned int inst3;
    unsigned int inst4;
} __osExceptionVector;

extern __osExceptionVector D_2C0D60[];
extern u64 D_8014FD90;
extern u32 D_8014FD98;
extern s32 D_8000030C;
extern unsigned char D_8000031C[];
extern s32 D_80000300;
extern s32 D_800D9280;

extern u32 func_802C2010(void);
extern void func_802C2310(u32 sr);
extern u32 func_802C2250(u32 csr);
extern s32 func_802C0150(u32 devAddr, u32 *data);
extern s32 func_802C01E0(u32 devAddr, u32 data);
extern void func_802C2370(void *addr, s32 size);
extern void func_802C2100(void *addr, s32 size);
extern void func_8023C740(void);
extern s32 func_802BEC10(u32 devAddr, u32 *data);
extern void *func_802A101C(void *dst, s32 value, u32 size);

void func_802BFF30(void)
{
    u32 pifdata;
    u32 clock = 0;
    u64 *rate;

    D_8014FD98 = 1;
    func_802C2310(func_802C2010() | 0x20000000);
    func_802C2250(0x01000800);
    while (func_802C0150(0x1FC007FC, &pifdata)) {
        ;
    }
    while (func_802C01E0(0x1FC007FC, pifdata | 8)) {
        ;
    }
    *(__osExceptionVector *)0x80000000 = *D_2C0D60;
    *(__osExceptionVector *)0x80000080 = *D_2C0D60;
    *(__osExceptionVector *)0x80000100 = *D_2C0D60;
    *(__osExceptionVector *)0x80000180 = *D_2C0D60;
    func_802C2370((void *)0x80000000, 0x80000180 - 0x80000000 + sizeof(__osExceptionVector));
    func_802C2100((void *)0x80000000, 0x80000180 - 0x80000000 + sizeof(__osExceptionVector));
    func_8023C740();
    func_802BEC10(4, &clock);
    clock &= ~0xf;
    if (clock != 0) {
        D_8014FD90 = clock;
    } else {
        D_8014FD90 = 62500000;
    }
    rate = &D_8014FD90;
    *rate = *rate * 3 / 4;
    if (D_8000030C == 0) {
        func_802A101C(D_8000031C, 0, 0x40);
    }
    if (D_80000300 == 0) {
        D_800D9280 = 0x2F5B2D2;
    } else if (D_80000300 == 2) {
        D_800D9280 = 0x2E6025C;
    } else {
        D_800D9280 = 0x2E6D354;
    }
}
