#include "resident_event_handler.h"

extern s32 func_80436B38_de(void *, s32, s32, s32, s32);
extern s32 func_80436BEC_de(void *, s32, s32, s32, s32);
extern s32 func_80436C58_de(void *, s32, s32, s32, s32);
extern s32 func_80436BF4_de(void *, s32, s32, s32, s32);
extern s32 func_80436C94_de(void *, s32, s32, s32, s32);
extern s32 func_80436D4C_de(void *, s32, s32, s32, s32);

/* func_80436E04_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry rw_menu_event_handlers_E62BC_us_rev1[7] = {
    {3587, 5, (ResidentEventHandler)((char *)func_80436B38_de - 0x80000000U)},
    {10, 5, (ResidentEventHandler)((char *)func_80436BEC_de - 0x80000000U)},
    {2, 5, (ResidentEventHandler)((char *)func_80436C58_de - 0x80000000U)},
    {1, 5, (ResidentEventHandler)((char *)func_80436BF4_de - 0x80000000U)},
    {8, 94, (ResidentEventHandler)((char *)func_80436C94_de - 0x80000000U)},
    {7, 94, (ResidentEventHandler)((char *)func_80436D4C_de - 0x80000000U)},
    {0, 0, 0},
};
