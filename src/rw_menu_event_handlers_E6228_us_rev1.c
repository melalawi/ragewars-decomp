#include "resident_event_handler.h"

extern s32 func_80436288_de(void *, s32, s32, s32, s32);
extern s32 func_80436394_de(void *, s32, s32, s32, s32);
extern s32 func_804362A8_de(void *, s32, s32, s32, s32);
extern s32 func_804361BC_de(void *, s32, s32, s32, s32);
extern s32 func_80436250_de(void *, s32, s32, s32, s32);
extern s32 func_804363BC_de(void *, s32, s32, s32, s32);
extern s32 func_8043639C_de(void *, s32, s32, s32, s32);

/* func_80436454_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E5628[8] = {
    {3591, 32, (ResidentEventHandler)((char *)func_80436288_de - 0x80000000U)},
    {3592, 32, (ResidentEventHandler)((char *)func_80436394_de - 0x80000000U)},
    {3594, 32, (ResidentEventHandler)((char *)func_804362A8_de - 0x80000000U)},
    {3590, 32, (ResidentEventHandler)((char *)func_804361BC_de - 0x80000000U)},
    {3587, 32, (ResidentEventHandler)((char *)func_80436250_de - 0x80000000U)},
    {1, 32, (ResidentEventHandler)((char *)func_804363BC_de - 0x80000000U)},
    {2, 32, (ResidentEventHandler)((char *)func_8043639C_de - 0x80000000U)},
    {0, 0, 0},
};
