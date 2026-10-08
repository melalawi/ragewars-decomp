#include "rw_player_state_fields.h"

extern void func_8022D214_de(void *, void *);

/* Original normal state19: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_19_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D214_de - 0x80000000U),
    0,
};
