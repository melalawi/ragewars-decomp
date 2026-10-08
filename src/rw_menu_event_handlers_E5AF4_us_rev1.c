#include "resident_event_handler.h"

extern s32 func_804291D0_de(void *, s32, s32, s32, s32);
extern s32 func_804296F4_de(void *, s32, s32, s32, s32);
extern s32 func_80429724_de(void *, s32, s32, s32, s32);
extern s32 func_804298F8_de(void *, s32, s32, s32, s32);
extern s32 func_804297F8_de(void *, s32, s32, s32, s32);
extern s32 func_8042972C_de(void *, s32, s32, s32, s32);
extern s32 func_80429970_de(void *, s32, s32, s32, s32);
extern s32 func_8042994C_de(void *, s32, s32, s32, s32);

/* func_80429994_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry D_800E0EA4[9] = {
    {3590, 21, (ResidentEventHandler)((char *)func_804291D0_de - 0x80000000U)},
    {3587, 21, (ResidentEventHandler)((char *)func_804296F4_de - 0x80000000U)},
    {3594, 21, (ResidentEventHandler)((char *)func_80429724_de - 0x80000000U)},
    {2, 21, (ResidentEventHandler)((char *)func_804298F8_de - 0x80000000U)},
    {1, 21, (ResidentEventHandler)((char *)func_804297F8_de - 0x80000000U)},
    {10, 21, (ResidentEventHandler)((char *)func_8042972C_de - 0x80000000U)},
    {8, 878, (ResidentEventHandler)((char *)func_80429970_de - 0x80000000U)},
    {7, 878, (ResidentEventHandler)((char *)func_8042994C_de - 0x80000000U)},
    {0, 0, 0},
};
