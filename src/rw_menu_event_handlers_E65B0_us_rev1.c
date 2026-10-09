#include "resident_event_handler.h"

extern s32 func_80439F10_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_80439E04_de(void *, s32, s32, s32, s32);
extern s32 func_80439D58_de(void *, s32, s32, s32, s32);

/* func_80439D58_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E59B0[4] = {
    {3590, 33, (ResidentEventHandler)((char *)func_80439F10_us_rev1 - 0x80000000U)},
    {2, 33, (ResidentEventHandler)((char *)func_80439E04_de - 0x80000000U)},
    {1, 33, (ResidentEventHandler)((char *)func_80439D58_de - 0x80000000U)},
    {0, 0, 0},
};
