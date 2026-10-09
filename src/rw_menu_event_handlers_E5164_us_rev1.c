#include "resident_event_handler.h"

extern s32 func_80423620_de(void *, s32, s32, s32, s32);
extern s32 func_804234CC_de(void *, s32, s32, s32, s32);
extern s32 func_804235E8_de(void *, s32, s32, s32, s32);
extern s32 func_80423720_de(void *, s32, s32, s32, s32);
extern s32 func_80423654_de(void *, s32, s32, s32, s32);

/* func_80423758_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry D_800E0514[6] = {
    {3592, 11, (ResidentEventHandler)((char *)func_80423620_de - 0x80000000U)},
    {3590, 11, (ResidentEventHandler)((char *)func_804234CC_de - 0x80000000U)},
    {3587, 11, (ResidentEventHandler)((char *)func_804235E8_de - 0x80000000U)},
    {2, 11, (ResidentEventHandler)((char *)func_80423720_de - 0x80000000U)},
    {1, 11, (ResidentEventHandler)((char *)func_80423654_de - 0x80000000U)},
    {0, 0, 0},
};
