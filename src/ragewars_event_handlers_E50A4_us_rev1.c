#include "resident_event_handler.h"

extern s32 func_80422228_de(void *, s32, s32, s32, s32);
extern s32 func_80422278_de(void *, s32, s32, s32, s32);
extern s32 func_8042242C_de(void *, s32, s32, s32, s32);
extern s32 func_80422414_de(void *, s32, s32, s32, s32);
extern s32 func_804222A8_de(void *, s32, s32, s32, s32);
extern s32 func_80422340_de(void *, s32, s32, s32, s32);
extern s32 func_804223CC_de(void *, s32, s32, s32, s32);

/* func_8042244C_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM E50A4..E5104. */
ResidentEventHandlerEntry D_800E44A4[8] = {
    {3590, 25, (ResidentEventHandler)((char *)func_80422228_de - 0x80000000U)},
    {3587, 25, (ResidentEventHandler)((char *)func_80422278_de - 0x80000000U)},
    {2, 25, (ResidentEventHandler)((char *)func_8042242C_de - 0x80000000U)},
    {1, 25, (ResidentEventHandler)((char *)func_80422414_de - 0x80000000U)},
    {3594, 25, (ResidentEventHandler)((char *)func_804222A8_de - 0x80000000U)},
    {3592, 25, (ResidentEventHandler)((char *)func_80422340_de - 0x80000000U)},
    {10, 25, (ResidentEventHandler)((char *)func_804223CC_de - 0x80000000U)},
    {0, 0, 0}
};
