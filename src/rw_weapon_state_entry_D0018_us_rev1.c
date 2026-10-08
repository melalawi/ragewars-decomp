#include "types.h"

extern void func_80232E38_de(void *arg0);
/* ID and entry callback; dispatcher supplies actor/context in a0/a1. */
typedef void (*StateEnter)(void *, void *);
typedef struct StateEntryPrefix { s32 id; StateEnter enter; } StateEntryPrefix;
StateEntryPrefix rw_weapon_state_entry_D0018_us_rev1 = {5, (StateEnter)((char *)func_80232E38_de - 0x80000000U)};
