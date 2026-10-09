#include "resident_event_handler.h"

extern s32 func_80420B50_de(void *, s32, s32, s32, s32);
extern s32 func_8041F6C8_de(void *, s32, s32, s32, s32);
extern s32 func_80420B78_de(void *, s32, s32, s32, s32);
extern s32 func_8041FC50_de(void *, s32, s32, s32, s32);
extern s32 func_8041F2A0_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_80420B10_de(void *, s32, s32, s32, s32);
extern s32 func_80420C10_de(void *, s32, s32, s32, s32);
extern s32 func_80420CDC_de(void *, s32, s32, s32, s32);
extern s32 func_80420BF0_de(void *, s32, s32, s32, s32);
extern s32 func_80420BF8_de(void *, s32, s32, s32, s32);
extern s32 func_80420C00_de(void *, s32, s32, s32, s32);
extern s32 func_80420C08_de(void *, s32, s32, s32, s32);

/* func_80420D90_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM E4F64..E5000. */
ResidentEventHandlerEntry D_800E0314[13] = {
    {3591, 7, (ResidentEventHandler)((char *)func_80420B50_de - 0x80000000U)},
    {3592, 7, (ResidentEventHandler)((char *)func_8041F6C8_de - 0x80000000U)},
    {10, 7, (ResidentEventHandler)((char *)func_80420B78_de - 0x80000000U)},
    {3594, 7, (ResidentEventHandler)((char *)func_8041FC50_de - 0x80000000U)},
    {3590, 7, (ResidentEventHandler)((char *)func_8041F2A0_us_rev1 - 0x80000000U)},
    {3587, 7, (ResidentEventHandler)((char *)func_80420B10_de - 0x80000000U)},
    {2, 7, (ResidentEventHandler)((char *)func_80420C10_de - 0x80000000U)},
    {1, 7, (ResidentEventHandler)((char *)func_80420CDC_de - 0x80000000U)},
    {8, 7, (ResidentEventHandler)((char *)func_80420BF0_de - 0x80000000U)},
    {7, 7, (ResidentEventHandler)((char *)func_80420BF8_de - 0x80000000U)},
    {5, 7, (ResidentEventHandler)((char *)func_80420C00_de - 0x80000000U)},
    {6, 7, (ResidentEventHandler)((char *)func_80420C08_de - 0x80000000U)},
    {0, 0, 0}
};
