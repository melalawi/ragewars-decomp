#include "types.h"

extern void func_80232C68_de(void *arg0);
/* ID and entry callback; dispatcher supplies actor/context in a0/a1. */
typedef void (*StateEnter)(void *, void *);
typedef struct StateEntryPrefix { s32 id; StateEnter enter; } StateEntryPrefix;
StateEntryPrefix rw_weapon_state_entry_D013C_us_rev1 = {2, (StateEnter)((char *)func_80232C68_de - 0x80000000U)};
