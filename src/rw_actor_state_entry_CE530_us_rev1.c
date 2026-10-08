#include "rw_actor_state_fields.h"

extern void func_80207B5C_de(void *arg0, u32 *arg1);
extern void func_80207BB8_de(void *arg0, void *arg1);
/* D_800C86A0_de state1; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE530_us_rev1 = {1, (RwActorStateEnter)((char *)func_80207B5C_de - 0x80000000U), (RwActorStateEnter)((char *)func_80207BB8_de - 0x80000000U)};
