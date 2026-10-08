#include "resident_event_handler.h"

extern s32 func_80438FE0_de(void *, s32, s32, s32, s32);
extern s32 func_80439174_de(void *, s32, s32, s32, s32);
extern s32 func_80439128_de(void *, s32, s32, s32, s32);

/* func_804391B0_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry rw_menu_event_handlers_E64CC_us_rev1[4] = {
    {3587, 6, (ResidentEventHandler)((char *)func_80438FE0_de - 0x80000000U)},
    {2, 6, (ResidentEventHandler)((char *)func_80439174_de - 0x80000000U)},
    {1, 6, (ResidentEventHandler)((char *)func_80439128_de - 0x80000000U)},
    {0, 0, 0},
};
