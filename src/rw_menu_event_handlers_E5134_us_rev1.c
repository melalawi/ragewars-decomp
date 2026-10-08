#include "resident_event_handler.h"

extern s32 func_80423B30_eu(void *, s32, s32, s32, s32);
extern s32 func_804233E8_de(void *, s32, s32, s32, s32);
extern s32 func_80423328_de(void *, s32, s32, s32, s32);

/* func_8042343C_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry rw_menu_event_handlers_E5134_us_rev1[4] = {
    {3587, 4, (ResidentEventHandler)((char *)func_80423B30_eu - 0x80000000U)},
    {2, 4, (ResidentEventHandler)((char *)func_804233E8_de - 0x80000000U)},
    {1, 4, (ResidentEventHandler)((char *)func_80423328_de - 0x80000000U)},
    {0, 0, 0},
};
