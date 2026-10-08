#include "types.h"

extern void func_80233344_de(void);
/* ID and entry callback; dispatcher supplies actor/context in a0/a1. */
typedef void (*StateEnter)(void *, void *);
typedef struct StateEntryPrefix { s32 id; StateEnter enter; } StateEntryPrefix;
StateEntryPrefix rw_weapon_state_entry_D03A0_us_rev1 = {11, (StateEnter)((char *)func_80233344_de - 0x80000000U)};
