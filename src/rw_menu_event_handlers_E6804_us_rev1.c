#include "resident_event_handler.h"

extern s32 func_8043A330_de(void *, s32, s32, s32, s32);
extern s32 func_8043A5F8_de(void *, s32, s32, s32, s32);
extern s32 func_8043A890_de(void *, s32, s32, s32, s32);

/* func_8043BFF0_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E5C04[3] = {
    {3591, 8, (ResidentEventHandler)((char *)func_8043A330_de - 0x80000000U)},
    {3592, 8, (ResidentEventHandler)((char *)func_8043A5F8_de - 0x80000000U)},
    {3594, 8, (ResidentEventHandler)((char *)func_8043A890_de - 0x80000000U)},
};
