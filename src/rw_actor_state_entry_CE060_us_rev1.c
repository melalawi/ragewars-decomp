#include "rw_actor_state_fields.h"

extern void func_80203B60_de(void *arg0, void *arg1);
extern void func_80203C08_de(void *arg0, void *arg1);
/* D_800C8170_de state64; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE060_us_rev1 = {64, (RwActorStateEnter)((char *)func_80203B60_de - 0x80000000U), (RwActorStateEnter)((char *)func_80203C08_de - 0x80000000U)};
