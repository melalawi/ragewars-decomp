#include "types.h"

extern void func_802328D8_de(void *arg0, void *arg1);
/* ID and entry callback; dispatcher supplies actor/context in a0/a1. */
typedef void (*StateEnter)(void *, void *);
typedef struct StateEntryPrefix { s32 id; StateEnter enter; } StateEntryPrefix;
StateEntryPrefix rw_weapon_state_entry_CFF58_us_rev1 = {8, (StateEnter)((char *)func_802328D8_de - 0x80000000U)};
