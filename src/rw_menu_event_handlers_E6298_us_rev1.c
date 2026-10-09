#include "resident_event_handler.h"

extern s32 func_80436B68_de(void *, s32, s32, s32, s32);
extern s32 func_80436B70_de(void *, s32, s32, s32, s32);

/* func_80436E04_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E5698[2] = {
    {3591, 5, (ResidentEventHandler)((char *)func_80436B68_de - 0x80000000U)},
    {3592, 5, (ResidentEventHandler)((char *)func_80436B70_de - 0x80000000U)},
};
