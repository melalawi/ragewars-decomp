#include "resident_event_handler.h"

extern s32 func_804359C8_de(void *, s32, s32, s32, s32);
extern s32 func_8042F7A8_de(void *, s32, s32, s32, s32);
extern s32 func_8042F91C_de(void *, s32, s32, s32, s32);

/* func_80435A78_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E1458_de[3] = {
    {3591, 19, (ResidentEventHandler)((char *)func_804359C8_de - 0x80000000U)},
    {3594, 19, (ResidentEventHandler)((char *)func_8042F7A8_de - 0x80000000U)},
    {3592, 19, (ResidentEventHandler)((char *)func_8042F91C_de - 0x80000000U)},
};
