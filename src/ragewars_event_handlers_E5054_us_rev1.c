#include "resident_event_handler.h"

extern s32 func_80421BEC_de(void *, s32, s32, s32, s32);
extern s32 func_80421AE8_de(void *, s32, s32, s32, s32);
extern s32 func_80421BBC_de(void *, s32, s32, s32, s32);
extern s32 func_80421D94_de(void *, s32, s32, s32, s32);
extern s32 func_80421CE8_de(void *, s32, s32, s32, s32);

/* func_80421DD0_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM E5054..E509C. */
ResidentEventHandlerEntry D_800E0404[6] = {
    {3592, 27, (ResidentEventHandler)((char *)func_80421BEC_de - 0x80000000U)},
    {3590, 27, (ResidentEventHandler)((char *)func_80421AE8_de - 0x80000000U)},
    {3587, 27, (ResidentEventHandler)((char *)func_80421BBC_de - 0x80000000U)},
    {2, 27, (ResidentEventHandler)((char *)func_80421D94_de - 0x80000000U)},
    {1, 27, (ResidentEventHandler)((char *)func_80421CE8_de - 0x80000000U)},
    {0, 0, 0}
};
