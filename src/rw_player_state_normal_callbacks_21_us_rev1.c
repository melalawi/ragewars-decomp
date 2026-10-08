#include "rw_player_state_fields.h"

extern void func_8022D290_de(void *, void *);
extern void func_8022D308_de(void *, void *);

/* Original normal state21: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_21_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D290_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D308_de - 0x80000000U),
};
