#include "resident_event_handler.h"

extern s32 func_80421884_de(void *, s32, s32, s32, s32);
extern s32 func_80420E20_de(void *, s32, s32, s32, s32);
extern s32 func_80421854_de(void *, s32, s32, s32, s32);
extern s32 func_80421F08_eu(void *, s32, s32, s32, s32);
extern s32 func_80421E70_eu(void *, s32, s32, s32, s32);

/* func_80421A58_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM E5004..E504C. */
ResidentEventHandlerEntry D_800E03B4[6] = {
    {3592, 28, (ResidentEventHandler)((char *)func_80421884_de - 0x80000000U)},
    {3590, 28, (ResidentEventHandler)((char *)func_80420E20_de - 0x80000000U)},
    {3587, 28, (ResidentEventHandler)((char *)func_80421854_de - 0x80000000U)},
    {2, 28, (ResidentEventHandler)((char *)func_80421F08_eu - 0x80000000U)},
    {1, 28, (ResidentEventHandler)((char *)func_80421E70_eu - 0x80000000U)},
    {0, 0, 0}
};
