#include "rw_player_state_fields.h"

extern void func_8022D7B0_de(void *, void *);
extern void func_8022D7CC_de(void *, void *);

/* Original normal state33: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_33_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D7B0_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D7CC_de - 0x80000000U),
};
