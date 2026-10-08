#include "types.h"

extern void func_80232DF4_de(void *arg0);
/* ID and entry callback; dispatcher supplies actor/context in a0/a1. */
typedef void (*StateEnter)(void *, void *);
typedef struct StateEntryPrefix { s32 id; StateEnter enter; } StateEntryPrefix;
StateEntryPrefix rw_weapon_state_entry_CFED8_us_rev1 = {1, (StateEnter)((char *)func_80232DF4_de - 0x80000000U)};
