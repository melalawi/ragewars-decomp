#include "resident_event_handler.h"

extern s32 func_8041A940_de(void *, s32, s32, s32, s32);
extern s32 func_8041A978_de(void *, s32, s32, s32, s32);
extern s32 func_8041A9B0_de(void *, s32, s32, s32, s32);
extern s32 func_8041AA10_de(void *, s32, s32, s32, s32);
extern s32 func_8041AA80_de(void *, s32, s32, s32, s32);
extern s32 func_8041AB70_de(void *, s32, s32, s32, s32);
extern s32 func_8041AAF0_de(void *, s32, s32, s32, s32);
extern s32 func_8041AB1C_de(void *, s32, s32, s32, s32);

/* Event/kind/handler triples, terminated by a null handler.
 * func_8041A724_de uses a 12-byte stride and actor-kind wildcard 30000.
 * ROM stores callbacks with their KSEG0 bias removed; retain that
 * encoding through symbolic callback relocations.
 * ROM E3F90..E3FFC. */
ResidentEventHandlerEntry D_800E3390[9] = {
    {3591, 30000, (ResidentEventHandler)((char *)func_8041A940_de - 0x80000000U)},
    {15, 30000, (ResidentEventHandler)((char *)func_8041A978_de - 0x80000000U)},
    {16, 30000, (ResidentEventHandler)((char *)func_8041A9B0_de - 0x80000000U)},
    {8, 30000, (ResidentEventHandler)((char *)func_8041AA10_de - 0x80000000U)},
    {7, 30000, (ResidentEventHandler)((char *)func_8041AA80_de - 0x80000000U)},
    {3587, 30000, (ResidentEventHandler)((char *)func_8041AB70_de - 0x80000000U)},
    {11, 30000, (ResidentEventHandler)((char *)func_8041AAF0_de - 0x80000000U)},
    {3592, 30000, (ResidentEventHandler)((char *)func_8041AB1C_de - 0x80000000U)},
    {0, 0, 0}
};
