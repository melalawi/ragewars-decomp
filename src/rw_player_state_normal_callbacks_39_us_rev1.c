#include "rw_player_state_fields.h"

extern void func_8022D3EC_de(void *, void *);
extern void func_80226548_de(void *, void *);

/* Original normal state39: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_39_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D3EC_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_80226548_de - 0x80000000U),
};
