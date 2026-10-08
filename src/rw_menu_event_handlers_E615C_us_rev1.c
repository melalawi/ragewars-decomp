#include "resident_event_handler.h"

extern s32 func_80435C40_de(void *, s32, s32, s32, s32);
extern s32 func_80435C68_de(void *, s32, s32, s32, s32);
extern s32 func_80435C60_de(void *, s32, s32, s32, s32);
extern s32 func_80435B34_de(void *, s32, s32, s32, s32);
extern s32 func_80435C00_de(void *, s32, s32, s32, s32);
extern s32 func_80435CD8_de(void *, s32, s32, s32, s32);
extern s32 func_80435CB8_de(void *, s32, s32, s32, s32);
extern s32 func_80435C70_de(void *, s32, s32, s32, s32);

/* func_80435D90_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E150C[9] = {
    {3591, 1, (ResidentEventHandler)((char *)func_80435C40_de - 0x80000000U)},
    {3592, 1, (ResidentEventHandler)((char *)func_80435C68_de - 0x80000000U)},
    {3594, 1, (ResidentEventHandler)((char *)func_80435C60_de - 0x80000000U)},
    {3590, 1, (ResidentEventHandler)((char *)func_80435B34_de - 0x80000000U)},
    {3587, 1, (ResidentEventHandler)((char *)func_80435C00_de - 0x80000000U)},
    {1, 1, (ResidentEventHandler)((char *)func_80435CD8_de - 0x80000000U)},
    {2, 1, (ResidentEventHandler)((char *)func_80435CB8_de - 0x80000000U)},
    {10, 1, (ResidentEventHandler)((char *)func_80435C70_de - 0x80000000U)},
    {0, 0, 0},
};
