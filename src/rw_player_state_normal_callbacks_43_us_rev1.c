#include "rw_player_state_fields.h"

extern void func_8022D900_de(void *, void *);
extern void func_8022D91C_de(void *, void *);

/* Original normal state43: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_43_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D900_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D91C_de - 0x80000000U),
};
