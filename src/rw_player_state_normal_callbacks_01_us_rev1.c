#include "rw_player_state_fields.h"

extern void func_8022409C_de(void *, void *);

/* Original normal state1: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_01_us_rev1 = {
    0,
    (RwPlayerStateCallback)((char *)func_8022409C_de - 0x80000000U),
};
