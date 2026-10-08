#include "types.h"

extern void func_80232C88_de(void *arg0, void *arg1);
/* ID and entry callback; dispatcher supplies actor/context in a0/a1. */
typedef void (*StateEnter)(void *, void *);
typedef struct StateEntryPrefix { s32 id; StateEnter enter; } StateEntryPrefix;
StateEntryPrefix rw_weapon_state_entry_CFF38_us_rev1 = {4, (StateEnter)((char *)func_80232C88_de - 0x80000000U)};
