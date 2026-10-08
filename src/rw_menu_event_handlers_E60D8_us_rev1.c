#include "resident_event_handler.h"

extern s32 func_804359D0_de(void *, s32, s32, s32, s32);
extern s32 func_80432158_de(void *, s32, s32, s32, s32);
extern s32 func_804306D8_de(void *, s32, s32, s32, s32);
extern s32 func_8042FB48_de(void *, s32, s32, s32, s32);
extern s32 func_80435A10_de(void *, s32, s32, s32, s32);
extern s32 func_804303F8_de(void *, s32, s32, s32, s32);
extern s32 func_80430118_de(void *, s32, s32, s32, s32);
extern s32 func_8042FF40_de(void *, s32, s32, s32, s32);
extern s32 func_80430028_de(void *, s32, s32, s32, s32);

/* func_80435A78_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry rw_menu_event_handlers_E60D8_us_rev1[10] = {
    {3587, 19, (ResidentEventHandler)((char *)func_804359D0_de - 0x80000000U)},
    {2, 19, (ResidentEventHandler)((char *)func_80432158_de - 0x80000000U)},
    {1, 19, (ResidentEventHandler)((char *)func_804306D8_de - 0x80000000U)},
    {10, 19, (ResidentEventHandler)((char *)func_8042FB48_de - 0x80000000U)},
    {11, 19, (ResidentEventHandler)((char *)func_80435A10_de - 0x80000000U)},
    {5, 19, (ResidentEventHandler)((char *)func_804303F8_de - 0x80000000U)},
    {6, 19, (ResidentEventHandler)((char *)func_80430118_de - 0x80000000U)},
    {8, 19, (ResidentEventHandler)((char *)func_8042FF40_de - 0x80000000U)},
    {7, 19, (ResidentEventHandler)((char *)func_80430028_de - 0x80000000U)},
    {0, 0, 0},
};
