#include "rw_player_state_fields.h"

extern void func_8022CC34_de(void *, void *);

/* Original special state6: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_06_us_rev1 = {
    0,
    (RwPlayerStateCallback)((char *)func_8022CC34_de - 0x80000000U),
};
