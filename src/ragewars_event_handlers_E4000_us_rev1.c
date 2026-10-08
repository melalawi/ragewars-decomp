#include "resident_event_handler.h"

extern s32 func_8041AF40_de(void *, s32, s32, s32, s32);
extern s32 func_8041AF70_de(void *, s32, s32, s32, s32);
extern s32 func_8041AFA0_de(void *, s32, s32, s32, s32);
extern s32 func_8041AFF8_de(void *, s32, s32, s32, s32);
extern s32 func_8041B05C_de(void *, s32, s32, s32, s32);
extern s32 func_8041B0C0_de(void *, s32, s32, s32, s32);

/* Event/kind/handler triples, terminated by a null handler.
 * func_8041AD7C_de uses a 12-byte stride and actor-kind wildcard 30000.
 * ROM stores callbacks with their KSEG0 bias removed; retain that
 * encoding through symbolic callback relocations.
 * ROM E4000..E4054. */
ResidentEventHandlerEntry D_800DF3B0[7] = {
    {3591, 30000, (ResidentEventHandler)((char *)func_8041AF40_de - 0x80000000U)},
    {15, 30000, (ResidentEventHandler)((char *)func_8041AF70_de - 0x80000000U)},
    {16, 30000, (ResidentEventHandler)((char *)func_8041AFA0_de - 0x80000000U)},
    {8, 30000, (ResidentEventHandler)((char *)func_8041AFF8_de - 0x80000000U)},
    {7, 30000, (ResidentEventHandler)((char *)func_8041B05C_de - 0x80000000U)},
    {3587, 30000, (ResidentEventHandler)((char *)func_8041B0C0_de - 0x80000000U)},
    {0, 0, 0}
};
