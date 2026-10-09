#include "resident_event_handler.h"

extern s32 func_80439628_de(void *, s32, s32, s32, s32);
extern s32 func_804396C0_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_804395F8_de(void *, s32, s32, s32, s32);
extern s32 func_80439750_de(void *, s32, s32, s32, s32);
extern s32 func_80439730_de(void *, s32, s32, s32, s32);
extern s32 func_804396F0_de(void *, s32, s32, s32, s32);

/* func_80439758_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E5954[7] = {
    {3592, 24, (ResidentEventHandler)((char *)func_80439628_de - 0x80000000U)},
    {3590, 24, (ResidentEventHandler)((char *)func_804396C0_us_rev1 - 0x80000000U)},
    {3587, 24, (ResidentEventHandler)((char *)func_804395F8_de - 0x80000000U)},
    {1, 24, (ResidentEventHandler)((char *)func_80439750_de - 0x80000000U)},
    {2, 24, (ResidentEventHandler)((char *)func_80439730_de - 0x80000000U)},
    {10, 24, (ResidentEventHandler)((char *)func_804396F0_de - 0x80000000U)},
    {0, 0, 0},
};
