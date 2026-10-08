#include "rw_actor_state_fields.h"

extern void func_80206080_de(void *arg0, void *arg1);
extern void func_8020612C_de(void *arg0, void *arg1);
/* D_800C854C state0; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE3BC_us_rev1 = {0, (RwActorStateEnter)((char *)func_80206080_de - 0x80000000U), (RwActorStateEnter)((char *)func_8020612C_de - 0x80000000U)};
