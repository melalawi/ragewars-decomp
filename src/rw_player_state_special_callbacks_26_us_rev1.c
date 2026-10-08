#include "rw_player_state_fields.h"

extern void func_8022D858_de(void *, void *);
extern void func_8022D874_de(void *, void *);

/* Original special state26: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_26_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D858_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D874_de - 0x80000000U),
};
