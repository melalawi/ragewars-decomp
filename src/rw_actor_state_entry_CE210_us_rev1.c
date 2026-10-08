#include "rw_actor_state_fields.h"

extern void func_80204D2C_de(void *arg0);
extern void func_80204A68_de(void *arg0, void *arg1);
/* D_800C8380_de state1; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE210_us_rev1 = {1, (RwActorStateEnter)((char *)func_80204D2C_de - 0x80000000U), (RwActorStateEnter)((char *)func_80204A68_de - 0x80000000U)};
