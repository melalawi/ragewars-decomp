#include "resident_event_handler.h"

extern s32 func_80435EF4_de(void *, s32, s32, s32, s32);
extern s32 func_8043601C_de(void *, s32, s32, s32, s32);
extern s32 func_80435F14_de(void *, s32, s32, s32, s32);
extern s32 func_80435E20_de(void *, s32, s32, s32, s32);
extern s32 func_80435EBC_de(void *, s32, s32, s32, s32);
extern s32 func_80436044_de(void *, s32, s32, s32, s32);
extern s32 func_80436024_de(void *, s32, s32, s32, s32);

/* func_8043612C_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E1578[8] = {
    {3591, 31, (ResidentEventHandler)((char *)func_80435EF4_de - 0x80000000U)},
    {3592, 31, (ResidentEventHandler)((char *)func_8043601C_de - 0x80000000U)},
    {3594, 31, (ResidentEventHandler)((char *)func_80435F14_de - 0x80000000U)},
    {3590, 31, (ResidentEventHandler)((char *)func_80435E20_de - 0x80000000U)},
    {3587, 31, (ResidentEventHandler)((char *)func_80435EBC_de - 0x80000000U)},
    {1, 31, (ResidentEventHandler)((char *)func_80436044_de - 0x80000000U)},
    {2, 31, (ResidentEventHandler)((char *)func_80436024_de - 0x80000000U)},
    {0, 0, 0},
};
