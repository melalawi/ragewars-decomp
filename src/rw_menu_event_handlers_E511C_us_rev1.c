#include "resident_event_handler.h"

extern s32 func_804232AC_de(void *, s32, s32, s32, s32);

/* func_8042343C_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry D_800E451C[1] = {
    {3592, 4, (ResidentEventHandler)((char *)func_804232AC_de - 0x80000000U)},
};
