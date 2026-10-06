#include "span_1000/code_802BB15C.h"
#include "types.h"
#include "span_1000/code_802BB15C.h"

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
