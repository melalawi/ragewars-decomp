#include "rw_player_state_fields.h"

extern void func_8022D740_de(void *, void *);
extern void func_8022D75C_de(void *, void *);

/* Original normal state29: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_29_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D740_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D75C_de - 0x80000000U),
};
