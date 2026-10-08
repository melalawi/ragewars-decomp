#include "rw_actor_state_fields.h"

extern void func_80203AB0_de(void *a, void *b);
/* D_800C8170_de state1; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE000_us_rev1 = {1, 0, (RwActorStateEnter)((char *)func_80203AB0_de - 0x80000000U)};
