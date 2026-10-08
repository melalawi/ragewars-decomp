#include "resident_event_handler.h"

extern s32 func_80438AA4_de(void *, s32, s32, s32, s32);
extern s32 func_80438E5C_de(void *, s32, s32, s32, s32);
extern s32 func_80438D94_de(void *, s32, s32, s32, s32);
extern s32 func_80438ADC_de(void *, s32, s32, s32, s32);

/* func_80438E5C_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry rw_menu_event_handlers_E6458_us_rev1[5] = {
    {3587, 18, (ResidentEventHandler)((char *)func_80438AA4_de - 0x80000000U)},
    {2, 18, (ResidentEventHandler)((char *)func_80438E5C_de - 0x80000000U)},
    {1, 18, (ResidentEventHandler)((char *)func_80438D94_de - 0x80000000U)},
    {3594, 18, (ResidentEventHandler)((char *)func_80438ADC_de - 0x80000000U)},
    {0, 0, 0},
};
