#include "types.h"

/* Mode lifecycle callbacks. The native consumers select modes with
 * stride twelve: 80294AB0 calls member+0, 80293848 member+4, and
 * 80292308 member+8, each passing the object in a0. Mode20 is selected
 * explicitly by 80293790. These entries use exact current function symbols
 * and retain the original KSEG0-bias-free callback relocations. */
typedef void (*ModeLifecycleHandler)(void *object);
extern void func_80290C24_de(s32 arg0);
extern void func_80293CE4_de(void *object);
extern void func_802941B8_de(void);
extern void func_802941DC_de(s32 arg0);
extern void func_80294200_de(void);
extern void func_802942F0_de(s32 arg0);
extern void func_80294320_de(s32 arg0);
extern void func_80294340_de(s32 arg0);
extern void func_8029436C_de(void);
extern void func_80294374_de(void *object);
extern void func_8029437C_de(void *object);
extern void func_80294384_de(void);
extern void func_802943A0_de(s32 arg0);
extern void func_802943C4_de(void *arg0);
extern void func_80294410_de(void);
extern void func_80294418_de(void);
extern void func_80294434_de(s32 arg0);
extern void func_80294488_de(s32 arg0);
extern void func_802944A8_de(void);
extern void func_802944C4_de(s32 arg0);
extern void func_802944F4_de(s32 arg0);
extern void func_80294514_de(void *object);
extern void func_80294530_de(void *object);
extern void func_80294560_de(void *object);
extern void func_80294580_de(void *object);
extern void func_8029459C_de(void *object);
extern void func_802945D8_de(s32 arg0);
extern void func_802945F8_de(void *object);
extern void func_80294614_de(void *object);
extern void func_802946A4_de(void *object);
extern void func_802947A8_de(void);
extern void func_802947C4_us_rev1(void *object);
extern void func_802947CC_us_rev1(void *object);
extern void func_802947D4_us_rev1(void *object);
extern void func_80294848_de(s32 arg0);
extern void func_802948C0_de(s32 arg0);
extern void func_80294938_de(s32 arg0);
extern void func_8029496C_de(s32 arg0);
extern void func_802949FC_de(s32 arg0);
extern void func_80294A74_de(void *object);
extern void func_80294AA8_de(void);
extern void func_80294AB0_de(void *arg0);
extern void func_80294B64_de(void);
extern void func_80294B6C_de(void *object);
extern void func_80294B74_de(void *object);
extern void func_80294B7C_de(void *object);
extern void func_80294B84_de(void *object);
extern void func_80294B8C_de(void *object);
extern void func_80294B94_de(void *object);
struct ModeLifecycleCallbacks { ModeLifecycleHandler enter; ModeLifecycleHandler update; ModeLifecycleHandler leave; };
struct ModeLifecycleCallbacks ragewars_mode_lifecycle_handlers_D3608_us_rev1[17] = {
    {(ModeLifecycleHandler)((char *)func_802941B8_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802941DC_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294200_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_802942F0_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294320_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294340_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_8029436C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294374_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_8029437C_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294384_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802943A0_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80290C24_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_802943C4_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294410_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294418_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294434_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294488_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802944A8_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294530_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294560_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294580_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_802944C4_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802944F4_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294514_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_8029459C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802945D8_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802945F8_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_802946A4_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802947A8_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80293CE4_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294614_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802947A8_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80293CE4_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_802947C4_us_rev1 - 0x80000000U), (ModeLifecycleHandler)((char *)func_802947CC_us_rev1 - 0x80000000U), (ModeLifecycleHandler)((char *)func_802947D4_us_rev1 - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294848_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802948C0_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294938_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_8029496C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_802949FC_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294A74_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294B6C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294B74_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294B7C_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294B84_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294B8C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294B94_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80294AA8_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294AB0_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294B64_de - 0x80000000U)},
};
