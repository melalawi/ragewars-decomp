#include "resident_event_handler.h"

extern s32 func_8041C40C_de(void *, s32, s32, s32, s32);
extern s32 func_8041C2AC_de(void *, s32, s32, s32, s32);
extern s32 func_8041C3DC_de(void *, s32, s32, s32, s32);
extern s32 func_8041C494_de(void *, s32, s32, s32, s32);
extern s32 func_8041C474_de(void *, s32, s32, s32, s32);
extern s32 func_8041C46C_de(void *, s32, s32, s32, s32);

/* func_8041C574_de matches event and actor kind with wildcard30000,
 * advances 12bytes, and stops at a null handler.
 * Callback relocations retain the original KSEG0-bias-free encoding.
 * ROM E411C..E4170. */
ResidentEventHandlerEntry D_800DF4CC[7] = {
    {3592, 29, (ResidentEventHandler)((char *)func_8041C40C_de - 0x80000000U)},
    {3590, 29, (ResidentEventHandler)((char *)func_8041C2AC_de - 0x80000000U)},
    {3587, 29, (ResidentEventHandler)((char *)func_8041C3DC_de - 0x80000000U)},
    {1, 29, (ResidentEventHandler)((char *)func_8041C494_de - 0x80000000U)},
    {2, 29, (ResidentEventHandler)((char *)func_8041C474_de - 0x80000000U)},
    {10, 29, (ResidentEventHandler)((char *)func_8041C46C_de - 0x80000000U)},
    {0, 0, 0}
};
