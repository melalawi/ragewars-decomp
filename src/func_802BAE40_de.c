#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8023B9A0.h"
#include "span_1000/code_802BB15C.h"
#include "types.h"

/* osInitialize, drafted from ultralib src/os/initialize.c (before 2.0J, _FINALROM): the clock
   rate comes from the ROM header through osPiRawReadIo. */



extern Quad_func_802A1BE0_de D_002BBC70[];
extern u64 D_80149B00;
extern u32 D_80149B08;

extern unsigned char D_8000031C[];
extern s32 D_80000300;
extern s32 D_800D5250;

extern u32 
#if defined(VERSION_EU)
func_802BD1C0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802BD200_eu_x
#elif defined(VERSION_US)
func_802BCE50_us
#else
func_802BCF20_de
#endif
(void);
extern void func_802BD220_de(u32 sr);
extern u32 func_802BD160_de(u32 csr);


extern void func_802BD280_de(void *addr, s32 size);
extern void func_802BD010_de(void *addr, s32 size);

extern s32 func_802B9B20_de(u32 devAddr, u32 *data);
extern void *func_802A001C_de(void *dst, s32 value, u32 size);

void func_802BAE40_de(void)
{
    u32 pifdata;
    u32 clock = 0;
    u64 *rate;

    D_80149B08 = 1;
    func_802BD220_de(
#if defined(VERSION_EU)
func_802BD1C0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802BD200_eu_x
#elif defined(VERSION_US)
func_802BCE50_us
#else
func_802BCF20_de
#endif
() | 0x20000000);
    func_802BD160_de(0x01000800);
    while (func_802BB060_de(0x1FC007FC, &pifdata)) {
        ;
    }
    while (func_802BB0F0_de(0x1FC007FC, pifdata | 8)) {
        ;
    }
    *(Quad_func_802A1BE0_de *)0x80000000 = *D_002BBC70;
    *(Quad_func_802A1BE0_de *)0x80000080 = *D_002BBC70;
    *(Quad_func_802A1BE0_de *)0x80000100 = *D_002BBC70;
    *(Quad_func_802A1BE0_de *)0x80000180 = *D_002BBC70;
    func_802BD280_de((void *)0x80000000, 0x80000180 - 0x80000000 + sizeof(Quad_func_802A1BE0_de));
    func_802BD010_de((void *)0x80000000, 0x80000180 - 0x80000000 + sizeof(Quad_func_802A1BE0_de));
    func_8023C750_de();
    func_802B9B20_de(4, &clock);
    clock &= ~0xf;
    if (clock != 0) {
        D_80149B00 = clock;
    } else {
        D_80149B00 = 62500000;
    }
    rate = &D_80149B00;
    *rate = *rate * 3 / 4;
    if (D_8000030C == 0) {
        func_802A001C_de(D_8000031C, 0, 0x40);
    }
    if (D_80000300 == 0) {
        D_800D5250 = 0x2F5B2D2;
    } else if (D_80000300 == 2) {
        D_800D5250 = 0x2E6025C;
    } else {
        D_800D5250 = 0x2E6D354;
    }
}

extern void func_802BAC50_de(void *arg0, void *arg1, s32 arg2);
extern int func_802B9D70_de(void);
/* Resident 'EX' object proven in every holding ROM. */
#if defined(VERSION_DE)
#define RW_DEVICE_ASSERT_EX D_800C79E0
#elif defined(VERSION_US)
#define RW_DEVICE_ASSERT_EX D_800C7900
#elif defined(VERSION_EU)
#define RW_DEVICE_ASSERT_EX D_800C85D0
#elif defined(VERSION_EU_X)
#define RW_DEVICE_ASSERT_EX D_800C8FA0
#else
#define RW_DEVICE_ASSERT_EX D_800CCC30
#endif
extern char RW_DEVICE_ASSERT_EX[];
extern s32 D_800C79E4_de;

int func_802BB060_de(u32 arg0, u32 *arg1) {
    if (arg0 & 3) {
        func_802BAC50_de(RW_DEVICE_ASSERT_EX, &D_800C79E4_de, 0x33);
    }
    if (arg1 == 0) {
        func_802BAC50_de(RW_DEVICE_ASSERT_EX, &D_800C79E4_de, 0x34);
    }
    if (func_802B9D70_de() != 0) {
        return -1;
    }
    *arg1 = *(u32 *)(arg0 | 0xA0000000);
    return 0;
}
