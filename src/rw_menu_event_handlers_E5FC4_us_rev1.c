#include "resident_event_handler.h"

extern s32 func_8042D690_de(void *, s32, s32, s32, s32);
extern s32 func_8042BB60_de(void *, s32, s32, s32, s32);
extern s32 func_8042D4CC_de(void *, s32, s32, s32, s32);
extern s32 func_8042D8A4_de(void *, s32, s32, s32, s32);
extern s32 func_8042D788_de(void *, s32, s32, s32, s32);
extern s32 func_8042D4FC_de(void *, s32, s32, s32, s32);
extern s32 func_8042D8C4_de(void *, s32, s32, s32, s32);
extern s32 func_8042D908_de(void *, s32, s32, s32, s32);

/* func_8042D958_de reads event/kind/callback triples at stride12,
 * invokes five o32 arguments, returns the callback result, and stops at
 * the first null callback. Original callback relocations omit KSEG0 bias. */
ResidentEventHandlerEntry D_800E1374_de[9] = {
    {3592, 17, (ResidentEventHandler)((char *)func_8042D690_de - 0x80000000U)},
    {3590, 17, (ResidentEventHandler)((char *)func_8042BB60_de - 0x80000000U)},
    {3587, 17, (ResidentEventHandler)((char *)func_8042D4CC_de - 0x80000000U)},
    {2, 17, (ResidentEventHandler)((char *)func_8042D8A4_de - 0x80000000U)},
    {1, 17, (ResidentEventHandler)((char *)func_8042D788_de - 0x80000000U)},
    {3594, 17, (ResidentEventHandler)((char *)func_8042D4FC_de - 0x80000000U)},
    {5, 17, (ResidentEventHandler)((char *)func_8042D8C4_de - 0x80000000U)},
    {6, 17, (ResidentEventHandler)((char *)func_8042D908_de - 0x80000000U)},
    {0, 0, 0}
};
