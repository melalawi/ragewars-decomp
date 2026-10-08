#include "resident_event_handler.h"

extern s32 func_804241BC_de(void *, s32, s32, s32, s32);

/* func_80424348_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry D_800E05B4_de[1] = {
    {3592, 3, (ResidentEventHandler)((char *)func_804241BC_de - 0x80000000U)},
};
