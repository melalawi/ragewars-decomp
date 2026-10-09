#include "resident_event_handler.h"

extern s32 func_80439010_de(void *, s32, s32, s32, s32);
extern s32 func_80439018_de(void *, s32, s32, s32, s32);

/* func_804391B0_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E58A8[2] = {
    {3591, 6, (ResidentEventHandler)((char *)func_80439010_de - 0x80000000U)},
    {3592, 6, (ResidentEventHandler)((char *)func_80439018_de - 0x80000000U)},
};
