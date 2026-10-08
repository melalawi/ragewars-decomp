#include "rw_player_state_fields.h"

extern void func_8022C894_de(void *, void *);
extern void func_8022409C_de(void *, void *);

/* Original special state0: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_00_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022C894_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022409C_de - 0x80000000U),
};
