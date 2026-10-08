#include "rw_actor_state_fields.h"

extern void func_80207C68_de(void *arg0, s32 *arg1);
extern void func_80207C94_de(void *arg0, void *arg1);
/* D_800C86A0_de state2; consumed ID and proven callback declarations. */
RwActorStateDispatch rw_actor_state_entry_CE550_us_rev1 = {2, (RwActorStateEnter)((char *)func_80207C68_de - 0x80000000U), (RwActorStateEnter)((char *)func_80207C94_de - 0x80000000U)};
