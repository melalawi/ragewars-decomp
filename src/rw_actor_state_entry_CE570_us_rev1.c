#include "rw_actor_state_fields.h"

extern void func_80207D34_de(void *arg0, u32 *arg1);
extern void func_80207D90_de(void *arg0, void *arg1);
/* D_800C86A0_de state3; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE570_us_rev1 = {3, (RwActorStateEnter)((char *)func_80207D34_de - 0x80000000U), (RwActorStateEnter)((char *)func_80207D90_de - 0x80000000U)};
