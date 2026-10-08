#include "resident_event_handler.h"

extern s32 func_80437444_de(void *, s32, s32, s32, s32);
extern s32 func_80437304_de(void *, s32, s32, s32, s32);
extern s32 func_80437414_de(void *, s32, s32, s32, s32);
extern s32 func_804373E4_de(void *, s32, s32, s32, s32);
extern s32 func_804375B0_de(void *, s32, s32, s32, s32);
extern s32 func_80437574_de(void *, s32, s32, s32, s32);

/* func_804384B8_eu consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800F1DA8[7] = {
    {3592, 9, (ResidentEventHandler)((char *)func_80437444_de - 0x80000000U)},
    {3590, 9, (ResidentEventHandler)((char *)func_80437304_de - 0x80000000U)},
    {3591, 9, (ResidentEventHandler)((char *)func_80437414_de - 0x80000000U)},
    {3587, 9, (ResidentEventHandler)((char *)func_804373E4_de - 0x80000000U)},
    {1, 9, (ResidentEventHandler)((char *)func_804375B0_de - 0x80000000U)},
    {2, 9, (ResidentEventHandler)((char *)func_80437574_de - 0x80000000U)},
    {0, 0, 0},
};
