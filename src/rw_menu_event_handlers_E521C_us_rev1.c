#include "resident_event_handler.h"

extern s32 func_8042418C_de(void *, s32, s32, s32, s32);
extern s32 func_80424328_de(void *, s32, s32, s32, s32);
extern s32 func_80423F48_de(void *, s32, s32, s32, s32);
extern s32 func_804242D4_de(void *, s32, s32, s32, s32);

/* func_80424348_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry rw_menu_event_handlers_E521C_us_rev1[5] = {
    {3587, 3, (ResidentEventHandler)((char *)func_8042418C_de - 0x80000000U)},
    {2, 3, (ResidentEventHandler)((char *)func_80424328_de - 0x80000000U)},
    {1, 3, (ResidentEventHandler)((char *)func_80423F48_de - 0x80000000U)},
    {10, 3, (ResidentEventHandler)((char *)func_804242D4_de - 0x80000000U)},
    {0, 0, 0},
};
