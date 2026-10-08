#include "resident_event_handler.h"

extern s32 func_8043BB70_de(void *, s32, s32, s32, s32);
extern s32 func_8043BBB0_de(void *, s32, s32, s32, s32);
extern s32 func_8043BF28_de(void *, s32, s32, s32, s32);
extern s32 func_8043AB40_de(void *, s32, s32, s32, s32);
extern s32 func_8043BDF0_de(void *, s32, s32, s32, s32);
extern s32 func_8043BCC0_de(void *, s32, s32, s32, s32);
extern s32 func_8043BE8C_de(void *, s32, s32, s32, s32);
extern s32 func_8043BD58_de(void *, s32, s32, s32, s32);

/* func_8043BFF0_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is a proved contiguous fragment of the original table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry rw_menu_event_handlers_E6834_us_rev1[9] = {
    {3587, 8, (ResidentEventHandler)((char *)func_8043BB70_de - 0x80000000U)},
    {10, 8, (ResidentEventHandler)((char *)func_8043BBB0_de - 0x80000000U)},
    {2, 8, (ResidentEventHandler)((char *)func_8043BF28_de - 0x80000000U)},
    {1, 8, (ResidentEventHandler)((char *)func_8043AB40_de - 0x80000000U)},
    {7, 30000, (ResidentEventHandler)((char *)func_8043BDF0_de - 0x80000000U)},
    {5, 30000, (ResidentEventHandler)((char *)func_8043BCC0_de - 0x80000000U)},
    {8, 30000, (ResidentEventHandler)((char *)func_8043BE8C_de - 0x80000000U)},
    {6, 30000, (ResidentEventHandler)((char *)func_8043BD58_de - 0x80000000U)},
    {0, 0, 0},
};
