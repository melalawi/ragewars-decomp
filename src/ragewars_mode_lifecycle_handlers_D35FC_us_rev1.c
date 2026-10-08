#include "types.h"

/* Mode lifecycle callbacks. The native consumers select modes with
 * stride twelve: 80294AB0 calls member+0, 80293848 member+4, and
 * 80292308 member+8, each passing the object in a0. Mode20 is selected
 * explicitly by 80293790. These entries use exact current function symbols
 * and retain the original KSEG0-bias-free callback relocations. */
typedef void (*ModeLifecycleHandler)(void *object);
extern void func_802940D8_de(void *arg0);
extern void func_802940F8_de(s32 value);
/* Mode3 exit callback has no exact symbol and remains raw. */
struct ModeLifecyclePrefix { ModeLifecycleHandler enter; ModeLifecycleHandler update; };
struct ModeLifecyclePrefix ragewars_mode_lifecycle_handlers_D35FC_us_rev1 = {
    (ModeLifecycleHandler)((char *)func_802940D8_de - 0x80000000U),
    (ModeLifecycleHandler)((char *)func_802940F8_de - 0x80000000U),
};
