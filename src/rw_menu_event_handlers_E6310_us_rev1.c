#include "resident_event_handler.h"

extern s32 func_8043704C_de(void *, s32, s32, s32, s32);
extern s32 func_80437054_de(void *, s32, s32, s32, s32);
extern s32 func_80436E94_de(void *, s32, s32, s32, s32);
extern s32 func_8043701C_de(void *, s32, s32, s32, s32);
extern s32 func_804370CC_de(void *, s32, s32, s32, s32);
extern s32 func_8043705C_de(void *, s32, s32, s32, s32);
extern s32 func_80437114_de(void *, s32, s32, s32, s32);
extern s32 func_804371C4_de(void *, s32, s32, s32, s32);

/* func_80437274_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E5710[9] = {
    {3591, 12, (ResidentEventHandler)((char *)func_8043704C_de - 0x80000000U)},
    {3592, 12, (ResidentEventHandler)((char *)func_80437054_de - 0x80000000U)},
    {3590, 12, (ResidentEventHandler)((char *)func_80436E94_de - 0x80000000U)},
    {3587, 12, (ResidentEventHandler)((char *)func_8043701C_de - 0x80000000U)},
    {2, 12, (ResidentEventHandler)((char *)func_804370CC_de - 0x80000000U)},
    {1, 12, (ResidentEventHandler)((char *)func_8043705C_de - 0x80000000U)},
    {8, 454, (ResidentEventHandler)((char *)func_80437114_de - 0x80000000U)},
    {7, 454, (ResidentEventHandler)((char *)func_804371C4_de - 0x80000000U)},
    {0, 0, 0},
};
