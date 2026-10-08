#include "rw_actor_state_fields.h"

extern void func_80207A90_de(void *arg0, s32 *arg1);
extern void func_80207ABC_de(void *arg0, void *arg1);
/* D_800C86A0_de state0; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE510_us_rev1 = {0, (RwActorStateEnter)((char *)func_80207A90_de - 0x80000000U), (RwActorStateEnter)((char *)func_80207ABC_de - 0x80000000U)};
