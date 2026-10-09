#include "types.h"

/* Mode lifecycle callbacks. The native consumers select modes with
 * stride twelve: 80294AB0 calls member+0, 80293848 member+4, and
 * 80292308 member+8, each passing the object in a0. Mode20 is selected
 * explicitly by 80293790. These entries use exact current function symbols
 * and retain the original KSEG0-bias-free callback relocations. */
typedef void (*ModeLifecycleHandler)(void *object);

extern void func_80293E6C_de(void *object);
extern void func_80293E9C_de(void *object);
extern void func_80293EB8_de(void *object);
extern void func_80293F44_de(void *object);
extern void func_80293FF0_de(void *object);
extern void func_8029412C_de(void);
extern void func_80294134_de(s32 arg0);
extern void func_80294158_de(void *object);
struct ModeLifecycleCallbacks { ModeLifecycleHandler enter; ModeLifecycleHandler update; ModeLifecycleHandler leave; };
struct ModeLifecycleCallbacks ragewars_mode_lifecycle_handlers_D35D8_us_rev1[3] = {
    {(ModeLifecycleHandler)((char *)func_80293DF0_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80293E6C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80293E9C_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_80293EB8_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80293F44_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80293FF0_de - 0x80000000U)},
    {(ModeLifecycleHandler)((char *)func_8029412C_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294134_de - 0x80000000U), (ModeLifecycleHandler)((char *)func_80294158_de - 0x80000000U)},
};
