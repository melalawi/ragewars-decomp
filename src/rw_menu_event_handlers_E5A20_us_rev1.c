#include "resident_event_handler.h"

extern s32 func_80426788_de(void *, s32, s32, s32, s32);
extern s32 func_80426918_de(void *, s32, s32, s32, s32);
extern s32 func_804287F8_de(void *, s32, s32, s32, s32);
extern s32 func_80426CE4_de(void *, s32, s32, s32, s32);
extern s32 func_804264F0_us_rev1(void *, s32, s32, s32, s32);
extern s32 func_804287B8_de(void *, s32, s32, s32, s32);
extern s32 func_80428DE0_de(void *, s32, s32, s32, s32);
extern s32 func_80428E10_de(void *, s32, s32, s32, s32);
extern s32 func_80428850_de(void *, s32, s32, s32, s32);
extern s32 func_804289B4_de(void *, s32, s32, s32, s32);
extern s32 func_80428C7C_de(void *, s32, s32, s32, s32);
extern s32 func_80428B18_de(void *, s32, s32, s32, s32);

/* func_80428F08_de: event, actor kind, callback; stride12; five
 * o32 arguments and signed result. Unresolved callback rows excluded. */
ResidentEventHandlerEntry D_800E0DD0[13] = {
    {3591, 15, (ResidentEventHandler)((char *)func_80426788_de - 0x80000000U)},
    {3592, 15, (ResidentEventHandler)((char *)func_80426918_de - 0x80000000U)},
    {10, 15, (ResidentEventHandler)((char *)func_804287F8_de - 0x80000000U)},
    {3594, 15, (ResidentEventHandler)((char *)func_80426CE4_de - 0x80000000U)},
    {3590, 15, (ResidentEventHandler)((char *)func_804264F0_us_rev1 - 0x80000000U)},
    {3587, 15, (ResidentEventHandler)((char *)func_804287B8_de - 0x80000000U)},
    {2, 15, (ResidentEventHandler)((char *)func_80428DE0_de - 0x80000000U)},
    {1, 15, (ResidentEventHandler)((char *)func_80428E10_de - 0x80000000U)},
    {5, 15, (ResidentEventHandler)((char *)func_80428850_de - 0x80000000U)},
    {6, 15, (ResidentEventHandler)((char *)func_804289B4_de - 0x80000000U)},
    {8, 15, (ResidentEventHandler)((char *)func_80428C7C_de - 0x80000000U)},
    {7, 15, (ResidentEventHandler)((char *)func_80428B18_de - 0x80000000U)},
    {0, 0, 0},
};
