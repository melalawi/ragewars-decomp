#include "rw_actor_state_fields.h"

extern void func_80204728_de(void *arg0, void *arg1);
extern void func_80204738_de(void *object);
/* D_800C8274 state2; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE124_us_rev1 = {2, (RwActorStateEnter)((char *)func_80204728_de - 0x80000000U), (RwActorStateEnter)((char *)func_80204738_de - 0x80000000U)};
