#include "resident_event_handler.h"

extern s32 func_80439300_de(void *, s32, s32, s32, s32);
extern s32 func_80439308_de(void *, s32, s32, s32, s32);
extern s32 func_80439240_de(void *, s32, s32, s32, s32);
extern s32 func_804392D0_de(void *, s32, s32, s32, s32);
extern s32 func_80439404_de(void *, s32, s32, s32, s32);
extern s32 func_804393A8_de(void *, s32, s32, s32, s32);

/* func_8043944C_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E18AC[7] = {
    {3591, 13, (ResidentEventHandler)((char *)func_80439300_de - 0x80000000U)},
    {3592, 13, (ResidentEventHandler)((char *)func_80439308_de - 0x80000000U)},
    {3590, 13, (ResidentEventHandler)((char *)func_80439240_de - 0x80000000U)},
    {3587, 13, (ResidentEventHandler)((char *)func_804392D0_de - 0x80000000U)},
    {2, 13, (ResidentEventHandler)((char *)func_80439404_de - 0x80000000U)},
    {1, 13, (ResidentEventHandler)((char *)func_804393A8_de - 0x80000000U)},
    {0, 0, 0},
};
