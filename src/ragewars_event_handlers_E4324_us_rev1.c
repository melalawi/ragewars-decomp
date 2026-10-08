#include "resident_event_handler.h"

extern s32 func_8041D134_de(void *, s32, s32, s32, s32);
extern s32 func_8041DBCC_de(void *, s32, s32, s32, s32);
extern s32 func_8041DDF4_de(void *, s32, s32, s32, s32);
extern s32 func_8041DCC0_de(void *, s32, s32, s32, s32);
extern s32 func_8041CEB0_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_8041DB9C_de(void *, s32, s32, s32, s32);
extern s32 func_8041DE5C_de(void *, s32, s32, s32, s32);
extern s32 func_8041DE94_de(void *, s32, s32, s32, s32);

/* func_8041DE94_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM E4324..E4390. */
ResidentEventHandlerEntry D_800DF6D4[9] = {
    {3592, 16, (ResidentEventHandler)((char *)func_8041D134_de - 0x80000000U)},
    {3591, 16, (ResidentEventHandler)((char *)func_8041DBCC_de - 0x80000000U)},
    {10, 16, (ResidentEventHandler)((char *)func_8041DDF4_de - 0x80000000U)},
    {3594, 16, (ResidentEventHandler)((char *)func_8041DCC0_de - 0x80000000U)},
    {3590, 16, (ResidentEventHandler)((char *)func_8041CEB0_us_rev1 - 0x80000000U)},
    {3587, 16, (ResidentEventHandler)((char *)func_8041DB9C_de - 0x80000000U)},
    {2, 16, (ResidentEventHandler)((char *)func_8041DE5C_de - 0x80000000U)},
    {1, 16, (ResidentEventHandler)((char *)func_8041DE94_de - 0x80000000U)},
    {0, 0, 0}
};
