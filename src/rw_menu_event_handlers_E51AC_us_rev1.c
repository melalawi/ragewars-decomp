#include "resident_event_handler.h"

extern s32 func_804235A8_eu(void *, s32, s32, s32, s32);
extern s32 func_80422960_de(void *, s32, s32, s32, s32);
extern s32 func_80422728_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_804237E8_de(void *, s32, s32, s32, s32);
extern s32 func_80423990_de(void *, s32, s32, s32, s32);
extern s32 func_80423828_de(void *, s32, s32, s32, s32);

/* func_804239B0_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry D_800E45AC[7] = {
    {3592, 22, (ResidentEventHandler)((char *)func_804235A8_eu - 0x80000000U)},
    {3594, 22, (ResidentEventHandler)((char *)func_80422960_de - 0x80000000U)},
    {3590, 22, (ResidentEventHandler)((char *)func_80422728_us_rev1 - 0x80000000U)},
    {3587, 22, (ResidentEventHandler)((char *)func_804237E8_de - 0x80000000U)},
    {2, 22, (ResidentEventHandler)((char *)func_80423990_de - 0x80000000U)},
    {1, 22, (ResidentEventHandler)((char *)func_80423828_de - 0x80000000U)},
    {0, 0, 0},
};
