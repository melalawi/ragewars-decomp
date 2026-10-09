#include "resident_event_handler.h"

extern s32 func_80412B78_de(void *, s32, s32, s32, s32);
extern s32 func_80412BC0_de(void *, s32, s32, s32, s32);
extern s32 func_80412C0C_de(void *, s32, s32, s32, s32);
extern s32 func_80412C54_de(void *, s32, s32, s32, s32);
extern s32 func_80412CA0_de(void *, s32, s32, s32, s32);

/* Event/kind/handler triples, terminated by a null handler.
 * func_804125A4_de uses a 12-byte stride and actor-kind wildcard 30000.
 * ROM stores callbacks with their KSEG0 bias removed; retain that
 * encoding through symbolic callback relocations.
 * ROM E36D0..E3718. */
ResidentEventHandlerEntry D_800DEA80[6] = {
    {5, 30000, (ResidentEventHandler)((char *)func_80412B78_de - 0x80000000U)},
    {6, 30000, (ResidentEventHandler)((char *)func_80412BC0_de - 0x80000000U)},
    {7, 30000, (ResidentEventHandler)((char *)func_80412C0C_de - 0x80000000U)},
    {8, 30000, (ResidentEventHandler)((char *)func_80412C54_de - 0x80000000U)},
    {3587, 30000, (ResidentEventHandler)((char *)func_80412CA0_de - 0x80000000U)},
    {0, 0, 0}
};
