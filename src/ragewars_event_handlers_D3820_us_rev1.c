#include "resident_event_handler.h"

extern s32 func_802A1DE4_de(void *, s32, s32, s32, s32);
extern s32 func_802A1E20_de(void *, s32, s32, s32, s32);
extern s32 func_802A1E5C_de(void *, s32, s32, s32, s32);
extern s32 func_802A1EC0_de(void *, s32, s32, s32, s32);
extern s32 func_802A1F3C_de(void *, s32, s32, s32, s32);
extern s32 func_802A206C_de(void *, s32, s32, s32, s32);
extern s32 func_802A1FB8_de(void *, s32, s32, s32, s32);
extern s32 func_802A1FE8_de(void *, s32, s32, s32, s32);

/* func_802A1B50_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM D3820..D388C. */
ResidentEventHandlerEntry D_800CD9B0[9] = {
    {3591, 30000, (ResidentEventHandler)((char *)func_802A1DE4_de - 0x80000000U)},
    {15, 30000, (ResidentEventHandler)((char *)func_802A1E20_de - 0x80000000U)},
    {16, 30000, (ResidentEventHandler)((char *)func_802A1E5C_de - 0x80000000U)},
    {8, 30000, (ResidentEventHandler)((char *)func_802A1EC0_de - 0x80000000U)},
    {7, 30000, (ResidentEventHandler)((char *)func_802A1F3C_de - 0x80000000U)},
    {3587, 30000, (ResidentEventHandler)((char *)func_802A206C_de - 0x80000000U)},
    {11, 30000, (ResidentEventHandler)((char *)func_802A1FB8_de - 0x80000000U)},
    {3592, 30000, (ResidentEventHandler)((char *)func_802A1FE8_de - 0x80000000U)},
    {0, 0, 0}
};
