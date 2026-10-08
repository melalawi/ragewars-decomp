#include "resident_event_handler.h"

extern s32 func_8042DAF8_de(void *, s32, s32, s32, s32);
extern s32 func_8042DBD0_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_8042DAC8_de(void *, s32, s32, s32, s32);
extern s32 func_8042DCC4_de(void *, s32, s32, s32, s32);
extern s32 func_8042DC04_de(void *, s32, s32, s32, s32);
extern s32 func_8042DD00_de(void *, s32, s32, s32, s32);
extern s32 func_8042DDA8_de(void *, s32, s32, s32, s32);

/* func_8042DE10_de reads event/kind/callback triples at stride12,
 * invokes five o32 arguments, returns the callback result, and stops at
 * the first null callback. Original callback relocations omit KSEG0 bias. */
ResidentEventHandlerEntry D_800E13E4_de[8] = {
    {3592, 26, (ResidentEventHandler)((char *)func_8042DAF8_de - 0x80000000U)},
    {3590, 26, (ResidentEventHandler)((char *)func_8042DBD0_us_rev1 - 0x80000000U)},
    {3587, 26, (ResidentEventHandler)((char *)func_8042DAC8_de - 0x80000000U)},
    {2, 26, (ResidentEventHandler)((char *)func_8042DCC4_de - 0x80000000U)},
    {1, 26, (ResidentEventHandler)((char *)func_8042DC04_de - 0x80000000U)},
    {8, 26, (ResidentEventHandler)((char *)func_8042DD00_de - 0x80000000U)},
    {7, 26, (ResidentEventHandler)((char *)func_8042DDA8_de - 0x80000000U)},
    {0, 0, 0}
};
