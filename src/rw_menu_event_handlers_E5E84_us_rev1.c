#include "resident_event_handler.h"

extern s32 func_8042AE60_eu(void *, s32, s32, s32, s32);
extern s32 func_8042B3D4_de(void *, s32, s32, s32, s32);
extern s32 func_8042B3DC_de(void *, s32, s32, s32, s32);
extern s32 func_80429A24_de(void *, s32, s32, s32, s32);
extern s32 func_8042B394_de(void *, s32, s32, s32, s32);
extern s32 func_80429FF0_de(void *, s32, s32, s32, s32);
extern s32 func_8042BA54_de(void *, s32, s32, s32, s32);
extern s32 func_8042BA98_de(void *, s32, s32, s32, s32);
extern s32 func_8042B4D4_de(void *, s32, s32, s32, s32);
extern s32 func_8042B644_de(void *, s32, s32, s32, s32);
extern s32 func_8042B904_de(void *, s32, s32, s32, s32);
extern s32 func_8042B78C_de(void *, s32, s32, s32, s32);

/* func_8042BAD0_de consumes these event/actor-kind/callback rows
 * at stride12 with five o32 arguments and a signed result. Callback
 * relocations omit KSEG0 bias. This object is the complete table.
 * Unnamed callback entry rows remain in original extraction. */
ResidentEventHandlerEntry D_800E1234[13] = {
    {3592, 20, (ResidentEventHandler)((char *)func_8042AE60_eu - 0x80000000U)},
    {3591, 20, (ResidentEventHandler)((char *)func_8042B3D4_de - 0x80000000U)},
    {10, 20, (ResidentEventHandler)((char *)func_8042B3DC_de - 0x80000000U)},
    {3590, 20, (ResidentEventHandler)((char *)func_80429A24_de - 0x80000000U)},
    {3587, 20, (ResidentEventHandler)((char *)func_8042B394_de - 0x80000000U)},
    {3594, 20, (ResidentEventHandler)((char *)func_80429FF0_de - 0x80000000U)},
    {2, 20, (ResidentEventHandler)((char *)func_8042BA54_de - 0x80000000U)},
    {1, 20, (ResidentEventHandler)((char *)func_8042BA98_de - 0x80000000U)},
    {5, 20, (ResidentEventHandler)((char *)func_8042B4D4_de - 0x80000000U)},
    {6, 20, (ResidentEventHandler)((char *)func_8042B644_de - 0x80000000U)},
    {8, 20, (ResidentEventHandler)((char *)func_8042B904_de - 0x80000000U)},
    {7, 20, (ResidentEventHandler)((char *)func_8042B78C_de - 0x80000000U)},
    {0, 0, 0},
};
