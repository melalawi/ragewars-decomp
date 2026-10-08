#include "rw_player_state_fields.h"

extern void func_8022D6D0_de(void *, void *);
extern void func_8022D6EC_de(void *, void *);

/* Original special state25: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_25_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D6D0_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D6EC_de - 0x80000000U),
};
