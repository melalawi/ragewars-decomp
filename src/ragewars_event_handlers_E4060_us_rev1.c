#include "resident_event_handler.h"

extern s32 func_8041B504_de(void *, s32, s32, s32, s32);
extern s32 func_8041B534_de(void *, s32, s32, s32, s32);
extern s32 func_8041B564_de(void *, s32, s32, s32, s32);
extern s32 func_8041B5BC_de(void *, s32, s32, s32, s32);

/* Event/kind/handler triples, terminated by a null handler.
 * func_8041B340_de uses a 12-byte stride and actor-kind wildcard 30000.
 * ROM stores callbacks with their KSEG0 bias removed; retain that
 * encoding through symbolic callback relocations.
 * ROM E4060..E409C. */
ResidentEventHandlerEntry D_800E3460[5] = {
    {3591, 30000, (ResidentEventHandler)((char *)func_8041B504_de - 0x80000000U)},
    {15, 30000, (ResidentEventHandler)((char *)func_8041B534_de - 0x80000000U)},
    {16, 30000, (ResidentEventHandler)((char *)func_8041B564_de - 0x80000000U)},
    {3587, 30000, (ResidentEventHandler)((char *)func_8041B5BC_de - 0x80000000U)},
    {0, 0, 0}
};
