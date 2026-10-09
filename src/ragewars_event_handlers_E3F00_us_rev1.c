#include "resident_event_handler.h"

extern s32 func_80419AEC_de(void *, s32, s32, s32, s32);
extern s32 func_804196D8_de(void *, s32, s32, s32, s32);

/* Event/kind/handler triples, terminated by a null handler.
 * func_80419A4C_de uses a 12-byte stride and actor-kind wildcard 30000.
 * ROM stores callbacks with their KSEG0 bias removed; retain that
 * encoding through symbolic callback relocations.
 * ROM E3F00..E3F24. */
ResidentEventHandlerEntry D_800E3300[3] = {
    {3587, 30000, (ResidentEventHandler)((char *)func_80419AEC_de - 0x80000000U)},
    {3592, 30000, (ResidentEventHandler)((char *)func_804196D8_de - 0x80000000U)},
    {0, 0, 0}
};
