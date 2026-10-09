#include "resident_event_handler.h"

extern s32 func_80438C84_de(void *, s32, s32, s32, s32);
extern s32 func_80438AD4_de(void *, s32, s32, s32, s32);

/* func_80438E5C_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E17E4_de[2] = {
    {3592, 18, (ResidentEventHandler)((char *)func_80438C84_de - 0x80000000U)},
    {3591, 18, (ResidentEventHandler)((char *)func_80438AD4_de - 0x80000000U)},
};
